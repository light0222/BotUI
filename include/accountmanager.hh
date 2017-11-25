#ifndef ACCOUNTMANAGER_HH
#define ACCOUNTMANAGER_HH

#include <QWidget>

namespace Ui {
class AccountManager;
}

class AccountManager : public QWidget
{
    Q_OBJECT

public:
    explicit AccountManager(QWidget *parent = 0);
    ~AccountManager();

private:
    Ui::AccountManager *ui;
};

#endif // ACCOUNTMANAGER_HH
