#include<iostream>
using namespace std;

bool find3Numbers(int arr[] , int n , int X){
    sort(arr,arr+n);

    for(int i = 0 ; i < n ; i++){
        int y = X - arr[i];

        int low = i + 1;
        int high = n - 1;
        while( low < high ){
            if(arr[low] + arr[high] == y){
                return 1;
            }
            else if(arr[low] + arr[high] > y){
                high--;
            }
            else{
                low++;
            }
        }
    }
    return 0;
}


int main()
{
    int n,X;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>X;
    cout<<find3Numbers(arr,n,X)<<endl;
}