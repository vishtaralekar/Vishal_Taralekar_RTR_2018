#include<stdio.h>
#include<conio.h>
int global_count=0;
int main()
{
	clrscr();
	printf("Global funtion main%d\n",global_count+1);
	getch();
	return(0);
}

