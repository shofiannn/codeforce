#include <stdio.h>
#include <ctype.h>

int main() {

    int n;
    scanf("%d", &n);

    char word[n + 1];
    scanf("%s", word);

    int huruf[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = tolower(word[i]);

        huruf[c - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (huruf[i] == 0) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}