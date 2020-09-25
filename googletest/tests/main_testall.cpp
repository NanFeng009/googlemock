#include <limits.h>
#include <gtest/gtest.h>
#include "addition.h"
#include "multiply.h"

class additiontest : public ::testing::Test{
    protected:
        virtual void SetUp(){}
        virtual void TearDown(){}
};

class multiplytest : public ::testing::Test{
    protected:
        virtual void SetUp(){}
        virtual void TearDown(){}
};

TEST_F(additiontest, towvalues){
    const int x = 4;
    const int y = 5;
    addition addinstance;
    EXPECT_EQ(9, addinstance.twovalues(x,y));
    EXPECT_EQ(5, addinstance.twovalues(2,3));
}

TEST_F(multiplytest, towvalues){
    const int x = 4;
    const int y = 5;
    multiply mulinstance;
    EXPECT_EQ(20, mulinstance.twovalues(x,y));
    EXPECT_EQ(6, mulinstance.twovalues(2,3));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
