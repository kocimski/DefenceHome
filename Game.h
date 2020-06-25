#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Player.h"
#include "Score.h"
#include "Health.h"

class Game: public QGraphicsView{
public:
    Game(double player_jump, double interval_spawning_enemy,
         double enemy_speed, double bullet_speed, QWidget * parent=0);

    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Health * health;
    double player_jump;
    double interval_spawning_enemy;
    double bullet_speed;
    double enemy_speed;


};

#endif // GAME_H
