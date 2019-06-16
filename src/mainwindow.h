#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class SettingDialog;
class ScreenShotDialog;
class CountDownAction;

//*****************
class QProcess;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
private:
  Ui::MainWindow *ui;
  SettingDialog *settingDialog_;
  ScreenShotDialog *screenShotDialog_;
  CountDownAction *countDownAction_;
  QPoint clickedPos_;

  //*****************

  QProcess* recordProcess;
  QProcess* passVideoEncodingProcess;

  QRect m_recordRect;


public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  void initialize();

protected:
  void mousePressEvent(QMouseEvent *e);
  void mouseReleaseEvent(QMouseEvent *e);
  void mouseMoveEvent(QMouseEvent *e);

private slots:
  void beginTimerScreenShot();
  void updateTimerLabel(int restSec);
  void takeScreenShot();

//*************************
 void on_startBtn_clicked();

 void on_stopBtn_clicked();

 void on_pathBtn_clicked();

 void showRecordOutput();

 void showPassOutput();

 void startPassVideoEncoding();

 void onEncodingFinshed();

protected:

    virtual void closeEvent(QCloseEvent* event);

    virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);


};



#endif // MAINWINDOW_H
