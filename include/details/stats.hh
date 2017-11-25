#ifndef STATS_HH
#define STATS_HH

#include <QWidget>

namespace Ui {
class DetailsStats;
}

class DetailsStats : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsStats(QWidget *parent = 0);
    ~DetailsStats();

private:
    Ui::DetailsStats *ui;
};

#endif // STATS_HH
