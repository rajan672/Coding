/* 
Max Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2

Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.

 */


#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> v;
        //int n= sizeof(v)/ sizeof(v[0]);

        int MaxConsecutive(vector<int> v){
            int max=0 , count=0;
            for(int i=0; i<v.size(); i++){
                if(v[i]==1){
                    count++;
                }
                if(count >= max){
                    max=count;
                }
                if(v[i] == 0){
                    count=0;
                }
            }
            return max;
        }
};

int main(){
    solution s;
    s.v= {1,1,0,1,1,1};
    cout<<s.MaxConsecutive(s.v);
}