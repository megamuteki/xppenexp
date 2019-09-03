# This is just a experimental XP-PEN kernel module
This is used digimend kernel module.
Original Source Code
Please refer original github.
https://github.com/DIGImend

### Installing Debian package ###

If you're using Debian or a derived distro, such as Ubuntu, and are installing
a release, please use the .deb package. If you're not using a Debian-based
distro, or the .deb package didn't work, you can install the driver using
DKMS, or manually, as described below.

### Installing from source ###

Source is either an unpacked release tarball (.tar.gz file), an unpacked
source code archive downloaded from GitHub (.zip file), or source code checked
out from Git.

Before installing from source in any way, make sure you have the headers for
your kernel installed (on Debian-based systems):

    sudo apt-get install -y "linux-headers-$(uname -r)"

or (on Fedora-based systems):

    sudo dnf install -y "kernel-devel-uname-r == $(uname -r)"

If you get "Error: Unable to find a match" from the above command, make sure
your kernel is up-to-date, and if not, update it and try again.

#### Installing from source with DKMS ####

DKMS (Dynamic Kernel Module Support) is a system for installing out-of-tree
Linux kernel modules, such as DIGImend kernel drivers. It helps make sure the
modules are built with correct kernel headers and are properly installed, and
also automatically reinstalls the modules when the kernel is updated.

Installing with DKMS is the recommended way of installing development versions
of DIGImend kernel drivers.

To install with DKMS, make sure you have the `dkms` package installed (on
Debian-based distros):

    sudo apt-get install -y dkms

or (on Fedora-based distros):

    sudo dnf install -y dkms

After that, run the following command from the source directory to install:

    sudo make dkms_install

Watch for any errors in the output, and if the drivers installed successfully,
they will be automatically rebuilt and reinstalled each time the kernel is
updated.

#### Installing from source manually ####

To install from source manually, first build the drivers. Run the following
command in the source directory:

    make

Then, to install the drivers, run this command in the same directory:

    sudo make install

Note that if you built and installed the drivers this way, you will need to
run `make clean` in the source directory, and then redo the above, after each
kernel upgrade.


Uninstalling
------------

### Debian package ###

To uninstall a Debian package simply use your favorite package-management
tools.

### DKMS-installed package ###

To uninstall a DKMS-installed package execute `make dkms_uninstall` as root in
the package source directory.

### Manually-installed package ###

To uninstall a manually-installed package execute `make uninstall` as root in
the package source directory.

Upgrading / downgrading
-----------------------

### Manually-installed package ###

If you've manually installed a version of this package before, please
uninstall it before installing another one, using the sources you used for
installation.


Experimental Models
-----------------------
XP-PEN

○XP-Pen Artist10s

○XP-Pen Artist10sV2

○XP-Pen Artist13.3

○XP-Pen Artist15.6

○XP-Pen Artist15.6Pro

○XP-Pen Artist16

○XP-Pen Artist16Pro

○XP-Pen Artist22HD

○XP-Pen Artist22E

○XP-Pen Artist22Pro

○XP-Pen Artist22EPro

○XP-Pen DECO01

○XP-Pen DECO01V2

○XP-Pen Deco02

○XP-Pen DECO03

○XP-PEN Star01

○XP-PEN Star03

○XP-Pen Star04

○XP-Pen Star05

○XP-Pen Star06

○XP-PEN G430

○XP-PEN G540

UGEE

○UGEE M708

○UGEE UG-1910B

○UGEE UG-2200

○UGEE UG-2150

○UGEE EX-07

○UGEE G5



Experimental Models
-----------------------
![alt text](https://raw.githubusercontent.com/megamuteki/images/master/xppenexp/AzPainter.png)

