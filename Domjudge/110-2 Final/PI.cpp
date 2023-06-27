#include<iostream>
using namespace std;

int main(){
    int n,m,k,mid,i,b;
    while(cin>>n>>m){
        cin>>k; 
        b=i=0,mid = (n+m)/2;
        while(k<=m &&k>=n){
            if(k==mid){
                b=1;
                i++;
                break;
            }
            k>mid ? mid=(mid+m)/2:mid=(mid+n)/2;
            i++;
        }
        if(!b){
            cout<<-1<<endl;
        }else cout<<i<<endl;
    }
    return 0;
}