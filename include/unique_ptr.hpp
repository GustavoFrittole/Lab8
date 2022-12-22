template<typename T>
T unique_ptr<T>::operator*(){
	return *ptr;
}
template<typename T>
T* unique_ptr<T>::operator->(){
	return &ptr;
}

template<typename T>
T* unique_ptr<T>::release(){
	T* temp = ptr;
	ptr = nullptr;
	return temp;
}
