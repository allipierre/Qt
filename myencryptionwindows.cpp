#include "myencryptionwindows.h"

MyencryptionWindows::MyencryptionWindows(QWidget *parent)
    : QMainWindow(parent)
{
    this->lbWriteOutput=new QLabel("Schreibe :");
    this->inputText=new QLineEdit();
    this->btEncrypt=new QPushButton("Verschlüssseln");
    connect(this->btEncrypt,SIGNAL(clicked()),SLOT(encrypt()));

    this->lbEncriptionOutput=new QLabel("-");
    //this->lbWriteOutput->setGeometry(10,10,60,60);
    this->vLayout=new QVBoxLayout();


    this->vLayout->addWidget(this->lbWriteOutput);
    this->vLayout->addWidget(this->inputText);
    this->vLayout->addWidget(this->btEncrypt);
    this->vLayout->addWidget(this->lbEncriptionOutput);


    QWidget *window=new QWidget();
     window->setLayout(this->vLayout);
     this->setCentralWidget(window);


}

MyencryptionWindows::~MyencryptionWindows()
{

}

void MyencryptionWindows::encrypt()
{
   QString str;
   for(int i=0;i<this->inputText->text().count();i++)
   {
       char c=this->inputText->text().at(i).toLatin1();
        c++;
        str.append(QString(c));
   }
   this->lbEncriptionOutput->setText(str);
}
