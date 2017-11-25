#include "details/script.hh"
#include "ui_script.h"

DetailsScript::DetailsScript(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsScript)
{
    ui->setupUi(this);
}

DetailsScript::~DetailsScript()
{
    delete ui;
}
