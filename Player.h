#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player( int jump, QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
private:
    QMediaPlayer * shot_sound;;
    int jump;
};

#endif // PLAYER_H
