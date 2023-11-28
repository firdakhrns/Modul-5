#include <stdio.h>

void Biodata(int tahun, char nama[20], char asal[15]){
    int tahun_sekarang = 2023;
    printf("\nPerkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", tahun_sekarang - tahun);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf("%d", &tahunLahir);
    scanf("%s", &Namaku);
    scanf("%s", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}