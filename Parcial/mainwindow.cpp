#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    //ui->graphicsView->setStyleSheet("background-color:black;");
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,1000,800);
    setFocusPolicy(Qt::StrongFocus);
    planeta1=new Planeta(0,0,0,0,5000,100, Qt::black);
    planeta2=new Planeta(-500,0,0,-2,70,35, Qt::blue);
    planeta3=new Planeta(500,0,0,2,70,35, Qt::red);
    planeta4=new Planeta(0,-500,6,-3,70,35, Qt::yellow);
    planeta5=new Planeta(0,500,6,-3,70,35, Qt::green);

    scene->addItem(planeta1);
    scene->addItem(planeta2);
    scene->addItem(planeta3);
    scene->addItem(planeta4);
    scene->addItem(planeta5);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout,[=](){
        Actualizar();
    });
    timer->start(33);

//    connect(timer,SIGNAL(timeout()),this,SLOT(Actualizar()));
//    timer->start(30);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    qDebug()<<"Tecla presionada";
    if (evento->key() == Qt::Key_Space){
        Objeto * objeto = new Objeto();
        scene->addItem(objeto);

    }
}

void MainWindow::Actualizar()
{
    planeta2->Actualizar(planeta1);
    planeta3->Actualizar(planeta1);
    planeta4->Actualizar(planeta1);
    planeta5->Actualizar(planeta1);
}
