#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include "QtDebug"
#include <stdlib.h>
#include "Game.h"
#include <QGraphicsPixmapItem>

extern Game * game;

Enemy::Enemy(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(){

    setPixmap(QPixmap(":/images/enemy.png"));
    int random_number = rand() % 924;
    setPos(random_number, 0);

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1/game->enemy_speed); //inverse of enemy's speed
}

void Enemy::move(){

    this->setPos(x(),y()+5); //change of enemy's position
    if(pos().y()  > 824){
        game->health->decrease();
        scene()->removeItem(this);
        delete this;

    }
}
