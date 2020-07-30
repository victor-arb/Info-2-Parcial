#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setStyleSheet("background-color:black;");
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,5000,5000);
    planeta1=new Planeta(350,250,0,0,5000,25, Qt::yellow);
    planeta2=new Planeta(420,300,10,0,700,15, Qt::cyan);
    planeta3=new Planeta(470,350,6,-3,600,10, Qt::red);
    scene->addItem(planeta1);
    scene->addItem(planeta2);
    scene->addItem(planeta3);

//    connect(timer,SIGNAL(timeout()),this,SLOT(Actualizar()));
//    timer->start(30);
}

MainWindow::~MainWindow()
{
    delete ui;
}

