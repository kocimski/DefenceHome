#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"

Player::Player( int jump, QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    this->jump = jump;
    shot_sound = new QMediaPlayer();
    shot_sound->setMedia(QUrl("qrc:/sounds/shoot.mp3"));

    setPixmap(QPixmap(":/images/player.png"));
}

void Player::keyPressEvent(QKeyEvent *event){

    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
            setPos(x()-jump,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 1024)
            setPos(x()+jump,y());
    }


    else if (event->key() == Qt::Key_Space){

        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

        if(shot_sound->state() == QMediaPlayer::PlayingState)
            shot_sound->setPosition(0);
        else if(shot_sound->state() == QMediaPlayer::StoppedState)
            shot_sound->play();
    }
}

void Player::spawn(){

    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
