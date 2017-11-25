#include "details/settings.hh"
#include "ui_settings.h"

DetailsSettings::DetailsSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsSettings)
{
    ui->setupUi(this);
}

DetailsSettings::~DetailsSettings()
{
    delete ui;
}
