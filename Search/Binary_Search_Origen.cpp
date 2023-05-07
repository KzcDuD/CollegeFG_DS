#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& arr, int target) {
    vector<pair<int, int>> indexed_arr(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        indexed_arr[i] = make_pair(arr[i], i);
    }
    sort(indexed_arr.begin(), indexed_arr.end());
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (indexed_arr[mid].first < target) {
            low = mid + 1;
        } else if (indexed_arr[mid].first > target) {
            high = mid - 1;
        } else {
            return indexed_arr[mid].second;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 7};
    int target = 7;
    int index = binary_search(arr, target);
    if (index == -1) {
        cout << "Target not found in array." << endl;
    } else {
        cout << "Target found at index " << index << " in the original array." << endl;
    }
    return 0;
}
