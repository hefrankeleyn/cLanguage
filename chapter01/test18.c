#include <stdio.h>

main(){
  int c, emptyNum,tableNum,entryNum;

  emptyNum = 0;
  tableNum = 0;
  entryNum = 0;

  while ((c = getchar()) != EOF){
    if (c == '\t'){
      ++tableNum;
    }
    if (c == ' '){
      ++emptyNum;
    }
    if (c == '\n'){
      ++entryNum;
    }
  }
  printf("emptyNum:%d,tableNum:%d,entryNum:%d",emptyNum,tableNum,entryNum);
  
}
