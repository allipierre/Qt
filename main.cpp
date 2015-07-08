#include "myencryptionwindows.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyencryptionWindows w;
    w.show();

    return a.exec()22;
}
