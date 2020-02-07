#pragma once
#include <iostream>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int  n2 = r - m;
	int* L = new int[n1], * R = new int[n2];

	for (i = 0; i < n1; ++i)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; ++j)
	{
		R[j] = arr[m + 1 + j];
	}

	j = 0;
	i = 0;
	k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] > R[j])
		{
			arr[k] = R[j];
			j++;

		}
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;

		}
		k++;
	}

	while (i < n1)

	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	delete[] L;
	delete[] R;
}

void MergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;

		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		merge(arr, l, m, r);

	}
}

void print(int arr[], int arr_size)
{
	for (int i = 0; i < arr_size; ++i)
	{
		std::cout << arr[i] << " ";
	}
}