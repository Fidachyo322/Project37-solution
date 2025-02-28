#include "util.h"
#include "line_search_alghorithm.h"
#define BUF 100

int main() {

	int array[BUF];
	int size;

	cout << "Imput size of array: ";
	cin >> size;

	int value;
	cout << "Imput find value: ";
	cin >> value;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	string msg = find_value(array, size, value) ? "Yes" : "No";

	cout << "Answer: " << msg << endl;

	return 0;
}
