//#include "MyRect.h"
//#include<QKeyEvent>
//#include <QGraphicsScene>
//#include "Bullet.h"
//#include<QDebug>
//#include "Enemy.h"

//void MyRect::keyPressEvent(QKeyEvent *event)
//{
//    if(event->key() == Qt::Key_Left)
//    {
//        if(pos().x() >0)
//        setPos(x()-10,y());    //szybkjość poruszaniasię w lewo
//    }
//    else if(event->key() == Qt::Key_Right)
//    {
//        if(pos().x() + 100 < 1024)
//        setPos(x()+10,y());        //szybkość poruszania się w prawo
//    }
//    else if(event->key() == Qt::Key_Space)
//    {
//        Bullet * bullet = new Bullet();
//        bullet->setPos(x(), y());
//        scene()->addItem(bullet);

//    }

//}

//void MyRect::spawn()
//{
//    Enemy * enemy = new Enemy();
//    scene()->addItem(enemy);

//}
