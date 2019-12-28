# Install
```
sudo apt update && sudo apt install -y python3-pip
sudo pip3 install platformio
platformio init --board nanoatmega328
curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core/master/scripts/99-platformio-udev.rules | sudo tee /etc/udev/rules.d/99-platformio-udev.rules
sudo service udev restart
```
# Upload
```
platformio run -t upload
```


