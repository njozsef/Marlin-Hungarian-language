/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Hungarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_HU_H
#define LANGUAGE_HU_H

#define MAPPER_C2C3
#define DISPLAY_CHARSET_ISO10646_1
#define CHARSIZE 2

#define THIS_LANGUAGES_SPECIAL_SYMBOLS      _UxGT("éáûôúüóíÉÁÛÔÚÜÓÍöÖ") 

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Hi!")
#define MSG_BACK                            _UxGT("Vissza")
#define MSG_SD_INSERTED                     _UxGT("SD-kártya be")
#define MSG_SD_REMOVED                      _UxGT("SD-ki")
#define MSG_LCD_ENDSTOPS                    _UxGT("Végállás") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Fômenü")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Motorok ki") // M84
#define MSG_DEBUG_MENU                      _UxGT("Debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("PBbar Teszt")
#define MSG_AUTO_HOME                       _UxGT("Home") // G28
#define MSG_AUTO_HOME_X                     _UxGT("Home X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Kalib. Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Home XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Klikk az induláshoz")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Következô koord.")
#define MSG_LEVEL_BED_DONE                  _UxGT("Kész")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Fade magasság")
#define MSG_SET_HOME_OFFSETS                _UxGT("Home áthelyezés")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Home áthelyezve")
#define MSG_SET_ORIGIN                      _UxGT("Origó beállítva") //"G92 X0 Y0 Z0" commented out in ultralcd.cpp
#define MSG_PREHEAT_1                       _UxGT("PLA fûtés")
#define MSG_PREHEAT_1_N                     _UxGT("PLA fûtés ")
#define MSG_PREHEAT_1_ALL                   _UxGT("PLA fûtés")
#define MSG_PREHEAT_1_END                   _UxGT("PLA fûtés fej")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("PLA fûtés ágy")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("PLA paraméterek")
#define MSG_PREHEAT_2                       _UxGT("ABS fûtés")
#define MSG_PREHEAT_2_N                     _UxGT("ABS fûtés ")
#define MSG_PREHEAT_2_ALL                   _UxGT("ABS fûtés")
#define MSG_PREHEAT_2_END                   _UxGT("ABS fûtés fej")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ABS fûtés ágy")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("ABS paraméterek")
#define MSG_COOLDOWN                        _UxGT("Fûtés ki")
#define MSG_SWITCH_PS_ON                    _UxGT("Be")
#define MSG_SWITCH_PS_OFF                   _UxGT("Ki")
#define MSG_EXTRUDE                         _UxGT("Extrudálás")
#define MSG_RETRACT                         _UxGT("Visszahúz")
#define MSG_MOVE_AXIS                       _UxGT("Fejmozgatás")
#define MSG_BED_LEVELING                    _UxGT("Szintezés")
#define MSG_LEVEL_BED                       _UxGT("Szintezés")
#define MSG_LEVEL_CORNERS                   _UxGT("Mérôpont")
#define MSG_NEXT_CORNER                     _UxGT("Köv. mérôpont")
#define MSG_EDITING_STOPPED                 _UxGT("Editing stopped")
#define MSG_USER_MENU                       _UxGT("Felhasználói")
#define MSG_MOVING                          _UxGT("A fej mozgásban!!!")
#define MSG_FREE_XY                         _UxGT("Free XY")
#define MSG_MOVE_X                          _UxGT("X")
#define MSG_MOVE_Y                          _UxGT("Y")
#define MSG_MOVE_Z                          _UxGT("Z")
#define MSG_MOVE_E                          _UxGT("Extruder ")
#define MSG_MOVE_01MM                       _UxGT(" 0,1 mm")
#define MSG_MOVE_1MM                        _UxGT(" 1,0 mm")
#define MSG_MOVE_10MM                       _UxGT("10,0 mm")
#define MSG_SPEED                           _UxGT("Sebesség")
#define MSG_BED_Z                           _UxGT("Ágy Z")
#define MSG_NOZZLE                          _UxGT("Fej")
#define MSG_BED                             _UxGT("Ágy")
#define MSG_FAN_SPEED                       _UxGT("Hûtés")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Extra hûtés")
#define MSG_FLOW                            _UxGT("Szál mennyiség")
#define MSG_CONTROL                         _UxGT("Vezérlés")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" faktor")
#define MSG_AUTOTEMP                        _UxGT("AutoTemp")
#define MSG_ON                              _UxGT("be")
#define MSG_OFF                             _UxGT("ki")
#define MSG_PID_P                           _UxGT("PID P")
#define MSG_PID_I                           _UxGT("PID I")
#define MSG_PID_D                           _UxGT("PID D")
#define MSG_PID_C                           _UxGT("PID C")
#define MSG_SELECT                          _UxGT("Választ")
#define MSG_ACC                             _UxGT("Gyorsul.")
#define MSG_JERK                            _UxGT("Kezdôseb.")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("V A jerk")
  #define MSG_VB_JERK                       _UxGT("V B jerk")
  #define MSG_VC_JERK                       _UxGT("V C jerk")
