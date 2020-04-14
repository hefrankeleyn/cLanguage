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
 
  printf("《摄氏温度转华氏温度》"); 
  printf("\n");
  celsius = lower;
  while(fahr <= upper){
    fahr = (9.0/5.0) * celsius + 32;
    printf("%3.0f\t%6.1f\n",celsius,fahr);
    celsius = celsius + step;
  }
}
