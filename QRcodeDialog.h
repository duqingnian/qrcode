#ifndef QRCODEDIALOG_H
#define QRCODEDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class QRcodeDialog;
}
QT_END_NAMESPACE

class QRcodeDialog : public QDialog
{
    Q_OBJECT

public:
    QRcodeDialog(QWidget *parent = nullptr);
    ~QRcodeDialog();

private slots:
    void on_btn_generate_clicked();

private:
    Ui::QRcodeDialog *ui;
};
#endif // QRCODEDIALOG_H
