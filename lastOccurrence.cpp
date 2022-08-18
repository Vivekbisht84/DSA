#include<iostream>
using namespace std;

int lastOcc(int arr[] , int n , int key){
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s<=e){
        int mid = s + (e - s)/2;

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
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
    int ans = lastOcc(arr,n,key);
    cout<<"last occurrence of element is at : "<<ans<<endl;

}