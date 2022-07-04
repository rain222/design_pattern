#pragma once

#include "product.h"
#include "factory.h"
#include <string>
using namespace std;

class FactoryC : public Factory {
public:
    FactoryC();
    virtual ~FactoryC();
    virtual Product* create_product(string proname);
};