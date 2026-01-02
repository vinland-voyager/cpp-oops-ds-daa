
/* Problem 6: Pointers -------------------------------

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int diff = (*a >= *b) ? *a - *b : *b - *a;
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
*/

/* Problem 5: Functions -------------------------------
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
*/

/* Problem 4: For Loop -------------------------------

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;
    for(int n = a; n <= b; n++) {
        if (n > 9 || n < 1) {
            if (n % 2 == 0) cout << "even" << endl;
            else if (n == 0) cout << "zero" << endl;
            else cout << "odd" << endl;
        }
        else {
            if (n == 1) cout << "one" << endl;
            else if (n==2) cout << "two" << endl;
            else if (n==3) cout << "three" << endl;
            else if (n==4) cout << "four" << endl;
            else if (n==5) cout << "five" << endl;
            else if (n==6) cout << "six" << endl;
            else if (n==7) cout << "seven" << endl;
            else if (n==8) cout << "eight" << endl;
            else if (n==9) cout << "nine" << endl;
        }
    }
    return 0;
}
*/

/* Problem 3: Conditionals -------------------------------

#include <iostream>
using namespace std;

int main()
{
    int n {0};
    cin >> n;
    if (n > 9 || n < 1) {
        cout << "Greater than 9";
    }
    else {
        if (n == 1) cout << "one";
        else if (n==2) cout << "two";
        else if (n==3) cout << "three";
        else if (n==4) cout << "four";
        else if (n==5) cout << "five";
        else if (n==6) cout << "six";
        else if (n==7) cout << "seven";
        else if (n==8) cout << "eight";
        else if (n==9) cout << "nine";
    }
    return 0;
}
*/

/* Problem 2: Data Types Input & Output -------------------------------

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
*/

/* Problem 1: Say "Hello, World!" With C++ -------------------------------

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
*/

// *INTRODUCTION* -------------------------------