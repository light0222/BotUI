#include "characterview.hh"
#include "ui_characterview.h"
#include "details/script.hh"
#include "details/stats.hh"
#include "details/console.hh"
#include "details/character.hh"
#include "details/inventory.hh"
#include "details/map.hh"
#include "details/flood.hh"
#include "details/fight.hh"
#include "details/settings.hh"

CharacterView::CharacterView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CharacterView)
{
    ui->setupUi(this);

    QWidget* scriptTab = new DetailsScript(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(scriptTab, QIcon(":/icons/icons/script.png"), tr("Trajet"));

    QWidget* statsTab = new DetailsStats(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(statsTab, QIcon(":/icons/icons/statistics.png"), tr("Statistiques"));

    QWidget* consoleTab = new DetailsConsole(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(consoleTab, QIcon(":/icons/icons/console.png"), tr("Console"));

    QWidget* characterTab = new DetailsCharacter(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(characterTab, QIcon(":/icons/icons/user.png"), tr("Personnage"));

    QWidget* inventoryTab = new DetailsInventory(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(inventoryTab, QIcon(":/icons/icons/inventory.png"), tr("Inventaire"));

    QWidget* mapTab = new DetailsMap(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(mapTab, QIcon(":/icons/icons/map.png"), tr("Carte"));

    QWidget* floodTab = new DetailsFlood(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(floodTab, QIcon(":/icons/icons/flood.png"), tr("Flood"));

    QWidget* fightTab = new DetailsFight(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(fightTab, QIcon(":/icons/icons/fight.png"), tr("Combat"));

    QWidget* settingsTab = new DetailsSettings(ui->tabWidgetDetails);
    ui->tabWidgetDetails->addTab(settingsTab, QIcon(":/icons/icons/options.png"), tr("Options"));

    ui->labelLevel->setText(tr("Niveau %1").arg(3));
    ui->labelPosition->setText(tr("[%1,%2] - %3 (%4)").arg(-1).arg(-14).arg("Astrub").arg("Cité d'Astrub"));
}

CharacterView::~CharacterView()
{
    delete ui;
}
