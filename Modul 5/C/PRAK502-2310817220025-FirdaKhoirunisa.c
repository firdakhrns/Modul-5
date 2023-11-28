#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    int hitungan = nilai1 - nilai2;
    if (hitungan < 0){
        return hitungan *= -1;
    }else{
        return hitungan;}
}
int mutlak(int angka){
    return abs(angka);
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &c, &b, &d);

    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));

    return 0;
}