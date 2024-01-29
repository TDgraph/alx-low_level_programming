# 0x18. C - Dynamic libraries

##TASKS

1. Create the dynamic library libdynamic.so containing all the functions listed below:

2. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

3. I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

4. I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

5. I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

## Function Prototypes :floppy_disk:
The following files are scripts written for the projects written in C:


## Table of contents
Files | Description
----- | -----------
[libdynamic.so](./libdynamic.so) | C dynamic library containing the function definitions
[main.h](./main.h) | Header files containing the function prototypes
[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory
[100-operations.so](./100-operations.so) | C dynamic library that contains C functions that can be called from Python
[random.so](./random.so) | C dynamic library to inject in a giga million program
[101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
