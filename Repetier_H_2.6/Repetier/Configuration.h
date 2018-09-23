/*
2.6
uninverted X axis
max defect temp to 301
MAP:
H1:8 - Fanboard, ext0_Cooler
H1:9 - Heatbed/EXT0
orig_fan pin 8

:::
dual extruder Commented change num of extruders and uncomment ext1 definitions to enable

2.5
LIGHT moved to Heater1 pin (D8)
PREHEAT_PLA changed to 180 Degrees
disable heated bed
thermistor type 1
8mm leadscrew z axis resolution change
max feedrates increased to 2000 mm/min ??? or mm / s??
switched to minnebea motors 1.8o

2.4
min max ext0 temp changed 120/300
max feed changed:  E0=200 from 100
homing feedrate changed to 60 from 40

2.3
increase max feedrates

2.2
Homing order XZY
Zto 1mm; XY to 5
Zaccel to 1000; XY to 3000
homing speed reduced to 1
turned off annoying ass animation

2.1
XYZE RESOLUTION UPDATE
ZACCEL
ZTRAVEL
ZFEED

2.0 REPETIER VERSION_H
 REPETIER CONFIG SETTINGS
 HH_BOT SPECS
 -XYZ ENDSTOPS INVERTED
 -XZ DIRECTION INVERTED
 
 1.6:
 DIRECT DRIVE = NEW RESOLUTION
 
 1.5:
 reprap calibrations:
 - X,Y,Z  steps , feedrate, acceleration and extruder settings
 -Max_Length Modified to 180,170,300     
 -decreased resonance for stepper frequency
 
 1.4 implements smooth motion less jerk on Y axis
 y axis step loss fix
 - slower acceleration
 - 20mm offset for second take during homing
 -SD DETECT enabled
 -EEPROM set to 0 to disable all EEPROM settings 3/24/2014
 
 EXTRUDER
 - steps per unit updated
 - max temp set to 260
 1.3 implements SD SUPPORT
 1.2 VIKI LCD SUPPORT
 _ FULL BUTTONS CONTROL
 -FULL MOTION CONTROL
 SD CARD NEEDS WORK
 
 MODIFIED PINS.H 
 EN1,EN2,ENC
 FEATURECONTROLLER==5
   
 REPETIER 0.92 base
 */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define NUM_EXTRUDER 1   //DUALEXTRUDER
#define MOTHERBOARD 33
#include "pins.h"
#define FAN_BOARD_PIN HEATER_2_PIN
#define EXTRUDER_FAN_COOL_TEMP 30

// ############# EXTRUDERS ########################
//EXT0
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_STEPS_PER_MM 152
#define EXT0_TEMPSENSOR_TYPE 1
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 0
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MAX_FEEDRATE 70 //70 from 2.2
#define EXT0_MAX_START_FEEDRATE 400
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 3
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 230
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_P 7
#define EXT0_PID_I 2
#define EXT0_PID_D 40
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 100
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN HEATER_2_PIN
#define EXT0_EXTRUDER_COOLER_SPEED 250

//   EXT1
/*
#define EXT1_X_OFFSET 36.2
#define EXT1_Y_OFFSET 0
#define EXT1_STEPS_PER_MM 152
#define EXT1_TEMPSENSOR_TYPE 1
#define EXT1_TEMPSENSOR_PIN TEMP_2_PIN
#define EXT1_HEATER_PIN HEATER_1_PIN
#define EXT1_STEP_PIN ORIG_E1_STEP_PIN
#define EXT1_DIR_PIN ORIG_E1_DIR_PIN
#define EXT1_INVERSE 0
#define EXT1_ENABLE_PIN E1_ENABLE_PIN
#define EXT1_ENABLE_ON 0
#define EXT1_MAX_FEEDRATE 70 //70 from 2.2
#define EXT1_MAX_START_FEEDRATE 400
#define EXT1_MAX_ACCELERATION 5000
#define EXT1_HEAT_MANAGER 3
#define EXT1_WATCHPERIOD 1
#define EXT1_PID_INTEGRAL_DRIVE_MAX 230
#define EXT1_PID_INTEGRAL_DRIVE_MIN 40
#define EXT1_PID_P 7
#define EXT1_PID_I 2
#define EXT1_PID_D 40
#define EXT1_PID_MAX 255
#define EXT1_ADVANCE_K 0
#define EXT1_ADVANCE_L 0
#define EXT1_ADVANCE_BACKLASH_STEPS 0
#define EXT1_WAIT_RETRACT_TEMP 100
#define EXT1_WAIT_RETRACT_UNITS 0
#define EXT1_SELECT_COMMANDS ""
#define EXT1_DESELECT_COMMANDS ""
#define EXT1_EXTRUDER_COOLER_PIN HEATER_2_PIN 
#define EXT1_EXTRUDER_COOLER_SPEED 250
*/
  
