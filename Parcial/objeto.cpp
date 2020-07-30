#include "objeto.h"

Objeto::Objeto(QObject *parent) : QObject(parent)
{
    posX=QRandomGenerator::global()->bounded(-500, 500);
    setPos(posX, -350);
    velY=0;
    k=0.08;
    dt=1;
    g=9.8;
    aceY=0;
    R = 20;
    timerDown = new QTimer(this);
    connect(timerDown, &QTimer::timeout,[=](){
        Movimiento();
    });

}



QRectF Objeto::boundingRect() const
{
    return QRectF(-R,-R,2*R,2*R);
}

void Objeto::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::GlobalColor (Qt::GlobalColor::magenta));
    painter->drawEllipse(boundingRect());
}

void Objeto::Movimiento()
{
    velY=0.1;
    aceY=(-((k*(velY*velY)*(25*25))/70)*sin(90))+g;
    velY=velY+aceY*dt;
    posY=posY+velY*dt-((dt*dt)*aceY*0.5);
    setPos(-500,posY);
}
