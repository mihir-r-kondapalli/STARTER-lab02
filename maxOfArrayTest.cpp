#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
  // Fill this in with exactly seven tests of maxOfArray
  // that all pass, and that test various cases,
  // i.e. where the max is at the beginning, middle and end of the array
  // See lab instructions for details.

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(3,
	       maxOfArray(fiveThrees,5),
	       "maxOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       maxOfArray(zeros,3), 
	       "maxOfArray(zeros,3)" );  

  
  int fiveInts[5]={12,3,4,-9,5}; 
  assertEquals(12,
	       maxOfArray(fiveInts,5), 
	       "maxOfArray(fiveInts,5)" ); 

  assertEquals(12,
	       maxOfArray(fiveInts,2), 
	       "maxOfArray(fiveInts,2)" ); 

  assertEquals(12,
	       maxOfArray(fiveInts,3), 
	       "maxOfArray(fiveInts,3)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       maxOfArray(meaning,1), 
	       "maxOfArray(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
  assertEquals(123,
	       maxOfArray(mix,10), 
	       "maxOfArray(mix,10)" );

  return 0;
}
