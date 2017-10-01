import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 480
    height: 480
    title: qsTr("Hello World")
    Loader { id: pageLoader }


    Rectangle {
        id: page1
        objectName: "rectangle"
        width: 480; height: 480
        color: "lightblue"
    }

    Item {
               width: 200; height: 200
               MouseArea {
                   anchors.fill: parent
                   onClicked:
                   {
                       console.log("on Mouse Clicked from Main")
                       pageLoader.source = "qrc:\page1.qml"
                   }
               }
           }
}
