/**
 * @file test_qtot.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "qtot/minha_lib.h"
#include <gtest/gtest.h>

TEST(QuemTestaOsTestes, doisveizdois){
    int16_t a = 2; // Multiplicando: 2
    int16_t b = 2; // Multiplicador: 2

    int16_t resultado = multiplica(a, b); // Multiplica o multiplicando (2) pelo multiplicador (2)

    ASSERT_EQ(resultado, 4); // Certifica que o multiplicando (2) multiplicado pelo multiplicador (2) resulta no resultado (4)
}

TEST(QuemTestaOsTestes, doisveizum) {
    int16_t a = 2; // Multiplicando: 2
    int16_t b = 1; // Multiplicador: 1

    int16_t resultado = multiplica(a, b); // Multiplica o multiplicando (2) pelo multiplicador (1)

    ASSERT_EQ(resultado, 2); // Certifica que o multiplicando (2) multiplicado pelo multiplicador (1) resulta no resultado (2)
}

TEST(QuemTestaOsTestes, umveizum) {
    int16_t a = 1; // Multiplicando: 1
    int16_t b = 1; // Multiplicador: 1

    int16_t resultado = multiplica(a, b); // Multiplica o multiplicando (1) pelo multiplicador (1)

    ASSERT_EQ(resultado, 1); // Certifica que o multiplicando (1) multiplicado pelo multiplicador (1) resulta no resultado (1)
}

TEST(QuemTestaOsTestes, doisveizquatro) {
    int16_t a = 2; // Multiplicando: 2
    int16_t b = 4; // Multiplicador: 4

    int16_t resultado = multiplica(a, b); // Multiplica o multiplicando (2) pelo multiplicador (4)

    ASSERT_EQ(resultado, 8); // Certifica que o multiplicando (2) multiplicado pelo multiplicador (4) resulta no resultado (8)
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    // ros::init(argc, argv, "tester");
    // ros::NodeHandle nh;
    return RUN_ALL_TESTS();
}
