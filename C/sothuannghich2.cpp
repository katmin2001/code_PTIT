#include<stdio.h>
#include<string.h>     
const int DEC_10 = 10;
 int main() {
    int count = 0, i;
	for (i = 100000; i < 1000000; i++) {
        if (isThuanNghich(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Tong cac so thuan nghich co 6 chu so la: %d", count);
}
 

int isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    // phan tich n thanh mang cac chu so
    do {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10;
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}
