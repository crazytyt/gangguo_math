#include "twenty.h"
#include "ui_twenty.h"
#include "tangguo_common.h"

#include <QTime>


int twenty::create_one_question()
{

    int symbal = get_one_num(-1, 2);
    if (symbal == 1)
        ss = 1;
    else {
        ss = 0;
    }

    while (1) { 
        if (ss == 1) {
            aa = get_one_num(2, 21);
            bb = get_one_num(2, 21);

            if (aa + bb > 20)
                continue;
            else {
                break;
            }
        } else {
            aa = get_one_num(9, 21);
            bb = get_one_num(3, 11);
            break;
        }

    }

    ui->first->setNum(aa);
    ui->second->setNum(bb);
    if (ss)
        ui->add_or_minus->setText("+");
    else {
        ui->add_or_minus->setText("-");
    }
    ui->answer->setText("");

    return 0;
}

int twenty::get_one_num(int a, int b)
{
    while(1) {
        int re = qrand() % 20;
        if (re > a && re < b)
            return re;
        else {
            continue;
        }
    }
}

void twenty::click_process(int num)
{
    QString sAnswer = ui->answer->text();

    if (sAnswer.length() == 2)
        return;
    else if (sAnswer.length() == 0)
        result = num;
    else {
        result = sAnswer.toInt() * 10 + num;
    }

    ui->answer->setNum(result);
    //qDebug() << result;
}

void twenty::set_time(QString tt)
{

    ui->time->setText(tt);
}

twenty::twenty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twenty)
{
    ui->setupUi(this);
    this->autoFillBackground();

    aa = bb = ss = result = mError = mCorrect = mTotal = 0;


    QPixmap pixmap = QPixmap(":/background.jpg").scaled(this->size(),Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
   QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);


    QTime time;
    time= QTime::currentTime();
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    create_one_question();
}


twenty::~twenty()
{
    delete ui;
}

void twenty::on_pushButton_1_clicked()
{

    click_process(1);
}

void twenty::on_pushButton_2_clicked()
{
    click_process(2);
}

void twenty::on_pushButton_3_clicked()
{
    click_process(3);
}

void twenty::on_pushButton_0_clicked()
{
    click_process(0);
}

void twenty::on_pushButton_4_clicked()
{
    click_process(4);
}

void twenty::on_pushButton_5_clicked()
{
    click_process(5);
}

void twenty::on_pushButton_6_clicked()
{
    click_process(6);
}

void twenty::on_pushButton_clear_clicked()
{
    result = 0;
    ui->answer->setText("");
}

void twenty::on_pushButton_7_clicked()
{
    click_process(7);
}

void twenty::on_pushButton_8_clicked()
{
    click_process(8);
}

void twenty::on_pushButton_9_clicked()
{
    click_process(9);
}

void twenty::on_pushButton_next_clicked()
{
    if (ss) {
        if (result == aa + bb)
            mCorrect += 1;
        else {
            mError += 1;
        }
    } else {
        if (result == aa - bb)
            mCorrect += 1;
        else {
            mError += 1;
        }
    }

    mTotal = mError + mCorrect;

    ui->error->setNum(mError);
    ui->correct->setNum(mCorrect);
    ui->total->setNum(mTotal);

    create_one_question();
}
