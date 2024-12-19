template <typename K>
class Vector<K> {
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

Vector<K> operator+(const Vector<K> v, const Vector<K> v);
Vector<K> operator-(const Vector<K> v, const Vector<K> v);
Vector<K> operator*(const Vector<K> v, const K s);
Vector<K> operator*(const K s, const Vector<K> v);










template <typename K>
class Matrix<K> {
	const int size;
	K* tab;
public:
	int getSize();
	bool isSquare();
	void operator<<(std::ostream os);
	Vector<K> toVector();
};
