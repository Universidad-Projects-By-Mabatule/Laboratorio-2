#pragma once
#include <string>
#include <iostream>

using namespace  std;

template <class T>
class ArrayList
{
private:
	T** values;
	int size;
	int capacity;
public:
	ArrayList() {
		capacity = 100;
		values = new T*[capacity];
		size = 0;
	}
	int getSize() {
		return size;
	}
	int getCapacity() {
		return capacity;
	}
	int getValue(int pos) {
		return values[pos];
	}
	void add(T* value) {
			values[size] = value;
			size++;
	}
	void mostrar() {
		for (int i = 0; i < size; i++)
		{
			values[i]->mostrar();
			cout << "*****************************" << endl;
		}
	}
	

	


	~ArrayList() {

	}
};