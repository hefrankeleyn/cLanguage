#include <stdio.h>
#define MAXLINE 1000

int getOneLine(char line[], int maxLine);
void reverseOneWord(char s[]);


int main(){

  char line[MAXLINE];

  while(getOneLine(line, MAXLINE) > 0){
    reverseOneWord(line);
    printf("%s", line);
  }
  return 0;
}

void reverseOneWord(char s[]){
  int i, j;
  char temp;
 
  i = 0;
  while((s[i] != '\0')){
    ++i;
  }
  --i;
  if (s[i] == '\n'){
    --i;
  }
  j = 0;
  while(j < i){
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    ++j;
    --i;
  }
}

int getOneLine(char line[], int maxLine){
  int i;
  char c;
  for(i = 0; i< maxLine-2 && (c = getchar())!= EOF && c != '\n'; ++i){
    line[i] = c;
  }
  if (c == '\n'){
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';
  return i;
}
