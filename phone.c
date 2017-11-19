//Jonathan Kirner
//cs2750 PA5
//11/19/17

#include <studio.h>
#include <string.h>
#include "phone_fmt.h"

int phone(int argc, char *argv[]){
  int i=1;
  while (i<argc){
    phone_fmt(argv[i]);
  }
  return 0;
}
