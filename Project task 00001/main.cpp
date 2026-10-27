#include "util.h"
#include "logic.h"
#define DEFAULT_SIZE 100
int main() {
	int size = 10;
	int array[DEFAULT_SIZE]{ 1,2,3,4,5,6,7,8,9,10 };

	/*do {
		system("cls");
		print("Input size of array: ");
		cin >> size;
	} while (size<1 or size>DEFAULT_SIZE);*/

	//init(array, size, -50, 50);

	print("\nArray elements: ");
	print(convert(array, size));
	int value = 20;
	cout << binary_search(array, size, value) << endl;

	//int max = get_max_element(array, size);
	//int min = get_min_element(array, size);

	//print("\nResult: max = " + to_string(max));
	//print(",min = " + to_string(min));

	//double arithmetical = get_arithmetical_avg(array, size);
	//double geometrical = get_geometrical_avg(array, size);

	//print(",arithmetical average = " + to_string(arithmetical));
	//print(",geometrical average = " + to_string(geometrical));


	return 0;
}