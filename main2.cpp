#include <iostream>

// 두 변수의 값을 서로 치환

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y; // 역참조된 y의 값을, x의 역참조에 넣음
	*y = temp;
}

int main()
{
	int x{ 10 }, y{ 20 };

	Swap(&x, &y);

	std::cout << x << " : " << y << std::endl;
}