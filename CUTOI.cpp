#include <stdio.h>

int main() {
    int a, b, sum;

    // Nh?p hai s? nguy�n
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Th?c hi?n ph�p c?ng
    sum = a + b;

    // In ra k?t qu?
    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);

    return 0;
}

