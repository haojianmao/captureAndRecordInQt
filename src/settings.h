#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtCore>
#include <QHash>

class Settings
{
public:
  class StringKey : public QString {
  public:
    StringKey(QString str) : QString(str){}
  };
  class RectKey : public QString {
  public:
    RectKey(QString str) : QString(str){}
  };
  class BoolKey : public QString {
  public:
    BoolKey(QString str) : QString(str){}
  };
  class IntKey : public QString {
  public:
    IntKey(QString str) : QString(str){}
  };

  // If you add key here,
  // You need to edit setting.cpp too.
  static StringKey Path;
  static StringKey Language;
  static StringKey Filetype;
  static StringKey Filename;
  static RectKey Geometry;
  static BoolKey OpenDialog;
  static BoolKey DrawArrow;
  static BoolKey OverwriteConfirm;
  static BoolKey AggressivePngCompress;
  static BoolKey ForcePngAlpha;
  static BoolKey StayOnTop;
  static IntKey DelaySecs;
  static IntKey Quality;

public:
  // singleton
  static Settings &getInstance(void);
  static int value(const IntKey key){
    return value<int>(key);
  }
  static QString value(const StringKey key){
    return value<QString>(key);
  }
  static bool value(const BoolKey key){
    return value<bool>(key);
  }
  static QRect value(const RectKey key){
    return value<QRect>(key);
  }

  template <typename T> static T value(const QString &key){
    return getInstance().valueInstance<T>(key);
  }
  template <typename T> static void setValue(const QString &key, const T value){
    getInstance().setValueInstance(key, value);
  }


public slots:
  void writeData();

private:
  // singleton
  Settings();
  Settings(const Settings &){}
  Settings &operator=(const Settings &){return *this;}
  ~Settings();
  void readData();

  QHash<QString, QVariant> data_;

  static QList<QString> Keys;
  template <typename T> T valueInstance(const QString &key) const {
    return data_.value(key).value<T>();
  }
  template <typename T> void setValueInstance(const QString &key, const T &value) {
    data_.insert(key, value);
  }

};

#endif // SETTINGS_H
