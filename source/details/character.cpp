#include "details/character.hh"
#include "ui_character.h"

DetailsCharacter::DetailsCharacter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetailsCharacter)
{
    ui->setupUi(this);
}

DetailsCharacter::~DetailsCharacter()
{
    delete ui;
}
