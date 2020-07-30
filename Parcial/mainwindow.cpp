#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    scene = new QGraphicsScene;
    ui->graphicsView->setStyleSheet("background-color:black;");
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,1000,800);
    planeta1=new Planeta(0,0,0,0,5000,25,Qt::black);

    scene->addItem(planeta1);
    ui->graphicsView->setScene(scene);

}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_Space){
        Objeto * objeto = new Objeto();
        scene->addItem(objeto);

    }
}
