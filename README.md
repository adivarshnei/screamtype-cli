# SCREAMTYPE-CLI

Trying to make a CLI version of screamtype (displaying large text using ASCII art of the string) using C[^1].

- [x] When used with an argument, output to `stdout`.
- [ ] When no argument, display an interactive version using `curses`.
  - Currently problematic.
  - Not able to clear the characters with backspace, despite being able to modify the string which is controlling the characters being printed.
  - Overwriting the current string displayed on the terminal works, however.
- Currently hard-wraps
  -  Maybe try soft wrapping the string?

[^1]: Currently making with C, may end up trying another language if C proves problematic.

ASCII Art character map obtained from [](https://patorjk.com/software/taag/)

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

