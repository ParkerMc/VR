#ifndef WINDOWSPATH_H
#define WINDOWSPATH_H

#include <QDialog>

namespace Ui {
class WindowsPath;
}

class WindowsPath : public QDialog
{
    Q_OBJECT

public:
    explicit WindowsPath(QWidget *parent = 0);
    ~WindowsPath();

private:
    Ui::WindowsPath *ui;
};

#endif // WINDOWSPATH_H
