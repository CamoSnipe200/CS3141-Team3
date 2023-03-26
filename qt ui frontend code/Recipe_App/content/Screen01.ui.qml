

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
    height: Constants.height
    visible: true
    color: "#f8ffbc"
    radius: 10
    border.color: "#ffcfcf"
    border.width: 10
    gradient: Gradient {
        orientation: Gradient.Vertical
        GradientStop {
            position: 0
            color: "#7de2fc"
        }

        GradientStop {
            position: 1
            color: "#b9b6e5"
        }
    }
    z: 0
    property bool isDialogOpen: false
    width: Constants.width

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
        text: qsTr("HALF MEASURES - Recipe Keeper")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        font.pixelSize: 75
        horizontalAlignment: Text.AlignHCenter
        font.family: "Verdana"
        anchors.rightMargin: 40
        anchors.leftMargin: 40
        anchors.topMargin: 20
    }

    Rectangle {
        id: buttonPannel
        y: 461
        height: 279
        visible: true
        color: "#a4ffffff"
        border.color: "#00ffcfcf"
        border.width: 10
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        smooth: true
        property bool enabled: true
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.bottomMargin: 20

        RowLayout {
            id: buttonPannelLayout
            visible: true
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.rightMargin: 22
            anchors.leftMargin: 20
            anchors.bottomMargin: 18
            anchors.topMargin: 25
            spacing: 100
            Button {
                id: addRecipeButton
                width: 150
                height: 75
                text: qsTr("Add")
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: false

                Connections {
                    target: addRecipeButton
                    onClicked: addRecipeWindow.visible = true;
                }
            }

            Button {
                id: viewRecipeButton
                width: 150
                height: 100
                text: qsTr("View")
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                icon.width: 30
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: false

                Connections {
                    target: viewRecipeButton
                    onClicked: viewRecipeWindow.visible = true
                }
            }

            Button {
                id: editRecipeButton
                width: 150
                height: 100
                text: qsTr("Edit")
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: false

                Connections {
                    target: editRecipeButton
                    onClicked: editRecipeWindow.visible = true
                }
            }

            Button {
                id: shareRecipeButton
                width: 150
                height: 100
                text: qsTr("SHARE")
                Layout.fillHeight: true
                Layout.fillWidth: false
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

                Connections {
                    target: shareRecipeButton
                    onClicked: shareRecipeWindow.visible = true
                }
            }

            Button {
                id: duplicateRecipeButton
                width: 150
                height: 100
                text: qsTr("DUPLICATE")
                Layout.fillHeight: true
                Layout.fillWidth: false
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

                Connections {
                    target: duplicateRecipeButton
                    onClicked: duplicateRecipeWindow.visible = true
                }
            }
        }
    }

    Rectangle {
        id: editRecipeWindow
        x: 0
        y: 0
        width: Constants.width
        height: Constants.height
        visible: false
        color: "#000000"
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10
        gradient: Gradient {
            orientation: Gradient.Vertical
            GradientStop {
                position: 0
                color: "#7de2fc"
            }

            GradientStop {
                position: 1
                color: "#b9b6e5"
            }
        }

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
        width: Constants.width
        height: Constants.height
        visible: false
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10
        gradient: Gradient {
            orientation: Gradient.Horizontal
            GradientStop {
                position: 0
                color: "#7de2fc"
            }

            GradientStop {
                position: 1
                color: "#b9b6e5"
            }
        }
        layer.enabled: false

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
            opacity: 0.89
            color: "#dcdcdc"

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
            color: "#5193a5"

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
        width: Constants.width
        height: Constants.height
        visible: false
        color: "#000000"
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10
        gradient: Gradient {
            orientation: Gradient.Vertical
            GradientStop {
                position: 0
                color: "#7de2fc"
            }

            GradientStop {
                position: 1
                color: "#b9b6e5"
            }
        }

        Text {
            id: addRecipeTitle
            visible: true
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

        Column {
            id: column
            x: 108
            y: 175
            width: 1107
            height: 493

            RowLayout {
                id: recipeNameRow
                height: 100
                visible: true
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                clip: false
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10

                RowLayout {
                    id: rowLayout
                    width: 300
                    height: 100
                    property string property0: "This is a string"

                    Text {
                        id: text6
                        text: qsTr("Recipe Name:")
                        font.pixelSize: 24
                        Layout.leftMargin: 0
                    }

                    TextInput {
                        id: textInput1
                        width: 80
                        height: 20
                        text: qsTr("Text Input")
                        font.pixelSize: 16
                        Layout.leftMargin: 10
                    }
                }

                Button {
                    id: button
                    text: qsTr("Submit")
                }
            }

            ColumnLayout {
                id: addIngredientColumn
                width: 600
                height: 100
                anchors.top: recipeNameRow.bottom
                anchors.topMargin: 10

                RowLayout {
                    id: rowLayout2
                    width: 415
                    height: 80

                    TextEdit {
                        id: textEdit
                        width: 80
                        height: 20
                        text: qsTr("0")
                        font.pixelSize: 24
                    }

                    ComboBox {
                        id: comboBox
                        width: 50
                    }

                    ToolSeparator {
                        id: toolSeparator
                    }

                    TextEdit {
                        id: textEdit1
                        width: 80
                        height: 20
                        text: "Ingredient"
                        font.pixelSize: 24
                    }
                }

                Button {
                    id: button1
                    text: qsTr("Another Ingredient")
                }
            }

            Column {
                id: column1
                width: 200
                anchors.top: addIngredientColumn.bottom
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 10
                anchors.topMargin: 10

                TextEdit {
                    id: textEdit2
                    width: 200
                    height: 40
                    text: qsTr("Other Instrucions")
                    font.pixelSize: 24
                }
            }
        }
    }

    Rectangle {
        id: duplicateRecipeWindow
        x: 0
        y: 0
        width: Constants.width
        height: Constants.height
        visible: false
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#7de2fc"
            }

            GradientStop {
                position: 1
                color: "#b9b6e5"
            }
            orientation: Gradient.Vertical
        }

        Text {
            id: duptitle
            height: 110
            visible: true
            text: qsTr("DUPLICATE RECIPE")
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            font.pixelSize: 70
            horizontalAlignment: Text.AlignHCenter
            anchors.rightMargin: 45
            anchors.leftMargin: 45
            anchors.topMargin: 62
        }

        Button {
            id: dupeBackToMain
            x: 1002
            text: qsTr("Back To Main Menu")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 20
            anchors.topMargin: 20

            Connections {
                target: dupeBackToMain
                onClicked: duplicateRecipeWindow.visible = false
            }
        }
    }

    Rectangle {
        id: shareRecipeWindow
        x: 0
        y: 0
        width: Constants.width
        height: Constants.height
        visible: false
        radius: 10
        border.color: "#ffcfcf"
        border.width: 10
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#7de2fc"
            }

            GradientStop {
                position: 1
                color: "#b9b6e5"
            }
            orientation: Gradient.Vertical
        }

        Text {
            id: shareTitle
            text: qsTr("Share Recipe")
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
            id: shareBackToMain
            text: qsTr("Back To Main Menu")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 20
            anchors.topMargin: 20

            Connections {
                target: shareBackToMain
                onClicked: shareRecipeWindow.visible = false
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
