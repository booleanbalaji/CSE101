//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
int main()
{
      int n, t, i;
      printf("Enter the number whose multiplication table is to be printed: ");
      scanf("%d", &n);
      printf("Upto how many terms do you want to print it? ");
      scanf("%d", &t);
      printf("\n\n");
      for(i=1; i<=t; i++)
      {
              printf("%d*%d=%d\n", n, i, n*i);
      }
      getch();
      return 0;
}
       
