# Pathfinder
<img align="left" src="https://www.dropbox.com/s/44vll983frym8z3/IMG_1131.JPG?dl=0" hspace="15" width="70px" style="float: left">
An remote controlled robot that navigates around and transmits video through its camera.
## How it works
The project consists of three main hardwares: Raspberry Pi, Arduino Uno and a laptop running Windows. RPi controls the camera and transmits images back to the laptop by local network (SSH communication). Arduino controls the motors and lets the robot move as commanded by laptop through bluetooth. The laptop sends commands to RPi and Arduino and receives and streams video live. 
## Libraries used
* [pygame](http://www.pygame.org/) - GUI
* [paramiko](http://www.paramiko.org/) - SSH connection
* [picamera](https://picamera.readthedocs.org/en/release-1.10/) - controllling the camera
## Software used
* [VLC](http://www.videolan.org/vlc/index.html) - streaming video from Raspberry Pi
## Hardware used
* Raspberry Pi
* Arduino Uno and Arduino Motor Shield
* Picamera
* WiPi wifi dongle for Raspberry Pi
* HC-06 bluetooth module
## Demo video
Coming soon
