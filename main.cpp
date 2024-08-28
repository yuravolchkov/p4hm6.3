#include <string>
#include <iostream>
#include "rab-kar.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	std::string where_i_search, what_i_search;
	
	std::cout << "Введите строку, в которой будет осуществляться поиск: ";
	std::getline(std::cin, where_i_search);

	for (; what_i_search != "exit";)
	{
		std::cout << "Введите подстроку, которую нужно найти: ";
		std::getline(std::cin, what_i_search);
		if (find_substring_light_rabin_karp(where_i_search, what_i_search) == -1)
		{
			std::cout << "\nПодстрока " << what_i_search << " не найдена "<<std::endl;
		}
		else
		{
			std::cout << "\nПодстрока "<< what_i_search << " найдена по индексу " << find_substring_light_rabin_karp(where_i_search, what_i_search) << std::endl;
		}
	}
	return 63;
}