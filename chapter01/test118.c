#include <stdio.h>
#define  MAXLINE  1000  /* maximum input line size */

int getOneLine(char line[], int maxline);
int removeEndEmptyChar(char s[]);

int main(){

  char line[MAXLINE];
  while (getOneLine(line, MAXLINE) > 0){
    if (removeEndEmptyChar(line) > 0){
      printf("%s", line);
    }
  }
  return 0;
}

int removeEndEmptyChar(char s[]){
  int i;
  i = 0;
  while(s[i] != '\n'){
    ++i;
  }
  --i;
  while( i >=0 && (s[i] == ' ' || s[i] == '\t')){
    --i;
  }
  if (i >=0){
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }
  return i;
}

int getOneLine(char line[], int maxline){
  int i;
  char c;
  for (i = 0; i < maxline -2 && (c = getchar())!= EOF && c != '\n'; ++i){
    line[i] = c;
  }
  if (c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
