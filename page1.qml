import QtQuick 2.0


Item
{

Rectangle {
    id: page
    width: root.width; height: 480
    color: "lightgray"

    MouseArea
    {
      id: mouseArea;
      anchors.fill: parent
      enabled: page.visible
      onClicked:
      {
          console.log("Mouse Area from Text Box")
      }
    }

    Text {
        id: helloText
        text: "Hello world!"
        y: 30
        anchors.horizontalCenter: page.horizontalCenter
        font.pointSize: 24; font.bold: true

        states: State {
            name: "down"; when: mouseArea.pressed === true
            PropertyChanges { target: helloText; y: 160; rotation: 180; color: "red" }
        }
        transitions: Transition {
            from: ""; to: "";
            ParallelAnimation {
                NumberAnimation { properties: "y,rotation"; duration: 500; easing.type: Easing.InOutQuad }
                ColorAnimation { duration: 500 }
            }
        }
    }
}
}
