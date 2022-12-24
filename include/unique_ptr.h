#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

template<typename T>
class unique_ptr {
public:
    unique_ptr(const unique_ptr&) = delete;
	unique_ptr(T* ptr) {
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