#include <iostream>
using namespace std;
/*
5
3 2 4 5 1
*/
void Buble_sort(int arr[], int len){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len-1; j++){
            if (arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            for (int i = 0; i < len; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
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
    int array[5] ={3,2,4,5,1};
    
    Buble_sort(array, len);

    return 0;
}