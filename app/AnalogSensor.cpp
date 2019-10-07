///* "Copyright [2019] <Prasheel Renkuntla>" [legal/copyright]
// *
// * @file         AnalogSensor.cpp
// * @author       Prasheel Renkuntla
// * @date         10/07/2019
// * @version      1.0
// *
// * @brief        Valgrind Excercise
// *
// * @section      DESCRIPTION
// *
// * Use the Analog Sesnor header
// *
// */
#include <AnalogSensor.hpp>
#include <memory>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings =
    std::make_shared<std::vector<int>>(mSamples, 10);

    double result = std::accumulate(readings->begin(),
    readings->end(), 0.0) / readings->size();
    return result;
}


