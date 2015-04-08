#include "pieces.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

pieces::pieces() :
{
    QGraphicsPixmapItem;
    ui->x = x;
    ui->y = y;
    couleur();
    QPixmap * neutre = new QPixmap(":/neutre");
    setPixmap(neutre);
}
