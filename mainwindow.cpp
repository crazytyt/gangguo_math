#include "tangguo_common.h"
#include "ui_mainwindow.h"


twenty *mTwenty;
one_handred_1 *mOnehandred1;
one_handred_2 *mOnehandred2;
function *mFunc;

QStackedWidget *mStack;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette palette;

    palette.setColor(QPalette::Background,QColor(192,253,123));
    this->setPalette(palette);

    setFixedSize(1080,620);

    mStack = new QStackedWidget(this);

    mTwenty = new twenty;
    mOnehandred1 = new one_handred_1;
    mOnehandred2 = new one_handred_2;
    mFunc = new function;

    mStack->addWidget(mFunc);
    mStack->addWidget(mTwenty);
    mStack->addWidget(mOnehandred1);
    mStack->addWidget(mOnehandred2);

    setCentralWidget(mStack);

}

MainWindow::~MainWindow()
{
    delete ui;
}
