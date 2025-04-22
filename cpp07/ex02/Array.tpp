/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:37:14 by etaquet           #+#    #+#             */
/*   Updated: 2025/04/22 17:01:55 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(nullptr), _size(0) { }

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < n; ++i)
        _array[i] = T();
}

template<typename T>
Array<T>::Array(Array const &srcs) : _array(nullptr), _size(0) { *this = srcs; }

template<typename T>
Array<T>::~Array() { delete[] _array; }

template<typename T>
Array<T> &Array<T>::operator=(Array const &objs)
{
    if (this != &objs)
    {
        delete[] _array;
        _size = objs._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = objs._array[i];
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw OutOfLimitsException();
    return _array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw OutOfLimitsException();
    return _array[i];
}

template<typename T>
unsigned int Array<T>::size() const { return _size; }

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& array)
{
	out << "Array = { ";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		out << array[i];
		if (i != array.size() - 1)
			out << ", ";
	}
	out << " }";
	return (out);
}
