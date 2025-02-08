/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 07:57:29 by acabarba          #+#    #+#             */
/*   Updated: 2025/02/08 08:36:10 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template	<typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template	<typename T>
Array<T>::Array(size_t n) : _size(n) {
	_data = new T[n];
}

template	<typename T>
Array<T>::Array(const Array& copy) : _size(copy._size) {
	_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_data[i] = copy._data[i];
}

template	<typename T>
Array<T>::~Array() {
	delete [] _data;
}

template	<typename T>
Array<T>& Array<T>::operator=(const Array& copy) {
	if (this != &copy) {
		delete [] _data;
		_size = copy._size;
		_data = new T[_size];
		for (size_t i = 0; i < _size; i++)
		_data[i] = copy._data[i];
	}
	return *this;
}

template	<typename T>
size_t Array<T>::getSize() const {
	return _size;
}

template	<typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template	<typename T>
const T& Array<T>::operator[](size_t index) const {
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}
