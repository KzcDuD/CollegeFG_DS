#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t,sum,n,tmp;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>tmp;
            v.push_back(tmp);
            sort(v.begin(),v.end());
            if(v.size()&1) sum+=v[(v.size()-1)/2];
            else sum+= (v[(v.size()-1)/2]+v[(v.size()-1)/2 +1])/2;
            //cout<<v.size()<<" : "<<(v.size()-1)/2<<" ";
        }
        
        cout<<sum<<endl;
    }

    return 0;
}