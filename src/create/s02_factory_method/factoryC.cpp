#include "factoryC.h"
#include "productC.h"

FactoryC::FactoryC() {

}
FactoryC::~FactoryC() {

}

Product* FactoryC::create_product(string proname) {
    if ("C" == proname) {
        return new ProductC();
    }
    return NULL;
}