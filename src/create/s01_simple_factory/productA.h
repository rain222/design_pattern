#pragma once
#include "product.h"
class ProductA : public Product{
public:
    ProductA();
    virtual ~ProductA();
    virtual void Use();
};