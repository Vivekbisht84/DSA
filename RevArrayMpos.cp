#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArraympos(int arr[] , int n, int m){
    int s = m + 1 , e = n-1;
    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n,m;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>m;
    reverseArraympos(arr,n,m);
    printArray(arr,n);
}