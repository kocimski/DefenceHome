#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"
#include "Player.h"
#include <QMediaPlayer>
#include <QImage>
#include <QDebug>

Game::Game(double player_jump, double interval_spawning_enemy, double
           enemy_speed, double bullet_speed,QWidget *parent){

    this->player_jump = player_jump;
    this-> interval_spawning_enemy = double(interval_spawning_enemy/10);
    qDebug() << interval_spawning_enemy;
    this->enemy_speed =double(enemy_speed/400);
    qDebug() << enemy_speed;
    this->bullet_speed = double(bullet_speed/400);
    qDebug() << bullet_speed;

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1024,768);
    setBackgroundBrush(QBrush(QImage(":/images/bgimg.jpg")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    player = new Player(player_jump);
    player->setPos(512,668);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    scene->addItem(player);


    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(),health->y()+25);
    scene->addItem(health);


    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(interval_spawning_enemy*300);    //time to next spawn enemy
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/background.mp3"));
    music->play();

    show();
}
