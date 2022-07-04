#pragma once

#include "product.h"
#include <string>
using namespace std;

class Factory {
public:
    Factory();
    virtual ~Factory();
    virtual Product* create_product(string proname) = 0;
};