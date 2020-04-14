#include <stdio.h>

#define  LOWER 0   /* 表的下限 */
#define  UPPER 300 /* 表的上限*/
#define  STEP  20  /* 布长 */

/* 当fahr=0，20，……，300时，分别打印
华氏温度与摄氏温度的对应表*/

main()
{
  int fahr;

  for (fahr=UPPER; fahr>=LOWER; fahr = fahr - STEP){
    printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
  }
}
