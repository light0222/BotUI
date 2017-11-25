#ifndef CHARACTERDATA_HH
#define CHARACTERDATA_HH

#include <QString>
#include <QMetaType>

enum class ConnectionStatus
{
    Connected,
    Disconnected,
    Pending
};

class CharacterData
{
public:
    CharacterData();
    CharacterData(const QString& pseudo,
                  ConnectionStatus connectionStatus,
                  const QString& action);

public:
    const QString pseudo() const;
    void setPseudo(const QString& pseudo);

    ConnectionStatus connectionStatus() const;
    void setConnectionStatus(ConnectionStatus connectionStatus);

    const QString action() const;
    void setAction(const QString& action);

    QWidget* widget() const;

private:
    QString             _pseudo;
    ConnectionStatus    _connectionStatus;
    QString             _action;
    QWidget*            _widget;
};

Q_DECLARE_METATYPE(CharacterData)

#endif // CHARACTERDATA_HH
