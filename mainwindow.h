#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsSceneMouseEvent>
#include "QGraphicsScene"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void addRect();

     void setVal(int value);

     void setValTwo(int value);

private slots:
    void on_btnRect_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene * scene;
    QGraphicsView * view;
    int val;
    int valTwo;
};

#endif // MAINWINDOW_H
