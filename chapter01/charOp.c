#include <stdio.h>

main(){
  int c;
  
  c = getchar();
  printf("%d",EOF);
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
}