#else
  #define MSG_VA_JERK                       _UxGT("V X jerk")
  #define MSG_VB_JERK                       _UxGT("V Y jerk")
  #define MSG_VC_JERK                       _UxGT("V Z jerk")
#endif
#define MSG_VE_JERK                         _UxGT("V E jerk")
#define MSG_VELOCITY                        _UxGT("Sebesség")
#define MSG_VMAX                            _UxGT("V max. ") // space by purpose
#define MSG_VMIN                            _UxGT("V min.")
#define MSG_VTRAV_MIN                       _UxGT("V min. utazó")
#define MSG_ACCELERATION                    _UxGT("Gyorsulás")
#define MSG_AMAX                            _UxGT("A max ") // space by purpose
#define MSG_A_RETRACT                       _UxGT("A Visszahúz.")
#define MSG_A_TRAVEL                        _UxGT("A Utazó")
#define MSG_STEPS_PER_MM                    _UxGT("Lépés/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A Lépés/mm")
  #define MSG_BSTEPS                        _UxGT("B Lépés/mm")
  #define MSG_CSTEPS                        _UxGT("C Lépés/mm")
#else
  #define MSG_ASTEPS                        _UxGT("X Lépés/mm")
  #define MSG_BSTEPS                        _UxGT("Y Lépés/mm")
  #define MSG_CSTEPS                        _UxGT("Z Lépés/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E Lépés/mm")
