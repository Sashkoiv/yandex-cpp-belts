/* Задание:
 * Люди стоят в очереди, но никогда не уходят из её начала, зато могут
 * приходить в конец и уходить оттуда. Более того, иногда некоторые люди
 * могут прекращать и начинать беспокоиться из-за того, что очередь не продвигается.
 *
 * Реализуйте обработку следующих операций над очередью:
 *
 * WORRY i: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
 * QUIET i: пометить i-го человека как успокоившегося;
 * COME k: добавить k спокойных человек в конец очереди;
 * COME -k: убрать k человек из конца очереди;
 * WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
 *
 * Изначально очередь пуста.
 *
 * Формат ввода
 * Количество операций Q, затем описания операций.
 * Для каждой операции WORRY i и QUIET i гарантируется, что человек с номером
 * i существует в очереди на момент операции.
 * Для каждой операции COME -k гарантируется, что k не больше текущего размера очереди.
 *
 * Формат вывода
 * Для каждой операции WORRY_COUNT выведите одно целое число — количество
 * беспокоящихся людей в очереди.
 *
 * Пример:
 * Ввод
 * 8
 * COME 5
 * WORRY 1
 * WORRY 4
 * COME -2
 * WORRY_COUNT
 * COME 3
 * WORRY 3
 * WORRY_COUNT
 * Вывод
 * 1
 * 2
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    int item = 0;
    string command = "";

    struct Person {
        bool worry = 0;
        bool quiet = !worry;
    };

    vector<Person> queue;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> command;

        // add or remove people in the queue
        if (command == "COME") {
            cin >> item;
            if (item > 0) {
                for (int i = 0; i < item; i++) {
                    queue.push_back(Person());
                }
            } else {
                for (int i = 0; i < 0; i++) {
                    queue.pop_back();
                }
            }
        }

        // make person quiet
        if (command == "QUIET") {
            cin >> item;
            queue[item].worry = false;
        }

        // make person worry
        if (command == "WORRY") {
            cin >> item;
            queue[item].worry = true;
        }

        // show worried
        if (command == "WORRY_COUNT") {
            int k = 0;
            for(const auto& j : queue){
                if (j.worry){
                    k++;
                }
            }
            cout << k << endl;
        }

    }

    return 0;
}
