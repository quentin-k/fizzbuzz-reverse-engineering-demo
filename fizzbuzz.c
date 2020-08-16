/* fizzbuzz.c */

// Local imports
#include "fizzbuzz.h"
#include "checkcases.h"

// Functions
int main()
{
  const uint MAX = 100;               // Define the max value
  uint i = 1;                         // initialize i

  FizzBuzzCase TestCases[TCN] =       // Create the test cases
  {
    { .num = 3, .msg = "Fizz" },      // Create the Fizz case
    { .num = 5, .msg = "Buzz" }       // Create the Buzz case
  };

  while( i <= MAX )                   // This uses a while loop because this is faster 
  {                                   // than a standard for loop and displays output
    i = checkCases( i, TestCases );   // Update i
  }

  return 0;                           // Return without errors
}
