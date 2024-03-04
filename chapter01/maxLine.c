#include <stdio.h>

#define MAXLINE 1000  /* 允许的输入行的最大长度 */

int max;              /* 到目前为止发现的最长行的长度 */
char line[MAXLINE];    /* 当前的输入行 */
char longest[MAXLINE];  /* 用于保存最长的行 */

int getOneLine(void);
void copyOneLine(void);

/* 打印最大的输入行；特别版本 */
int main(){
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getOneLine()) > 0){
    /*printf("len%d\n",len);*/
    if (len > max){
      max = len;
      copyOneLine();
    }
  }
  if ( max > 0){
    printf("%d,%s", max,longest);
  }
  return 0;
}

/* 特别版 */
int getOneLine(void){
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE-2 && (c=getchar())!=EOF && c != '\n'; ++i){
    line[i] = c;
  }
  if (c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copyOneLine(void){
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i])!='\0'){
    ++i;
  }
} 
