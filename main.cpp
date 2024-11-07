#include "QRcodeDialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRcodeDialog w;
    w.show();
    return a.exec();
}