#define MSG_E1STEPS                         _UxGT("E1 Lépés/mm")
#define MSG_E2STEPS                         _UxGT("E2 Lépés/mm")
#define MSG_E3STEPS                         _UxGT("E3 Lépés/mm")
#define MSG_E4STEPS                         _UxGT("E4 Lépés/mm")
#define MSG_E5STEPS                         _UxGT("E5 Lépés/mm")
#define MSG_TEMPERATURE                     _UxGT("Hô")
#define MSG_MOTION                          _UxGT("Mozgás")
#define MSG_FILAMENT                        _UxGT("Szál")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Szál mm³")
#define MSG_FILAMENT_DIAM                   _UxGT("Átmérô")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Szál ki mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Szál be mm")
#define MSG_ADVANCE_K                       _UxGT("Advance Factor")
#define MSG_CONTRAST                        _UxGT("Kontraszt")
#define MSG_STORE_EEPROM                    _UxGT("Konfig. mentés")
#define MSG_LOAD_EEPROM                     _UxGT("Konfig. betöltés")
#define MSG_RESTORE_FAILSAFE                _UxGT("Vész-folytatás")
#define MSG_INIT_EEPROM                     _UxGT("EEPROM init.")
#define MSG_REFRESH                         _UxGT("Frissítés")
#define MSG_WATCH                           _UxGT("Infó képernyô")
#define MSG_PREPARE                         _UxGT("Elôkészítés")
#define MSG_TUNE                            _UxGT("Finombeáll.")
#define MSG_PAUSE_PRINT                     _UxGT("SD-Pause")
#define MSG_RESUME_PRINT                    _UxGT("SD-folyt.")
#define MSG_STOP_PRINT                      _UxGT("SD-megszak.")
#define MSG_CARD_MENU                       _UxGT("SD-kártya")
#define MSG_NO_CARD                         _UxGT("Nincs SD-kártya")
#define MSG_DWELL                           _UxGT("Szundi...")
#define MSG_USERWAIT                        _UxGT("Klikk az ébresztéshez")
#define MSG_PRINT_PAUSED                    _UxGT("Print szünet")
#define MSG_PRINT_ABORTED                   _UxGT("Print megszakítva")
#define MSG_NO_MOVE                         _UxGT("Motorok állnak")
#define MSG_KILLED                          _UxGT("Vészleállás")
#define MSG_STOPPED                         _UxGT("Megállítva")
#define MSG_CONTROL_RETRACT                 _UxGT("Visszahúzás mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Szálcsere Vissza mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Visszahúz  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Z-Emelés mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Visszaáll mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Csere visszaáll mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("visszaáll  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Csere v.áll V")
#define MSG_AUTORETRACT                     _UxGT("Auto v.állás")
#define MSG_FILAMENTCHANGE                  _UxGT("Szálcsere")
#define MSG_FILAMENTLOAD                    _UxGT("Szál betöltés")
#define MSG_FILAMENTUNLOAD                  _UxGT("Szál kihúzás")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Összes kihúzás")
#define MSG_INIT_SDCARD                     _UxGT("SD-kátya ini.")  // Manually initialize the SD-card via user interface
#define MSG_CNG_SDCARD                      _UxGT("SD-kártya csere") // SD-card changed by user. For machines with no autocarddetect. Both send "M21"
#define MSG_ZPROBE_OUT                      _UxGT("Szenzor végállásban")
#define MSG_SKEW_FACTOR                     _UxGT("Skew Factor")
#define MSG_BLTOUCH                         _UxGT("BLT")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLT Teszt")
#define MSG_BLTOUCH_RESET                   _UxGT("BLT Reset")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLT ki")
#define MSG_BLTOUCH_STOW                    _UxGT("BLT be")
#define MSG_HOME                            _UxGT("Home")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Elsô")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z eltolás")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Végállás-megszakítás.")
#define MSG_HEATING_FAILED_LCD              _UxGT("FÛTÉSHIBA")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("2. Hôszenzor hiba")
#define MSG_THERMAL_RUNAWAY                 LCD_STR_THERMOMETER _UxGT(" Hômegfutás")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("Ágy") MSG_THERMAL_RUNAWAY
#define MSG_ERR_MAXTEMP                     LCD_STR_THERMOMETER _UxGT(" Max.hô")
#define MSG_ERR_MINTEMP                     LCD_STR_THERMOMETER _UxGT(" Min.hô")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Ágy ") LCD_STR_THERMOMETER _UxGT(" Max.hô")
#define MSG_ERR_MINTEMP_BED                 _UxGT("ágy ") LCD_STR_THERMOMETER _UxGT(" Min.hô")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("Vészelállás")
#define MSG_PLEASE_RESET                    _UxGT("Indítsd újra")
#define MSG_SHORT_DAY                       _UxGT("n") // One character only
#define MSG_SHORT_HOUR                      _UxGT("ó") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("p") // One character only
#define MSG_HEATING                         _UxGT("fûtés...")
#define MSG_BED_HEATING                     _UxGT("ágy fûtés...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta kalib.")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalib. X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalib. Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalib. Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalib. center")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta beállítás.")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto kalib.")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta magasság beáll.")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag Rod")
#define MSG_DELTA_HEIGHT                    _UxGT("Magasság")
#define MSG_DELTA_RADIUS                    _UxGT("Sugár")
#define MSG_INFO_MENU                       _UxGT("Infó")
#define MSG_INFO_PRINTER_MENU               _UxGT("Nyomtató info")
#define MSG_3POINT_LEVELING                 _UxGT("3-pontos szintezés")
#define MSG_LINEAR_LEVELING                 _UxGT("Lineáris szintezés")
#define MSG_BILINEAR_LEVELING               _UxGT("Bilineáris szint.")
#define MSG_UBL_LEVELING                    _UxGT("Unified szintez.")
#define MSG_MESH_LEVELING                   _UxGT("Hálós szinttezés")
#define MSG_INFO_STATS_MENU                 _UxGT("Nyomtató stat.")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Hôérzékelôk")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruder")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokoll")
#define MSG_CASE_LIGHT                      _UxGT("Fény")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Fényerô")

