#ifndef CHARACTERVIEW_HH
#define CHARACTERVIEW_HH

#include <QMainWindow>

namespace Ui {
class CharacterView;
}

class CharacterView : public QMainWindow
{
    Q_OBJECT

public:
    explicit CharacterView(QWidget *parent = 0);
    ~CharacterView();

private:
    Ui::CharacterView *ui;
};

#endif // CHARACTERVIEW_HH
