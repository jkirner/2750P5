//Jonathan Kirner
//cs2750 PA5
//11/19/17

#include <studio.h>
#include <string.h>
#include "isInt.h"

bool isInt(char number[]){
  int i=0;
  int size=strlen(number);
  if (number[0]=='-'){
    i=1;
  }
  while(i<strlen){
    if(!isdigit(number[i])){
      return false;
    }
  }
  return true;
}
