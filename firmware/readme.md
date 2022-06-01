# POSpad PCB

![pos](https://i.imgur.com/6Fj8v2Ul.jpg)

Four key macropad that can be used for 2x2u POS keycaps

* Keyboard Maintainer: [kb-elmo](https://github.com/kb-elmo)
* Hardware Supported: POSpad PCB rev.1
* Hardware Availability: [Open source project](https://github.com/kb-elmo/POSpad)

Make example for this keyboard (after setting up your build environment):

    make kb_elmo/pos:default

Flashing example for this keyboard:

    make kb_elmo/pos:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard
* **Physical reset**: Briefly short the two contacts labeled "RESET" on the bottom of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
