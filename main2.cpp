#include <iostream>

// �� ������ ���� ���� ġȯ

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y; // �������� y�� ����, x�� �������� ����
	*y = temp;
}

int main()
{
	int x{ 10 }, y{ 20 };

	Swap(&x, &y);

	std::cout << x << " : " << y << std::endl;
}