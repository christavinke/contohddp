#include <stdio.h>

int main (){
    FILE *fp;

    fp = fopen("Mahasiswa.txt", "w");

    if (fp == NULL){
        printf("File gagal dibuka");
        return 1;
    }

    fprintf(fp, "Nama : Kevin\n");
    fprintf(fp, "NIM : 672026076\n");
    fprintf(fp, "Nilai : 100\n");

    fclose(fp);

    printf("Data berhasil disimpan");

    return 0;
}