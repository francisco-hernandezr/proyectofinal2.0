/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *
 *  Created on: Oct 26, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/



#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//TODO 10 DONE Complete FT_UAH_PHOTSAT_SERV_129_0010
#define FT_UAH_PHOTSAT_SERV_129_0010

#ifdef FT_UAH_PHOTSAT_SERV_129_0010

#define FT_0010_TIME_step0 (OBT_AFTER_POWER_ON + 5)
#define FT_0010_TIME_step1 (OBT_AFTER_POWER_ON + 85)

EmuGSS_TCProgram129_1 prog_FT_0010_step_0(FT_0010_TIME_step0,
		"FT_UAH_PHOTSAT_SERV_129_0010 step0:Command new observation",
		5*60,5*60,7);
EmuGSS_TCProgram128_1 prog_FT_0010_step_1(FT_0010_TIME_step1,
        "END FUNCTIONAL TESTS");

#endif

//TODO 11 Complete FT_UAH_PHOTSAT_SERV_129_FDIR_0020
#define FT_UAH_PHOTSAT_SERV_129_FDIR_0020

#ifdef FT_UAH_PHOTSAT_SERV_129_FDIR_0020

#define FT_0020_TIME_step0 (OBT_AFTER_POWER_ON + 3)
#define FT_0020_TIME_step1 (OBT_AFTER_POWER_ON + 5)
#define FT_0020_TIME_step2 (OBT_AFTER_POWER_ON + 7)
#define FT_0020_TIME_step3 (OBT_AFTER_POWER_ON + 9)
#define FT_0020_TIME_step4 (OBT_AFTER_POWER_ON + 11)
#define FT_0020_TIME_step5 (OBT_AFTER_POWER_ON + 14)
#define FT_0020_TIME_step6 (OBT_AFTER_POWER_ON + 18)
#define FT_0020_TIME_step7 (OBT_AFTER_POWER_ON + 20)
#define FT_0020_TIME_step8 (OBT_AFTER_POWER_ON + 100)


EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step_0(FT_0020_TIME_step1,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 0, Configura monitor 0 de valor para PID 13",
        0, 13, 1, 1, 0xFF, 0, 0x4003);

EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step_1(FT_0020_TIME_step2,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 1, Configura monitor 1 de valor para PID 14",
        1, 14, 1, 1, 0xFF, 0, 0x4003);

EmuGSS_TCProgram19_1_Action_129_3 prog_FT_0020_step_2(FT_0020_TIME_step2,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 2, 0x4003, reset de actitud",
        0x4003);

EmuGSS_TCProgram19_4 prog_FT_0020_step_3(FT_0020_TIME_step3,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 3, Habilitamos acción",
        0x4003);

EmuGSS_TCProgram12_1 prog_FT_0130_step_4(FT_0020_TIME_step4,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 4, Enable Monitoring PMODID 0", 0);

EmuGSS_TCProgram12_1 prog_FT_0130_step_5(FT_0020_TIME_step5,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 5, Enable Monitoring PMODID 1", 1);

EmuGSS_TCProgram129_2 prog_FT_0020_step_6(FT_0020_TIME_step6,
        "FT_UAH_PHOTSAT_SERV_129_0010 step 6, Inicializa Kp, Ki and Kd",0.5,0.5,0.5);

EmuGSS_TCProgram129_1 prog_FT_0020_step_7(FT_0020_TIME_step7,
        "FT_UAH_PHOTSAT_SERV_129_0020 step 7, Set Theta Pitch, Theta Yaw and Number of Images",
	1200,600,7);

EmuGSS_TCProgram128_1 prog_FT_0020_step_8(FT_0020_TIME_step8,
        "END FUNCTIONAL TESTS");

#endif
