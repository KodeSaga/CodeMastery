/* Day0001 -
   Author - KodeSaga | Email - KodeSaga@gmail.com
   Language - C
   Problem Statement - Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
   For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17. Bonus: Can you do this in one pass?


Rough work :-
Non-Trivial Solution:- Single Pass O(n)
    Step 1 - Start with 2 positions i=0 and j=1 .  Add the numbers in these positions and check for k
    Step 2 -
    Step 3 -
    Step 4 - return false . End program

 O(n^2) for the logic
*/
package main

import "fmt"

func main() {

	fmt.Println("Hello World")

	for i := 0; i < count-1; i++ {
		for j := i + 1; j < count; j++ {
			if list[i]+list[j] == k {
				fmt.printf("\n Found - Feeling Lucky Punk - i=%d j=%d", i, j)
			}
		}
	}

}
