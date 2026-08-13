#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" no of books issuing ";
    cin>>n;
    int arr[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;        // more convenient way to count the books by key value pair
    }
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //             arr[j]=-1;
    //         }
    //     }
    //     if(count>1&& arr[i]!=-1){
    //         cout<<" Book ID : "<<arr[i]<<endl;
    //     }
    // }
    for(auto it: m){
        if(it.second>1){
            cout<<" Book id : "<<it.first<<endl;
        }
    }
    return 0;
}