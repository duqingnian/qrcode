#include "QRcodeDialog.h"
#include "./ui_QRcodeDialog.h"

QRcodeDialog::QRcodeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QRcodeDialog)
{
    ui->setupUi(this);

    this->setLayout(ui->MainLayout);
    ui->widget_left->setLayout(ui->LeftLayout);
    ui->widget_right->setLayout(ui->RightLayout);
}

QRcodeDialog::~QRcodeDialog()
{
    delete ui;
}

void QRcodeDialog::on_btn_generate_clicked()
{
    QString content = ui->edit_content->toPlainText();
    ui->label_qrcode->setText(content);

    ui->edit_content->clear();
}

