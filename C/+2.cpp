#include <iostream>
int main () {
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i ++) {
        while (n % i == 0) {
            count ++;
            n /= i;
        }
        if (count ) {
            std::cout << i << " " << count << std::endl;
            count = 0;
        }
    }
}
