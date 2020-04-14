#include <stdio.h>

#define IN 1 /* 在单词内 */
#define OUT 0 /* 在单词外*/

main(){
  int c, state;

  state = OUT;
  while((c=getchar()) != EOF){
    if(c == ' ' || c == '\n' || c == '\t'){
       if (state == IN){
         state = OUT;
         putchar('\n');
       }
    }else{
      state = IN;
      putchar(c);
    }
  }
}
