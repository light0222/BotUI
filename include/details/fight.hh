#ifndef DETAILS_FIGHT_HH
#define DETAILS_FIGHT_HH

#include <QWidget>

namespace Ui {
class DetailsFight;
}

class DetailsFight : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsFight(QWidget *parent = 0);
    ~DetailsFight();

private:
    Ui::DetailsFight *ui;
};

#endif // DETAILS_FIGHT_HH
