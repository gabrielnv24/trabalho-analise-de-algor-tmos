#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;
    int result;

    for (int i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    int N = 10;

    int result = fibonacci(N);

    cout << "O valor na posição " << N << " da sequência de Fibonacci é: " << result << endl;

    return 0;
}
