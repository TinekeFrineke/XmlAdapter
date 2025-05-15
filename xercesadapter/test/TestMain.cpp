
#include <gtest/gtest.h>


#include "XercesDocument.h"
#include "XercesElement.h"


int main(int argc, const char** argv)
{
    ::testing::InitGoogleTest(&argc, const_cast<char **>(argv));

    RUN_ALL_TESTS();
    return 0;
}