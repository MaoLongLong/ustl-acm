#include <cstdio>

int main() {
    int n, m;
    while (~scanf("%d%d", &n, &m)) {
        printf("%d\n", n % m);
    }
    return 0;
}
