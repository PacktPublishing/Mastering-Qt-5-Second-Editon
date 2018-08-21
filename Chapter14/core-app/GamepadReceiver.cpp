#include "GamepadReceiver.h"

#include <QDebug>

GamepadReceiver::GamepadReceiver(QObject* parent) :
    QObject(parent),
    mGamepad(0, this)
{

}

void GamepadReceiver::findGamepads()
{
    QList<int> deviceIds = QGamepadManager::instance()->connectedGamepads();
    if (deviceIds.isEmpty()) {
        qDebug().noquote() << QString("No gamepad found!");
        return;
    }

    qDebug().noquote() << QString("%1 gamepad(s) found.").arg(deviceIds.size());
    mGamepad.setDeviceId(deviceIds.first());

    // Analog axis
    connect(&mGamepad, &QGamepad::axisLeftXChanged, this, [this](double value) {
        this->displayAnalogAxisChanged("Left X", value);
    });
    connect(&mGamepad, &QGamepad::axisLeftYChanged, this, [this](double value) {
        this->displayAnalogAxisChanged("Left Y", value);
    });
    connect(&mGamepad, &QGamepad::axisRightXChanged, this, [this](double value) {
        this->displayAnalogAxisChanged("Right X", value);
    });
    connect(&mGamepad, &QGamepad::axisRightYChanged, this, [this](double value) {
        this->displayAnalogAxisChanged("Right Y", value);
    });

    // Digital axis
    connect(&mGamepad, &QGamepad::buttonLeftChanged, this, [this](bool pressed) {
        this->displayDigitalAxisChanged("Button Left", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonRightChanged, this, [this](bool pressed) {
        this->displayDigitalAxisChanged("Button Right", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonUpChanged, this, [this](bool pressed) {
        this->displayDigitalAxisChanged("Button Up", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonDownChanged, this, [this](bool pressed) {
        this->displayDigitalAxisChanged("Button Down", pressed);
    });

    // Analog buttons
    connect(&mGamepad, &QGamepad::buttonL2Changed, this, [this](double value) {
        this->displayAnalogButtonChanged("Button L2", value);
    });
    connect(&mGamepad, &QGamepad::buttonR2Changed, this, [this](double value) {
        this->displayAnalogButtonChanged("Button R2", value);
    });

    // Digital buttons
    connect(&mGamepad, &QGamepad::buttonAChanged, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button A", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonBChanged, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button B", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonXChanged, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button X", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonYChanged, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button Y", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonL1Changed, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button L1", pressed);
    });
    connect(&mGamepad, &QGamepad::buttonR1Changed, this, [this](bool pressed) {
        this->displayDigitalButtonChanged("Button R1", pressed);
    });
}

void GamepadReceiver::displayAnalogAxisChanged(QString name, double value)
{
     qDebug().noquote() << QString("Analog axis '%1': %2")
        .arg(name)
                           .arg(value);
}

void GamepadReceiver::displayDigitalAxisChanged(QString name, bool pressed)
{
    qDebug().noquote() << QString("Digital axis '%1': %2")
       .arg(name)
       .arg(pressed);
}

void GamepadReceiver::displayAnalogButtonChanged(QString name, double value)
{
    qDebug().noquote() << QString("Analog button '%1': %2")
       .arg(name)
       .arg(value);
}

void GamepadReceiver::displayDigitalButtonChanged(QString name, bool pressed)
{
    qDebug().noquote() << QString("Digital button '%1': %2")
       .arg(name)
       .arg(pressed);
}
