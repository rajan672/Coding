/* 
For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees per hour. 
Given the total time of travel in minutes is X. 
The task is to find the total traveling cost in rupees. 
Note: While converting minutes into hours, ceiling value should be considered as the total number of hours. 
For example: If the total travelling time is 90 minutes i.e. 1.5 hours, it must be considered as 2 hours.


Total money to be paid after traveling the given number of hours

Last Updated : 13 Jul, 2022
Given the travel cost of a cab is m rupees for first n hours per hour and then is x rupees per hour, given the total time of travel in a minute the task is to find the total cost.
Note: If an hour starts then the traveler has to give the full cost for that hour.
Examples: 

Input:  m = 50, n = 5, x = 67, mins 2927
Output: 3198
m = 50, n = 5, x = 67, Minutes travelled = 2927, hours travelled = 49, cost = 5 * 50 + (49-5) * 67 = 2927
Input: m = 50, n = 40, x = 3, mins = 35
Output: 50
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    float m,n,x,mins,cost;
    cin>>m >>n >> x >> mins;

    float hour = (ceil(mins/60*1.0));
    if(hour <= n)
        cout<<hour * m;
    else
        cout<<n * m+(hour-n)*x;
}