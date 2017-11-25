#include "include/accountmanager.hh"
#include "ui_accountmanager.h"

AccountManager::AccountManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AccountManager)
{
    ui->setupUi(this);
}

AccountManager::~AccountManager()
{
    delete ui;
}
