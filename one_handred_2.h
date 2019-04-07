#ifndef ONE_HANDRED_2_H
#define ONE_HANDRED_2_H

#include <QWidget>

namespace Ui {
class one_handred_2;
}

class one_handred_2 : public QWidget
{
    Q_OBJECT

public:
    explicit one_handred_2(QWidget *parent = nullptr);
    ~one_handred_2();

private:
    Ui::one_handred_2 *ui;
};

#endif // ONE_HANDRED_2_H
