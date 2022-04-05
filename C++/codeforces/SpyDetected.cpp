// https://codeforces.com/contest/1512/problem/A

#include <bits/stdc++.h>
using namespace std;

int checkAndGetSpyIndex(int arr[], int len) {
    int first = arr[0];
    int last = arr[len - 1];

    if (first == last) {
        for (int i = 0; i < len; i++) {
            if (arr[i] != first) {
                return i + 1;
            }
        }
        return -1;
    }
    else {
        int mainNum = arr[1];
        if (mainNum == first) {
            for (int i = 0; i < len; i++) {
                if (arr[i] != first) {
                    return i + 1;
                }
            }
            return -1;
        } else {
            for (int i = 0; i < len; i++) {
                if (arr[i] != last) {
                    return i + 1;
                }
            }
            return -1;
        }
    }
}

int main() {
    int t; cin >> t;
    if (t == 0) return 0;
    vector<int> arrIndex;
    while (t--) {
        int len; cin >> len;
        int arr[len] = { 0 };
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        int spyIndex = checkAndGetSpyIndex(arr, len);
        if (spyIndex != -1) arrIndex.push_back(spyIndex);
    }
    for (int i = 0; i < arrIndex.size(); i++) {
        cout << arrIndex[i] << "\n";
    }
    return 0;
}

// old solution below
// #include <bits/stdc++.h>
// using namespace std;

// void print_map(unordered_map<int, int> const &m) {
//     for (auto const &pair: m) {
//         cout << "{" << pair.first << ": " << pair.second << "}\n";
//     }
// }

// bool compare(const pair<int, int>&a, const pair<int, int>&b) {
//    return a.second < b.second;
// }

// int* checkAndGetSpyIndex(int arr[], int len) {
//     // using a hashmap to store the frequency of every integer in the array
//     unordered_map<int, int> map;
//     for (int i = 0; i < len; i++) {
//         // cout << "Adding Array Element: " << arr[i] << "\n";
//         map[arr[i]]++;
//     }
    
//     // print_map(map);
//     // if all elements are not the same in the array, i.e. having more than one key
//     if (map.size() != 1) {
//         int keyLowestVal = min_element(map.begin(), map.end(), compare) -> first;
//         // cout << keyLowestVal << "\n";
//         int* index = find(arr, arr + len, keyLowestVal);
//         return index;
//     }
//     return NULL;
// }

// int main() {
//     int t; cin >> t;
//     if (t == 0) return 0;
//     vector<int> arrIndex;
//     while (t--) {
//         int len; cin >> len;
//         int arr[len] = { 0 };
//         for (int i = 0; i < len; i++) {
//             cin >> arr[i];
//         }
//         int* spyIndexFnVal = checkAndGetSpyIndex(arr, len);
//         if (spyIndexFnVal != NULL) {
//             int spyIndex = distance(arr, spyIndexFnVal) + 1;
//             arrIndex.push_back(spyIndex);
//         }
//     }
//     for (int i = 0; i < arrIndex.size(); i++) {
//         cout << arrIndex[i] << "\n";
//     }
//     return 0;
// }