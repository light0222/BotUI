#ifndef DETAILS_FLOOD_HH
#define DETAILS_FLOOD_HH

#include <QWidget>

namespace Ui {
class DetailsFlood;
}

class DetailsFlood : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsFlood(QWidget *parent = 0);
    ~DetailsFlood();

private:
    Ui::DetailsFlood *ui;
};

#endif // DETAILS_FLOOD_HH
