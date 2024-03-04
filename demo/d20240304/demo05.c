#include <stdio.h>

/*
    当fahr = 0, 20, ..., 300时， 分别打印华氏温度与摄氏温度对照表;
    浮点数版本
*/
main() {
    int fahr;
    printf("华氏温度与摄氏温度对照表for版：\n");
    for (fahr=0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    
}