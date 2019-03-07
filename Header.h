#pragma once
#include <iostream>
using namespace std;

struct Element {
	int data;
	Element* leg;
};

void fillVector(int[], int);