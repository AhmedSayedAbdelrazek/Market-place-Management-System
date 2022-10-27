#include <iostream>
#include "Seller.h"
#include "Product.h"

int Seller :: get_id( )
{
	return seller_id;
}

Seller::Seller(void)
{
	
}

void Seller::set_data(Seller s)
{
	ArrList <Seller> a2;
	cout<<"Name of Seller : " ; 
	cin>>s.name;
	cout<<"Email of Seller : " ;
	cin>>s.email;
	cout<<"Seller_id  : " ;
	cin>>s.seller_id;
	a2.append(s);
}

void Seller::Add_product(Product p)
{
	ArrList <Product> a1;
	cout<<"Name of Product : " ; 
	cin>>p.name_product;
	cout<<"Name of Category : " ; 
	cin>>p.category;
	cout<<"Price : " ; 
	cin>>p.price;
	p.id++;
	a1.append(p);

}

Seller::~Seller(void)
{
}
