#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}