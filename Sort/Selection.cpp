#include <iostream>
using namespace std;
/*
5
3 2 4 5 1
*/
void print(int arr[],int);

void Selection_sort_MaxtoBack(int* arr,int len) {
    for (int i=len;i>=0;i--){
        int max_idx=i;
        for(int j=i;j>=0;j--){
            if(arr[j]>arr[max_idx]){
                max_idx=j;
            }
        }
        int tmp = arr[i];
        arr[i]=arr[max_idx];
        arr[max_idx] = tmp;
        print(arr,len);
    }
}

void Selection_sort_MintoFront(int *arr, int len){

}

void print(int arr[], int len){
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int len=5;
    int array[5] ={3,1,4,5,2};

    Selection_sort_MaxtoBack(array, len);

    return 0;
}