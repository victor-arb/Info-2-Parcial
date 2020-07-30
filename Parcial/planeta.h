#ifndef PLANETA_H
#define PLANETA_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QObject>
#include <QPainter>
#include <cmath>


class Planeta : public QObject, public QGraphicsItem, public QPainter
{
    Q_OBJECT
public:
    explicit Planeta(double posx, double posy, double velx, double vely, double masa, double r, Qt::GlobalColor _color, QObject *parent=nullptr);
    ~Planeta();

    //Metodos setters y getters
    double get_PosX();
    double get_PosY();
    double get_Radio();
    double get_velX();
    double get_velY();
    double get_masa();
    double get_dt();
    double get_Ax();
    double get_Ay();
    void set_velx(double velx);
    void set_vely(double vely);
    void set_vel(double velx, double vely);
    void set_posx(double px);
    void set_posy(double py);
    void set_masa(double mas);
    void set_dt(double _dt);

    void Actualizar();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void Actualizar(Planeta *planeta);
    void posicion();

private:
    //Propiedades fisicas
    double PX;
    double PY;
    double mass;
    double R;
    double VX;
    double VY;
    double V;
    double angulo;
    double AX;
    double AY;
    double G ;
    double dt;
    Qt::GlobalColor color;

signals:

public slots:
};

#endif // PLANETA_H
