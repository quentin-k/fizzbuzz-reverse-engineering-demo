#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H

// Define constants
#define MSL 8
#define TCN 2

// Create shorthand for unsigned int
typedef unsigned int uint;

// Create a custom type for storing information on a FizzBuzz case
typedef struct FizzBuzzCase
{
  uint num;
  char msg[MSL];
}
FizzBuzzCase;

#endif /* FIZZBUZZ_H */
