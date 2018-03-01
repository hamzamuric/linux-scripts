#!/bin/bash

read -a info
if [ "${info[2]}" == "0.0" ]; then
        /usr/bin/gnome-calculator
else
        kill ${info[1]}
fi
