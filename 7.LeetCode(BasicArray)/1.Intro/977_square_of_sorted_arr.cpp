/* 
Squares of a Sorted Array
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 
Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
 
Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach? 
*/

#include<bits/stdc++.h>
using namespace std;

/* class solution{
    public:
    vector<int> v;
    vector<int> ans;
    void squareof(vector<int> v){
        for(int i=0; i<v.size(); i++){
            int sq= v[i]*v[i];
            ans.push_back(sq);
        }
        sort(ans.begin() , ans.end());
    }

}; */

class solution{
    public:
    void squareof(vector<int> v){
        for(int i=0; i<v.size(); i++){
            v[i]= v[i]*v[i];
        }
        sort(v.begin() , v.end());
        for(int i=0; i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }

};

int main(){
    solution s;
    vector<int> v={-4,-1,0,3,10};
    s.squareof(v);

    
    cout<<endl;
    v={-7,-3,2,3,11};
    s.squareof(v);
}