``BIND_ACCESSIBILITY_SERVICE``
  * For inspecting the layout and content of the screen.

``BIND_INPUT_METHOD``
  * For Android to accept input via BRLTTY from your braille device's keyboard.

``FOREGROUND_SERVICE``
  * To prevent Android from pausing, killing, etc BRLTTY if there's a resource shortage.

``WAKE_LOCK``
  * For resetting the Android device's lock timer
    each time you interact with a control on your braille device.

``BLUETOOTH``
  * For communicating with a braille device via Bluetooth (API level <= 30).

``BLUETOOTH_CONNECT``
  * For connecting to an already-paried Bluetooth device (API level > 30).

``BLUETOOTH_SCAN``
  * For checking if Bluetooth device discovery is currently active (API level > 30).

``INTERNET``
  * For listening on a TCP/IP port for BrlAPI client connection requests.

``READ_EXTERNAL_STORAGE``
  * For reading customized data files
    from your Android device's primary shared/external storage area.

``SYSTEM_ALERT_WINDOW``
  * For presenting the Accessibility Actions chooser.

``RECEIVE_BOOT_COMPLETED``
  * For knowing when locked storage can be accessed after a reboot.

``REQUEST_INSTALL_PACKAGES``
  * For sideloading an upgrade (debug version only).

``ACCESS_WIFI_STATE``
  * For getting Wi-Fi status values (for the INDICATORS command).

``ACCESS_FINE_LOCATION``
  * For getting the Wi-Fi SSID (for the INDICATORS command).
  * For getting cell information (for the INDICATORS command).

``ACCESS_COARSE_UPDATES``
  * For getting the cell signal strength (for the INDICATORS command).

``READ_PHONE_STATE``
  * For getting the cell data network type (for the INDICATORS command).

