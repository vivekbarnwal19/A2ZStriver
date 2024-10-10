#include<iostream>
using namespace std;
void top(int n){
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void bottom(int m){
    
    for(int s=0;s<m;s++){
        for(int t=0;t<s;t++){
            cout<<" ";
        }
        for(int t=0;t<2*m-(2*s+1);t++){
            cout<<"*";
        }
        for(int t=0;t<s;t++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    top(n);
    bottom(m);
}


// 5
// 5
//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *