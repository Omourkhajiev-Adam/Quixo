#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap * rond;
    rond = new QPixmap(":/rond.png");
    QPixmap * croix;
    croix = new QPixmap(":/croix.png");
    QPixmap * neutre;
    neutre = new QPixmap(":/neutre.png");

    QGraphicsScene * ma_scene;
    ma_scene=new QGraphicsScene();
    QGraphicsPixmapItem * mon_item;

    for ( int j=0; j<5; ++j)
    {
        for ( int i=0; i<5; ++i)
        {
            mon_item = new QGraphicsPixmapItem();
            mon_item->setPixmap(*neutre);
            mon_item->setPos(i*41,j*41);
            ma_scene->addItem(mon_item);
        }
    }
    ui->ma_vue->setScene(ma_scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}
