/* Day0002
   Author - KodeSaga | Email - KodeSaga@gmail.com
   Language - GoLang
   Problem Statement - Given an array of integers, return a new array such that each element at index i of the new
   array is the product of all the numbers in the original array except the one at i.
   For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
   If our input was [3, 2, 1], the expected output would be [2, 3, 6].
   Follow-up: what if you can't use division?

   Rough work :-
   Trivial Solution(Using Division):- O(N + N) ~ O(N)
		Step 1 - Single pass the array to get the product = p of all elements in array a[].
		Step 2 - Single pass the array a[] and in an output array b[] store b[i] = p / a[i]
		Step 3 - exit

   Non Trivial Solution(Not Using Division):- O(N ^ 2)
		Step 1 - input array a[] of N elements, create output array b[] where all N elements initialized to 1.
		Step 2 - Nest loops i -> N and j -> N
		Step 3 - check when j != i , then process b[j] = b[j] * a[i];
		Step 4 - exit

*/

package main
