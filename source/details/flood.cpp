#include "details/flood.hh"
#include "ui_flood.h"

DetailsFlood::DetailsFlood(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsFlood)
{
    ui->setupUi(this);
}

DetailsFlood::~DetailsFlood()
{
    delete ui;
}
