#ifndef ONE_HANDRED_1_H
#define ONE_HANDRED_1_H

#include <QWidget>

namespace Ui {
class one_handred_1;
}

class one_handred_1 : public QWidget
{
    Q_OBJECT

public:
    explicit one_handred_1(QWidget *parent = nullptr);
    ~one_handred_1();

private:
    Ui::one_handred_1 *ui;
};

#endif // ONE_HANDRED_1_H
