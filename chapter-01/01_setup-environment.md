## OS: windows
We will use [Atmel Studio 7](http://www.atmel.com/microsite/atmel-studio/), [WinAvr](http://sourceforge.net/projects/winavr/files/) and [AvrdudeGui](http://sourceforge.net/projects/avrdude-gui/).

#### _Setup environment:_
- Download and install Atmel Studio 7 (in administration mode).
- Download and install WinAvr (in administration mode).
- Download and extract AvrdudeGui in your preferred directory (in administration mode).

Now open a command prompt window, write avrdude and press enter. You should see the following lines:

```
Usage: avrdude [options]
Options:
  -p <partno>                Required. Specify AVR device.
  -b <baudrate>              Override RS-232 baud rate.
  -B <bitclock>              Specify JTAG/STK500v2 bit clock period (us).
  -C <config-file>           Specify location of configuration file.
  -c <programmer>            Specify programmer type.
  -D                         Disable auto erase for flash memory
  -i <delay>                 ISP Clock Delay [in microseconds]
  -P <port>                  Specify connection port.
  -F                         Override invalid signature check.
  -e                         Perform a chip erase.
  -O                         Perform RC oscillator calibration (see AVR053).
  -U <memtype>:r|w|v:<filename>[:format]
                             Memory operation specification.
                             Multiple -U options are allowed, each request
                             is performed in the order specified.
  -n                         Do not write anything to the device.
  -V                         Do not verify.
  -u                         Disable safemode, default when running from a script.
  -s                         Silent safemode operation, will not ask you if
                             fuses should be changed back.
  -t                         Enter terminal mode.
  -E <exitspec>[,<exitspec>] List programmer exit specifications.
  -x <extended_param>        Pass <extended_param> to programmer.
  -y                         Count # erase cycles in EEPROM.
  -Y <number>                Initialize erase cycle # in EEPROM.
  -v                         Verbose output. -v -v for more.
  -q                         Quell progress output. -q -q for less.
  -?                         Display this usage.

avrdude version 5.10, URL: <http://savannah.nongnu.org/projects/avrdude/>
```

If you do not see these lines, then uninstall and install Winavr again.