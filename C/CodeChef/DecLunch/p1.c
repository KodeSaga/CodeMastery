  
/*
December Lunchtime 2018 Division 2 - 29th Dec 2018
Print Pattern Problem Code: PPATTERN
Consider the following 4×4 pattern:

 1  2  4  7
 3  5  8 11
 6  9 12 14
10 13 15 16
You are given an integer N. Print the N×N pattern of the same kind (containing integers 1 through N2).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print N lines; each of them should contain N space-separated integers.

Constraints
1≤T≤10
1≤N≤100

Example Input
1
4
Example Output
1 2 4 7
3 5 8 11
6 9 12 14
10 13 15 16

*/
#include <stdio.h>
#include <stdlib.h>             //included for using malloc() 

int main()
{

    int i = 0;
    int j = 0;
    int p = 1;
    int t,n;
    scanf("%d",&t);
    int *x = (int *)malloc(t * sizeof(int)); //array to include various inputs whose outputs are required.
    for (i=0; i<t; i++){
        scanf("%d",&x[i]);
    }   
    for(int z=0; z<t; z++) {
        n = x[z];
        int **pattern = (int **)malloc(n * sizeof(int *)); 
        for (i=0; i<n; i++) 
            pattern[i] = (int *)malloc(n * sizeof(int));
        i=0;j=0;
        pattern[i][j] = 1;
        for (p=2; p<=n*n; p++){
            if (((j!=0) && (p!=n*n)) && (i!=n-1)){
                i=i+1;
                j=j-1;
                pattern[i][j] = p;
                continue;
            }
            if ((j==0) && (i!=n-1)){
                j=i+1;
                i=0;
                pattern[i][j] = p;
                continue;
            }
            if (i==(n-1)){
                i=j+1;
                j=n-1;
                pattern[i][j] = p; 
                continue;
            }
            
        }

        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                printf("%d ",pattern[i][j]);
            }
            printf("\n");
        }
        free(pattern);
    }
    return 0;
}   
