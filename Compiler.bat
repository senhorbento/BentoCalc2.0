gcc -c src\menus.c -Iinclude -o obj\menus.o
gcc -c src\formulas.c -Iinclude -o obj\formulas.o
gcc -c src\main.c -Iinclude -o obj\main.o
gcc obj\menus.o obj\formulas.o obj\main.o -o main.exe
