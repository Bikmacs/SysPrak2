// zad2(mas[1,1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main() {

    setlocale(0, "rus");
    int count = 0;
    const int a = 4;
    const int b = 3;

    int mas[a][b] = {
    {11, 12, 13},
    {0, 0, 0},
    {31, 0,  0},
    {41, 42, 0}
    };


   /* int value = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b;j++) {
            mas[i][j] = value++;
        }
    }*/

    std::cout << "Массив \n";

    for (int i = 0; i < a;i++) {
        for (int j = 0; j < b;j++) {
            std::cout << mas[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
        {
            if (mas[i][j] == 0) {
                count ++;
            }
        }
    }
    std::cout << "Количество нулевых элементов: " << count << std::endl;

    
   
}

    
