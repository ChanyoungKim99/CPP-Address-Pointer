/*


#include <iostream>

// 두 변수의 값을 서로 치환

void Swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x{ 10 }, y{ 20 };

	Swap(x, y);

	std::cout << x << " : " << y << std::endl;
	// Swap의 x y와 Entry Point의 x y는 다른 변수이므로 치환 안된다.
	// 반환은 하나밖에 안되어서 return도 쓸 수 없다.


}

*/