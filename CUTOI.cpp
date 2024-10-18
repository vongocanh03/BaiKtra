#include <stdio.h>

int main() {
    int a, b, sum;

    // Nh?p hai s? nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Th?c hi?n phép c?ng
    sum = a + b;

    // In ra k?t qu?
    printf("Tong cua %d và %d là: %d\n", a, b, sum);

    return 0;
}

