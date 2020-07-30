#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <planeta.h>
#include "objeto.h"
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

    void keyPressEvent(QKeyEvent *evento);
    void Actualizar();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer * timer;
    Planeta *planeta1, *planeta2, *planeta3, *planeta4, *planeta5;


signals:

public slots:
    //void Actualizar();
    //int planetacollision(Cuerpo *);
private slots:

};

#endif // MAINWINDOW_H
