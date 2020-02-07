#include "Merge.h"

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7,8 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Ansorted arr" << "\n";
	print(arr, arr_size);
	std::cout<< "\n";

	MergeSort(arr, 0, 6);
	std::cout << "Sorted arr" << "\n";
	print(arr, arr_size);
	return 0;
}
