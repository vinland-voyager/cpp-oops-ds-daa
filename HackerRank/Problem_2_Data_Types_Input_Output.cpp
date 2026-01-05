#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i; long l; char c; float f; double d;
    scanf("%d",&i);
    scanf("%ld",&l);
    cin >> c;
    scanf("%f",&f);
    scanf("%lf",&d);
    printf("%d\n%ld\n%c\n%f\n%lf",i,l,c,f,d);
    return 0;
}