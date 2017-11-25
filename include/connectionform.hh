#ifndef CONNECTIONFORM_HH
#define CONNECTIONFORM_HH

#include <QWidget>

namespace Ui {
class ConnectionForm;
}

class ConnectionForm : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectionForm(QWidget *parent = 0);
    ~ConnectionForm();

private:
    Ui::ConnectionForm *ui;
};

#endif // CONNECTIONFORM_HH
