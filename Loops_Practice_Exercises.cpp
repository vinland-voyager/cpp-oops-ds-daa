/* From Here: https://codeforwin.org/c-programming/for-do-while-loop-programming-exercises */

/* Exercise 1: program to print all alphabets from a to z using while loop

#include <iostream>
using namespace std;

int main() {
    char c = 'a';
    while(c != ('z'+1)) {
      cout << c << endl;
      c++;
    }
    return 0;
}
*/

/* Exercise 2: program to print all even numbers between 1 to 100. – using while loop

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 100) {
        (i % 2 == 0) ? (cout << i << endl) : (cout << "");
        i++;
    }
    return 0;
}
*/

/* Exercise 3: program to find sum of all natural numbers between 1 to n.

#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++) sum+=i;
    cout << sum;
    return 0;
}
*/

/* Exercise 4: program to count number of digits in a number.

#include <iostream>
using namespace std;

int main() {
    int count = 0, i = 1, n;
    cin >> n;
    while (n) {
        n = n / 10;
        count++;
    }
    cout << count;
    return 0;
}
*/

/* Exercise 5: program to find first and last digit of a number.

#include <iostream>
using namespace std;

int main() {
    int num, first, last, i = 0;
    cin >> num;
    last = num % 10;
    first = 1;
    while (num) {
        first = num % 10;
        num = num / 10;
    }
    cout << first << endl << last;
    return 0;
}
*/

/* Exercise 6: program to calculate sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    while (num) {
        sum += (num % 10);
        num /= 10;
    }
    cout << sum;
    return 0;
}
*/

/* Exercise 7: program to enter a number and print its reverse.

#include <iostream>
using namespace std;

int main() {
    int num, rnum=0;
    cin >> num;
    while (num) {
        rnum = (rnum * 10 + (num % 10));
        num /= 10;
    }
    cout << rnum;
    return 0;
}
*/

/* Exercise 8: program to check whether a number is palindrome or not.

#include <iostream>
using namespace std;

int main() {
    int num, rnum = 0;
    cin >> num;
    int temp = num;
    while (num) {
        rnum = (rnum * 10) + (num % 10);
        num /= 10;
    }
    (temp == rnum) ? (cout << "Yes.") : (cout << "No.");
    return 0;
}
*/

/* Exercise 9: program to find power of a number using for loop.

#include <iostream>
using namespace std;

int main() {
    int num, power, result = 1;
    cin >> num; cin >> power;
    while (power) {
        result = result * num;
        power--;
    }
    cout << result;
    return 0;
}
*/

/* Exercise 10: program to find all factors of a number.

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 1; i <= num/2; i++) (num % i == 0) ? (cout << i << endl) : (cout << "");
    cout << num << endl;
    return 0;
}
*/

/* Exercise 11: program to calculate factorial of a number.

#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cin >> num;
    while (num) {
        fact = fact * num;
        num--;
    }
    cout << fact;
    return 0;
}
*/

/* Exercise 12: program to find HCF (GCD) of two numbers.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, min = 0, result = 1;
    cin >> num1; cin >> num2;

    if (num1 == num2) {
        cout << num1 << endl;
        return 0;
    }

    (num2 > num1) ? (min = num1) : (min = num2);

    for (int i = min; i > 0; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
*/

/* Exercise 13: program to find LCM of two numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, max = 0, lcm = 0;
    cin >> num1; cin >> num2;
    (num1 > num2) ? (max = num1) : (max = num2);
    while (true) {
        if (max % num1 == 0 && max % num2 == 0) break;
        max++;
    }
    cout << max;
    return 0;
}
*/

/* Exercise 14: Print this pattern:
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1

#include <iostream>
using namespace std;

int main() {
    int val = 5;
    // cin >> val;
    for (int i = 1; i <= val; i++) {
        for (int j = 1; j <= 2*val; j ++) {
            if (j == i || j == 2*val-i) cout << i;
            else cout << " ";
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 2*val; j ++) {
            if (j == i || j == 2*val-i) cout << i;
            else cout << " ";
        }
        cout << endl;
    }
}
*/
















