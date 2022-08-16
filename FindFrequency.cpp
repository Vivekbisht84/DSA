#include<iostream>
using namespace std;

int findFrequency(int arr[] , int n, int x){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            count++;
        }
    }return count;
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>x;
    int ans = findFrequency(arr,n,x);
    cout<<ans<<endl;
}