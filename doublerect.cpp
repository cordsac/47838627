#include "doublerect.h"
#include "ui_doublerect.h"
#include "mainwindow.h"
#include "qdebug.h"

DoubleRect::DoubleRect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoubleRect)
{
    ui->setupUi(this);
    connect(ui->sb_rect_height, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            this, &DoubleRect::setLineHeight);
    connect(ui->sb_rect_width, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            this, &DoubleRect::setLineWidth);
}

DoubleRect::~DoubleRect()
{
    delete ui;
}

void DoubleRect::setLineWidth(const int &width)
{
    val = width;
    MainWindow *m = new MainWindow();
    m->setVal(val);

}

void DoubleRect::setLineHeight(const int &height)
{
    val2 = height;
    MainWindow *m = new MainWindow();
    m->setValTwo(val2);

}

void DoubleRect::on_sb_rect_width_valueChanged(int arg1)
{
    int y = ui->sb_rect_height->value();
    int w = ui->sb_rect_width->value();
    MainWindow *m = new MainWindow();
    m->setVal(w);
    m->setValTwo(y);
}

