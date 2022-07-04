#pragma once

#include "product.h"
#include "factory.h"
#include <string>
using namespace std;

class FactoryAB : public Factory {
public:
    FactoryAB();
    virtual ~FactoryAB();
    virtual Product* create_product(string proname);
};