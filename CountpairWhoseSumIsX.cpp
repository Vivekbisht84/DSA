#include<iostream>
using namespace std;

int countpair(int arr[] , int n, int target){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i]+arr[j] == target){
                count++;
            }
        }
    }return count;
}

int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>target;
    int ans = countpair(arr,n,target);
    cout<<ans<<endl;
}