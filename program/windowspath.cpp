#include "windowspath.h"
#include "ui_windowspath.h"

WindowsPath::WindowsPath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowsPath)
{
    ui->setupUi(this);
}

WindowsPath::~WindowsPath()
{
    delete ui;
}
