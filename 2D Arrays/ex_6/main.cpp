#include <iostream>

using namespace std;

template <typename T>
class Matrix
{
public:
	Matrix(int rows, int columns) : rows(rows), columns(columns)
	{
		data = new T * [rows];
		for (size_t i = 0; i < rows; i++)
		{
			data[i] = new T[columns];
		}
	};
	~Matrix()
	{
		for (size_t i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}

	void randomize()
	{
		srand(time(0));
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				data[r][c] = 10 + rand() % 90;
			}
		}
	}
	void input()
	{
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				cout << "Entering...\nRow-> " << r + 1 << ", Column-> " << c + 1 << endl;
				cout << "-> ";
				cin >> data[r][c];
			}
		}
	}

	void print()
	{
		cout << "\nResult\n" << endl;
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				cout << data[r][c] << " ";
			}
			cout << endl;
		}
	}

	void operator+(const Matrix& other)
	{
		if (rows != other.rows || columns != other.columns)
		{
			cout << "Impossible" << endl;
		}
		else
		{
			Matrix result(rows, columns);
			for (size_t r = 0; r < rows; r++)
			{
				for (size_t c = 0; c < columns; c++)
				{
					result.data[r][c] = data[r][c] + other.data[r][c];
				}
			}
			return result.print();
		}
	}

	void operator-(const Matrix& other)
	{
		if (rows != other.rows || columns != other.columns)
		{
			cout << "Impossible" << endl;
		}
		else
		{
			Matrix result(rows, columns);
			for (size_t r = 0; r < rows; r++)
			{
				for (size_t c = 0; c < columns; c++)
				{
					result.data[r][c] = data[r][c] - other.data[r][c];
				}
			}
			return result.print();
		}
	}

	void operator*(const T& number)
	{
		Matrix result(rows, columns);
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				result.data[r][c] = data[r][c] * number;
			}
		}
		return result.print();
	}

	void operator/(const T& number)
	{
		Matrix result(rows, columns);
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				result.data[r][c] = data[r][c] / number;
			}
		}
		return result.print();
	}

	T minNumber() const
	{
		T min_number = data[0][0];
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				if (min_number > data[r][c])
				{
					min_number = data[r][c];
				}
			}
		}
		return min_number;
	}

	T maxNumber() const
	{
		T max_number = data[0][0];
		for (size_t r = 0; r < rows; r++)
		{
			for (size_t c = 0; c < columns; c++)
			{
				if (max_number < data[r][c])
				{
					max_number = data[r][c];
				}
			}
		}
		return max_number;
	}

private:
	T** data;
	int rows;
	int columns;
};

int main()
{
	Matrix <int>matrix1(2, 3);
	Matrix <int>matrix2(2, 3);

	matrix1.randomize();
	matrix1.print();
	matrix2.input();
	system("cls");
	matrix1.print();
	matrix2.print();

	matrix1 + matrix2;
	matrix1 - matrix2;
	matrix1 * 2;
	matrix1 / 2;

	cout << "\nMin " << matrix1.minNumber() << endl;
	cout << "\nMax " << matrix2.maxNumber() << endl;

	matrix1.~Matrix();
	matrix2.~Matrix();
}