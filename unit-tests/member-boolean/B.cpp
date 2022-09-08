#include "B.h"

void B::AddIntToList(int integerToAdd) {
    auto it = std::find_if(mInts.begin(), mInts.end(), [integerToAdd](int i) {
        return integerToAdd == i;
    });
    if (it != mInts.end())
    {
        mHasDuplicates = true;
    }
    mInts.emplace_back(integerToAdd);
}

bool B::GetHasDuplicatesFlag() const {
    return mHasDuplicates;
}
