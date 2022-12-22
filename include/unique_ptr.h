#ifndef UNIQUE_PTR
#define UNIQUE_PTR

template<typename T>
class unique_ptr {
public:
	unique_ptr (T* ptr) {
		this->ptr = ptr;
	};
	T operator*();
	T* operator->();
	T* release();
	~unique_ptr() { delete ptr; }
private:
	T* ptr;
};
#include "unique_ptr.hpp"
#endif