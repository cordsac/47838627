#ifndef DOUBLERECT_H
#define DOUBLERECT_H

#include <QWidget>
#include <QSpinBox>

namespace Ui {
class DoubleRect;
}

class DoubleRect : public QWidget
{
    Q_OBJECT

public:
    explicit DoubleRect(QWidget *parent = 0);
    ~DoubleRect();

public slots:
    void setLineWidth(const int &width);
    void setLineHeight(const int &height);


private slots:
    void on_sb_rect_width_valueChanged(int arg1);

private:
    Ui::DoubleRect *ui;
    int val;
    int val2;
};

#endif // DOUBLERECT_H
