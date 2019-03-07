#include "Header.h"

void fillVector(int vec[], int dim) {
	for (int i = 0; i < dim; ++i) {
		cout << "v[" << i << "]= ";
		cin >> vec[i];
	}

}