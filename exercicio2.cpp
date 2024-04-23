#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int index = buscaBinaria(arr, target);

    if (index != -1) {
        cout << "Elemento encontrado no índice " << index << endl;
    } else {
        cout << "Elemento não encontrado" << endl;
    }

    return 0;
}
