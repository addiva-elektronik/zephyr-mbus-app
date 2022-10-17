M-Bus for Zephyr/nRF
====================

This Zephyr M-Bus application is currently biased towards the nRF SDK.
To build the application:

 1. Set up the Nordic toolchains, here we use `~/src/ncs`
 2. Clone this repository and `cd` into ti, we use `~/src/zephyr-mbus-app`

Then follow the next three steps:

     west init -l app
     source env.sh
     west build -c -b nrf5340dk_nrf5340_cpuapp -- -DDTC_OVERLAY_FILE=nordic.overlay
 
> Please note, sourcing `env.sh` needs to be done every time you start a
> new terminal.  Also, if the initial `west init` failed, you may not
> have a complete workspace available and the source command will fail.

Flash to the board

    west flash

You can now use ttyACM0 to connect to your M-Bus and ttyACM1 is the
Zephyr command shell with an `mbus` family of commands available.
