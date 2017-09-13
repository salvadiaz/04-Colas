#include "gtest/gtest.h"
#include "../Ej-01/sonIguales.h"

TEST(test_Ej01, test) {
    EXPECT_EQ(true, true);
}
Cola<char> *A, *B;

TEST(test_Ej01, testIguales) {
    A= new Cola<char>;
    B= new Cola<char>;
    for (char i = 'a'; i < 'm' ; ++i) {
        A->encolar(i);
        B->encolar(i);
    }

    EXPECT_EQ(true, true);
}