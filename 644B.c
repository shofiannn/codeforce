#include <stdio.h>
int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    long long t[n];
    long long d[n];
    long long hasil[n];
    int queue[n];
    int depan = 0;
    int belakang = 0;
    long long selesai = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &t[i], &d[i]);
        hasil[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        while (depan < belakang && selesai <= t[i]) {
            int id = queue[depan];
            depan++;
            selesai += d[id];
            hasil[id] = selesai;
            b++;
        }
        if (selesai <= t[i] && depan == belakang) {
            selesai = t[i] + d[i];
            hasil[i] = selesai;
        }
        else {
            if (b > 0) {
                queue[belakang] = i;
                belakang++;
                b--;
            }
            else {
                hasil[i] = -1;
            }
        }
    }
    while (depan < belakang) {
        int id = queue[depan];
        depan++;
        selesai += d[id];
        hasil[id] = selesai;
    }
    for (int i = 0; i < n; i++) {
        printf("%lld ", hasil[i]);
    }
    printf("\n");
    return 0;
}