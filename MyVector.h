#pragma once
template <typename T>

class MyVector {

public:
	MyVector();
	~MyVector();
	void add(T item);
	const T operator[](const int index);
	//... and other methods

private:
	int noofitems, maxitems;
	T* data; // array of data
	void checkSize();
};

template<typename T>
MyVector<T>::MyVector() {
	noofitems = 0;
	maxitems = 10;
	data = (T*)malloc(sizeof(T) * maxitems);
}

template<typename T>
MyVector<T>::~MyVector() {
	free(data);
}

template<typename T>
void MyVector<T>::checkSize() {
	if (noofitems == max) {
		maxitems = (3 * maxitems) / 2;
		realloc(data, sizeof(T) * maxitems);
	}
}

template<typename T>
void MyVector<T>::add(T item) {
	checkSize();
	data[noofitems++] = item;

}

template<typename T>
const T MyVector<T>::operator[](const int index) {
	assert(index >= 0);
	assert(index < noofitems);
	return data[index];
}