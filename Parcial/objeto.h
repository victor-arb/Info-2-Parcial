#ifndef OBJETO_H
#define OBJETO_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QObject>
#include <QPainter>
#include <cmath>
#include <QRandomGenerator>
#include <QKeyEvent>
#include <QTimer>

class Objeto : public QObject, public QGraphicsItem, public QPainter
{
    Q_OBJECT
public:
    explicit Objeto(QObject *parent = nullptr);
    ~Objeto();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);


    void Movimiento();


private:
    double R;   //Radio
    double posX;
    double k;// resistencia del aire
    double g;// gravedad
    double posY;//posicion en Y del personaje
    double velY;//velocidad en Y del personaje
    double aceY;//aceleración en Y del personaje
    double dt;//diferencial de tiempo
    QTimer * timerDown;

signals:

public slots:
};

#endif // OBJETO_H
