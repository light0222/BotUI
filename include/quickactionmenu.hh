#ifndef QUICKACTIONMENU_HH
#define QUICKACTIONMENU_HH

#include <QMenu>

namespace Ui {
class QuickActionMenu;
}

class QuickActionMenu : public QMenu
{
    Q_OBJECT

public:
    explicit QuickActionMenu(QWidget *parent = 0);
    ~QuickActionMenu();

    bool eventFilter(QObject* obj, QEvent* event);
    void retranslateUi();

private:
    Ui::QuickActionMenu *ui;
};

#endif // QUICKACTIONMENU_HH
