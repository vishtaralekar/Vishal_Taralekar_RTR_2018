#include<stdio.h>
#include<conio.h>

int main()
{
	int num=12;
	char ch='V';
	char str[] = "Astromedicom";
	long longnum=56498785L;
	unsigned int b=7;
	float f_num =201.125f;
	double d_pi= 3.14159265358979323846;
	clrscr();
	printf("Number in decimal value %d\n",num);
	printf("Number in octal format by %o\n",num);
	printf("Number in Hexadecimal letter in lower case %x\n",num);
	printf("Number in Hexadecimal letter in lower case %X\n",num);
	printf("character format by %c\n",ch);
	printf("Chatacter format by %s\n",str);
	printf("Number in long integer format %ld\n",longnum);
	printf("unsigned integer using %u\n",b);
	printf("f_num using %f\n",f_num);
	printf("f_num using %4.2f\n",f_num);
	printf("f_num using %2.1f\n",f_num);
	printf("d_pi Double precision floating point number without Exponential %g\n",d_pi);
	printf("d_pi Double precision floating point number with exponential(lower case) %e\n",d_pi);
	printf("d_pi Double precision floating point number with Exponential(Upper case) %E\n",d_pi);
	printf("d_pi Double hexadecimal value of 'd_pi'(Hexadecimal Letter in lower case) %a\n",d_pi);
	printf("d_pi Double Hexadecimal value of 'd_pi'(Hexadecimal Letter in Upper case) %A\n",d_pi);
	getch();
	return(0);
}