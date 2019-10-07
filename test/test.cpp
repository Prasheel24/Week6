///* "Copyright [2019] <Prasheel Renkuntla>" [legal/copyright]
// *
// * @file         test.cpp
// * @author       Prasheel Renkuntla
// * @date         10/07/2019
// * @version      1.0
// *
// * @brief        Valgrind Excercise
// *
// * @section      DESCRIPTION
// *
// * Test the Analog sensor program
// *
// */
#include <gtest/gtest.h>
#include "AnalogSensor.hpp"

/**
 *  @brief  Test Analog Sensor read function\
 */
TEST(AnalogSensor, TestAnalogSensor) {
  AnalogSensor testLightSensor = AnalogSensor(5);  
  ASSERT_EQ(testLightSensor.Read(),10);
}
