import QtQuick 2.0

Item {
   id: root
   y: parent.height
   width: windowWidth
   height: windowHeight-parent.height

   property real openness: 0

   Rectangle {
       anchors.fill: parent
       color: Qt.rgba(0, 0, 0, 0.7)
       opacity: root.openness
   }

   Surface {
       width: Math.min(360*dp, windowWidth - 60*dp)
       height: parent.height
       x: (root.openness - 1) * width
       elevation: root.openness > 0 ? 4 : 0
       backgroundColor: "#FAFAFA"
   }
}
