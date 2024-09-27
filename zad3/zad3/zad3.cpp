// zad3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

const int tit = 100;
const int vokal = 100;
const int mus = 100;
int proverka = 0;
int kolv = 0;

struct Song
{
    char title[tit];
    char artist[vokal];
    double duration;
};

int main()
{
    setlocale(0, "rus");
    Song music[mus];  
    int kolv = 0;           
    int proverka = 0;
    int deleted = 0;

    do {
        if (kolv >= mus) {
            std::cout << "Максимальное количество песен достигнуто!";
        }
        std::cout << "Введите название: \n";
        std::cin >> music[kolv].title, tit;

        std::cout << "Введите автора: \n";
        std::cin >> music[kolv].artist, vokal;

        std::cout << "Введите продолжительность: \n";
        std::cin >> music[kolv].duration;

        kolv++;

        std::cout << "Песня добавлена. Добавить новую? нажмите 1, для выхода нажмите 0 ";
        std::cin >> proverka;

    } while (proverka == 1);

    std::cout << "\nСписок добавленных песен:\n";
    for (int i = 0; i < kolv; i++) {
        std::cout << "Название: " << music[i].title << ", Автор: " << music[i].artist << ", Продолжительность: " << music[i].duration << " мин" << std::endl;
    }

    
    std::cout << "Удалить песню? Введите номер песни ";
    std::cin >> deleted;

    if (deleted <= kolv) {
        for (int i = deleted - 1; i < kolv - 1; i++) {
            music[i] = music[i + 1];
        }
        kolv--;
        std::cout << "Песня удалена." << std::endl;
        }
    else {
    std::cout << "Некорректный номер песни." << std::endl;
    }

    std::cout << "\nСписок добавленных песен:\n";
    for (int i = 0; i < kolv; i++) {
        std::cout << "Название: " << music[i].title << ", Автор: " << music[i].artist << ", Продолжительность: " << music[i].duration << " мин" << std::endl;
    }
   



}

