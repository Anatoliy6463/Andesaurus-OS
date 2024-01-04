#include <stdio.h>
#include <string.h>
#include "games.h"
#include "apps.h"
#include "base.h"
#include "terminal.h"
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
