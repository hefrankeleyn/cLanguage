#include <stdio.h>
#define MAXLINE  1000  /* maximum input line size */
#define LONGLINE  50
int readOneLine(char line[], int maxline);


int main(){

   int len;
   char line[MAXLINE];
   while((len = readOneLine(line,MAXLINE)) > 0){
     printf("%d\n", len);
     if (len > LONGLINE){
       printf("%d,%s",len,line);
     }
   }

}

int readOneLine(char line[], int maxline){
  int i;
  char c;
  for (i = 0;i < maxline-2 && (c = getchar())!=EOF && c!='\n'; ++i){
    line[i] = c;
  }
  if (c == '\n'){
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';
  return i;
}
