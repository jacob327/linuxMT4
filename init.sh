#!/usr/bin/env bash

dpkg --add-architecture i386 &&\
apt install -y software-properties-common apt-transport-https &&\
wget -qO - https://dl.winehq.org/wine-builds/winehq.key|apt-key add - &&\
apt-add-repository https://dl.winehq.org/wine-builds/debian/ &&\
apt update &&\
apt install -y --install-recommends winehq-stable winbind &&\
DEBIAN_FRONTEND=noninteractive apt install -y keyboard-configuration &&\
#apt install -y task-xfce-desktop &&\
apt install -y xfce4 xfce4-goodies gnome-icon-theme &&\
apt install tightvncserver &&\
echo '[ALL DONE]'

