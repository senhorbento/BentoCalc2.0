gcc -c src\menus.c -Iinclude -o obj\menus.o
gcc -c src\algebra.c -Iinclude -o obj\algebra.o
gcc -c src\eletrica.c -Iinclude -o obj\eletrica.o
gcc -c src\uteis.c -Iinclude -o obj\uteis.o
gcc -c src\main.c -Iinclude -o obj\main.o
gcc obj\algebra.o obj\eletrica.o obj\menus.o obj\main.o obj\uteis.o -o main.exe
