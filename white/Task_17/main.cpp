/*
И ещё небольшое заданьице:
Реализуйте рассказанный на лекции класс Function, позволяющий создавать, вычислять и инвертировать функцию, состоящую из следующих элементарных операций:
прибавить вещественное число x;
вычесть вещественное число x.
При этом необходимо объявить константными все методы, которые по сути такими являются.

Пример:
Код
C++Выделить код
struct Image {
  double quality;
  double freshness;
  double rating;
};

struct Params {
  double a;
  double b;
  double c;
};

Function MakeWeightFunction(const Params& params,
                            const Image& image) {
  Function function;
  function.AddPart('-', image.freshness * params.a + params.b);
  function.AddPart('+', image.rating * params.c);
  return function;
}

double ComputeImageWeight(const Params& params, const Image& image) {
  Function function = MakeWeightFunction(params, image);
  return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params,
                              const Image& image,
                              double weight) {
  Function function = MakeWeightFunction(params, image);
  function.Invert();
  return function.Apply(weight);
}

int main() {
  Image image = {10, 2, 6};
  Params params = {4, 2, 6};
  cout << ComputeImageWeight(params, image) << endl;
  cout << ComputeQualityByWeight(params, image, 46) << endl;
  return 0;
}
Вывод
C++Выделить код
1
2
36
20
*/