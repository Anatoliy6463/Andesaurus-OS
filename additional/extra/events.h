#include <stdbool.h>
#include <stdio.h>
/*Library for events in T-GameC
Copyright (C) 2023 Andesaurus-Sesto*/
void shop(int money, int ta, int persiki, bool armor, bool sword)
{
	puts("Добро пожаловать в магазин! Что бы вы хотели купить? Телепортатор = 1, персики = 2, броня = 3, меч = 4");
	int shopin;
	scanf("%d", &shopin);
	if (shopin == 1)
	{
		money -= 45;
		ta = 1;
	}
	if (shopin == 2)
	{
		puts("Сколько персиков вы бы хотели купить?");
		scanf("%d", &shopin);
		money = money - 1 * shopin;
        persiki = persiki * shopin;
	}
	if (shopin == 3)
	{
		armor = true;
		money -= 20;
	}
	if (shopin == 4)
	{
		sword = true;
		money -= 15;
	}
}
void check(int ta, int result) 
{
	if (ta == 0)	result = 0;
	if (ta == 1)	result = 1;
}
void teleport(int X, int Y, int result, int money)
{
	printf("Добро пожаловать в телепортатор! Введите координаты телепортации");
	scanf("%d%d", &X, &Y);
	puts("Teleport activating\n");
	getchar();
	puts("Телепортация прошла успешно\n");
	if (result == 1) money -= 1;
}
void heal(int hunger, int hp)
{
  if (hunger < 0)
  {
    hunger = 0;
    hp = 100;
  }
}
void damage(int hunger, int hp)
{
  if (hunger >= 100)
  {
    hunger = 100;
    hp -= 15;
  }
}
int die()
{
  puts("GAME OVER!\007\n");
  return (0);
}
void dragon(int hp, int inp, int money, int dragonhp, bool armor, bool sword)
{
	puts("Здесь живёт дракон!\n");
	inp = getchar();
	if (armor == false) hp -= 20;
	if (armor == true) hp -= 5;
	if (inp == 'Z')
	{
		if (sword == true) dragonhp -= 5;
		if (sword == false) dragonhp -= 2;
	}
	if (dragonhp < 0)
	{
		puts("Вы победили дракона!\n\007\007\007");
		money+=1000;
	}
}
