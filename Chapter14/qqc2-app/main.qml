import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4
import QtQuick.Controls.Material 2.2
import QtQuick.Controls.Universal 2.2

ApplicationWindow {
    id: window
    visible: true
    width: 600
    height: 700
    title: "Mastering Qt 5 - Qt Quick Controls 2 - " + styleName

    // Material customization
    Material.theme: Material.Light
    Material.accent: Material.Green

    // Universal customization
    Universal.theme: Universal.Light
    Universal.accent: Universal.Green

    // Fusion customization
    palette.highlight: "green"

    ColumnLayout {
        spacing: 20
        anchors.fill: parent
        anchors.topMargin: 20

        Label {
            text: "Mastering Qt 5 - Qt Quick Controls 2 - " + styleName
            font.pointSize: 14
            Layout.alignment: Qt.AlignCenter
        }

        RowLayout {
            id: rowButton
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            Button {
                width: 100
                height: 20
                text: "Button 1"
                onClicked: console.debug("Click on " + text)
            }
            Button {
                width: 100
                height: 20
                text: "Button 2 (highlighted)"
                highlighted: true
                onClicked: console.debug("Click on " + text)
            }
            Button {
                width: 100
                height: 20
                enabled: false
                text: "Button 3 (disabled)"
            }
        }

        RowLayout {
            id: rowCheckbox
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            CheckBox {
                text: "Checkbox 1"
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }
            CheckBox {
                text: "Checkbox 2"
                checked: true
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }
            CheckBox {
                text: "Checkbox 3 (disabled)"
                enabled: false
            }
        }

        RowLayout {
            id: rowRadiobutton
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            RadioButton {
                text: "RadioButton 1"
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }
            RadioButton {
                text: "RadioButton 2"
                checked: true
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }

            RadioButton {
                text: "RadioButton 3 (disabled)"
                enabled: false
            }
        }

        RowLayout {
            id: rowSwitch
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            Switch {
                text: "Switch 1"
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }
            Switch {
                text: "Switch 2"
                checked: true
                onClicked: console.debug("Click on " + text + " state is " + checked)
            }
            Switch {
                text: "Switch 3 (disabled)"
                enabled: false
            }
        }

        RowLayout {
            id: rowSlider
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            Slider {
                from: 0
                to: 100
                value: 75
                onMoved: console.debug("Slider value is " + value)
            }

            RangeSlider {
                from: 0
                to: 100
                first.value: 25
                second.value: 75
                first.onValueChanged: console.debug("RangeSlider first value is " + first.value)
                second.onValueChanged: console.debug("RangeSlider second value is " + second.value)
            }
        }

        RowLayout {
            id: rowText
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            TextArea {
                text: "TextArea\n is a multi-line\n text editor"
            }

            TextArea {
                placeholderText: "TextArea (placehodler)"
            }

            TextField {
                text: "TextField"
                Layout.minimumWidth: 100
            }
        }

        RowLayout {
            id: rowLast
            spacing: 20
            Layout.alignment: Qt.AlignCenter

            ComboBox {
                model: ["ComboBox 1", "ComboBox 2", "ComboBox 3"]
                Layout.minimumWidth: 150
                onCurrentIndexChanged: console.debug("ComboBox index is " + currentIndex)
            }

            Tumbler {
                model: ["Tumbler 1", "Tumbler 2", "Tumbler 3", "Tumbler 4", "Tumbler 5"]
                Layout.minimumWidth: 100
                currentIndex: 2
                onCurrentIndexChanged: console.debug("Tumbler index is " + currentIndex)
            }

            ProgressBar {
                indeterminate: true
            }

            BusyIndicator{

            }
        }

    }
}
