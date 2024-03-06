#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int &ele:v){
        cin>>ele;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        if(i%2==0){
           v[i]+=10;
        }
        else{
            v[i]*=2;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}