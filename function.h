#ifndef FUNCTION_H
#define FUNCTION_H

#include <QWidget>
#include <QTimer>
#include <QButtonGroup>

namespace Ui {
class function;
}

class function : public QWidget
{
    Q_OBJECT

public:

    explicit function(QWidget *parent = nullptr);
    unsigned int fun;
    unsigned int get_function();
    ~function();


private slots:
    void on_pushButton_clicked();
    void onTimeout(void);
private:
    QTimer *mTimer;
    int count;
    Ui::function *ui;
    QButtonGroup *groupButton1;
};

#endif // FUNCTION_H
