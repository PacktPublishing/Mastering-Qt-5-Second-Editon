#ifndef SYSINFOMACIMPL_H
#define SYSINFOMACIMPL_H

#include "SysInfo.h"

#include <QtGlobal>
#include <QVector>

class SysInfoMacImpl : public SysInfo
{
public:
    SysInfoMacImpl();

    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    QVector<qulonglong> mCpuLoadLastValues;
};

#endif // SYSINFOMACIMPL_H
