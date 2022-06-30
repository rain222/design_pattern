#include "factory.h"
#include "productA.h"
#include "productB.h"

Factory::Factory() {

}
Factory::~Factory() {

}

Product* Factory::create_product(string proname) {
    if ("A" == proname) {
        return new ProductA();
    }else if("B" == proname) {
        return new ProductB();
    }
    return NULL;
}