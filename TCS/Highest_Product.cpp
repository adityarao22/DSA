#include <iostream>
using namespace std;

int maxProduct(int n) {
    if (n <= 3)
        return n - 1;
    int product = 1;
    while (n > 4) {
        product *= 3;
        n -= 3;
    }
    product *= n;
    return product;
}

int main() {
    int n;
    cin >> n;
    cout << maxProduct(n);
    return 0;
}