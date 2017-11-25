#ifndef DETAILS_SCRIPT_HH
#define DETAILS_SCRIPT_HH

#include <QWidget>

namespace Ui {
class DetailsScript;
}

class DetailsScript : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsScript(QWidget *parent = 0);
    ~DetailsScript();

private:
    Ui::DetailsScript *ui;
};

#endif // DETAILS_SCRIPT_HH
