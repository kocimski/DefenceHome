#include "Firstwindow.h"
#include "ui_firstwindow.h"

#include "Game.h"


Game * game;

FirstWindow::FirstWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);

}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_pushButton_start_game_clicked()
{


    hide();
    game = new Game(player_jump, interval_spawning_enemy, enemy_speed, bullet_speed);
    game->show();
}

void FirstWindow::on_horizontalSlider_player_jump_valueChanged(int value)
{
   player_jump = double(value);

}

void FirstWindow::on_horizontalSlider_interval_spawning_enemy_valueChanged(int value)
{
    interval_spawning_enemy = double(value);

}

void FirstWindow::on_horizontalSlider_enemy_speed_valueChanged(int value)
{
    enemy_speed = double(value);
    qDebug() <<enemy_speed;
}

void FirstWindow::on_horizontalSlider_bullet_speed_valueChanged(int value)
{
    bullet_speed = double(value);
    qDebug() << bullet_speed;
}
