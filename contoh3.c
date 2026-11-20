#include <stdio.h>

int main (){
    FILE *halo;
    char nama[100];
    char nim[20];

    halo = fopen("contoh.txt", "w");

    printf("Masukkan NIM: ");
    scanf("%s", nim);

    printf("Masukkan nama: ");
    scanf(" %[^\n]",nama);

    fprintf(halo, "NIM :%s\n", nim);
    fprintf(halo, "Nama : %s\n", nama);

    fclose(halo);
    printf("\nSukses");

    return 0;
}