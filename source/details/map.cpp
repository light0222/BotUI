#include "details/map.hh"
#include "ui_map.h"

DetailsMap::DetailsMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsMap)
{
    ui->setupUi(this);
}

DetailsMap::~DetailsMap()
{
    delete ui;
}
