#include <stdio.h>
#include <string.h>
#include "games.h"
#include "apps.h"
#include "base.h"
void boot();
void ls(char[]);
int terminal();
void deleten(char[]);
int main()
{
	boot();
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
int terminal()
{
	char input[256];
	while (strcmp(input, "exit") != 0)
	{
		puts("user@minian:\t");
		fgets(input, 255, stdin);
		deleten(input);
		if (strcmp(input, "help") == 0)
		{
			puts("exit - выход из Minian\ncreate_file - создать файл\nread_file - прочитать файл\ngame - игра \"T-GameC\"\n");
            clear(input); // очистка буфера
		}
		else if (strcmp(input, "create_file") == 0)
		{
			puts("Введите название файла:\t");
			char filenam[256];
			fgets(filenam, 255, stdin);
			deleten(filenam);
			if (fopen(filenam, "r") != NULL)
			{
				puts("ФАЙЛ УЖЕ СУЩЕСТВУЕТ!!!\007\n");
				clear(input);
			}
			else
			{
				FILE *bin = fopen(filenam, "w");
				fclose(bin);
				clear(input);
			}
		}
		else if (strcmp(input, "info") == 0)
		{
			puts("Это версия Andesaurus-OS, которая использует Minian в качестве эмулятора терминала вместо Andesaurus Shell\n");
			clear(input);
		}
		else if (strcmp(input, "bubble_sort") == 0)
		{
			puts("Введите количество чисел, а затем введите сами числа:\t");
			int a = 0;
			scanf("%d", &a);
			int n[a];
			for (int i = 0; i < a; i++)
				n[i] = 0;
			bubble_sort(a, n);
			puts("Сортировка завершена! Запуск печати...\n\n\n\n\n\n");
			for (int i = 0; i < a; i++)
			{
				printf("%d\n", n[i]);
			}
		}
		else if (strcmp(input, "read_file") == 0)
		{
			puts("Введите название файла:\t");
			char filenam[256];
			fgets(filenam, 255, stdin);
			deleten(filenam);
			FILE *f = fopen(filenam, "r");
			if (f == NULL)
			{
				puts("ФАЙЛА НЕ СУЩЕСТВУЕТ, ПОЖАЛУЙСТА, СОЗДАЙТЕ ЕГО С ПОМОЩЬЮ КОМАНДЫ create_file\n\007");
				clear(input);
			}
			else
			{
				FILE *f = fopen(filenam, "r");
				char ch;
				do {
        				ch = fgetc(f);
        				printf("%c", ch);
    				} while (ch != EOF);
				puts("\n");
				clear(input);
			}
		}
		else if (strcmp(input, "\0") == 0)
		{
			clear(input);
		}
		else if (strcmp(input, "game") == 0)
		{
			puts("Загрузка...\n");
			game();
		}
		else if (strcmp(input, "exit") == 0)
		{
			puts("Завершение...\n");
			clear(input);
			int returncode = 0;
			return returncode;
		}
		else 
		{
			printf("%s - команда не найдена, для получения списка команд, введите help\n\007", input);
		}
	}
}
void deleten(char* in)
{
    if ((strlen(in) > 0) && (in[strlen (in) - 1] == '\n'))
        in[strlen (in) - 1] = '\0';
}
