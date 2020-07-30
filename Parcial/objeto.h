#ifndef OBJETO_H
#define OBJETO_H

#include <QObject>

class Objeto : public QObject
{
    Q_OBJECT
public:
    explicit Objeto(QObject *parent = nullptr);

signals:

public slots:
};

#endif // OBJETO_H
