#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "screenshotdialog.h"
#include "settingdialog.h"
#include "countdownaction.h"
#include "settings.h"
#include <QDebug>
#include <QToolTip>
#include <QTimer>
#include <QThread>


//************************
#include <QFileDialog>
#include <QMessageBox>
#include <QShortcut>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <windowsx.h>
#include <QSpinBox>
#include <QFile>
#include <QDir>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow),
  settingDialog_(new SettingDialog(this)),
  screenShotDialog_(new ScreenShotDialog(this)),
  countDownAction_(new CountDownAction(this)),
//****************************
  m_recordRect(0,0,1920,1080)
{
  ui->setupUi(this);

  //**************************
  recordProcess = new QProcess(this);
  passVideoEncodingProcess = new QProcess(this);
  connect(recordProcess,&QProcess::readyReadStandardError,this,&MainWindow::showRecordOutput);
 // connect(passVideoEncodingProcess,&QProcess::readyReadStandardError,this,&MainWindow::showPassOutput);
  void (QProcess::*f)(int,QProcess::ExitStatus) = &QProcess::finished;
 // connect(passVideoEncodingProcess,f,this,&Widget::onEncodingFinshed);
  ui->stopBtn->setEnabled(false);
  //ui->passCheckBox->setEnabled(true);
  this->setFixedSize(this->size());

  srand(time(0));
  ui->pathLabel->setText(ui->pathLabel->text() + QString::number(rand()) + ".mp4");

 /*
  if(!RegisterHotKey((HWND)this->winId(),GlobalAddAtom(TEXT("2333")),MOD_CONTROL,'G'))
  {
      QMessageBox::critical(this,"错误","热键注册失败");
  }
  */
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::initialize()
{
  settingDialog_->initialize();

  setWindowFlags(Qt::FramelessWindowHint);
  if(Settings::value(Settings::StayOnTop)){
    setWindowFlags(Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);
  }

  connect(ui->b_screenshot, SIGNAL(clicked()),
          SLOT(takeScreenShot()));
  connect(ui->b_setting, SIGNAL(clicked()),
          this->settingDialog_, SLOT(showDialog()));
  connect(ui->b_exit, SIGNAL(clicked()),
          SLOT(close()));
  connect(ui->b_timer, SIGNAL(clicked()),
          SLOT(beginTimerScreenShot()));
  connect(countDownAction_, SIGNAL(countDownTicked(int)),
          SLOT(updateTimerLabel(int)));
  connect(countDownAction_, SIGNAL(fired()),
          SLOT(takeScreenShot()));
}

// for window drag move
void MainWindow::mousePressEvent(QMouseEvent *e)
{
  if(ui->label->geometry().contains(e->pos())){
    clickedPos_ = e->pos();
  }
}

// for window drag move
void MainWindow::mouseReleaseEvent(QMouseEvent */*e*/)
{
  clickedPos_ = QPoint();
}

// for window drag move
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
  if(clickedPos_.isNull() == false){
    move(e->globalPos() - clickedPos_);
  }
}

void MainWindow::beginTimerScreenShot()
{
  int time = Settings::value(Settings::DelaySecs);
  ui->b_timer->setText(QString("%1").arg(time));
  countDownAction_->start(time);
}

void MainWindow::updateTimerLabel(int restSec)
{
  ui->b_timer->setText(QString("%1").arg(restSec));
}

void MainWindow::takeScreenShot()
{
  ui->b_timer->setText("");
  screenShotDialog_->storeScreenShot();
  screenShotDialog_->beginSelectArea();
}


//*******************************+++++
void MainWindow::on_startBtn_clicked()
{
    QFile file(ui->pathLabel->text());
    if(file.exists())
    {
        if(QMessageBox::question(this,"提示信息","文件已存在，是否覆盖") == QMessageBox::Yes)
        {
            file.remove();
        }
        else
        {
            return;
        }
    }
 //   ui->textEdit->clear();
 /*
    QString logo;
    if(ui->useLogoCheckBox->isChecked())
    {
        logo = QString("-vf \"movie=logo.png[watermark];[in][watermark] overlay=main_w-overlay_w-%1 : main_h-overlay_h-%2[out]\"")
                .arg(ui->HOffsetSpinBox->value())
                .arg(ui->VOffsetSpinBox->value());
    }
    else
    {
        logo = "";
    }
    */
    QString cmdLine = QString("ffmpeg -f gdigrab -framerate 60 -offset_x 0 -offset_y 0 -video_size 1600*900 -i desktop %1")
           // .arg(m_recordRect.x())
          //  .arg(m_recordRect.y())
           // .arg(m_recordRect.width())
          //  .arg(m_recordRect.height())
         //   .arg(logo)
              .arg(ui->pathLabel->text());
    recordProcess->start(cmdLine);
    qDebug() << ui->pathLabel->text();
    recordProcess->waitForStarted();
    if(recordProcess->state() == QProcess::ProcessState::Running)
    {
        ui->startBtn->setEnabled(false);
   //     ui->selectRectBtn->setEnabled(false);
        ui->stopBtn->setEnabled(true);
    //    ui->hideCheckBox->setEnabled(false);
        ui->pathBtn->setEnabled(false);
   //     if(ui->hideCheckBox->isChecked())
   //     {
            this->showMinimized();
     //   }
    }
}



