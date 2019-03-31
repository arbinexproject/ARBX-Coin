
Debian
====================
This directory contains files used to package arbinexd/arbinex-qt
for Debian-based Linux systems. If you compile arbinexd/arbinex-qt yourself, there are some useful files here.

## arbinex: URI support ##


arbinex-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install arbinex-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your arbinexqt binary to `/usr/bin`
and the `../../share/pixmaps/arbinex128.png` to `/usr/share/pixmaps`

arbinex-qt.protocol (KDE)

