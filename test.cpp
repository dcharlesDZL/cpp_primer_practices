#include "headers.h"
#ifndef CPP_PRIMER_TEST
#define CPP_PRIMER_TEST
#include <iostream>
#endif // !CPP_PRIMER_TEST

//5.6.3练习
#ifndef PRACTICE_5_6_3
#define PRACTICE_5_6_3
#include <stdexcept>
#endif
void try_throw_catch_test()
{
	while (1)
		{
			try
			{
				double num, den;
				cout << "被除数为：";
				cin >> num;
				cout << "除数为：";
				cin >> den;
				if (den == 0)
					throw exception("警告：被除数不能为0,请重新输入");
				cout << num / den << std::endl;
				break;
			}
			catch (exception err)
			{
				cout << err.what() << endl;

			}

		}
}
//6.1.1练习
size_t call_count()
{
	static size_t var2 = 0;
	return ++var2;
}
//6.2.1练习
void swapp(int a, int b)
{
	int* p, * q;
	p = &a;
	q = &b;
	*p = b;
	*q = a;
}
int main()
{
	//5.6.3
	//try_throw_catch_test();
	//6.1.1
	for(int i = 0;i<100;i++)
	call_count();
	cout<<call_count()<<endl;
	//6.2.1
	int a = 2;
	int b = 3;
	swapp(a, b);
	cout << a << "   " << b;
	return 0;
}