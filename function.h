#ifndef FUNCTION_H
#define FUNCTION_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class function;
}

class function : public QWidget
{
    Q_OBJECT

public:
    explicit function(QWidget *parent = nullptr);
    ~function();

private slots:
    void on_pushButton_clicked();
    void onTimeout(void);
private:
    QTimer *mTimer;
    int count;
    Ui::function *ui;
};

#endif // FUNCTION_H
