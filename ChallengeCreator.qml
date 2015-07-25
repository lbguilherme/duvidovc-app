import QtQuick 2.4
import Duvido 1.0
import "qrc:/components"
import "qrc:/material"
import "qrc:/singletons"

Item {
    ActionBarButton {
        icon: "qrc:/artwork/icons/send12.png"
        onClicked: {
            forceActiveFocus();
            console.log(challenge.verify());
            if (challenge.verify()) {
                creator.submit();
                goBack();
                StackManager.go("qrc:/frags/MyChallenges.qml");
            }
        }
    }

    ChallengeCreator {
        id: creator
        title: challenge.title
        description: challenge.description
        reward: challenge.reward
        targets: challenge.targets
        image: challenge.image
        duration: challenge.duration
    }

    Scrollable {
        anchors.fill: parent

        EditableChallenge {
            id: challenge
        }
    }
}
