#ifndef DETAILS_CHARACTER_HH
#define DETAILS_CHARACTER_HH

#include <QWidget>

namespace Ui {
class DetailsCharacter;
}

class DetailsCharacter : public QWidget
{
    Q_OBJECT

public:
    explicit DetailsCharacter(QWidget *parent = 0);
    ~DetailsCharacter();

private:
    Ui::DetailsCharacter *ui;
};

#endif // DETAILS_CHARACTER_HH
