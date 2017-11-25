#include "details/fight.hh"
#include "ui_fight.h"

DetailsFight::DetailsFight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsFight)
{
    ui->setupUi(this);
}

DetailsFight::~DetailsFight()
{
    delete ui;
}
