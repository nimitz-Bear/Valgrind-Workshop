#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    /*Fix errors and memory leaks.*/

    /*declaring the local variables */
    int x, i = 0;   

     /* creating a pointer */
    int *p;         
    for(int i = 0; i<10; i++)
    {
       /* dynamic memory allocation using malloc() */
       p = malloc(1 * sizeof(int));  
       *p = 10 * i;
       printf("value %d \n", *p);
       free(p);
    }
    return 0;
}