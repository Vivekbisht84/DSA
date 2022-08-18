#include<iostream>
using namespace std;

int search(int arr[] , int n , int target){
    int s = 0;
    int e = n - 1;
    while( s <= e ){
        int mid = s + (e - s)/2;

        if(arr[mid] == target) return mid;


        //the left side is sorted
        if(arr[s] <= arr[mid]){
            if(target >= arr[s] && target <= arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        //right half is sorted
        else{
            if(target >= arr[mid] && target <= arr[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
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
    int ans = search(arr,n,target);
    cout<<ans<<endl;
}