#include <stdio.h>
#include <conio.h>
int global_count;
int main()
{

extern int global_count;


	clrscr();
	global_count=1;
	printf("global count is%d\n",global_count);
	change_count();
	getch();
	return(0);

}
int change_count()
{

	printf("change count%d\n",global_count+1);
	return(0);

}




