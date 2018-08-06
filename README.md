# Systemtap Examples

Mostly taken from [Systemtap tutorial](https://sourceware.org/systemtap/tutorial/tutorial.html).

## Setup

Create the groups needed for running systemtap as user
and add the current user to the groups:

    :::bash
    sudo groupadd stapdev
    sudo groupadd stapusr
    
    :::bash
    sudo usermod -aG stapdev $USER
    sudo usermod -aG stapusr $USER
