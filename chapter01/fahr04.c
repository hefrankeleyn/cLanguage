#include <stdio.h>

/* 当fahr=0，20，……，300时，分别打印
华氏温度与摄氏温度的对应表*/

main()
{
  int fahr;

  for (fahr=300; fahr>=0; fahr = fahr - 20){
    printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
  }
}
