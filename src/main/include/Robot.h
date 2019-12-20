/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "ctre/Phoenix.h"

namespace frc973 {
  constexpr int LEFTTALONA_CANID = 1; //devise num
  constexpr int RIGHTTALONA_CANID = 16; //devise num

  constexpr int LEFTVICTORB_CANID = 2; //devise num
  constexpr int LEFTVICTORC_CANID = 3; //devise num

  constexpr int RIGHTVICTORB_CANID = 15; //devise num
  constexpr int RIGHTVICTORC_CANID = 14; //devise num

class Robot : public frc::TimedRobot {
 public:

  Robot();
  virtual ~Robot();

  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

  TalonSRX *m_leftTalonA{new TalonSRX(LEFTTALONA_CANID)};
  TalonSRX *m_rightTalonA{new TalonSRX(RIGHTTALONA_CANID)};

  VictorSPX *m_leftVictorB{new VictorSPX(LEFTVICTORB_CANID)};
  VictorSPX *m_leftVictorC{new VictorSPX(LEFTVICTORC_CANID)};
  VictorSPX *m_rightVictorB{new VictorSPX(RIGHTVICTORB_CANID)};
  VictorSPX *m_rightVictorC{new VictorSPX(RIGHTVICTORC_CANID)};

  Drive *m_drive
};
}