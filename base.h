#include <stdio.h>
#include <string.h>
void deleten(char* in)
{
    if ((strlen(in) > 0) && (in[strlen (in) - 1] == '\n'))
        in[strlen (in) - 1] = '\0';
}
void login(int result)
{
	char usrpass[16] = {0};
	FILE *f = fopen("rootpass.txt", "r");
	char validpass[16]; 
	fgets(validpass, 15, f);
	fgets(usrpass, 15, stdin);
	deleten(validpass);
	if (strcmp(usrpass, validpass) == 0)
	{
		result = 0;
		return;
	}
	else {
		result = 1;
		puts("\007\007\007\t\t\tПАРОЛЬ НЕПРАВИЛЬНЫЙ!!!\n");
		return;
	}
}
