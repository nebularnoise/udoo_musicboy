# Udoo MusicBoy

This is the result of a class assignment of the ATIAM Master's Degree at IRCAM.

The assignment was to design an interactive interface with the _Arduino-like_ part of the supplied **Udoo DualLite** board, to drive a Pd~ patch running on the _Raspberry-Pi-like_ part of the board.

## Software:

UDOObuntu 2.2.0 (Ubuntu 14.04 LTS)

PureData:

- [Pd~ 0.46.6 compiled for Udoo](http://msp.ucsd.edu/Software/pd-0.46-6.udoo.tar.gz)
- [Pd~ Deken external](https://github.com/pure-data/deken) for easily adding externals
- `comport` external (installed with Deken)
- [`gpio` external](https://github.com/irllabs/Udoo/tree/master/puredata/gpio)

## Hardware

We went for two joysticks, and an arcade button to make our interface. This turns the Udoo into a gamepad, which is very nice to perform on.

This gives us:

- Four potentiometers (2 XY joysticks) using analog inputs
- Three buttons (2 clickable joysticks and an arcade button) using digital inputs
