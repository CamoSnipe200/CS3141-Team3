// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0

import QtQuick 6.4
import QtQuick.Window 6.4
import Recipe_App

Window {
    width: mainScreen.width
    height: mainScreen.height

    visible: true
    title: "Recipe_App"

    Screen01 {
        id: mainScreen
        x: 0
        y: 0
        width: 1400
        height: 700
    }

}

