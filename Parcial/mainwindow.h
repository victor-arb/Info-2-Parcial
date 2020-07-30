#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <planeta.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    Planeta *planeta1, *planeta2, *planeta3;

signals:

public slots:
    //void Actualizar();
    //int planetacollision(Cuerpo *);
private slots:

};

#endif // MAINWINDOW_H
