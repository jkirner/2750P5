//Jonathan Kirner
//cs2750 PA5
//11/19/17

#include <studio.h>
#include <string.h>
#include "phone_fmt.h"

void phone_fmt(char str[]){
  char areaCode[3];
  char firstThree[3];
  char lastFour[4];
  int size=strlen(str);
  int i=0;
  int j=0;
  while(i<size && j<4){
    while(j<3){
      if(isdigit(str[i]){
        areaCode[j]=str[i];
        j++;
      }
      i++;
    }
    j=0;
    while(j<3){
      if(isdigit(str[i]){
        firstThree[j]=str[i];
        j++;
      }
      i++;
    }
    j=0;
    while(j<4){
      if(isdigit(str[i]){
        lastFour[j]=str[i];
        j++;
      }
      i++;
    }
  }
  
  
  if(isdigit(lastFour[3])){
    printf("(%s)%s-%s", areaCode, firstThree, lastFour);
  }
  else{
    printF("ERROR: Not enought digits");
  }
}
