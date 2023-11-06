#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  // Fill this in with code that calls maxOfArray with a size of zero.
  // so that you can see if the error message prints correctly.
  int empty[] = {};
  assertEquals(0,
	       maxOfArray(empty,0), 
	       "maxOfArray(empty,0)" ); 
  return 0;

}
