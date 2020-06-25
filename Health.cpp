#include "Health.h"
#include <QGraphicsItem>
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 3;
    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: ") + QString::number(health));
}
