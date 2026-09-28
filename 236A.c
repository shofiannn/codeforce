#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    char menang[100];
    int jumlah = 0;

    scanf("%s", kata);

    for (int i = 0; i < strlen(kata); i++) {
        int sudahAda = 0;

        for (int j = 0; j < jumlah; j++) {
            if (kata[i] == menang[j]) {
                sudahAda = 1;
                break;
            }
        }

        if (sudahAda == 0) {
            menang[jumlah] = kata[i];
            jumlah++;
        }
    }

    if (jumlah % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}