#include <stdio.h>
#include <stdlib.h>



/*

Write a program in C to dynamically allocate memory using malloc function to store N integer numbers entered by the user and then print the sum

Enter value of N [1-10]: 5
Enter 5 integer number(s)
Enter #1: 1
Enter #2: 23
Enter #3: 4
Enter #4: 2
Enter #5: 3
Sum: 33  

Valgrind Command: valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./task2

ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/

int main(void) {
    
  int N = 0;
  int sum = 0;
  int i;
  
  int *iptr, *tmp;
  
  /*take user input*/ 
  printf("Enter value of N [1-10]: ");
  scanf("%d", &N);
  
  /*allocate memory*/ 
 
  
  /*check if memory allocated*/ 


  return 0;
}


