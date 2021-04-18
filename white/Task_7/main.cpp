/*Задание:
 *Напишите функцию, которая:
 * называется PalindromFilter
 * возвращает vector<string>
 * принимает vector<string> words и int minLength
 * возвращает все строки из вектора words, которые являются палиндромами
 * и имеют длину не меньше minLength
 *Входной вектор содержит не более 100 строк,
 *длина каждой строки не больше 100 символов.
 *
 *Примеры
 *words -> minLength -> результат
 *abacaba, aba -> 5 -> abacaba
 *abacaba, aba -> 2 -> abacaba, aba
 *weew, bro, code -> 4 -> weew
 *
 *Пояснение
 *
 *В этой задаче вам надо сделать файл с реализацией функции PalindromFilter,
 *а также других функций, если это необходимо
 *(например, функции проверки на палиндром).
 */

#include <iostream>
#include <vector>

#include "accessory.hpp"

using namespace std;


int main() {
    const vector<string> one{"abacaba", "aba"};
    const vector<string> two{"weew", "bro", "code"};

    vector<string> a = PalindromFilter(one, 5);
    vector<string> b = PalindromFilter(one, 2);
    vector<string> c = PalindromFilter(two, 4);

    VectorPrint(a);
    VectorPrint(b);
    VectorPrint(c);

    return 0;
}
