//Jonathan Kirner
//cs2750 PA5
//11/19/17

#include <studio.h>
#include <string.h>
#include "func.h"
#include "isInt.h"

int main(int argc, char *argv[]){
  int total=0;
  int i=1;
  bool testInt=true;
  while(i<argc){
    if(isInt(argv[i])){
      total+=atoi(argv[i]);
    }
    i++;
  }
  printf("Total integers:%d", total);
  i=1;
  while(i<argc){
    func(argv[i], i, argc, argv[]);
    i++;
  }
  return 0;
}

