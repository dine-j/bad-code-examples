#include <gtest/gtest.h>
#include "A.h"

TEST(ATest, SetDuplicateFlagToTrue)
{
    A a;

    a.PopulateIntegerList();
    a.AddIntToList(3);

    EXPECT_TRUE(a.GetB().GetHasDuplicatesFlag());
}

TEST(ATest, SetDuplicateFlagToFalse)
{
    A a;

    a.PopulateIntegerList();
    a.AddIntToList(4);

    EXPECT_FALSE(a.GetB().GetHasDuplicatesFlag());
}
