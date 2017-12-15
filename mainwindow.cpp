#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsTextItem"
#include "QGraphicsRectItem"
#include "QGraphicsItem"
#include <QColor>
#include <qdebug.h>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->widgethide->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::addRect()
{

    QGraphicsRectItem *rect =  new QGraphicsRectItem(-20,-10,val,valTwo);
    rect->setFlag(QGraphicsItem::ItemIsMovable, true);
    rect->setFlag(QGraphicsItem::ItemIsSelectable, true);
    scene->addItem(rect);

}

void MainWindow::on_btnRect_clicked()
{
    addRect();
}

void MainWindow::setValTwo(int value)
{
    valTwo = value;
}

void MainWindow::setVal(int value)
{
    val = value;
}
