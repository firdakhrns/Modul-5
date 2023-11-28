#include <stdio.h>

int reverse(int angka){
    int reverse = 0;
    int remainder;
    while (angka != 0){
        remainder = angka % 10;
        reverse = reverse * 10;
        reverse = reverse + remainder;
        angka = angka / 10;
    }return reverse;
}

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}