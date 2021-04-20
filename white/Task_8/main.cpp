/*Задание(перемещение строк):
 *
 *Напишите функцию MoveStrings, которая принимает два вектора строк, source и
 *destination, и дописывает все строки из первого вектора в конец второго.
 *После выполнения функции вектор source должен оказаться пустым.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    while (!source.empty())
    {
        destination.push_back(source.back());
        source.pop_back();
    }
}

int main() {
    vector<string> src{"one", "two"};
    vector<string> dest{"three", "four"};

    cout << src.size() << endl;
    cout << dest.size() << endl;

    MoveStrings(src, dest);

    cout << src.size() << endl;
    cout << dest.size() << endl;

    return 0;
}
