#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[] , int n){
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while(mid <= high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }

    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    sort012(arr,n);
    printArray(arr,n);
    
}