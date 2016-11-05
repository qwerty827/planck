# Planck Keyboard keymap (updated 11/4/2016)

This is the keymap of my current Planck Keyboard layout and I programmed it using C language and command prompt on my ubuntu server.

The planck keyboard I'm currently using is from R2 group buy of Massdrop, has rev4 pcb, MIT plate, orange anodized aluminum bottom, Zealios 78g switches, blue and orange LEDs and DSA Dolch Keycaps. 

For the default layer, I switched the positions between backlight, ctrl, alt and windows to fit the more traditional qwerty layout.

For the lower layer, I placed the number buttons on the top row and kept the shift on the left for symbol options. I've also put F1 to F12 on the left side of 2nd and 3rd row, and set modifier buttons to the right side, and 4 media keys at the default arrow key positions.

For the upper layer, I placed symbol options on the 1st row, and kept the media keys at the bottom row.

In Makefile, I changed to ENABLE_BLUETOOTH option to yes, since I'm working on making this keyboard wireless using Adafruit EZ key bluetooth module. 

*UPDATE 9/12/2016: I removed the mouse control keys in the upper layer and replaced 2 of them with opening and closing brackets and kept the enter and semicolon keys for programming purposes.

For more information about keyboard, visit <a href="http://olkb.com/">olkb.com</a> and <a href="https://github.com/jackhumbert/qmk_firmware">Jack's firmware</a> for details
