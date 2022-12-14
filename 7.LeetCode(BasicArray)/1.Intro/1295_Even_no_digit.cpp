/* 
Find Numbers with Even Number of Digits

Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:
Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
 
Constraints:
1 <= nums.length <= 500
1 <= nums[i] <= 105
 */

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> v;
        int eventnum(vector<int> v){
            int count1=0, count2=0;
            for(int i=0; i<v.size(); i++){
                int num=v[i];
                while(num>0){
                    int rem= num % 10;
                    count1++;
                    num=num/10;
                }
                if(count1%2==0){
                    count2++;
                }
                count1=0;
            }
            return count2;
        }

};

int main(){
    solution s;
    s.v= {12,345,2,6,7896};
    cout<<s.eventnum(s.v)<<endl;

    s.v={555,901,482,1771};
    cout<<s.eventnum(s.v)<<endl;
}