//Author: Baishali Ghosh
#include<stdio.h>
int main()
{
      int opt; 
      float tem, chn;
      printf("Temperature Conversion Menu\n\n");
      printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit");
      printf("\nEnter your choice (1-2): ");
      scanf("%d", &opt); 
      switch(opt)
      {
                 case 1:printf("Enter temperature in Fahrenheit: ");
                        scanf("%f", &tem);
                        chn=0.55*(tem-32);
                        printf("Temperature in Celsius:%f ", chn);
                        break;
                 case 2:printf("Enter temperature in Celsius: ");
                        scanf("%f", &tem);
                        chn=1.8*tem+32;
                        printf("Temperature in Fahrenheit:%f ", chn);
                        break;
                default: printf("Wrong input!");  
      }
      getch();
      return 0;
}
 
