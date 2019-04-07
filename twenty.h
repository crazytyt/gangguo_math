#ifndef TWENTY_H
#define TWENTY_H

#include <QWidget>


namespace Ui {
class twenty;
}

class twenty : public QWidget
{
    Q_OBJECT

public:

    int create_one_question(void);
    int get_one_num(int a, int b);
    void click_process(int num);
    void set_time(QString tt);
    explicit twenty(QWidget *parent = nullptr);
    ~twenty();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_next_clicked();


private:
    int aa, bb, ss;
    int result;
    int mCorrect, mError, mTotal;

    Ui::twenty *ui;
};

#endif // TWENTY_H
