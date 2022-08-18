#include<iostream>
using namespace std;

int smallestPositiveMissingNumber(int arr[] , int n){
    sort(arr,arr+n);
    int count = 1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == count){
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = smallestPositiveMissingNumber(arr,n);
    cout<<ans<<endl;
}