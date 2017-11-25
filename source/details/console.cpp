#include "details/console.hh"
#include "ui_console.h"

DetailsConsole::DetailsConsole(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsConsole)
{
    ui->setupUi(this);
}

DetailsConsole::~DetailsConsole()
{
    delete ui;
}
