
#include <iostream>

int main()
{
	setlocale(0, "rus");
	
	int mas[] = { 0,-4, 2, 4, 6, -8 };
	int count = 0;

	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++) {
		if (mas[i] < 0) {
			count++;
		}
	}

	std::cout << " Количество отрицательных:" << count;
}
