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

#include "subsystems/Drive.h"

namespace frc973 {
constexpr int LEFT_TALONA_CANID = 1; //devise num
constexpr int RIGHT_TALONA_CANID = 16; //devise num
constexpr int LEFT_VICTORB_CANID = 2; //devise num
constexpr int LEFT_VICTORC_CANID = 3; //devise num
constexpr int RIGHT_VICTORB_CANID = 15; //devise num
constexpr int RIGHT_VICTORC_CANID = 14; //devise num

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

  TalonSRX *m_leftTalonA{new TalonSRX(LEFT_TALONA_CANID)};
  TalonSRX *m_rightTalonA{new TalonSRX(RIGHT_TALONA_CANID)};

  VictorSPX *m_leftVictorB{new VictorSPX(LEFT_VICTORB_CANID)};
  VictorSPX *m_leftVictorC{new VictorSPX(LEFT_VICTORC_CANID)};
  VictorSPX *m_rightVictorB{new VictorSPX(RIGHT_VICTORB_CANID)};
  VictorSPX *m_rightVictorC{new VictorSPX(RIGHT_VICTORC_CANID)};

  Drive *m_drive;
};
}