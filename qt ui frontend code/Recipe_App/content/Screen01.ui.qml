

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.4
import QtQuick.Controls 6.4
import Recipe_App
import QtQuick.Layouts 1.0

Rectangle {
    id: recipeMainWindow
    width: Constants.width
    height: Constants.height
    color: "#f8ffbc"
    radius: 6
    border.color: "#ffcfcf"
    border.width: 5
    property bool isDialogOpen: false

    Text {
        id: moto
        text: qsTr("Everything In One Place")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        font.pixelSize: 20
        horizontalAlignment: Text.AlignHCenter
        anchors.rightMargin: 1126
        anchors.leftMargin: 200
        anchors.bottomMargin: 700
        anchors.topMargin: 125
        font.italic: true
    }

    Text {
        id: projectTitle
        text: qsTr("Project Title - Recipe Keeper")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        font.pixelSize: 80
        horizontalAlignment: Text.AlignHCenter
        font.family: "Verdana"
        anchors.rightMargin: 20
        anchors.leftMargin: 20
        anchors.topMargin: 20
    }

    Rectangle {
        id: buttonPannel
        y: 461
        height: 279
        visible: true
        color: "#ffffff"
        border.color: "#ffcfcf"
        border.width: 10
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        property bool enabled: true
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.bottomMargin: 20

        RowLayout {
            id: buttonPannelLayout
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.rightMargin: 70
            anchors.leftMargin: 70
            anchors.bottomMargin: 70
            anchors.topMargin: 70
            spacing: 200
            Button {
                id: addRecipeButton
                width: 350
                height: 150
                text: qsTr("Add Recipe")
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: true

                Connections {
                    target: addRecipeButton
                    onClicked: addRecipeWindow.visible = true
                }
            }

            Button {
                id: viewRecipeButton
                width: 350
                height: 150
                text: qsTr("View Recipe")
                icon.width: 30
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: true

                Connections {
                    target: viewRecipeButton
                    onClicked: viewRecipeWindow.visible = true
                }
            }

            Button {
                id: editRecipeButton
                width: 350
                height: 150
                text: qsTr("Edit Recipe")
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: true

                Connections {
                    target: editRecipeButton
                    onClicked: editRecipeWindow.visible = true
                }
            }
        }
    }

    Rectangle {
        id: editRecipeWindow
        x: 0
        y: 0
        width: 1334
        height: 750
        visible: false
        color: "#b4f8ff"
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10

        Text {
            id: editRecipeTitle
            text: qsTr("Edit Recipe")
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            font.pixelSize: 70
            horizontalAlignment: Text.AlignHCenter
            anchors.rightMargin: 20
            anchors.leftMargin: 70
            anchors.topMargin: 70
        }

        Button {
            id: editBackToMain
            x: 1161
            text: qsTr("Back To Main Menu")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.topMargin: 20
            anchors.rightMargin: 20
            font.italic: true
            display: AbstractButton.TextBesideIcon

            Connections {
                target: editBackToMain
                onClicked: editRecipeWindow.visible = false
            }
        }
    }

    Rectangle {
        id: viewRecipeWindow
        x: 0
        y: 0
        width: 1334
        height: 750
        visible: false
        color: "#b4f8ff"
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10

        Text {
            id: viewRecipeTitle
            text: qsTr("View Recipe")
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            font.pixelSize: 70
            horizontalAlignment: Text.AlignHCenter
            anchors.rightMargin: 20
            anchors.leftMargin: 70
            anchors.topMargin: 70
        }

        Button {
            id: viewBackToMain
            x: 1244
            text: qsTr("Back To Main Menu")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 20
            anchors.topMargin: 20

            Connections {
                target: viewBackToMain
                onClicked: viewRecipeWindow.visible = false
            }
        }

        Rectangle {
            id: rectangle
            x: 752
            y: 194
            width: 519
            height: 498
            color: "#ffffff"

            Text {
                id: text1
                x: 205
                y: 25
                width: 118
                height: 42
                text: qsTr("Recipe Name")
                font.pixelSize: 20
            }

            Text {
                id: text2
                x: 80
                y: 246
                text: qsTr("Ingredients")
                font.pixelSize: 14
            }

            Text {
                id: text3
                x: 314
                y: 246
                width: 68
                height: 33
                text: qsTr("Cook Time")
                font.pixelSize: 14
            }

            Text {
                id: text4
                x: 283
                y: 73
                text: qsTr("Preperation materials")
                font.pixelSize: 14
            }

            Image {
                id: image
                x: 47
                y: 73
                width: 135
                height: 134
                source: "qrc:/qtquickplugin/images/template_image.png"
                fillMode: Image.PreserveAspectFit
            }
        }

        Rectangle {
            id: rectangle1
            x: 81
            y: 237
            width: 180
            height: 49
            color: "#a5a5a5"

            TextInput {
                id: textInput
                x: 28
                y: 12
                width: 124
                height: 25
                text: qsTr("Enter Recipe Here")
                font.pixelSize: 15
            }
        }

        Text {
            id: text5
            x: 96
            y: 197
            text: qsTr("Recipe Finder")
            font.pixelSize: 25
        }
    }

    Rectangle {
        id: addRecipeWindow
        x: 0
        y: 0
        width: 1334
        height: 750
        visible: false
        color: "#b4f8ff"
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10

        Text {
            id: addRecipeTitle
            text: qsTr("Add Recipe")
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            font.pixelSize: 70
            horizontalAlignment: Text.AlignHCenter
            anchors.rightMargin: 20
            anchors.leftMargin: 70
            anchors.topMargin: 70
        }

        Button {
            id: addBackToMain
            text: qsTr("Back To Main Menu")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 20
            anchors.topMargin: 20

            Connections {
                target: addBackToMain
                onClicked: addRecipeWindow.visible = false
            }
        }
    }

    states: [
        State {
            name: "clicked"
            when: addRecipeButton.checked
        }
    ]
}
