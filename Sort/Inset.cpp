#include <iostream>
using namespace std;
/*
5
3 2 4 5 1
*/
void Insert_sort(int arr[], int len){
    for (int i=0;i<len;i++){
        int key =arr[i];
        int j=i-1;
        // 大於key的往後移
        while(key< arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void print(int arr[], int len){
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int len=5;
    // cin >> len;
    int array[5] ={3,2,4,5,1}; 
    // for (int i = 0; i < len; i++){
    //     cin >> array[i];
    // }
    Insert_sort(array, len);
    print(array, len);
    return 0;
}