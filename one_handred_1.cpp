#include "one_handred_1.h"
#include "ui_one_handred_1.h"

one_handred_1::one_handred_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::one_handred_1)
{
    ui->setupUi(this);
}

one_handred_1::~one_handred_1()
{
    delete ui;
}
