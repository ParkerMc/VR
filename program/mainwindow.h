#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "linuxpath.h"
#include "windowspath.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    std::string path;
    #ifdef linux
    LinuxPath *pathdialog;
    #else
    WindowsPath *pathdialog;
    #endif
};

#endif // MAINWINDOW_H
