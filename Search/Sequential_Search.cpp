#include<iostream>
using namespace std;

int Search(int arr[],int search,int len){
    for(int i=0;i<len;i++){
        if(arr[i]==search) return i;
    }
    return -1;
}

int main(){
    int arr[5]={5,6,3,7,9};
    cout<<Search(arr,3,sizeof(arr)/sizeof(int))<<endl;

    return 0;
}