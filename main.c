#include <stdio.h>

int sumNum(int n) {
    if (n < 10) return n;
    return n % 10 + sumNum(n / 10);
}

int main() {
    int i, n;
    scanf("%d", &n);
    printf("%d", sumNum(n));
    return 0;
}
