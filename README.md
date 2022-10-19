M-Bus for Zephyr/nRF
====================

This Zephyr M-Bus application is currently biased towards the nRF SDK.
Most of this repository is simply boiler plate to include the [Zephyr
M-Bus module][1].  When trying out, make sure to use matching versions
of the two.


Initial Set Up
--------------

First install the Nordic toolchains, from here on we refer to them as
installed in `~/src/ncs`.

Clone this repository and `cd` into it, we use

    cd ~/src
    git clone https://github.com/addiva-elektronik/zephyr-mbus-app.git

Then follow the next three steps:

     west init -l app
     west update
     source env.sh
     cd app/

> Please note, sourcing `env.sh` needs to be done every time you start a
> new terminal.  Also, if the initial `west init` failed, you may not
> have a complete workspace available and the source command will fail.

To update the application to the latest West manifest (which tracks
the M-Bus mainline branch), use:

     west update


Building the Application
------------------------

To initialize the application for first build, target a board (`-b foo`)
and remember the device tree overlay to define the `mbus0` UART:

    west build -c -b nrf5340dk_nrf5340_cpuapp -- -DDTC_OVERLAY_FILE=nordic.overlay
 
Subsequent rebuilds can be done with:

    west build


Flash the Application
---------------------

    west flash

You can now use ttyACM0 to connect to your M-Bus and ttyACM1 is the
Zephyr command shell with an `mbus` family of commands available.

[1]: https://github.com/addiva-elektronik/zephyr-mbus-app
