#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getOneLine(char line[],int maxline);
void copyOneLine(char to[], char from[]);

int main(){
  int len;  /* current line length */
  int max;  /* maximum length seeen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while((len = getOneLine(line,MAXLINE)) > 0){
    /*printf("%d, %s", len, line);*/
    if (len > max){
      max = len;
      copyOneLine(longest, line);
    }
  }
  if(max >0){
    printf("%s", longest);
  }
  return 0;
}

/* getOneLine: read a line into s, return length */
int getOneLine(char s[], int lim){
  int c, i, j;
  j = 0;
  for (i = 0; (c = getchar())!=EOF && c !='\n';++i){
    if (i < lim -2){
      s[j] = c;
      ++j;
    }
  }
  if (c == '\n'){
    s[j] = c;
    ++j;
    ++i;
  }
  s[j] = '\0';
  return i;
}

void copyOneLine(char to[], char from[]){
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0'){
    ++i;
  }
}
