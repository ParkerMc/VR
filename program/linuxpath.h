#include <QDialog>
#include <QFileDialog>
#include <pwd.h>
#include <unistd.h>

#ifndef LINUXPATH_H
#define LINUXPATH_H

namespace Ui {
class LinuxPath;
}

class LinuxPath : public QDialog
{
    Q_OBJECT

public:
    explicit LinuxPath(QWidget *parent = 0);
    ~LinuxPath();
    QString path;

private:
    Ui::LinuxPath *ui;

private slots:
    void browse();
};

#endif // LINUXPATH_H
