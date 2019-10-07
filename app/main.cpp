///* "Copyright [2019] <Prasheel Renkuntla>" [legal/copyright]
// *
// * @file         main.cpp
// * @author       Prasheel Renkuntla
// * @date         10/07/2019
// * @version      1.0
// *
// * @brief        Valgrind Excercise
// *
// * @section      DESCRIPTION
// *
// * Call the Analog Sensor
// *
// */
#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
