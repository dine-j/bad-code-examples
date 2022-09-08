#include "B.h"

class A
{
public:
    void PopulateIntegerList();
    void AddIntToList(int i);
    [[nodiscard]] const B& GetB() const;

private:
    B mB;
};