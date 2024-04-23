#include <iostream>
#include <vector>

using namespace std;

bool isSorted(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};

    cout << "O vetor arr1 está ordenado? " << (isSorted(arr1) ? "Verdadeiro" : "Falso") << endl;
    cout << "O vetor arr2 está ordenado? " << (isSorted(arr2) ? "Verdadeiro" : "Falso") << endl;

    return 0;
}
