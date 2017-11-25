#include "details/inventory.hh"
#include "ui_inventory.h"

DetailsInventory::DetailsInventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsInventory)
{
    ui->setupUi(this);
}

DetailsInventory::~DetailsInventory()
{
    delete ui;
}
