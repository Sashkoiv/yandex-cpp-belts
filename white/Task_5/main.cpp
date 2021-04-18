/* Задание:
 * На вход дано целое положительное число N. Выведите его в двоичной системе
 * счисления без ведущих нулей.
 *
 * Пример
 *
 * stdin -> stdout
 * 5 -> 101
 * 32 -> 100000
 * 1 -> 1
 * Подсказка
 *
 * число N можно считывать в переменную типа int
 * в этой задаче вам может пригодиться контейнер vector; напоминаем, что
 * добавление значения x в конец вектора v делается так: v.push_back(x);
 */

#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int N;

    cin >> N;

    string s = bitset<8>(N).to_string();

    cout << s.erase(0, s.find_first_not_of('0')) << endl;

    return 0;
}
