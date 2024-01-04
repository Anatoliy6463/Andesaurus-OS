#include <stdio.h>
#include <string.h>
#include "games.h"
#include "apps.h"
#include "base.h"
#include "terminal.h"
void boot();
void ls(char[]);
int terminal();
void deleten(char[]);
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
void clear(char *input)
{
	fputs("\0", stdin);
	for (int i = 0; i < sizeof(input); i++) input[i] = '\0';
}
