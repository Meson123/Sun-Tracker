# Setup Instructions for Sun Tracker Projects

This document provides step-by-step instructions to set up and run the Single-Axis and Two-Axis Sun Tracker projects using the Arduino IDE and Visual Studio Code with PlatformIO.

## Prerequisites

- Arduino Uno or compatible board
- USB Cable (Type A to B or micro USB)
- Required components (refer to `BoM.md` for details)
- Arduino IDE or Visual Studio Code with PlatformIO

## Arduino IDE Setup

### Single-Axis Sun Tracker

1. **Clone or Download the Repository**:
    - Clone this repository or download the ZIP file and extract it.

2. **Open the Project**:
    - Open the Arduino IDE.
    - Go to `File > Open` and select the `SingleAxisSunTracker.ino` file.

3. **Select the Board and Port**:
    - Go to `Tools > Board` and select your Arduino board (e.g., Arduino Uno).
    - Go to `Tools > Port` and select the COM port to which your Arduino is connected.

4. **Upload the Code**:
    - Click on the upload button (right arrow icon) to compile and upload the code to your Arduino board.

### Two-Axis Sun Tracker

1. **Clone or Download the Repository**:
    - Clone this repository or download the ZIP file and extract it.

2. **Open the Project**:
    - Open the Arduino IDE.
    - Go to `File > Open` and select the `TwoAxisSunTracker.ino` file.

3. **Select the Board and Port**:
    - Go to `Tools > Board` and select your Arduino board (e.g., Arduino Uno).
    - Go to `Tools > Port` and select the COM port to which your Arduino is connected.

4. **Upload the Code**:
    - Click on the upload button (right arrow icon) to compile and upload the code to your Arduino board.

## Visual Studio Code with PlatformIO Setup

### Install PlatformIO

1. **Install PlatformIO**:
    - Open Visual Studio Code.
    - Go to the Extensions view by clicking the square icon in the sidebar or pressing `Ctrl+Shift+X`.
    - Search for "PlatformIO IDE" and install it.

### Single-Axis Sun Tracker

1. **Clone or Download the Repository**:
    - Clone this repository or download the ZIP file and extract it.

2. **Open the Project**:
    - Open Visual Studio Code.
    - Go to `File > Open Folder` and select the folder containing this repository.

3. **Build and Upload the Code**:
    - Open the PlatformIO sidebar by clicking on the alien head icon.
    - Click on `Build` to compile the code.
    - Click on `Upload` to upload the code to your Arduino board.

### Two-Axis Sun Tracker

1. **Clone or Download the Repository**:
    - Clone this repository or download the ZIP file and extract it.

2. **Open the Project**:
    - Open Visual Studio Code.
    - Go to `File > Open Folder` and select the folder containing this repository.

3. **Build and Upload the Code**:
    - Open the PlatformIO sidebar by clicking on the alien head icon.
    - Click on `Build` to compile the code.
    - Click on `Upload` to upload the code to your Arduino board.

## PlatformIO Configuration File

Ensure you have a `platformio.ini` file in the root of your repository with the following content to configure PlatformIO for your Arduino board:

```ini
[env:arduino]
platform = atmelavr
board = uno
framework = arduino

upload_port = /dev/ttyUSB0  ; Adjust this to your specific port (e.g., COM3 on Windows)

lib_deps = 
    arduino-libraries/Servo@^1.1.8
