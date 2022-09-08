#include "A.h"

void A::AddIntToList(int integerToAdd) {
    mB.AddIntToList(integerToAdd);
}

const B& A::GetB() const {
    return mB;
}

void A::PopulateIntegerList() {
    mB.AddIntToList(0);
    mB.AddIntToList(1);
    mB.AddIntToList(2);
    mB.AddIntToList(3);
}
