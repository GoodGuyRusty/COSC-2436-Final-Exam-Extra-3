#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// HackerRank (Easy) | Left Rotation | https://www.hackerrank.com/challenges/array-left-rotation/problem

vector<int> rotLeft(int d, const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return {};
    }

    int k = d % n;

    vector<int> rotated_arr(n);

    for (int i = 0; i < n; ++i) {
        
        int new_index = (i - k + n) % n;
        
        rotated_arr[new_index] = arr[i];
    }

    return rotated_arr;
}

int main() {

    int n;
    int d;

    if (!(cin >> n >> d)) return 1;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> arr[i])) return 1;
    }

    vector<int> result = rotLeft(d, arr);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
