#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n,r,t,b;
    while(cin>>n>>r){
        unordered_set<int> set;
        for(int i=0;i<r;i++){
            cin>>t;
            set.insert(t);
        }
        b=1;
        for(int i=1;i<=n;i++){
            if(!set.count(i)){
                cout<<i<<" ";
                b=0;
            } 
            
        }
        if(b) cout<<"*";
        cout<<endl;
    }
    return 0;
}