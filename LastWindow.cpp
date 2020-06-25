#include "Firstwindow.h"
#include "ui_firstwindow.h"

#include "Game.h"
#include <QDebug>

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

