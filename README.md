# Pathfinder
<img align="left" src="https://raw.githubusercontent.com/sontung/pathfinder/master/IMG_1131.JPG" hspace="15" width="150px" style="float: left">
An remote controlled robot that navigates around and transmits video through its camera. The project consists of three main hardwares: Raspberry Pi, Arduino Uno and a laptop running Windows. RPi controls the camera and transmits images back to the laptop by local network (SSH communication). Arduino controls the motors and lets the robot move as commanded by laptop through bluetooth. The laptop sends commands to RPi and Arduino and receives and streams video live. 

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
<a href="https://youtu.be/gYHp8NsBYWQ" target="_blank"><img src="http://img.youtube.com/vi/gYHp8NsBYWQ/0.jpg" alt="Demo video" width="240" height="180" border="10" /></a>
