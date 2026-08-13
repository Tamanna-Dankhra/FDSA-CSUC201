#include<bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int>&lisensePlate,int n,int targetPlate){
    for(int i=0;i<n;i++){
        if(targetPlate==lisensePlate[i]){
            cout<<"position is  "<<i+1;
            return true;
        }
    }
    return false;
}
int main(){
    // no of vehicle
    int n;
    cin>>n;
    vector<int>lisensePlate(n);
    for(int i=0;i<n;i++){
        cin>>lisensePlate[i];
    }
   
    // searching one by one
    int targetPlate;
    cin>>targetPlate;
    if(!linearSearch(lisensePlate,n,targetPlate)){
        cout<<" not found "<<endl;
    }
    
    return 0;
}