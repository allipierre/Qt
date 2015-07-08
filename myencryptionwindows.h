#ifndef MYENCRYPTIONWINDOWS_H
#define MYENCRYPTIONWINDOWS_H

#include <QMainWindow>
#include<QLabel>
#include<QLayout>
#include<QLineEdit>
#include<QPushButton>
#include<QString>

class MyencryptionWindows : public QMainWindow
{
    Q_OBJECT

public:
    MyencryptionWindows(QWidget *parent = 0);
    ~MyencryptionWindows();

private:
     QLabel *lbWriteOutput;
     QLineEdit * inputText;
     QPushButton *btEncrypt;
     QLabel *lbEncriptionOutput;
     QVBoxLayout *vLayout;
private slots:
     void encrypt();
};

#endif // MYENCRYPTIONWINDOWS_H
