#include "logic.h"


//int get_max_element(int* array, int size) {
//	int max = array[0];
//
//	for (int i = 1; i < size; i++) {
//		if (max < array[i]) {
//			max = array[i];
//		}
//	}
//
//	return max;
//}


int get_max_element(int* array, int size) {
	int max = INT_MIN;
	for (int i = 1; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;

}

int get_min_element(int* array, int size) {
	int min = INT_MAX;
	for (int i = 1; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}
	return min;
}

double get_arithmetical_avg(int* array, int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum/size;
}
double get_geometrical_avg(int* array, int size) {
	int product = 1;
	for (int i = 0; i < size; i++) {
		product *= array[i];
	}
	return pow(product,1.0/size);
}
bool binary_search(int* array, int size,int value) {
	int first = 0;
	int last = size - 1;

	while (first<=last) {
		int middle = (first + last) / 2;
		if (array[middle]==value) {
			return true;
		}
		else if (array[middle] > value) {
			first = middle + 1;
		}
		else {
			last = middle - 1;
		}
	}
	return false;
}
