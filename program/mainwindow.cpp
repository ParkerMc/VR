#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    //set paths to check for steamvr folder
    #ifdef linux
    std::string[] paths = {"1", "2"};
    #else
    std::string[] paths = {"1", "2"};
    #endif

    #ifdef linux
    pathdialog = new LinuxPath();
    #else
    pathdialog = new WindowsPath();
    #endif
    pathdialog->exec();

}

MainWindow::~MainWindow(){
    delete ui;
}
