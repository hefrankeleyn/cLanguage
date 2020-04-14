#include <stdio.h>

main(){
  int c,emptyNum;
  emptyNum = 0;
  while((c = getchar()) != EOF){
    if (c == ' '){
      ++emptyNum;
    }
    if (c != ' '){
      emptyNum = 0;
    }
    if (emptyNum <= 1){
      putchar(c);
    }
  }
}
