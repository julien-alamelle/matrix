#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>


template <typename K>
class Matrix;

template <typename K>
class Vector {
	const int size;
	K* tab;
public:
	int getSize() const;
	void operator<<(std::ostream os) const;
	Matrix<K> toMatrixV() const;
	Matrix<K> toMatrixH() const;

	void add(const Vector<K> v);
	void sub(const Vector<K> v);
	void mul(const K s);
};

template <typename K>
Vector<K> operator+(const Vector<K> v, const Vector<K> w);
template <typename K>
Vector<K> operator-(const Vector<K> v, const Vector<K> w);
template <typename K>
Vector<K> operator*(const Vector<K> v, const K s);
template <typename K>
Vector<K> operator*(const K s, const Vector<K> v);










template <typename K>
class Matrix {
	const int sizeX;
	const int sizeY;
	K* tab;
public:
	int getSizeX() const {return sizeX;};
	int getSizeY() const {return sizeY;};
	bool isSquare();
	void operator<<(std::ostream os);
	Vector<K> toVector();
};

#endif
