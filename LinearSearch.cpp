#include<iostream>
using namespace std;

bool linearSearch(int *arr , int n, int key){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == key){
            return true;
        }
    }return false;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;


}