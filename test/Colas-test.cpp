#include "gtest/gtest.h"
#include "../Cola/Cola.h"

Cola<int> *miCola;

TEST(test_Cola, nuevaColaVacia) {
    miCola = new Cola<int>();
    EXPECT_EQ(miCola->esVacia(), true);
}

TEST(test_Cola, agregoTres_noVacia) {
    miCola->encolar(3);
    miCola->encolar(2);
    miCola->encolar(1);
    EXPECT_EQ(miCola->esVacia(), false);
}

TEST(test_Cola, dequeueEnSentidoInverso) {
    EXPECT_EQ(miCola->desencolar(), 3);
    EXPECT_EQ(miCola->desencolar(), 2);
    EXPECT_EQ(miCola->desencolar(), 1);
    EXPECT_EQ(miCola->esVacia(), true);
}

TEST(test_Cola, otroPopException) {
    EXPECT_ANY_THROW(miCola->desencolar());
}
