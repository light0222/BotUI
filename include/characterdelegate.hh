#ifndef CHARACTERDELEGATE_HH
#define CHARACTERDELEGATE_HH

#include "characterdata.hh"
#include <QStyledItemDelegate>

class CharacterDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    CharacterDelegate(QWidget* parent = nullptr);
    void paint(QPainter* painter, const QStyleOptionViewItem& option,
               const QModelIndex& index) const override;
    QSize sizeHint(const QStyleOptionViewItem& option,
                   const QModelIndex& index ) const;

public:
    void drawStatus(QPainter* painter, const CharacterData& data, const QPoint &center) const;
    void drawPseudo(QPainter* painter, const CharacterData& data) const;
};

#endif // CHARACTERDELEGATE_HH
