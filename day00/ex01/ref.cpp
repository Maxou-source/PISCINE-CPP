# include <iostream>








int main ()
{
	int a = 3;

	int& b = a;
	int c = 2;
	b = c;

	b = 9;
	std::cout << &a << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
}