#pragma once
#include "product.h"
class ProductC : public Product{
public:
    ProductC();
    virtual ~ProductC();
    virtual void Use();
};