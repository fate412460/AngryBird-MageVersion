#ifndef ABSBIRD_H
#define ABSBIRD_H


#include <Box2D/Box2D.h>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include "GameItem.h"

class AbsBird : public GameItem
{
    Q_OBJECT

    public:
        AbsBird();

    public slots:
        void setPullPos(int x , int y);
        void updatePos ();
        void releaseBird(int forceX , int forceY);
};

#endif // ABSBIRD_H