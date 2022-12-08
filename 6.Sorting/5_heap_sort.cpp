#include<bits/stdc++.h>
using namespace std;



void swap(int *xp , int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Heapify(int arr[] , int index , int size){
    int left= 2*index+1;
    int right= 2*index+2;
    int max=index;

    if(left <= size && arr[left] > arr[max]){
        max=left;
    }

    if(right <= size && arr[right] > arr[max]){
        max=right;
    }

    if(index != max){
        swap(&arr[max] , &arr[index]);
        Heapify(arr,max,size);
    }
}

void build_heap(int arr[], int size){
    for(int i=size/2; i>=0; i--){
        Heapify(arr,i,size);
    }
}

void Heapsort(int arr[] , int size){
    build_heap(arr,size);
    while(size>0){
        swap(&arr[0] , &arr[size]);
        size--;
        Heapify(arr,0,size);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Heapsort(arr, n);
    cout<<"Sorted array\n";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}