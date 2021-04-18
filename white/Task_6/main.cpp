/* Задание:
 * Напишите функцию, которая называется IsPalindrom возвращает bool
 * принимает параметр типа string и возвращает, является ли переданная
 * строка палиндромом. Палиндром - это слово или фраза, которые одинаково
 * читаются слева направо и справа налево.
 *
 * Аргумент функции -> Результат
 * madam -> true
 * gentleman -> false
 */

#include <string>
#include <iostream>

using namespace std;

bool IsPalindrom(string& word) {
    return (word == string(word.rbegin(), word.rend()));
}

int main() {
    string s1 = "madam";
    string s2 = "gentheman";

    cout << ((IsPalindrom(s1)) ? "true" : "false") << endl;
    cout << ((IsPalindrom(s2)) ? "true" : "false") << endl;
    return 0;
}
