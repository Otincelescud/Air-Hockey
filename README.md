# Air Hockey

## Overview

An online video game where people can play Air Hockey

## Features

- Users can create an **Air Hockey Server** and **Port Forward** them for other players
- People can play **Air Hockey** together

## Instalation

### Requirements

- [sdl 2.30.2](https://github.com/libsdl-org/SDL/releases/tag/release-2.30.2)

### Build

After downloading the dependencies move the `SDL2.dll` file for your system architecture to the root of the project directory, then run the following commands from the terminal:

If you are on windows:
```
cd scr
g++ main.cpp game.cpp -I[Path to SDL2 include directory] -L[Path to SDL2 library directry for your system architecture] -lSDL2 -mwindows -o "..\Air Hockey.exe"
```

### Usage

Run the `Air Hockey.exe` or `Air Hockey.out` file that was generated in the root directory of the project.

## License

Copyright (C) 2024 Otincelescu Darius Marian

This program is distributed under the GNU General Purpose License Version 3, or (at your option) any later version.
For more information read the LICENSE and COPYING files.

## Acknowledgements

Huge thanks to **Carl Birch** from the Youtube Channel **Let's Make Games** :D! Without his tutorial series on how to make games in c++ with SDL2, making this game would have taken waaaay longer!

Thanks to the people behind Simple DirectMedia Layer for creating the SDL2 library and for distributing it open-source!