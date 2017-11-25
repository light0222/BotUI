#ifndef DETAILS_SETTINGS_HH
#define DETAILS_SETTINGS_HH

#include <QWidget>

namespace Ui {
class DetailsSettings;
}

class DetailsSettings : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsSettings(QWidget *parent = 0);
    ~DetailsSettings();

private:
    Ui::DetailsSettings *ui;
};

#endif // DETAILS_SETTINGS_HH
