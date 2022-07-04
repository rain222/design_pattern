#pragma once
#include "product.h"
class ProductB : public Product {
public:
    ProductB();
    virtual ~ProductB();
    virtual void Use();
};