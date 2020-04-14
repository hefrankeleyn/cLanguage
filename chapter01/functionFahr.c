#include <stdio.h>

/* 当fahr=0，20，……，300时，分别打印
华氏温度与摄氏温度的对应表*/

int fahrToCelsius(int f);

main()
{
  int fahr, celsius;
  int lower, upper, step;
  
  lower = 0; /* 温度表的上限 */
  upper = 300; /* 温度表的上限 */
  step = 20;  /* 步长 */
  
  fahr = lower;
  while(fahr <= upper){
    printf("%3d\t%6d\n",fahr,fahrToCelsius(fahr));
    fahr = fahr + step;
  }
}

int fahrToCelsius(int fahr){
  return 5 * (fahr - 32) /9 ;
}
