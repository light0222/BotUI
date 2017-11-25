#ifndef DETAILS_INVENTORY_HH
#define DETAILS_INVENTORY_HH

#include <QWidget>

namespace Ui {
class DetailsInventory;
}

class DetailsInventory : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsInventory(QWidget *parent = 0);
    ~DetailsInventory();

private:
    Ui::DetailsInventory *ui;
};

#endif // DETAILS_INVENTORY_HH
