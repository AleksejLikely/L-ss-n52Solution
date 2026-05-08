#include "logic.h"

void sort_bubble(int array[], int size) {
	//int count = 0;

	if (size <= 1) {
		return;
	}

	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < (size - 1 - i); j++) {
			//count++;
			if (array[j] > array[j + 1]) {
				flag = false;
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;



			}
		}
		if (flag ) {
			break;
		}
	}
	//cout << "\nCount = " << count;
}