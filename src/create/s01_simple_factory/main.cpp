#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main(int argc, char *argv[])
{
	Product * prod = Factory::create_product("A");
		
	prod->Use();
	
	delete prod;

    prod = Factory::create_product("B");
		
	prod->Use();
	
	delete prod;
	
	return 0;
}