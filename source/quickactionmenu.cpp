#include "quickactionmenu.hh"
#include "ui_quickactionmenu.h"

QuickActionMenu::QuickActionMenu(QWidget *parent) :
    QMenu(parent),
    ui(new Ui::QuickActionMenu)
{
    ui->setupUi(this);
    this->installEventFilter(this);
}

QuickActionMenu::~QuickActionMenu()
{
    delete ui;
}

bool QuickActionMenu::eventFilter(QObject* obj, QEvent* event)
{
    if (event->type() == QEvent::Show && obj == this)
    {
        QMenu* menu = static_cast<QMenu*>(this);
        QPoint pos = menu->pos() - QPoint(-20, menu->height() + 20);
        menu->move(pos);
        return true;
    }
    return false;
}

void QuickActionMenu::retranslateUi()
{
    ui->retranslateUi(this);
}
