/* Задача 1: Количество уникальных строк.
Дан набор строк. Найдите количество уникальных строк в этом наборе.

Формат ввода
Сначала вводится количество строк N, затем — сами N строк, разделённые пробелом. Все строки состоят лишь из латинских букв, цифр и символов подчёркивания.

Формат вывода
Выведите единственное целое число — количество уникальных строк в данном наборе.

Пример:
Ввод
6
first
second
first
third
second
second

Вывод
3

Сортировка целых чисел по модулю
Задание:
В стандартном потоке дана одна строка, состоящая из N + 1 целых чисел. Первым числом идёт само число N. Далее следуют ещё N чисел, обозначим их за массив A. Между собой числа разделены пробелом.
Отсортируйте массив А по модулю и выведите его в стандартный поток.

Ограничения
0 <= N <= 1000
-1000000 <= A[i] <= 1000000

Примеры
Вход - > Выход
2 -4 3 -> 3 -4
3 1 -3 2 -> 1 2 -3

Третья неделя обучения на coursera.org
Структуры и классы - интересная тема. Некоторые задания долго разбирал.

Для начала маленькое задание:
Реализуйте класс, поддерживающий набор строк в отсортированном порядке. Класс должен содержать два публичных метода:
C++Выделить код
1
2
3
4
5
6
7
8
9
10
11
class SortedStrings {
public:
  void AddString(const string& s) {
    // добавить строку s в набор
  }
  vector<string> GetSortedStrings() {
    // получить набор из всех добавленных строк в отсортированном порядке
  }
private:
  // приватные поля
};
Пример:
Код
C++Выделить код
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}

int main() {
  SortedStrings strings;

  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);

  strings.AddString("second");
  PrintSortedStrings(strings);

  return 0;
}
Вывод
C++Выделить код
1
2
first second third
first second second third
*/