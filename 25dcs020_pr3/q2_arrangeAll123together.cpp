#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of marks : ";
    cin>>n;
    int arr[n];
    int cnt0=0,cnt1=0,cnt2=0;
    cout<<"ans : \t ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else if(arr[i]==2){
            cnt2++;
        }
    }

    
                                                 // space complexity is o(n)
    // int hash[n+1]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }
    // for(int i=0;i<n;i++){
    //     if(i<hash[0]){
    //         arr[i]=0;
    //     }
    //     else if(i<hash[0]+hash[1]){
    //         arr[i]=1;
    //     }
    //     else if(i<hash[0]+hash[1]+hash[2]){
    //         arr[i]=2;
    //     }
    // }
    

    for(int i=0;i<n;i++){
        if(cnt0>0){
            arr[i]=0;
            cnt0--;
        }
        else if(cnt1>0){
            arr[i]=1;
            cnt1--;
        }
        else if(cnt2>0){
            arr[i]=2;
            cnt2--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
