///* "Copyright [2019] <Prasheel Renkuntla>" [legal/copyright]
// *
// * @file         AnalogSensor.hpp
// * @author       Prasheel Renkuntla
// * @date         10/07/2019
// * @version      1.0
// *
// * @brief        Valgrind Excercise
// *
// * @section      DESCRIPTION
// *
// * Create header for Analog Sensor
// *
// */


#ifndef INCLUDE_ANALOGSENSOR_HPP_
#define INCLUDE_ANALOGSENSOR_HPP_
#include <iostream>

class AnalogSensor{
 public:
    /*constructor*/
    explicit AnalogSensor(unsigned int samples);
    /*destructor*/
    ~AnalogSensor(); 
    /*read input function*/
    int Read();
 private:
    unsigned int mSamples;
};


#endif  // INCLUDE_ANALOGSENSOR_HPP_
