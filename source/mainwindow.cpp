#include "mainwindow.hh"
#include "ui_mainwindow.h"
#include "characterdelegate.hh"
#include "characterdata.hh"
#include <QTreeWidgetItem>
#include <QDebug>

void populate(QTreeWidget* treeWidget)
{
    CharacterData datas[] = {
        {"First", ConnectionStatus::Connected, "Déplacement"},
        {"Second", ConnectionStatus::Disconnected, "Déconnecté"},
        {"Third", ConnectionStatus::Connected, "En combat"},
        {"Fourth", ConnectionStatus::Pending, "Connexion en cours"},
        {"Fifth", ConnectionStatus::Connected, "Inactif"},
        {"Sixth", ConnectionStatus::Connected, "Inactif"},
        {"Seventh", ConnectionStatus::Connected, "Inactif"},
        {"Eighth", ConnectionStatus::Connected, "Inactif"},
        {"Nineth", ConnectionStatus::Connected, "Inactif"},
        {"Tenth", ConnectionStatus::Connected, "Inactif"},
        {"Eleventh", ConnectionStatus::Connected, "Inactif"}
    };
    CharacterData childrenDatas[] = {
        {"ChildFirst", ConnectionStatus::Connected, "Déplacement"},
        {"ChildSecond", ConnectionStatus::Disconnected, "Déconnecté"},
        {"ChildThird", ConnectionStatus::Connected, "En combat"},
        {"ChildFourth", ConnectionStatus::Pending, "Connexion en cours"},
        {"ChildFifth", ConnectionStatus::Connected, "Inactif"}
    };

    for (auto& data : datas)
    {
        QTreeWidgetItem* item = new QTreeWidgetItem;
        item->setData(0, 0, QVariant::fromValue(data));
        treeWidget->addTopLevelItem(item);
        for (auto& data2 : childrenDatas)
        {
            QTreeWidgetItem* item2 = new QTreeWidgetItem;
            item2->setData(0, 0, QVariant::fromValue(data2));
            item->addChild(item2);
        }
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _menu(new QuickActionMenu(this))
{
    ui->setupUi(this);
    ui->quickActionButton->setMenu(_menu);
    ui->accountsTreeWidget->setItemDelegate(new CharacterDelegate);
    populate(ui->accountsTreeWidget);
    translate("fr");
}

MainWindow::~MainWindow()
{
    delete _menu;
    delete ui;
}

void MainWindow::selectedAccount(QTreeWidgetItem* item, int)
{
    auto data = item->data(0, 0);
    if (data.canConvert<CharacterData>())
    {
        CharacterData characterData = qvariant_cast<CharacterData>(data);
        QWidget* widget = characterData.widget();
        QWidget* frame = ui->mainPanel;
        QList<QMainWindow*> children = frame->findChildren<QMainWindow*>();
        for (auto& child : children)
            child->hide();
        widget->setParent(frame);
        ui->mainPanelLayout->addWidget(widget);
        widget->show();
    }
}

void MainWindow::translate(const QString& language)
{
    qDebug() << _translator.load("swiftbot_" + language, ":/tr");
    QCoreApplication::installTranslator(&_translator);
    ui->retranslateUi(this);
    _menu->retranslateUi();
}

void MainWindow::openAccountManager()
{

}
