#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window){
    ui->setupUi(this);
    sensor.start();
    reading = sensor.reading();
    updategyo();
    connect(&updateTimer, SIGNAL(timeout()), this, SLOT(updategyo()));
    updateTimer.start(100);
}

Window::~Window()
{
    delete ui;
}

void Window::updategyo()
{
    if(xStart == 0){
        xStart = reading->x();
        yStart = reading->y();
        zStart = reading->z();
    };
    ui->x->setText(QString::number(reading->x()-xStart));
    ui->y->setText(QString::number(reading->y()-yStart));
    ui->z->setText(QString::number(reading->z()-zStart));

}

float Window::minus(double n1, double n2){
    return n1-n2;
}
