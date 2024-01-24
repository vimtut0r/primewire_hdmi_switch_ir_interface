# Control HDMI switch over UART
Applies to this HDMI switch: https://www.amazon.de/dp/B09MM5QT3R?psc=1&ref=ppx_yo2ov_dt_b_product_details

Model: HW-006

# How to use
- Install `Arduino-IRRemote` library https://github.com/z3t0/Arduino-IRremote
- Connect IR led to pin 3 on Arduino Nano (or appropiate pwm on other devices)
- UART speed: 9600 8N1

# Commands
No newline needed, just send single chars!

- `1`: Switch to port 1
- `2`: Switch to port 2
- `3`: Switch to port 3

Will return `OK\r\n` after receiving a valid char.
