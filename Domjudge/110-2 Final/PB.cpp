#include<iostream>
using namespace std;

int main(){
    int k,l,Case=1,i;
    while(cin>>k>>l && (k!=-1 &&l !=-1)){
        int t=k;
        i=0;
        while(t<=l){
            if(t==1){
                i++;
                break;
            } 
            if(t%2==1){
                t=3*t+1;
            }else t/=2;
            i++;
        }
        cout<<"Case "<<Case<<": K = "<<k<<", limit = "<<l<<", number of terms = "<<i<<endl;
        Case++;
    }
    return 0;
}