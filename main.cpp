/*
** File Name: main.cpp
** Author: Ovidio de Jesus Henriquez
** 
** This file will test the merge sort implementation in MergeSort.H.
*/

/** INCLUDES **/
#include <iostream>
#include <vector>
#include "MergeSort.h"

template <class T>
void print_vector(std::vector<T> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << ", ";
	}
	std::cout << '\n';
}

int main()
{
	// Create test vectors using integers and characters
	std::vector<int> int_test = {5, 7, 9, 8, 2, 1, 4, 1, 54, 2, 56, 84, 55, 11, 6, 44, 02};
	std::vector<char> char_test = {'d', 'e', 'l', 's', 'z', 'k'};

	std::vector<int> int_sorted = merge_sort(int_test);
	std::vector<char> char_sorted = merge_sort(char_test);

	// Print out the test vector and its sorted counter part
	std::cout << "int_test:   ";
	print_vector(int_test);

	std::cout << "int_sorted: ";
	print_vector(int_sorted);

	std::cout << "char_test:   ";
	print_vector(char_test);

	std::cout << "char_sorted: ";
	print_vector(char_sorted);

	return 0;
}