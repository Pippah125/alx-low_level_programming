#!/bin/bash
gcc -c *.o|ar rcs liball.a *.o|ranlib liball.a
