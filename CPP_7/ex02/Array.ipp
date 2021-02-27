template <typename T>
Array<T>::Array(void) : data(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : data(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &a)
{
	Array::operator=(a);
}

template <typename T>
Array<T>::~Array(void) { delete[] this->data; }

template <typename T>
Array<T> &Array<T>::operator=(const Array &a)
{
	if (this == &a) return (*this);
	if (this->data)
		this->~Array();
	this->data = new T[a._size];
	this->_size = a._size;
	for(unsigned int i = 0; i < this->_size; i++)
		this->data[i] = a.data[i];
	return (*this);
}

template <typename T>
const char *Array<T>::OutRange::what() const throw() { return ("Index is out of range!!\n"); }

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_size)
		throw (Array<T>::OutRange());
	return (this->data[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const { return (this->_size); }
