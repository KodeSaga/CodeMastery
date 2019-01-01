/*
December Lunchtime 2018 Division 2 - 29th Dec 2018
Age Calculator Problem Code: AGECAL
Chef's planet is called Javad. A year on Javad has N months numbered 1 through N. For each valid i, the i-th month has ai days numbered 1 through ai.

On Javad, years that are divisible by 4 are leap years - the last month of each leap year is one day longer (it has aN+1 days).

You are given Chef's birth date and the current date. Find the age of Chef in days, i.e. the number of days between Chef's birth date and the current date inclusive.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers a1,a2,…,aN.
The third line contains three space-separated positive integers yb, mb and db denoting the year, month and day of Chef's birth respectively.
The fourth line contains three space-separated positive integers yc, mc and dc denoting the current year, month and day respectively.
Output
For each test case, print a single line containing one integer — Chef's age in days.

Constraints
1≤T≤100
1≤N≤10,000
1≤ai≤10,000 for each valid i
1≤yb,yc≤100,000
1≤mb,mc≤N
db will be less than or equal to the days of the mb month of the yb year.
dc will be less than or equal to the days of the mc month of the yc year.
the current date is equal to or greater than Chef's birth date
Subtasks
Subtask #1 (10 points):

1≤yb,yc,N≤1,000
1≤ai≤100 for each valid i
Subtask #2 (90 points): original constraints

Example Input
4
5
1 2 3 4 5
2 1 1
3 5 1
2
3 3
1 1 1
2 2 2
2
1 1
3 1 1
3 2 1
5
1 4 3 4 6
3 5 6
10 1 1
Example Output
26
11
2
112
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
        

    }
    return 0;
}