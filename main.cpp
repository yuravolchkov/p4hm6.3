#include <string>
#include <iostream>
#include "rab-kar.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����

	std::string where_i_search, what_i_search;
	
	std::cout << "������� ������, � ������� ����� �������������� �����: ";
	std::getline(std::cin, where_i_search);

	for (; what_i_search != "exit";)
	{
		std::cout << "������� ���������, ������� ����� �����: ";
		std::getline(std::cin, what_i_search);
		if (find_substring_light_rabin_karp(where_i_search, what_i_search) == -1)
		{
			std::cout << "\n��������� " << what_i_search << " �� ������� "<<std::endl;
		}
		else
		{
			std::cout << "\n��������� "<< what_i_search << " ������� �� ������� " << find_substring_light_rabin_karp(where_i_search, what_i_search) << std::endl;
		}
	}
	return 63;
}