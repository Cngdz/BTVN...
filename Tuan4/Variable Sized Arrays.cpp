#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n, q;
    cin >> n >> q;

    // Create a vector of vectors to represent the 2D array
    vector<vector<int>> arr;

    // Input the arrays
    for (int i = 0; i < n; ++i) {   
        int k;
        cin >> k;

        // Create a vector to represent the current array
        vector<int> currentArray(k);

        // Input the elements of the current array
        for (int j = 0; j < k; ++j) {
            cin >> currentArray[j];
        }

        // Add the current array to the 2D array
        arr.push_back(currentArray);
    }

    // Process the queries
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;

        // Print the value at index b of the array at index a
        cout << arr[a][b] << endl;
    }

    return 0;
}   

