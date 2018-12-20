#include<stdio.h>
#include<conio.h>

int change_count()
{
	static int a=0;
	a=a+1;
	printf("change count%d\n",a);
	return(0);
}

int main()
{
	int a=5;
	clrscr();
	printf("a=%d\n",a);
	change_count();
	change_count();
	getch();
	return(0);
}
