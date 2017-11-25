#ifndef DETAILS_CONSOLE_HH
#define DETAILS_CONSOLE_HH

#include <QWidget>

namespace Ui {
class DetailsConsole;
}

class DetailsConsole : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsConsole(QWidget *parent = 0);
    ~DetailsConsole();

private:
    Ui::DetailsConsole *ui;
};

#endif // DETAILS_CONSOLE_HH
