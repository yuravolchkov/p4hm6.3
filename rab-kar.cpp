#include <string>
#include <iostream>
#include "rab-kar.h"

int find_substring_light_rabin_karp(std::string where_i_search, std::string what_i_search)
{
	int what_hash = 0, where_hash = 0, index = 0;
	for (int i = 0; i < what_i_search.length(); i++)
	{
		what_hash += static_cast<int>(what_i_search[i]);
	}

	for (int i = 0; i < where_i_search.length() - what_i_search.length(); i++)
	{

		if (i == 0)
		{
			for (int k = 0; k < what_i_search.length(); k++)
			{
				where_hash += static_cast<int>(where_i_search[k]);
			}
		}
		else
		{
			where_hash -= static_cast<int>(where_i_search[i - 1]);
			where_hash += static_cast<int>(where_i_search[i + what_i_search.length() - 1]);
		}
		if (what_hash == where_hash)
		{
			index = 0;
			for (int j = 0; j < what_i_search.length(); j++)
			{
				if (what_i_search[j] == where_i_search[i + j])
				{
					index++;
				}
			}
			if (index == what_i_search.length())
			{
				return i;
			}
		}

	}
	return -1;
}