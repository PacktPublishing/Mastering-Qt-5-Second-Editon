#ifndef FILTERBLUR_H
#define FILTERBLUR_H

#include <QObject>

#include <Filter.h>


class FilterGrayscale : public QObject, Filter
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.masteringqt.imageanimation.filters.Filter")
    Q_INTERFACES(Filter)

public:
    FilterGrayscale(QObject* parent = 0);
    ~FilterGrayscale();

    QString name() const override;
    QImage process(const QImage& image) override;
};

#endif // FILTERBLUR_H
