/* 
Krishna loves candies a lot, so whenever he gets them, he stores them so that he can eat them later whenever he wants to.
He has recently received N boxes of candies each containing Ci candies where Ci represents the total number of candies in the ith box. 
Krishna wants to store them in a single box. The only constraint is that he can choose any two boxes and store their joint contents in an empty box only. 
Assume that there are an infinite number of empty boxes available.
At a time he can pick up any two boxes for transferring and if both the boxes contain X and Y number of candies respectively, then it takes him exactly X+Y seconds of time. 
As he is too eager to collect all of them he has approached you to tell him the minimum time in which all the candies can be collected.
 
Input Format:
 
•	The first line of input is the number of test case T
•	Each test case is comprised of two inputs
•	The first input of a test case is the number of boxes N
•	The second input is N integers delimited by whitespace denoting the number of candies in each box
Output Format: Print minimum time required, in seconds, for each of the test cases. Print each output on a new line.
 
Constraints:
 
•	1 <T<10
•	1 <N<10000
•	1 < [Candies in each box] < 100009
Input :
1
4
1 2 3 4
Output :
19
Explanation :
4 boxes, each containing 1, 2, 3 and 4 candies respectively.Adding 1 + 2 in a new box takes 3 seconds.
Adding 3 + 3 in a new box takes 6 seconds.Adding 4 + 6 in a new box takes 10 seconds.
Hence total time taken is 19 seconds. 
There could be other combinations also, but overall time does not go below 19 seconds.


Example 2:
Input:
1
5
1 2 3 4 5
Output:
34
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_box,sum=0 ,k=0 , total_sum=0;
    cin>>num_box;
    int num_can[num_box] , emp[100009];
    
    /* int T;
    cin>>T;
    for(int i=0; i<T; i++){ */
        
        for(int j=0; j<num_box; j++){
            cin>>num_can[j];
        }
        sort(num_can , num_can+num_box);
        sum=0;
        k=0;

        for(int j=0; j<num_box; j++){
            sum = sum + num_can[j];
            emp[k] = sum;
            k++;
        }
        total_sum=0;
        for(int j=1; j<k; j++){
            total_sum = total_sum + emp[j];
        }
        cout<<total_sum<<endl;
    //}
}