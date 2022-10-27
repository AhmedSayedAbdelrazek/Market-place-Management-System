#include"Product.h"
#include"Seller.h"
#include"Customer.h"
#include"ArrList.cpp"
#include<iostream>

using namespace std;
int xx=-1;

int main ()
{
	
	while (xx != 0)
{
	cout << "------ Marketplace Management System ------\n";
	cout << "(1) Sell \n" << "(2) Buy \n";
	cout << endl << "Enter your select : ";
	int num_of_product;
	int x = 0;
	cin >> x;
	cout << endl << "--------------------------------\n";
	switch (x)
	{
	case(1):
	{
		cout<<" Enter num of product you will sell \n";
		cin>>num_of_product;
		Seller s1;
		s1.set_data(s1);
		for(int i =0;i<num_of_product; i++)
		{
			Product p1;
			s1.Add_product(p1);

			
		}
		break;

	}
	case(2):
	{
		
		break;

	}

	default:
		break;
	}
	main();}
	system("pause");
	return 0;

}