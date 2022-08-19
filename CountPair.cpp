#include<iostream>
using namespace std;

int Countpair(int arr[] , int n , int sum){
    //using two pointer approach
    int s = 0 , e = n - 1 , k = 0 , ans = 0;

    while( s < e ){
        k = arr[s]+arr[e];

        //condition - 1
        if(k == sum){
            ans++;
            s++;
            e--;
        }
        else if( k > sum ){
            e--;
        }
        else{
            s++;
        }
    }
    if(ans == 0) return -1;

    return ans;
}


int main()
{
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>sum;
    int ans = Countpair(arr,n,sum);
    cout<<ans<<endl;
}