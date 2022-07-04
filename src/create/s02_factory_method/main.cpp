#include <iostream>
#include "factory.h"
#include "factoryAB.h"
#include "factoryC.h"

using namespace std;

int main(int argc, char *argv[])
{
	Factory* factory = new FactoryAB();
	Product * prod = factory->create_product("A");
		
	prod->Use();
	
	delete prod;

    prod = factory->create_product("B");
		
	prod->Use();
	delete factory;
	delete prod;

	factory = new FactoryC();
	prod = factory->create_product("C");
	prod->Use();
	delete factory;
	delete prod;
	
	return 0;
}