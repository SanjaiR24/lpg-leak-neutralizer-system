# Smart LPG Leak Neutralizer System

Embedded Systems and IoT-based LPG leak detection and automatic neutralization system that senses gas concentration, ventilates the area, and dilutes the leaked gas with an inert gas — all without human intervention.

Overview

LPG is highly flammable and heavier than air, so an unnoticed leak in a confined space (kitchen, storage room) can accumulate near the floor and form an explosive mixture. Most existing safety systems only sound an alarm and stop there — they don't take any corrective action, leaving humans to manually ventilate or shut off supply. The Smart LPG Leak Neutralizer System closes that gap: it detects the leak with an MQ-6 gas sensor, and on crossing a safety threshold, automatically activates an exhaust fan and releases an inert gas (nitrogen or CO₂) through a solenoid valve to actively dilute the flammable concentration — not just alert about it.

MOSFET-based switching (instead of mechanical relays) gives faster, silent, wear-free actuator control.

Features
Real-time LPG concentration monitoring via MQ-6 gas sensor
Automatic exhaust fan activation on leak detection
Active gas neutralization — releases N₂/CO₂ via solenoid valve to dilute flammable concentration (not just alarm-only)
MOSFET-based switching — faster, silent, no mechanical wear vs. relay-based designs
Buzzer alert for immediate human awareness
Auto-reset: devices turn off automatically once air quality returns to safe levels
Serial Monitor output for live calibration and gas-level readings

Technologies / Hardware Used
Arduino UNO (control unit) — ESP32-compatible for IoT expansion
MQ-6 Gas Sensor (LPG detection)
MOSFET switching circuit (drives DC loads: fan, valve)
Solenoid Valve (releases N₂/CO₂ neutralizing gas)
Exhaust Fan (forced ventilation)
Buzzer (audible alert)
12V Power Supply + Regulator Circuit
Arduino IDE, Embedded C/C++
Serial Monitor (calibration & live data)
