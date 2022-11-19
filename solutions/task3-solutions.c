#include <stdio.h>
#include <stdlib.h>

/*
Create a struct Person with 3 variables, firstName, lastName and age and then dynamically allocate memory using malloc/calloc function to store N numbers of user input of type structs in array and print it out. 


Sample Input:
Enter value of N: 3

User Input 1
Enter first name:
Bishal
Enter last name:
Bhandari
Enter age:
23

User Input 2
Enter first name:
Tiya
Enter last name:
Leach
Enter age:
20

User Input 3
Enter first name:
Mustafa
Enter last name:
Salim
Enter age:
20

Sample Output:
Name: Bishal Bhandari Age: 23
Name: Tiya Leach Age: 20
Name: Mustafa Salim Age: 20


Valgrind Command: valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./task2

ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
typedef struct {
  char firstName[50];
  char lastName[50];
  int  age;
}person;


int main(void) {
    
  int N = 0;
  int i;
  
  /*take user input*/ 
  printf("Enter value of N: ");
  scanf("%d", &N);
  
  /*allocate memory*/ 
person *newPerson = (person *) malloc(N * sizeof(person));


/*Taking N number of input*/
for(i = 0; i < N; i++){
    printf("User Input %d\n", i+1);
    printf("Enter first name:\n");
    scanf("%s", newPerson[i].firstName);
    printf("Enter last name:\n");
    scanf("%s", newPerson[i].lastName);
    printf("Enter age:\n");
    scanf("%d", &newPerson[i].age);
}

/* print the output*/
for(i = 0; i < N; i++){
    printf("Name: %s %s Age: %d\n",newPerson[i].firstName, newPerson[i].lastName, newPerson[i].age);
}

/* free memory */

free(newPerson);
return 0;
}





