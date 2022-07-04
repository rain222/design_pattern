#include "factoryAB.h"
#include "productA.h"
#include "productB.h"

FactoryAB::FactoryAB() {

}
FactoryAB::~FactoryAB() {

}

Product* FactoryAB::create_product(string proname) {
    if ("A" == proname) {
        return new ProductA();
    }else if("B" == proname) {
        return new ProductB();
    }
    return NULL;
}