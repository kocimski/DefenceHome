
#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include "QtDebug"
#include <QList>
#include "Enemy.h"
#include "Game.h"

extern Game * game;

Bullet::Bullet(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/images/bullet.png"));


    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1/game->bullet_speed); //inverse of bullet speed
}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0; i < colliding_items.size(); i++)
    {
        if(typeid (*(colliding_items[i])) == typeid (Enemy))
        {
            game->score->increase();
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            delete colliding_items[i];
            delete this;
            return;
        }
    }

    this->setPos(x(),y()-10);
    if(pos().y() + 100 < 0){
        scene()->removeItem(this);
        delete this;


    }
}
