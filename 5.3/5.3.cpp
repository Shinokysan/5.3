/*Дан массив размера N (N – нечетное число). 
Поменять местами его первый элемент со вторым, третий – с четвёртым и т.д.*/
#include <iostream>
using namespace std;
// функция обмена местами
void swap(int& a, int& b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
        // вводим массив
        cin >> a[i];  
    for (int i = 0; i < n - 1; i += 2)
        //меняем местами элементы массива
        swap(a[i], a[i + 1]);
    for (int i = 0; i < n; i++)
        // выводим результат
        cout << a[i] << " "; 
    return 0;
}


