#include<stdio.h>
#include<conio.h>
int global_count;
int main()
{
	extern int global_count;
	clrscr();
	printf("count in 1st file%d\n",global_count+2);
	getch();
	return(0);
}