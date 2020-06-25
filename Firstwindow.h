#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QDialog>


namespace Ui {
class FirstWindow;
}

class FirstWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = nullptr);
    ~FirstWindow();

private slots:

    void on_pushButton_start_game_clicked();

    void on_horizontalSlider_player_jump_valueChanged(int value);

    void on_horizontalSlider_interval_spawning_enemy_valueChanged(int value);

    void on_horizontalSlider_enemy_speed_valueChanged(int value);

    void on_horizontalSlider_bullet_speed_valueChanged(int value);

private:
    double player_jump = 20;
    double interval_spawning_enemy = 6;
    double enemy_speed = 6;
    double bullet_speed = 6;
    Ui::FirstWindow *ui;
};

#endif // FIRSTWINDOW_H
