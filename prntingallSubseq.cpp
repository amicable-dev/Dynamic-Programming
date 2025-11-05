#include <iostream>
#include <vector>
using namespace std;

void printF(int idx, vector<int> &ds, int arr[], int n) {
    if (idx == n) {
        if (ds.size() == 0) {
            cout << "{}";
        } else {
            for (auto it : ds) {
                cout << it << " ";
            }
        }
        cout << endl;
        return;
    }

    // pick element
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);

    // not pick element
    ds.pop_back();
    printF(idx + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;

    printF(0, ds, arr, n);
    return 0;
}
