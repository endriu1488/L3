#include "Header.h"


int main() {
	int N = 0;
	cout << "numar elemente: ";
	cin >> N;
	int *vec = new int[N];
	fillVector(vec, N);
	Element *cap = 0;
	Element *p = new Element;
	for (int i = 0; i < N; ++i) {
		p->data = vec[i];
		p->leg = cap;
		cap = p;
	}
	
}