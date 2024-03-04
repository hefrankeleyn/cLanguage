#include <string.h>
#include <stdio.h>

/**
 * 把数字转换成字符串； 
 */
void itoa(int n, char s[]);
void reverse(char s[]);

void showArray(char s[]);

int main(){
    
    int n = -234;
    char s[0];
    printf("n: %d\n", n);
    showArray(s);
    itoa(n, s);
    showArray(s);

}

void showArray(char s[]){
    int i;
    for(i=0;i<strlen(s);i++){
        printf("%c", s[i]);
        if(i==strlen(s)-1){
            printf("\n");
        }else{
            printf(",");
        }
    }
}

void itoa(int n, char s[]){
    int i, sign;
    if((sign = n)<0){
        n = -n;
    }
    i = 0;
    do{
        s[i++] = n%10 + '0';
    }while ((n/=10)>0);
    if(sign<0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]){
    int i=0, j=strlen(s)-1;
    for(;i<=j;i++,j--){
        int t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}