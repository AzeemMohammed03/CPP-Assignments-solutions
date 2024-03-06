#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int ele:v){
        cin>>ele;
        v.push_back(ele);
    }
    bool flag=0;
        int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        cout<<"array is not sorted";
    }
    
}