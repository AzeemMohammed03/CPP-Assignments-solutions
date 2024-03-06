#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<int>v(m);
    int n=v.size();
    for(int &ele:v){
        cin>>ele;
    }
    for(int i=0;i<n;i++){
        bool flag=true;
       for(int j=0;j<n;j++){
        if(i==j)continue;
        if(v[i]==v[j]){
            flag=false;
            break;
        }
       }
       if(flag==true){
        cout<<"unique elelment is: "<<v[i];
       }
    }
}