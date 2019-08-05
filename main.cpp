#include<iostream>
#include"sales.h"
////////////////////////////////////////
int main()
{
	sales::Sales s1;
	sales::set_sales(s1);
	sales::show_sales(s1);

	double ar[] = { 224098.45, 360780.10, 510124.67, 275522.78 };
	sales::Sales s2;
	sales::set_sales(s2, ar, sales::QUARTERS);
	sales::show_sales(s2);

	system("pause");
	return 0;
}