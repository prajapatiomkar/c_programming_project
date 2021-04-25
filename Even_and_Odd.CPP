//Program to check Even and Odd Number ,It Work on Turbo C.

#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  clrscr();
  printf("\n Enter any no :");
  scanf("%d",&num);
  if(num%2==0)
       {
	   printf("\n%d is an Even Number ",num);
       }
  else
       {
	    printf("\n%d is an Odd Number",num);
       }
  getch();
  return 0;
  }


//Note if you want to run in vs code only you have to remove clrscr() function.