#define MSG_UBL_DOING_G29                 _UxGT("G29 UBL fut!")
#define MSG_UBL_UNHOMED                   _UxGT("Elôbb xyz home!")
#define MSG_UBL_TOOLS                     _UxGT("UBL eszközök")
#define MSG_UBL_LEVEL_BED                 _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH               _UxGT("Kézi Háló")
#define MSG_UBL_BC_INSERT                 _UxGT("Mérôpapír be")
#define MSG_UBL_BC_INSERT2                _UxGT("Mérés")
#define MSG_UBL_BC_REMOVE                 _UxGT("Mérés vége")
#define MSG_UBL_MOVING_TO_NEXT            _UxGT("Következô mérés...")
#define MSG_UBL_ACTIVATE_MESH             _UxGT("UBL bekapcsolás")
#define MSG_UBL_DEACTIVATE_MESH           _UxGT("UBL kikapcsolás")
#define MSG_UBL_SET_BED_TEMP              _UxGT("Ágyhô")
#define MSG_UBL_CUSTOM_BED_TEMP           MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP           _UxGT("Fejhô")
#define MSG_UBL_CUSTOM_HOTEND_TEMP        MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                 _UxGT("Hálószerkesztés")
#define MSG_UBL_EDIT_CUSTOM_MESH          _UxGT("Saját háló szerk.")
#define MSG_UBL_FINE_TUNE_MESH            _UxGT("Finombeállítás")
#define MSG_UBL_DONE_EDITING_MESH         _UxGT("Hálóbeáll vége")
#define MSG_UBL_BUILD_CUSTOM_MESH         _UxGT("Új saját háló")
#define MSG_UBL_BUILD_MESH_MENU           _UxGT("Új háló")
#define MSG_UBL_BUILD_PLA_MESH            _UxGT("PLA háló")
#define MSG_UBL_BUILD_ABS_MESH            _UxGT("ABS háló")
#define MSG_UBL_BUILD_COLD_MESH           _UxGT("Hideg háló")
#define MSG_UBL_MESH_HEIGHT_ADJUST        _UxGT("Háló magasság")
#define MSG_UBL_MESH_HEIGHT_AMOUNT        _UxGT("Magasság")
#define MSG_UBL_VALIDATE_MESH_MENU        _UxGT("Háló kiválasztás")
#define MSG_UBL_VALIDATE_PLA_MESH         _UxGT("Háló kiválasztás PLA")
#define MSG_UBL_VALIDATE_ABS_MESH         _UxGT("Háló kiválasztás ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH      _UxGT("Háló kiválasztás")
#define MSG_UBL_CONTINUE_MESH             _UxGT("Háló folyt.")
#define MSG_UBL_MESH_LEVELING             _UxGT("Háló szintezés")
#define MSG_UBL_3POINT_MESH_LEVELING      _UxGT("3 pontos szintezés")
#define MSG_UBL_GRID_MESH_LEVELING        _UxGT("Grid szintezés.")
#define MSG_UBL_MESH_LEVEL                _UxGT("Háló magasság")
#define MSG_UBL_SIDE_POINTS               _UxGT("Oldal pontok")
#define MSG_UBL_MAP_TYPE                  _UxGT("kép típus")
#define MSG_UBL_OUTPUT_MAP                _UxGT("Kimenet kép")
#define MSG_UBL_OUTPUT_MAP_HOST           _UxGT("Kimenet a host-nak")
#define MSG_UBL_OUTPUT_MAP_CSV            _UxGT("Kimenet CSV-be")
#define MSG_UBL_OUTPUT_MAP_BACKUP         _UxGT("Kimenet backup")
#define MSG_UBL_INFO_UBL                  _UxGT("UBL Info.")
#define MSG_UBL_EDIT_MESH_MENU            _UxGT("Háló szerk.")
#define MSG_UBL_FILLIN_AMOUNT             _UxGT("kitöltési érték")
#define MSG_UBL_MANUAL_FILLIN             _UxGT("kézi kitöltés")
#define MSG_UBL_SMART_FILLIN              _UxGT("Smart kitöltés")
#define MSG_UBL_FILLIN_MESH               _UxGT("Háló kitöltés")
#define MSG_UBL_INVALIDATE_ALL            _UxGT("Érvénytelen")
#define MSG_UBL_INVALIDATE_CLOSEST        _UxGT("Legközelebbi érvénytelen")
#define MSG_UBL_FINE_TUNE_ALL             _UxGT("Finomhangolás")
#define MSG_UBL_FINE_TUNE_CLOSEST         _UxGT("Legközelebbi finomhangolás")
#define MSG_UBL_STORAGE_MESH_MENU         _UxGT("Mentés")
#define MSG_UBL_STORAGE_SLOT              _UxGT("Memóriahely")
#define MSG_UBL_LOAD_MESH                 _UxGT("Háló betöltés")
#define MSG_UBL_SAVE_MESH                 _UxGT("Háló mentés")
#define MSG_MESH_LOADED                   _UxGT("Betöltve: %i")
#define MSG_MESH_SAVED                    _UxGT("Mentve: %i")
#define MSG_NO_STORAGE                    _UxGT("Nincs hely")
#define MSG_UBL_SAVE_ERROR                _UxGT("ERR:Mentési hiba")
#define MSG_UBL_RESTORE_ERROR             _UxGT("ERR:Visszaáll. hiba")
#define MSG_UBL_Z_OFFSET_STOPPED          _UxGT("Z-eltolás ki")
#define MSG_UBL_STEP_BY_STEP_MENU         _UxGT("Lépésenként")

