#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countEvens(int a[], int size) {
  int counter = 0;

  for(int i = 0; i<size; i++)
  {
    if(isEven(a[i]))
    {
      counter++;
    }
  }

  return counter;
}
