#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int m1,m2,m3;
     m1=m2=m3=INT_MIN;
    vector<int>v(m);
    int n=v.size();
    for(int &ele:v){
        cin>>ele;
    }
    for(int i=0;i<n;i++){
        if(v[i]>m1){
            m1=v[i];
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]>m2&& v[i]!=m1){
            m2=v[i];
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]>m3&&v[i]!=m1&&v[i]!=m2){
            m3=v[i];
        }
    }
    cout<<m1<<" "<<m2<<" "<<m3;
}
// #include <iostream>
// using namespace std;
// int main() {
// int arr[5]={10,3,1,21,3};
// int max, max2, max3;
// max3 = max = max2 = arr[0];
// for(int i = 0; i < 5; i++){
// if (arr[i] > max){
// max3 = max2;
// max2 = max;
// max = arr[i];
// }
// else if (arr[i] > max2){
// max3 = max2;
// max2 = arr[i];
// }
// else if (arr[i] > max3)
// max3 = arr[i];
// }
// cout<<endl<<"Three largest elements of the array are "<<max<<", "<<max2<<",
// "<<max3;
// return 0;
// }