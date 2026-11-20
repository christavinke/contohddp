#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("catatan.txt", "w");
    fprintf(fp, "Halo nama saya Kevin\n");
    fclose(fp);

    printf("File berhasil dibuat.");
    return 0;
}