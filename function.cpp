#include "function.h"
#include "ui_function.h"

#include "tangguo_common.h"
#include <QMessageBox>

//#define TIMER_TIMEOUT (2 * 1000)
#define TIMER_TIMEOUT (30 * 1000)

function::function(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::function)
{
    ui->setupUi(this);
    mTimer = new QTimer(this);
    connect(mTimer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    count = 1;

}

function::~function()
{
    delete ui;
}

void function::on_pushButton_clicked()
{
    mStack->setCurrentIndex(1);
    mTimer->start(TIMER_TIMEOUT);
}

void function::onTimeout()
{

    QString str;

    if (count < 10) {
        switch (count) {
        case 1:
            mTwenty->set_time(QString("0:30"));
            break;
        case 2:
            mTwenty->set_time(QString("1:00"));
            break;
        case 3:
            mTwenty->set_time(QString("1:30"));
            break;
        case 4:
            mTwenty->set_time(QString("2:00"));
            break;
        case 5:
            mTwenty->set_time(QString("2:30"));
            break;
        case 6:
            mTwenty->set_time(QString("3:00"));
            break;
        case 7:
            mTwenty->set_time(QString("3:30"));
            break;
        case 8:
            mTwenty->set_time(QString("4:00"));
            break;
        case 9:
            mTwenty->set_time(QString("4:30"));
            break;
        default:
            break;
        }
        mTimer->start(TIMER_TIMEOUT);
        count++;

        return;
    }

    mTwenty->set_time(QString("5:00"));


    if (mTimer->isActive())
        mTimer->stop();

    QMessageBox::information(this, tr("结束"), tr("恭喜唐果全部做完了！！"));

    mStack->setCurrentIndex(0);
    count = 1;
    mTwenty->set_time(QString("0:00"));
}
