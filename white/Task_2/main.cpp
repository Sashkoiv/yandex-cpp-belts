/* Задание
 * На вход вашей программе в стандартном вводе даны действительные
 * коэффициенты A, B и C уравнения Ax² + Bx + C = 0.
 * Выведите все его различные действительные корни в любом порядке.
 * Гарантируется, что хотя бы один из коэффициентов не равен нулю.
 *
 * Пример
 * stdin -> stdout
 * 2 5 2 -> -0.5 -2
 * 2 4 2 -> -1
 * 2 1 2 ->
 * 0 4 10 -> -2.5
 *
 * Подсказка:
 * Для вычисления квадратного корня используйте функцию sqrt из библиотеки cmath.
*/

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double d = pow(b, 2) - 4 * a * c;
    cout << "d = " << d << endl;

    if (d > 0) {
        double r1 = ((-b) + sqrt(d)) / (2 * a);
        double r2 = ((-b) - sqrt(d)) / (2 * a);
        cout << a << b << c << "->" << r1 << " " << r2 << endl;
    } else if (d == 0) {
        double r = (-b) / (2 * a);
        cout << a << b << c << "->" << r << endl;
    }

    return 0;
}
