# SCREAMTYPE-CLI

Trying to make a CLI version of screamtype (displaying large text using ASCII art of the string) using ~C~[^1] C++[^2].

- [x] When used with an argument, output to `stdout`.
- [ ] ~When no argument, display an interactive version ~using `curses`~[^3].~
  - ~Currently problematic.~
  - ~Not able to clear the characters with backspace, despite being able to modify the string which is controlling the characters being printed.~
  - ~Overwriting the current string displayed on the terminal works, however.~
- [ ] When no argument, display an interactive version using `unistd.h` and `termios.h`
  - Works well enough
  - Can modify the text printed on screen to reflect the size of the terminal if it changes.
  - [ ] Need to implement line feeds
  - [ ] Need to implement some kind of border to display controls.
  - [ ] Maybe a different font?
- Currently hard-wraps
  - [ ] Maybe try soft wrapping the string?

[^1]: Currently making with C, may end up trying another language if C proves problematic.
[^2]: Turns out, C was problematic, shifted to C++
[^3]: Ditched curses in favor of using `unistd.h` and `termios.h` to use terminal signals to clear screen, print in different places, etc.

ASCII Art character map obtained from [](https://patorjk.com/software/taag/):
```
Standard by Glenn Chappell & Ian Chai 3/93 -- based on Frank's .sig
Includes ISO Latin-1
figlet release 2.1 -- 12 Aug 1994
Modified for figlet 2.2 by John Cowan <cowan@ccil.org>
  to add Latin-{2,3,4,5} support (Unicode U+0100-017F).
Permission is hereby given to modify this font, as long as the
modifier's name is placed on a comment line.

Modified by Paul Burton  12/96 to include new parameter
supported by FIGlet and FIGWin.  May also be slightly modified for better use
of new full-width/kern/smush alternatives, but default output is NOT changed.

Font modified May 20, 2012 by patorjk to add the 0xCA0 character
```

Example with arguments:

```
$ echo "$(tput cols)x$(tput lines)"
94x38
$ make run
./out/main.o "hello"
  _              _   _
 | |__     ___  | | | |   ___
 | '_ \   / _ \ | | | |  / _ \
 | | | | |  __/ | | | | | (_) |
 |_| |_|  \___| |_| |_|  \___/

$ make run STRING="Dark Was the Night, Cold Was the Ground"
./out/main.o "Dark Was the Night, Cold Was the Ground"
  ____                   _          __        __                     _     _
 |  _ \    __ _   _ __  | | __      \ \      / /   __ _   ___       | |_  | |__     ___
 | | | |  / _` | | '__| | |/ /       \ \ /\ / /   / _` | / __|      | __| | '_ \   / _ \
 | |_| | | (_| | | |    |   <         \ V  V /   | (_| | \__ \      | |_  | | | | |  __/
 |____/   \__,_| |_|    |_|\_\         \_/\_/     \__,_| |___/       \__| |_| |_|  \___|

  _   _   _           _       _               ____           _       _       __        __
 | \ | | (_)   __ _  | |__   | |_            / ___|   ___   | |   __| |      \ \      / /
 |  \| | | |  / _` | | '_ \  | __|          | |      / _ \  | |  / _` |       \ \ /\ / /
 | |\  | | | | (_| | | | | | | |_   _       | |___  | (_) | | | | (_| |        \ V  V /
 |_| \_| |_|  \__, | |_| |_|  \__| ( )       \____|  \___/  |_|  \__,_|         \_/\_/
              |___/                |/
                     _     _                    ____                                      _
   __ _   ___       | |_  | |__     ___        / ___|  _ __    ___    _   _   _ __     __| |
  / _` | / __|      | __| | '_ \   / _ \      | |  _  | '__|  / _ \  | | | | | '_ \   / _` |
 | (_| | \__ \      | |_  | | | | |  __/      | |_| | | |    | (_) | | |_| | | | | | | (_| |
  \__,_| |___/       \__| |_| |_|  \___|       \____| |_|     \___/   \__,_| |_| |_|  \__,_|
```

