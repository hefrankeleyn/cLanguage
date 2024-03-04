#include <stdio.h>

/*
    当fahr = 0, 20, ..., 300时， 分别打印摄氏温度与华氏温度对照表;
    浮点数版本
*/
main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;    /* 温度表的下限*/
    upper = 300; /* 温度表的上限*/
    step = 20;  /*步长*/
    celsius = lower;
    printf("摄氏温度与华氏温度对照表：\n");
    while ( celsius <= upper)
    {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}