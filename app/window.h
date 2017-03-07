#include <QMainWindow>
#include <QRotationReading>
#include <QTimer>
#include <sstream>

#ifndef WINDOW_H
#define WINDOW_H

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();

private slots:
    void updategyo();

private:
    float minus(double n1, double n2);
    QRotationReading *reading;
    double xStart;
    double yStart;
    double zStart;
    Ui::Window *ui;
    QRotationSensor sensor;
    QTimer updateTimer;
};

#endif // WINDOW_H
