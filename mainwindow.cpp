#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , value_1(0)
    , value_2(0)
    , value_3(0)
    , value_4(0)
    , value_5(0)
    , value_6(0)
{
    ui->setupUi(this);
    QObject::connect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change1(int) ) );
    QObject::connect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change2(int) ) );
    QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change3(int) ) );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change4(int) ) );
    QObject::connect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change5(int) ) );
    QObject::connect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change6(int) ) );

    QObject::connect( ui->horizontalSlider ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change1(int) ) );
    QObject::connect( ui->horizontalSlider_2 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change2(int) ) );
    QObject::connect( ui->horizontalSlider_3 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change3(int) ) );
    QObject::connect( ui->horizontalSlider_4 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change4(int) ) );
    QObject::connect( ui->horizontalSlider_5 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change5(int) ) );
    QObject::connect( ui->horizontalSlider_6 ,SIGNAL( valueChanged(int) ),
                      this, SLOT( change6(int) ) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::change1(int value)
{
    value_1 = value;
    update_label();
    return;
}

void MainWindow::change2(int value)
{
    value_2 = value;
    update_label();
    return;
}

void MainWindow::change3(int value)
{
    value_3 = value;
    update_label();
    return;
}

void MainWindow::change4(int value)
{
    value_4 = value;
    update_label();
    return;
}

void MainWindow::change5(int value)
{
    value_5 = value;
    update_label();
    return;
}

void MainWindow::change6(int value)
{
    value_6 = value;
    update_label();
    return;
}

void MainWindow::update_label() const
{
    int x1= static_cast<double>(value_1);
    int x2= static_cast<double>(value_2);
    int x3= static_cast<double>(value_3);
    int x4= static_cast<double>(value_4);
    int x5= static_cast<double>(value_5);
    int x6= static_cast<double>(value_6);
    QString text(QString::number((x1+x2+x3)*.15*5/3+x4*.35*5+x5*.25+x6*.30));
    ui->label_7->setText(text);
}

