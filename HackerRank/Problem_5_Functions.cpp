#include <cstdio>
using namespace std;

int max(int a, int b);
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max(int a, int b) {
    int max = (a > b) ? a : b;
    return max;
}

int max_of_four(int a, int b, int c, int d) {
    return max (a, (max (b, (max (c, d)))));
}