#define MSG_LED_CONTROL                     _UxGT("LED vezérlés")
#define MSG_LEDS                            _UxGT("LED-ek")
#define MSG_LED_PRESETS                     _UxGT("beállítások")
#define MSG_SET_LEDS_RED                    _UxGT("Piros")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Narancs")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Sárga")
#define MSG_SET_LEDS_GREEN                  _UxGT("Zöld")
#define MSG_SET_LEDS_BLUE                   _UxGT("Kék")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Lila")
#define MSG_SET_LEDS_WHITE                  _UxGT("Fehér")
#define MSG_SET_LEDS_DEFAULT                _UxGT("ALap")
#define MSG_CUSTOM_LEDS                     _UxGT("Saját LED.")
#define MSG_INTENSITY_R                     _UxGT("Piros fényerô")
#define MSG_INTENSITY_G                     _UxGT("Zöld fényerô")
#define MSG_INTENSITY_B                     _UxGT("Kék fényerô")
#define MSG_INTENSITY_W                     _UxGT("Fehér fényerô")
#define MSG_LED_BRIGHTNESS                  _UxGT("LED Fényerô")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Darabszám")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Hibátlan")
  #define MSG_INFO_PRINT_TIME               _UxGT("Összes idô")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Leghosszabb")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Szálmennyiség")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Darab")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Kész")
  #define MSG_INFO_PRINT_TIME               _UxGT("idô ")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Max")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Szál")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Min.hô")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max.hô")
#define MSG_INFO_PSU                        _UxGT("Tápegység")

#define MSG_DRIVE_STRENGTH                  _UxGT("Motorerô")
#define MSG_DAC_PERCENT                     _UxGT("Meghajtó %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("EEprom írás")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("Szálcsere")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("Szál betöltés")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("Szál kihúzás")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Folytat:.")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Tisztítás")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Folytatás")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Fej: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Végállás hiba")
#define MSG_ERR_PROBING_FAILED              _UxGT("Érzékelô hiba")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Túl hideg")
#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Várakozás")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("a szálcsere")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("indításra...")
  
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Várakozás")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("a szál")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("kihúzásra.")
  
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Fûzd be az új szálat")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("és nyomd meg")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("a gombot.")
  
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Nyomd meg a gombot")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("a fej fûtéshez.")
  
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Fej fûtés")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Kérlek, várj.")
  
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Várakozás")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("a szál")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("befûzéséhez.")
  
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Várakozás")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("a fej")
  #define MSG_FILAMENT_CHANGE_PURGE_3         _UxGT("tisztításra.")
  
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Várakozás")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("a nyomtatás")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("folytatására.")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Kérlek, várj.")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Kihúzás.")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Befûz és klikk")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Fûtés.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Befûz.")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Tisztít.")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Visszaáll.")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_HU_H
