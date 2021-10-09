**Алгоритм Евклида нахождения НОД**   
Алгоритм Евклида используется для нахождения НОД двух целых неотрицательных чисел a и b. НОД чисел a и b - наибольшее число делящееся нацело на a и b одновременно. 
  
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
Саму фуекцию можно записать короче :
 ```
int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}
```
В самом лёгком для понимания виде алгоритм Евклида выглядит следующим образом :
```
#include <iostream>
using namespace std;
int main() {
  int y, x;
  cin >> x >> y; //Ввод чисел
  while (x != y) {  //Алгоритм Евклида
    if (x > y) x -= y;
     else y -= x;
  }
  cout << x << endl; //Вывод НОД
}
```
  Пример ввода и вывода:
  Ввод:
  18
  30
  Вывод:
  6
