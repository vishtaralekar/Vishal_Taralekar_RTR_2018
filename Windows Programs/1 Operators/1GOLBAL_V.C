#include <stdio.h>
#include <conio.h>
int count=1;

int main()
{

	clrscr();
	printf("global count is%d\n",count);
	add1();
	add2();
	getch();
	return(0);
}
int add1()
{
	printf("first function count%d\n",count+1);
	return(0);
}
int add2()
{
	printf("Second function count%d\n",count+2);
	return(0);
}