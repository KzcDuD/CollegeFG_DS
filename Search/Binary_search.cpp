#include<iostream>
#include<algorithm>
using namespace std;

int Search(int arr[],int search,int len){
    int start=0,end=len-1,index=-1;
    while(start<end){
        int mid=(end-start)/2;
        if(arr[mid]==search){
            return mid;
        }
        if(search>arr[mid]) start=mid;
        else end =mid;
        cout<<"Start:"<<start<<" End:"<<end<<" Mid:"<<mid<<endl;
    }
    return -1;
}

int main(){
    int arr[5]={5,6,3,7,9};
    int len = sizeof(arr)/sizeof(int);
    sort(arr,arr+len-1);
    for(int i=0;i<len;i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<Search(arr,3,sizeof(arr)/sizeof(int))<<endl;

    return 0;
}
