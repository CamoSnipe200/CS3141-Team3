

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
        visible: true
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
        visible: true
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
                width: 186
                height: 106
                visible: true
                text: qsTr("Add")
                font.kerning: true
                icon.color: "#ddff4545"
                Layout.fillHeight: true
                Layout.fillWidth: true

                Connections {
                    target: addRecipeButton
                    onClicked: addRecipeWindow.visible = true;
                }
            }

            Button {
                id: viewRecipeButton
                width: 186
                height: 106
                visible: true
                text: qsTr("View")
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
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
                id: shareRecipeButton
                width: 186
                height: 106
                visible: true
                text: qsTr("SHARE")
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

                Connections {
                    target: shareRecipeButton
                    onClicked: shareRecipeWindow.visible = true
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
            id: recipePreview
            x: 752
            y: 194
            width: 519
            height: 498
            opacity: 0.89
            visible: true
            color: "#dcdcdc"

            Text {
                id: recipeName
                x: 201
                y: 54
                width: 118
                height: 42
                text: qsTr("Recipe Name")
                font.pixelSize: 20
            }

            Text {
                id: ingredient
                x: 80
                y: 260
                text: qsTr("Ingredients")
                font.pixelSize: 14
            }

            Text {
                id: cookTime
                x: 315
                y: 260
                width: 68
                height: 33
                text: qsTr("Cook Time")
                font.pixelSize: 14
            }

            Text {
                id: prepMaterials
                x: 284
                y: 90
                text: qsTr("Preperation Materials")
                font.pixelSize: 14
            }

            Image {
                id: image
                x: 47
                y: 90
                width: 135
                height: 134
                source: "qrc:/qtquickplugin/images/template_image.png"
                fillMode: Image.PreserveAspectFit
            }

            Button {
                id: editRecipeOnlyButton
                x: 8
                y: 11
                width: 158
                height: 43
                visible: true
                text: qsTr("Edit")
                Layout.fillWidth: false

                Connections {
                    target: editRecipeOnlyButton
                    onClicked: editRecipeWindow.visible = true
                }

                Connections {
                    target: editRecipeOnlyButton
                    onClicked: viewRecipeWindow.visible = false
                }
                Layout.fillHeight: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                icon.color: "#ddff4545"
            }

            Button {
                id: duplicateAndEditButton
                x: 353
                y: 11
                width: 158
                height: 43
                visible: true
                text: qsTr("Duplicate and Edit")
                Layout.fillWidth: false
                Connections {
                    target: duplicateAndEditButton
                    onClicked: editRecipeWindow.visible = true
                }

                Connections {
                    target: duplicateAndEditButton
                    onClicked: console.log("clicked")
                }
                Layout.fillHeight: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                icon.color: "#ddff4545"
            }


        }

        Rectangle {
            id: searchBar
            x: 81
            y: 237
            width: 642
            height: 49
            color: "#5193a5"

            TextArea {
                id: viewRecipeSearchBox
                x: 10
                y: 8
                width: 617
                height: 45
                text: ""
                font.pointSize: 11
                placeholderText: qsTr("Please Search for the Recipe to Duplicate Here")
                placeholderTextColor: "#0e08b7"
            }
        }

        Text {
            id: viewRecipeSearchTitle
            x: 81
            y: 194
            width: 642
            height: 37
            text: qsTr("Recipe Finder")
            font.pixelSize: 25
            horizontalAlignment: Text.AlignHCenter
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
                        visible: true
                        displayText: "Tbsp"
                        textRole: ""
                        editable: false
                        currentIndex: 0

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
        id: shareRecipeWindow
        x: 0
        y: 0
        width: Constants.width
        height: Constants.height
        visible: true
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

        Button {
            id: sharePDF
            x: 632
            y: 268
            text: qsTr("SHARE TO PDF")
        }
    }
    states: [
        State {
            name: "clicked"
            when: addRecipeButton.checked
        }
    ]
}


