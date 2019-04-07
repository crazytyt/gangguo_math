#include "one_handred_2.h"
#include "ui_one_handred_2.h"

one_handred_2::one_handred_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::one_handred_2)
{
    ui->setupUi(this);
}

one_handred_2::~one_handred_2()
{
    delete ui;
}
