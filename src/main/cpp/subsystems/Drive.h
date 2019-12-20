#pragma once

#include "Robot.h"

namespace frc973 {
    class Drive {    
    public:
        Drive(TalonSRX *leftTalonA, 
        TalonSRX *rightTalonA, 
        VictorSPX *leftVictorB, 
        VictorSPX *rightVictorB, 
        VictorSPX *leftVictorC, 
        VictorSPX *rightVictorC);

    virtual ~Drive();

    void DrivePeriodic();
    }
    
    private:
   
    
}





