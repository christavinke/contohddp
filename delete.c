#include <stdio.h>

int main(){

    if (remove("mahasiswa.txt") == 0){
        printf("File mahasiswa.txt berhasil dihapus");
    } else {
        printf("File gagal dihapus");
    }
    return 0;
    
}