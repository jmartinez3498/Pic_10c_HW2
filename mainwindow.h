#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void change1(int);
    void change2(int);
    void change3(int);
    void change4(int);
    void change5(int);
    void change6(int);

private:
    Ui::MainWindow *ui;
    int value_1;
    int value_2;
    int value_3;
    int value_4;
    int value_5;
    int value_6;
    void update_label() const;
};
#endif // MAINWINDOW_H
