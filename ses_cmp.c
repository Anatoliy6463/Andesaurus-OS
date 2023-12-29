#include <stdlib.h>
#include <stdio.h>
int main()
{
    puts("Запуск... Начало компиляции\n");
    system("gcc -o apps apps.h");
    puts("1/8 программ скомпилировано\n");
    system("gcc -o games games.h");
    puts("2/8 программ скомпилировано\n");
    system("gcc -o keyfrases keyfrases.h");
    puts("3/8 программ скомпилировано\n");
    system("gcc -o sys system.c");
    puts("4/8 программ скомпилировано\n");
    system("gcc -o events extra/events.h");
    puts("5/8 программ скомпилировано\n");
    system("gcc -o keys extra/keys.h");
    puts("6/8 программ скомпилировано\n");
    system("gcc -o packagemanager packagemanager.h");
    puts("7/8 программ скомпилировано\n");
    system("gcc -o reg registration.c");
    puts("8/8 программ скомпилировано\n");
    puts("\nЗапуск...\n");
    system("./reg");
}
