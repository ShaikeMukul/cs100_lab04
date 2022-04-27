#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

//constractor

TEST(Constructor, EmptyConstructor){
    Rectangle r1;
    EXPECT_EQ(r1.area(), 0);
    EXPECT_EQ(r1.perimeter(), 0);
}

TEST(Constructor, ParamContructor){
    Rectangle r2(10,5);
    EXPECT_EQ(r2.area(), 50);
    EXPECT_EQ(r2.perimeter(), 30);
}

TEST(Constructor, BigParamConstructor){
    Rectangle r3(1000, 2000);
    EXPECT_EQ(r3.area(), 2000000);
    EXPECT_EQ(r3.perimeter(), 6000);
}

//area
TEST(area, positiveArea) {
        Rectangle r;
        r.set_width(7);
        r.set_height(5);
        EXPECT_EQ(r.area(), 35);

}

TEST(area, negativeArea) {
        Rectangle r;
        r.set_width(10);
        r.set_height(-2);
        EXPECT_EQ(r.area(), -20);
}
TEST(area, emptyArea) {
        Rectangle r;
        r.set_width(0);
        r.set_height(0);
        EXPECT_EQ(r.area(), 0);
}

//perimeter
TEST(Perimeter, ZeroPerimeter){
    Rectangle rec;
    ASSERT_EQ(rec.perimeter(),0);
}

TEST(Perimeter, SomePerimeter){
    Rectangle rec(10,50);
    ASSERT_EQ(rec.perimeter(), 120);
}

TEST(Perimeter, BigPerimeter){
    Rectangle rec(1217,182369);
    ASSERT_EQ(rec.perimeter(), 367172);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
