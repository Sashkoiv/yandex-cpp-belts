/* Задание:
 * В stdin даны два натуральных числа. Найти их наибольший общий делитель.
 *
 * Пример
 *
 * stdin -> stdout
 * 25 27 -> 1
 * 12 16 -> 4
 * 13 13 -> 13
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}