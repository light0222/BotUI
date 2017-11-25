#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include <QTranslator>
#include "quickactionmenu.hh"

class QTreeWidgetItem;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QuickActionMenu* _menu;
    QTranslator _translator;

public slots:
    void selectedAccount(QTreeWidgetItem* item, int column);
    void translate(const QString& language);
    void openAccountManager();
};

#endif // MAINWINDOW_HH
