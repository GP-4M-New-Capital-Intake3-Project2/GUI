#!/bin/bash

# Read SSID from the first line of config.txt
read -r ssid < /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/WifiInformation.txt

read -r password < <(sed -n '2p' /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/WifiInformation.txt)


# Print the SSID and password
echo "SSID: $ssid"
echo "Password: $password"

#sudo nmcli device wifi connect "$ssid" password "$password"
# Connect to the specified SSID with the provided password
sudo nmcli device wifi connect "$ssid" password "$password" &>/dev/null

if [ $? -eq 0 ]; then
    result="1"
else
    result="0"
fi

# Write the result to a file
echo "$result" > connectionCheck.txt
