#include <stdio.h>
#include <string.h>
#include "terminal.h"
void boot();
int main()
{
	int result;
	puts("Введите пароль:\t");
	login(result);
	if (result == 0)
	{
		boot();
		return (0);
	}
	else
		return(0);
}
void boot()
{
	puts("Идёт загрузка системы...\n");
	terminal();
}
