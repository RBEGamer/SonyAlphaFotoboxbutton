# SonyAlphaFotoboxbutton
This is a simple camera trigger used in a photobox setup.
Its designed for the Sony Alpha 7 with its multiport connector.
But its has a focus and shutter trigger output so you can use it for other camera too.
is possible to connect a other extern trigger through a BNC connector on the back.


# PARTS
* Arduino nano
* Arcade Pushbutton with LED
* 2x 1k resistor
* 2x optokouppler TLP624 or other
* slideswitch
* 9V battery clip
* [OPTIONAL] bnc solder connector male

* [FOR SONY CAMERAS] Sony-Multiport-Connector (like microusb, search on ebay for it)




# SCHEMATIC
See the schematic below to connect the Arduino to the camera via the optocouplers.
Or you can use the gerberfiles `/src/cam_trigger.zip` to create a pcb
![Gopher image](/documenation/schematic.png)
![Gopher image](/documenation/pcb.png)

# 3D PRINTING
To build the case you can print the files in the `/3d_printing_files` folder.
I used a 0.4 nozzle, 0.2mm layer height on a AnetA8.

# SOFTWARE
Flash the Arduino Sketch `/src/cam_flasher_sketch/cam_flasher_sketch.ino` to the Arduino-Nano. No libraries needed.


![Gopher image](/documenation/3db.png)

# VIDEO
[![Alt text](https://img.youtube.com/vi/3pIijfmjqSI/0.jpg)](https://www.youtube.com/watch?v=3pIijfmjqSI)

# PICTURES

![Gopher image](/documenation/top.JPG)
![Gopher image](/documenation/left.JPG)
![Gopher image](/documenation/inside-2.JPG)
