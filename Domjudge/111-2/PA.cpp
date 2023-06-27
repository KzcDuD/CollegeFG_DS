#include<iostream>
#include<vector>
#include<algorithm>
int absol(int x) {
    if(x<0) return -x;
    return x;
}
using namespace std;

int main(){
    int n,m,count=1,min,pv,sv;
    while(cin>>n &&n!=0 && cin>>m){
        int arr[n][n];
        vector<int> p,s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        pv=sv=0; 
        for (int  i = 0; i < n; i++){
            min=100;
            for (int j = 0; j < n; j++){
                if(absol(m-arr[i][j])<min) min=absol(m-arr[i][j]);
                s.push_back(absol(m-arr[i][j]));
            }
            p.push_back(min);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++) pv+=s[i];
        for(auto i: p) sv += i;

        // cout<<endl<<"================================================"<<sv<<endl;
        // for(auto u : p) cout<<u<<" ";
        // cout<<endl<<"================================================"<<endl;
        // for(auto u : s) cout<<u<<" ";
        // cout<<endl<<"================================================"<<pv<<endl;
        cout<<"Case "<<count<<": "<<pv<<" VS. "<<sv<<endl ;
        if(pv==sv) cout<<"Perfect Teammate."<<endl;
        else cout<<"Just Teammate."<<endl;
        count++;
    }
    return 0;
}