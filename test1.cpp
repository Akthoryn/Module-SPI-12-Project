#include <iostream>
#include "student.h"

int main(int argc, char* argv[])
{
  Student student("Léo",false);

  if( student.name() != "Léo" ){
      return -1;
  }

  if( student.present() != false ){
      return -1;
  }

  return 0;
}
