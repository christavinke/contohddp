#include <stdio.h>

int main(){
    FILE *tambah;

    tambah = fopen("mahasiswa.txt", "a");

    if (tambah == NULL){
        printf("FILE GAGAL DIBUKA");
        return 1;
    }
    
    fprintf(tambah, "Nama : Yoseph\n");
    fprintf(tambah, "NIM : 672026073\n");
    fprintf(tambah, "Nilai : 5\n");

    fclose(tambah);
    printf("Data berhasil diubah");

    return 0;
}