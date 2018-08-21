#ifndef JOBRESULT_H
#define JOBRESULT_H

#include <QSize>
#include <QVector>
#include <QPointF>
#include <QMetaType>

struct JobResult
{
    JobResult(int valueCount = 1) :
        areaSize(0, 0),
        pixelPositionY(0),
        moveOffset(0, 0),
        scaleFactor(0.0),
        values(valueCount)
    {
    }

    QSize areaSize;
    int pixelPositionY;
    QPointF moveOffset;
    double scaleFactor;

    QVector<int> values;
};

Q_DECLARE_METATYPE(JobResult)

#endif // JOBRESULT_H
