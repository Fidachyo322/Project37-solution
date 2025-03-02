#include "util.h"
#include "line_search_alghorithm.h"
#define BUF 100
#include "binary_search_algorithm.h"

int main() {

	//int array[BUF];
	//int size;

	//cout << "Imput size of array: ";
	//cin >> size;

	int array[] = { 1, 3, 6 ,8, 9, 12, 15, 23, 26, 56 };
	int size = 10;

	int value;
	cout << "Imput find value: ";
	cin >> value;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	/*string msg = find_value(array, size, value) ? "Yes" : "No";*/
	string msg = binary_find_value(array, size, value) ? "Yes" : "No";

	cout << "Answer: " << msg << endl;

	cout << "Frist value index is: " << find_first_value_index(array, size, value) << endl;

	cout << "Last value index is: " << find_last_value_index(array, size, value) << endl;

	cout << "Count of value is: " << count_value(array, size, value) << endl;

	return 0;
}
