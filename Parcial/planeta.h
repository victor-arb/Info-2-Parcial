#ifndef PLANETA_H
#define PLANETA_H

#include <QObject>

class Planeta : public QObject
{
    Q_OBJECT
public:
    explicit Planeta(QObject *parent = nullptr);

signals:

public slots:
};

#endif // PLANETA_H
