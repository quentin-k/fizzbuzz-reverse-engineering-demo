/* checkcases.c */

// External imports
#include <stdio.h>

// Local imports
#include "fizzbuzz.h"

/* check
 * Arguments: uint to check & a FizzBuzzCase
 * Output: a uint that is either 0 or 1
 * Description: check will check a number against a test case. If the test case
 * is good then it will set the output to 0 and print the test case message.
 */
uint check( uint check_num, FizzBuzzCase test_case )
{
  uint output = 1;                     // Initialize the output

  if( check_num % test_case.num == 0 ) // See if the test succeeds
  {
    output = 0;                        // Set the output to 0
    printf( "%s", test_case.msg );     // Print the message
  }

  return output;                       // Return the output
}

/* checkCases
 * Arguments: a uint to check
 * Output: No output
 * Description: Checks the given number against the test cases and if the number
 * fails all the cases it will print the number passed to it.
 */
uint checkCases( uint check_num, FizzBuzzCase test_case[TCN] )
{
  uint shownum = 1;                               // Determines whether or not to show the number, defaults to showing the number

  for( uint i = 0; i < TCN; i++ )                 // Loops through the number of test cases and checks them
  {
    shownum *= check( check_num, test_case[i] );  // Updates the shownum variable
  }

  if( shownum )                                   // Sees if shownum is true
  {
    printf( "%d", check_num );                    // Displays the number
  }

  putchar( 10 );                                  // Puts a newline 

  return check_num + 1;                           // Updates the check number
}
