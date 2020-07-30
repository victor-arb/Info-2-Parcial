#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "planeta.h"
#include "objeto.h"
#include <QMainWindow>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QKeyEvent>

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
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Planeta * planeta1;
    Planeta * planeta2;
    Planeta * planeta3;
    Planeta * planeta4;
    Planeta * planeta5;

};

void keyPressEvent(QKeyEvent *evento);


#endif // MAINWINDOW_H
