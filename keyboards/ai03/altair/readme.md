# Altair

![altair](https://i.imgur.com/O9UXaCO.png)

ai03's third-generation ergonomic keyboard, 5-row variant  

* Keyboard Maintainer: [ai03](https://github.com/ai03-2725)
* Hardware Supported: Altair keyboard PCB
* Hardware Availability: Group buy

Make example for this keyboard (after setting up your build environment):

    make ai03/altair:default

Flashing example for this keyboard:

    make ai03/altair:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

qmk config user.keyboard=ai03/altair

qmk config user.keymap=vial

qmk flash -c -kb ai03/altair -km vial
