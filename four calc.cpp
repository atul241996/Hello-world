#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        while(n){
            if(n%10==4) c++;
            n/=10;
        }cout<<c<<endl;
    }
}
 