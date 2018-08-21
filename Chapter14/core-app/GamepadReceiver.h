#ifndef GAMEPADRECEIVER_H
#define GAMEPADRECEIVER_H

#include <QObject>
#include <QGamepad>

class GamepadReceiver : public QObject
{
    Q_OBJECT
public:
    explicit GamepadReceiver(QObject* parent = nullptr);

    void findGamepads();

private:
    QGamepad mGamepad;

    void displayAnalogAxisChanged(QString name, double value);
    void displayDigitalAxisChanged(QString name, bool pressed);
    void displayAnalogButtonChanged(QString name, double value);
    void displayDigitalButtonChanged(QString name, bool pressed);
};

#endif // GAMEPADRECEIVER_H
