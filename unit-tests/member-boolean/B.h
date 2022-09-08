#include <vector>

class B {
public:
    void AddIntToList(int integerToAdd);
    [[nodiscard]] bool GetHasDuplicatesFlag() const;

private:
    std::vector<int> mInts;
    bool mHasDuplicates = false;
};
