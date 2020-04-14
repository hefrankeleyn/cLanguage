#include <stdio.h>
#define MAXLINE 62 /* 允许的输入行的最大长度 */

/* 默认返回类型为int， 该int可以省略 */
int getLineStr(char line[], int maxline);
void copyLine(char to[], char from[]);


int main(){
  int len;  /* 当前行长度 */
  int max;  /* 目前位置发现的最长行的长度 */
  char line[MAXLINE];  /* 当前输入行 */
  char longest[MAXLINE];  /* 用于保存最长的行 */
  
  max = 0;
  while ((len = getLineStr(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      printf("max:%d\n",max);
      copyLine(longest, line);
    }
  }
  if (max > 0){
    printf("%s", longest);
  }
  return 0;
}

/* getLineStr 函数： 将一行读入到s中并返回其长度 */
int getLineStr(char s[], int lim){
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n';++i){
    s[i] = c;
  }
  if(i>60){printf("i:%d",i);}
  if ( c == '\n'){
    s[i] = c;
    ++i;
  }
  if(i>=61){printf("i:%d",i);}
  s[i] = '\0';
  return i;
}

void copyLine(char t[], char f[]){
  int i;

  i = 0;
  while ((t[i] = f[i]) != '\0'){
    ++i;
  }
}
