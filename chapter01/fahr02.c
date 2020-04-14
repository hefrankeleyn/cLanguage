#include <stdio.h>

/* 当fahr=0，20，……，300时，分别打印
华氏温度与摄氏温度的对应表*/

main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0; /* 温度表的上限 */
  upper = 300; /* 温度表的上限 */
  step = 20;  /* 步长 */
 
  printf("《华氏温度转摄氏温度》"); 
  printf("\n");
  fahr = lower;
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t%6.1f\n",fahr,celsius);
    fahr = fahr + step;
  }
}
