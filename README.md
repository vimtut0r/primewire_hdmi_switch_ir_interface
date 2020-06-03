# Control HDMI switch over UART
Applies to this HDMI switch: https://www.primewire-connects.de/hdmi-switch-5port-schwarz

Model: 73031347

# How to use
Install `Arduino-IRRemote` library https://github.com/z3t0/Arduino-IRremote
Connect IR led to pin 3 on Arduino Nano (or appropiate pwm on other devices)
UART Speed: 9600

# Commands
No newline needed, just send single chars!

`P`: Power
`1`: Switch to port 1
`2`: Switch to port 2
`3`: Switch to port 3
`4`: Switch to port 4
`5`: Switch to port 5
`L`: Switch left (not tested: I assume it switches to the port number - 1)
`R`: Switch right

Will return `OK\r\n` after receiving a valid char.
