#include "util.h"


string convert(int array[], int size) {
	string s = to_string(array[0]);

	if (size <= 0) {
		return "Error";
	}

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}

	return s;
}
void init_random(int array[], int size, int a, int b) {
	if (size <= 0) {
		return;
	}

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}

}
void print(string msg) {
	cout << msg;


}
