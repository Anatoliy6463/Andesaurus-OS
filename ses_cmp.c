#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    puts("Запуск... Начало компиляции\n");
    system("gcc -o apps apps.h");
    puts("1/6 программ скомпилировано\n");
    system("gcc -o games games.h");
    puts("2/6 программ скомпилировано\n");
    system("gcc -o keyfrases keyfrases.h");
    puts("3/6 программ скомпилировано\n");
    system("gcc -o sys system.c");
    puts("4/6 программ скомпилировано\n");
    system("gcc -o events extra/events.h");
    puts("5/6 программ скомпилировано\n");
    system("gcc -o keys extra/keys.h");
    puts("6/6 программ скомпилировано\n");
    puts("\nЗапуск...\n");
    system("./sys");
}