void MainWindow::on_stopBtn_clicked()
{
    recordProcess->write("q\n");
    recordProcess->waitForFinished();
    recordProcess->close();
    if(recordProcess->state() == QProcess::ProcessState::NotRunning)
    {
     //   if(ui->passCheckBox->isChecked())
      //  {
            ui->startBtn->setEnabled(true);
            ui->stopBtn->setEnabled(false);
       //     ui->hideCheckBox->setEnabled(true);
            ui->pathBtn->setEnabled(true);
     //       ui->selectRectBtn->setEnabled(false);
     //       startPassVideoEncoding();
    //    }
    //    else
    //    {
     //       ui->startBtn->setEnabled(true);
     //       ui->stopBtn->setEnabled(false);
     //       ui->hideCheckBox->setEnabled(true);
     //       ui->pathBtn->setEnabled(true);
     //       ui->selectRectBtn->setEnabled(true);
     //       if(ui->infoCheckBox->isChecked())
    //        {
                QMessageBox::information(this,"录制完成","视频保存路径为：" + ui->pathLabel->text());

    //        }
//            on_randBtn_clicked();
  //      }
    }
    m_recordRect.setX(0);
    m_recordRect.setY(0);
    m_recordRect.setWidth(1920);
    m_recordRect.setHeight(1080);
}

void MainWindow::on_pathBtn_clicked()
{
    QString path = QFileDialog::getSaveFileName(this,"选择保存路径","./Save","*.mpg");
 //     QString path = QFileDialog::getSaveFileName(this,"选择保存路径,"./Save","*.mp4");
    if(!path.isEmpty())
    {
        ui->pathLabel->setText(path);
    }
}

void MainWindow::showRecordOutput()
{
    QString msg = recordProcess->readAllStandardError().data();
    if(msg.contains("No such file or directory",Qt::CaseInsensitive))
    {
        ui->startBtn->setEnabled(true);
        ui->stopBtn->setEnabled(false);
        ui->pathBtn->setEnabled(true);
      //  ui->hideCheckBox->setEnabled(true);
        recordProcess->waitForFinished();
        recordProcess->close();
        if(this->isMinimized())
        {
            this->showNormal();
        }
        QMessageBox::critical(this,"Error","路径不存在，请重新选择");
    }
//    ui->textEdit->insertPlainText(msg);
 //   ui->textEdit->moveCursor(QTextCursor::End);
}


void MainWindow::closeEvent(QCloseEvent* event)
{
    if(recordProcess->state() == recordProcess->ProcessState::Running)
    {
        recordProcess->write("q\n");
    }
    QWidget::closeEvent(event);
}

bool MainWindow::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    MSG* msg = static_cast<MSG*>(message);
    if(msg->message == WM_HOTKEY)
    {
        if(recordProcess->state() == QProcess::ProcessState::Running)
        {
            this->on_stopBtn_clicked();
            this->showNormal();
            this->setWindowState(Qt::WindowActive);
            return true;
        }
        else if(recordProcess->state() == QProcess::ProcessState::NotRunning
                && passVideoEncodingProcess->state() == QProcess::ProcessState::NotRunning)
        {
            this->on_startBtn_clicked();
            return true;
        }
    }
    return false;
}


void MainWindow::showPassOutput()
{
    QString msg = passVideoEncodingProcess->readAllStandardError().data();
    if(msg.contains("No such file or directory",Qt::CaseInsensitive))
    {
        QMessageBox::critical(this,"Error","文件不存在，可能已被外部更改");
        ui->startBtn->setEnabled(true);
        ui->stopBtn->setEnabled(false);
        ui->pathBtn->setEnabled(true);
      //  ui->hideCheckBox->setEnabled(true);
        passVideoEncodingProcess->waitForFinished();
        passVideoEncodingProcess->close();
    }
    if(msg.contains("Overwrite ? [y/N]",Qt::CaseInsensitive))
    {
        passVideoEncodingProcess->write("y\n");
    }
//    ui->textEdit->insertPlainText(msg);
 //   ui->textEdit->moveCursor(QTextCursor::End);
}


void MainWindow::startPassVideoEncoding()
{
    passVideoEncodingProcess->start("PassVideoEncoding " + ui->pathLabel->text());
    passVideoEncodingProcess->waitForStarted();
    if(passVideoEncodingProcess->state() == QProcess::ProcessState::Running)
    {
        ui->startBtn->setEnabled(false);
        ui->stopBtn->setEnabled(false);
      //  ui->hideCheckBox->setEnabled(false);
        ui->pathBtn->setEnabled(false);
      //  ui->passCheckBox->setEnabled(false);
    }
}

void MainWindow::onEncodingFinshed()
{
    ui->startBtn->setEnabled(true);
    ui->stopBtn->setEnabled(false);
//    ui->hideCheckBox->setEnabled(true);
    ui->pathBtn->setEnabled(true);
//    ui->passCheckBox->setEnabled(true);
//    ui->selectRectBtn->setEnabled(true);
  //  if(ui->infoCheckBox->isChecked())
 //   {
        QMessageBox::information(this,"压缩完成","压缩后的视频保存路径为：" + ui->pathLabel->text() + "_0.mp4");
 //   }
  //  on_randBtn_clicked();
}






