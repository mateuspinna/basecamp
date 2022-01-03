#!/bin/sh
gcc -Wall -Wextra -Werror rush04.c ft_putchar.c main.c -o rush.out

./rush.out 5 5
echo "_5X5_

"
./rush.out 5 1
echo "_5X1_

"
./rush.out 1 5
echo "_1X5_

"
./rush.out 1 1
echo "_1X1_

"
./rush.out 5 3
echo "_5X3_

" 

