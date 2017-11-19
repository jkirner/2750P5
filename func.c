//Jonathan Kirner
//cs2750 PA5
//11/19/17

#include <studio.h>
#include <string.h>
#include "func.h"

void func(char* subStr, int start, int size, char *str[]){
  int i=start+1;
  char *ptr;
  while(i<size){
    ptr=strstr(str[i], subStr)
    if(ptr!=null){
      printf("%s is a substring of %s", subStr, str[i]);
    }
    i++;
  }
}
