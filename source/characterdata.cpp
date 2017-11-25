#include "characterdata.hh"
#include "characterview.hh"

CharacterData::CharacterData()
    : _connectionStatus(ConnectionStatus::Disconnected),
      _widget(new CharacterView())
{
}

CharacterData::CharacterData(const QString &pseudo, ConnectionStatus connectionStatus, const QString &action)
    : _pseudo(pseudo),
      _connectionStatus(connectionStatus),
      _action(action),
      _widget(new CharacterView())
{
}

const QString CharacterData::pseudo() const
{
    return _pseudo;
}

void CharacterData::setPseudo(const QString& pseudo)
{
    _pseudo = pseudo;
    _widget->setWindowTitle(pseudo);
}

ConnectionStatus CharacterData::connectionStatus() const
{
    return _connectionStatus;
}

void CharacterData::setConnectionStatus(ConnectionStatus connectionStatus)
{
    _connectionStatus = connectionStatus;
}

const QString CharacterData::action() const
{
    return _action;
}

void CharacterData::setAction(const QString &action)
{
    _action = action;
}

QWidget* CharacterData::widget() const
{
    return _widget;
}
