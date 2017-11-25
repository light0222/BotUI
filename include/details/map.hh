#ifndef DETAILS_MAP_HH
#define DETAILS_MAP_HH

#include <QWidget>

namespace Ui {
class DetailsMap;
}

class DetailsMap : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsMap(QWidget *parent = 0);
    ~DetailsMap();

private:
    Ui::DetailsMap *ui;
};

#endif // DETAILS_MAP_HH
