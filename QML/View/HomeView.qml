import QtQuick 2.0
import QtQuick.Controls 2.12

Item {
    id: root

    signal getWeatherClicked();

    Button {
        id: getWeatherButton
        text: "Get data"
        onClicked: getWeatherClicked()
    }
}
