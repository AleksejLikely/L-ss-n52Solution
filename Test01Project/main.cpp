#include "util.h"

int main() {

	int array[DEFAULT_SIZE];
	int size;

	cout << "Input the szie of arra: ";
	cin >> size;

	init_random(array, size, -100, 100);

	print("Array before: ");
	print(convert(array, size));

	return 0;

}