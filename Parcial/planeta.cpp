#include "planeta.h"
#include <QPainter>

Planeta::Planeta(double posx, double posy, double velx, double vely, double masa, double r, Qt::GlobalColor _color)
{
    PX = posx;
    PY = posy;
    VX = velx;
    VY = vely;
    AX = 0;
    AY = 0;
    //V = 0;
    dt = 1;
//    setPos(QPointF(0,0)-QPointF((painter->boundingRect().width()/2)+500,
//                                              painter->boundingRect().height()/2));

    color = _color;
    G = 8;
    R = r;
    mass = masa;
    setPos(PX,PY);
}

Planeta::~Planeta()
{

}
double Planeta::get_PosX()
{
    return PX;
}
double Planeta::get_PosY()
{
    return PY;
}

double Planeta::get_Radio()
{
    return R;
}
double Planeta::get_velX()
{
    return VX;
}
double Planeta::get_velY()
{
    return VY;
}
double Planeta::get_masa()
{
    return mass;
}

double Planeta::get_dt()
{
    return dt;
}

double Planeta::get_Ax()
{
    return AX;
}

double Planeta::get_Ay()
{
    return AY;
}

void Planeta::set_velx(double velx)
{
    VX = velx;
}

void Planeta::set_vely(double vely)
{
    VY = vely;
}

void Planeta::set_vel(double velx, double vely)
{
    VX = velx;
    VY = vely;
}

void Planeta::set_posx(double px)
{
    PX = px;
}

void Planeta::set_posy(double py)
{
    PY = py;
}

void Planeta::set_masa(double mas)
{
    mass = mas;
}

void Planeta::set_dt(double _dt)
{
   dt = _dt;
}

void Planeta::posicion()
{
    setPos(PX,PY);
}

void Planeta::Actualizar(Planeta *planeta)
{
    //Se aplican los sistemas fisicos y se actualizan las posiciones de los cuerpos
    double dist,ang,deltaX,deltaY;
    deltaX=(*planeta).get_PosX()-PX;
    deltaY=(*planeta).get_PosY()-PY;
    ang=atan2(deltaY,deltaX);
    dist=sqrt((deltaX*deltaX)+(deltaY*deltaY));
    AX=(G*mass*cos(ang))/pow(dist,2);
    AY=(G*mass*sin(ang))/pow(dist,2);
    VX=VX+AX*dt;
    VY=VY+AY*dt;
    PX=PX+(VX*dt)+(AX*(dt*dt)*0.5);
    PY=PY+(VY*dt)+(AY*(dt*dt)*0.5);
    posicion();
}

//Grafican los Planetas
QRectF Planeta::boundingRect() const
{
    return QRectF(-R,-R,2*R,2*R);
}
void Planeta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::GlobalColor (color));
    painter->drawEllipse(boundingRect());
}
