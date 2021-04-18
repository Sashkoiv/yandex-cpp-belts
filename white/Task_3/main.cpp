/* Задание:
 * Дана строка. Найдите в этой строке второе вхождение буквы f и
 * выведите индекс этого вхождения. Если буква f в данной строке встречается
 * только один раз, выведите число -1, а если не встречается ни разу,
 * выведите число -2. Индексы нумеруются с нуля.
 *
 * Пример
 *
 * stdin -> stdout
 * comfort -> -1
 * coffee -> 3
 * car -> -2
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    int counter = 0;
    bool foundFlag = 1;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            counter++;
        }
        if (counter == 2 && foundFlag) {
            cout << i << endl;
            foundFlag = 0;
        }
    }

    if (counter == 1) {
        cout << -1 << endl;
    }

    if (counter == 0) {
        cout << -2 << endl;
    }

    return 0;
}
