#include<iostream>
#include<string>
#include"Product.h"
#include "ArrList.h"


using namespace std;

class Seller
{
	string name, email;
	int seller_id;

public:
	void set_data(Seller s);
	void Add_product(Product p);
	int get_id();
	Seller(void);
	~Seller(void);

};

