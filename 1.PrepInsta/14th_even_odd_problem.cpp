/* 
In this even odd problem Given a range [low, high] (both inclusive), 
select K numbers from the range (a number can be chosen multiple times) such that sum of those K numbers is even.

Calculate the number of all such permutations. As this number can be large, print it modulo (1e9 +7).

Constraints
0 <= low <= high <= 10^9
K <= 10^6.

Input
First line contains two space separated integers denoting low and high respectively
Second line contains a single integer K.

Output
Print a single integer denoting the number of all such permutations
Time Limit
1

Example 1
Input
4 5
3

Output
4

Explanation
There are 4 valid permutations viz. {4, 4, 4}, {4, 5, 5}, {5, 4, 5} and {5, 5, 4} which sum up to an even number.

Example 2
Input
1 10
2

Output
50

Explanation
There are 50 valid permutations viz. {1,1}, {1, 3},.. {1, 9} {2,2}, {2, 4},… {2, 10} . . . {10, 2}, {10, 4},… {10, 10}. These 50 permutations, each sum up to an even number.
 */


/* 
1.Find the total count of even and odd numbers in the given range [low, high].
2.Initialize variable even_sum = 1 and odd_sum = 0 to store way to get even sum and odd sum respectively.
3.Iterate a loop K times and store the previous even sum as prev_even = even_sum and the previous odd sum as prev_odd = odd_sum where even_sum = (prev_even*even_count) + (prev_odd*odd_count) and odd_sum = (prev_even*odd_count) + (prev_odd*even_count).
4.Print the even_sum at the end as there is a count for the odd sum because the previous odd_sum will contribute to the next even_sum.

Time Complexity: O(K)
Auxiliary Space: O(1)
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int low , high , K;
    cin>>low >>high;
    cin>>K;

    int even_count=0 , odd_count=0;
    for(int i=low; i<=high; i++){
        if(i%2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }

    long even_sum=1 , odd_sum =0;
    for(int i=0; i<K; i++){
        long prev_even = even_sum;
        long prev_odd = odd_sum;

        // Even sum
        even_sum = (prev_even * even_count) +
                    (prev_odd * odd_count);
 
        // Odd sum
        odd_sum = (prev_even * odd_count) +
                   (prev_odd * even_count);
    }

    cout<<even_sum;
}