#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.o -o liball.so -shared