#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2  // PS_ON INTERFERENCE??
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 0
#define USER_THERMISTORTABLE0 {}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################
#define HAVE_HEATED_BED 1
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 1
#define HEATED_BED_SENSOR_PIN TEMP_0_PIN
#define HEATED_BED_HEATER_PIN HEATER_2_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 0
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define MIN_EXTRUDER_TEMP 120
#define MAXTEMP 300
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 301

// ################ Endstop configuration #####################
#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_X_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_X false

#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_Y_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Y false

#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_Z_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Z true
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Z false

#define max_software_endstop_r true
#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 1
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 0

// ################# XYZ movements ###################
#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 80
#define YAXIS_STEPS_PER_MM 80
#define ZAXIS_STEPS_PER_MM 1600
#define X_MAX_LENGTH 250
#define Y_MAX_LENGTH 180
#define Z_MAX_LENGTH 200
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 0
#define INVERT_Y_DIR 0      
#define INVERT_Z_DIR 0      
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0

// ############# MOTION SETTINGS ########################
#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1
#define HOMING_ORDER HOME_ORDER_XYZ
// Delta and Step settings
#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves
#define DELTA_HOME_ON_POWER 0
#define MAX_DELTA_SEGMENTS_PER_LINE 24
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 1 // time in microseconds
#define MAX_HALFSTEP_INTERVAL 1999
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L

//SPEED SETTINGS
#define HOMING_FEEDRATE_X 100
#define HOMING_FEEDRATE_Y 100
#define HOMING_FEEDRATE_Z 2
#define MAX_FEEDRATE_X 2000
#define MAX_FEEDRATE_Y 2000
#define MAX_FEEDRATE_Z 5
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 3000//1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 3000//1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 500//100
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 2000   //1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 2000   //1000 
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100
#define MAX_JERK 20
#define MAX_ZJERK 0.3

//pins and cache settings
#define MOVE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0

// ################# Misc. settings ##################
#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define GCODE_BUFFER_SIZE 2
#define ACK_WITH_LINENUMBER
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE
#define EEPROM_MODE 0

/* ======== Servos =======
 Control the servos with
 M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
 Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
 WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
 */
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################
#define FEATURE_Z_PROBE 0
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PIN -1
#define Z_PROBE_PULLUP 0
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 40
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define FEATURE_AUTOLEVEL 1
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 100
#define Z_PROBE_Y3 160

// ############# SD SETTINGS ########################
#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 0
#define SDCARDDETECT -1
#define SDCARDDETECTINVERTED 0
#endif

// ############# UI/ VIKI LCD ########################
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_CONTROLLER 5
#define UI_LANGUAGE 0
#define UI_PRINTER_NAME "HH_BOT"
#define UI_PRINTER_COMPANY "HH_S"
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 0 // h
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 90000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 1
#define CASE_LIGHTS_PIN 8
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   180
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 110
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240
#define UI_SET_MIN_HEATED_BED_TEMP  50
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   180
#define UI_SET_MAX_EXTRUDER_TEMP   300
#define UI_SET_EXTRUDER_FEEDRATE 3
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3
#endif

