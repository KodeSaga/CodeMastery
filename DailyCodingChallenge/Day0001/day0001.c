/* Day0001 - 
   Author - KodeSaga | Email - KodeSaga@gmail.com
   Language - C
   Problem Statement - Given a list of numbers and a number k, return whether any two numbers from the list add up to k. 
   For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17. Bonus: Can you do this in one pass?


Rough work :- 
Trivial Solution:-
    Step 1 - Sort the array
    Step 2 - Start with 2 positions i=0 and j=1 .  Add the numbers in these positions and check for k
    Step 3 - keep doing j+1 till end of the array unless match found(Break and return true and end program)
    Step 4 - Step 3 no match found, we start from i=i+1 and initializing j to next of i as j=i+1 the repeat step 3
    Step 5 - return false . End program
 
 I think O(nlogn) for Sorting and O(n^2) for the logic ~ O(n^2) for this program
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    
    int count = 0, k, i, j;
    FILE *fileptr;

    if ((fileptr = fopen("in_d0001.txt","r")) == NULL){
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fileptr,"%d", &count);
    //printf("Value of n=%d", num);
    //printf("\n\n Number of integers in the list --> ");
    //scanf("%d", &count);

    int *list = (int*) malloc(count * sizeof(int)); 

    for(i=0; i<count; i++) {
        fscanf(fileptr,"%d", &list[i]);
        printf("\nEnter Element Number %d = ", list[i]);  
    }

    fscanf(fileptr,"%d", &k);  
    //printf("\n\n Please enter K --> ");
    //scanf("%d", &k);

    fclose(fileptr);

    for(i=0; i<count-1; i++)
        for(j=i+1; j<count; j++) {
            if( list[i] + list[j] == k ) {
                printf("\n Found - Feeling Lucky Punk - ");
                return 0;
            }
        }
    printf("\n Nope not here ");
    return 0;
}