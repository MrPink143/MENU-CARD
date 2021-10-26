#include<stdio.h>
#include<conio.h>
void main()
{
 int a,qty,rate,total;
 clrscr();
 printf("\nMENU CARD:\n1.COFFEE\n2.TEA\n3.COLD COFFEE\n4.MILK\n5.STALC\n");
 printf("SELCT DRINK:");
 scanf("%d",&a);
 switch(a)
 {
 case 1:
  printf("\nYou have selected coffee.\nEnter the quantity:");
  scanf("%d",&qty);
  rate=5;
  total=qty*rate;
  printf("\ntotal amount:%d",total);
  break;

 case 2:
  printf("\nYou have selected tea.\nEnter the quantity:");
  scanf("%d",&qty);
  rate=10;
  total=qty*rate;
  printf("\ntotal amount:%d",total);
  break;

 case 3:
  printf("\nYou have selected cold coffee.\nEnter the quantity:");
  scanf("%d",&qty);
  rate=15;
  total=qty*rate;
  printf("\ntotal amount:%d",total);
  break;

 case 4:
  printf("\nYou have selected milk shake.\nEnter the quantity:");
  scanf("%d",&qty);
  rate=20;
  total=qty*rate;
  printf("\ntotal amount:%d",total);
  break;

 case 5:
  printf("\nYou have selected stalc.\nEnter the quantity:");
  scanf("%d",&qty);
  rate=25;
  total=qty*rate;
  printf("\ntotal amount:%d",total);
  break;
 }
 getch();
}