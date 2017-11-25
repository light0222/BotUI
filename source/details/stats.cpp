#include "details/stats.hh"
#include "ui_stats.h"

DetailsStats::DetailsStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsStats)
{
    ui->setupUi(this);
}

DetailsStats::~DetailsStats()
{
    delete ui;
}
