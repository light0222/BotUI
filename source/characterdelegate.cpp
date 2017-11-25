#include "characterdelegate.hh"
#include <QPainter>

const int paintingScaleFactor = 20;

CharacterDelegate::CharacterDelegate(QWidget* parent)
    : QStyledItemDelegate(parent)
{
}

void CharacterDelegate::paint(QPainter* painter,
                              const QStyleOptionViewItem& option,
                              const QModelIndex& index) const
{
    if (index.data().canConvert<CharacterData>()) {
        painter->save();

        CharacterData characterData = qvariant_cast<CharacterData>(index.data());
        const QRect& rect = option.rect;
        const QPoint& center = rect.center() - rect.topLeft();
        const QPalette& palette = option.palette;
        QPixmap pixmap(":/icons/icons/dofus.png");

        painter->setRenderHint(QPainter::Antialiasing, true);

        if (option.state & QStyle::State_Selected)
            painter->fillRect(rect, palette.highlight());

        painter->translate(rect.x(), rect.y());
        painter->drawPixmap(QPoint(0, center.y() - pixmap.height() / 2), pixmap);
        painter->translate(pixmap.width(), 0);

        drawStatus(painter, characterData, center);
        drawPseudo(painter, characterData);

        painter->restore();

    } else {
        QStyledItemDelegate::paint(painter, option, index);
    }
}

void CharacterDelegate::drawPseudo(QPainter* painter,
                                   const CharacterData& data) const
{
    painter->save();

    QFont font = painter->font();
    font.setBold(true);
    font.setPointSize(font.pointSize() + 2);
    painter->setFont(font);
    QFontMetrics metrics(font);
    const QString pseudo = data.pseudo();
    QRect bounds = metrics.boundingRect(pseudo);
    bounds.translate(0, bounds.height());
    bounds.setWidth(bounds.width() + 3);
    int flags = Qt::AlignCenter;
    painter->drawText(bounds, flags, pseudo);

    painter->restore();
}

void CharacterDelegate::drawStatus(QPainter* painter,
                                   const CharacterData& data,
                                   const QPoint& center) const
{
    const int radius = 7;

    painter->save();

    // Draw status circle
    painter->save();
    const QPoint circleCenter(radius + 5, 10 + center.y());
    QColor color = data.connectionStatus() == ConnectionStatus::Connected ? Qt::green : Qt::red;
    if (data.connectionStatus() == ConnectionStatus::Pending)
        color = Qt::yellow;
    QColor secondColor = color.darker(200);

    QRadialGradient gradient(circleCenter, radius, QPoint(0, 0));
    gradient.setColorAt(0, Qt::white);
    gradient.setColorAt(0.4, color);
    gradient.setColorAt(1, secondColor);
    gradient.setSpread(QGradient::ReflectSpread);
    QBrush brush(gradient);
    QPen pen(Qt::black);
    pen.setWidth(2);
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawEllipse(circleCenter, radius, radius);
    painter->restore();

    painter->translate(radius * 2, 10);

    // Draw status action
    painter->save();
    QFont font = painter->font();
    font.setBold(false);
    painter->setFont(font);
    QFontMetrics metrics(font);
    const QString action = data.action();
    QRect bounds = metrics.boundingRect(action);
    bounds.translate(10, center.y() - 2 + bounds.height() / 2);
    bounds.setWidth(bounds.width() + 3);
    int flags = Qt::AlignCenter;
    painter->drawText(bounds, flags, action);
    painter->restore();

    painter->restore();
}

QSize CharacterDelegate::sizeHint(const QStyleOptionViewItem& option,
                                  const QModelIndex& index ) const
{
    QSize result = QStyledItemDelegate::sizeHint(option, index);
    result.setHeight(45);
    return result;
}
