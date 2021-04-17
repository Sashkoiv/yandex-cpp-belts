/* Задание:
 * В стандартном потоке даны три строки, разделённые пробелом.
 * Каждая строка состоит из строчных латинских букв и имеет длину не более
 * 30 символов. Выведите в стандартный вывод лексикографически минимальную из них.
 *
 * Примеры
 * ввод - > вывод
 * milk milkshake month -> milk
 * c a b -> a
 * fire fog wood -> fire
 */

#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<string> words(3);
    cin>> words[0] >> words[1] >> words[2];
    cout<<*min_element(words.begin(), words.end())<<endl;

    return 0;
}
