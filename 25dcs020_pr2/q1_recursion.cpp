#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&lisencePlate,int i,int n,int target){
    if(i==n){
        cout<<"not found ";
    }
    if(lisencePlate[i]==target){
        return (i+1);
    }
    else {
        i++;
        linearSearch(lisencePlate,i,n-1,target);
    } 
}
int main(){
    // no of vehicle
    int n;
    cin>>n;
    vector<int>lisensePlate(n);
    for(int i=0;i<n;i++){
        cin>>lisensePlate[i];
    }
    int target;
    cin>>target;
    int x=linearSearch(lisensePlate,0,n-1,target);
    cout<<"position is : "<<x;
   return 0;
}