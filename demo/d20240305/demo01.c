#include <stdio.h>

/* 定义符号常量*/
#define LOWER 0 /* 表的下限 */
#define UPPER 300 /* 表的上限 */
#define STEP 20 /* 步长 */

/*
    当fahr = 0, 20, ..., 300时， 分别打印华氏温度与摄氏温度对照表;
    浮点数版本
*/
main() {
    int fahr;
    printf("华氏温度与摄氏温度对照表for版：\n");
    for (fahr=LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    
}