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

EmuGSS_TCProgram129_1 prog_FT_0010_step_0(FT_0010_TIME_step0,
		"FT_UAH_PHOTSAT_SERV_129_0010 step0:Command new observation",
		10*60,20*60,7);


#endif

//TODO 11 Complete FT_UAH_PHOTSAT_SERV_129_FDIR_0020


