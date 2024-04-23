#include <iostream>
#include <vector>

using namespace std;

int buscaSequencialRecursiva(const vector<int> &arr, int x, int index) {
  if (index == arr.size()) {
    return -1;
  }

  if (arr[index] == x) {
    return index;
  }

  return buscaSequencialRecursiva(arr, x, index + 1);
}

int main() {
  vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int x = 12;
  int index = buscaSequencialRecursiva(arr, x, 0);

  if (index != -1) {
    cout << "Elemento encontrado no índice " << index << endl;
  } else {
    cout << "Elemento não encontrado" << endl;
  }

  return 0;
}
