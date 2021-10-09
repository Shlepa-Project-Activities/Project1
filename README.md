**Алгоритм Евклида нахождения НОД**   
Алгоритм Евклида используется для нахождения НОД двух целых неотрицательных чисел a и b. НОД чисел a и b - наибольшее число делящееся нацело на a и b одновременно. 
На вход функция получает 2 значения целочисленного типа, преобразует их по правилу: **"заменяем большее из чисел на остаток от деления его на меньшее число, пока остаток положительный. Если остаток нулевой, то меньшее число - результат работы программы"**, и возвращает результат работы алгоритма - целое число, НОД(а, b).
  
  **Реализация на С++** :
  ```
#include <iostream>

using namespace std;

//Алгоритм Евклида
int gcd(int a, int b) {
    if(b > a) swap(a, b);
    while(a % b != 0) {
        a %= b;  
        swap(a, b);
    }
    return b;
}

int main()
{
    int x, y;
    cout << "Vvedite x -> ";  //Ввод чисел
    cin >> x;
    cout << "Vvedite y -> ";
    cin >> y;
    cout << "NOD(x, y) = " << gcd(x, y) << endl;  //Вывод НОД
    return 0;
}
```
```
  Пример ввода и вывода:
  Ввод:
  18
  30
  Вывод:
  6
```
