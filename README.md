# Mycroft Runner for KRunner (Plasma 5)

This is a Mycroft Plugin for Krunner.

## Installation ##
```
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=`kf5-config --prefix` -DKDE_INSTALL_QTPLUGINDIR=`kf5-config --qt-plugins`
make 
sudo make install
kquitapp krunner
krunner
```

## Usage ##

Mycroft AI is required to be running in the background
