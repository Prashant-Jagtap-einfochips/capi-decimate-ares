#ifndef DECIMATE_V2_CALIB_H
#define DECIMATE_V2_CALIB_H

/*==============================================================================
  @file audio_decimate_calib.h
  @brief This file contains DECIMATE
==============================================================================*/
/*=======================================================================
* Copyright (c) 2019-2021 Qualcomm Technologies, Inc.  All Rights Reserved.
* Confidential and Proprietary - Qualcomm Technologies, Inc.
=========================================================================*/
/*========================================================================
 Edit History

 when       who     what, where, why
 --------   ---     -------------------------------------------------------

 ========================================================================== */
#include "module_cmn_api.h"

#define CAPI_DECIMATE_MAX_IN_PORTS 1
#define CAPI_DECIMATE_MAX_OUT_PORTS 1
#define DECIMATE_STACK_SIZE 4096

#define MODULE_ID_DECIMATE 0x10015658
/**
    @h2xmlm_module       {"MODULE_ID_DECIMATE",
                          MODULE_ID_DECIMATE}
    @h2xmlm_displayName  {"AUDIO DECIMATE"}
    @h2xmlm_description  {decimate in the audio preprocessor path.\n
                       This module supports the following parameter IDs \n
                       PARAM_ID_MODULE_ENABLE\n
                       DECIMATE_PARAM_DECIMATION_FACTOR
                      Supported Input Media Format:\n

      All parameter IDs are device independent.\n

     Supported Input Media Format:\n
*  - Data Format          : FIXED_POINT\n
*  - fmt_id               : Don't care\n
*  - Sample Rates         : Any (>0)\n
*  - Number of channels   : 1 to 32\n
*  - Channel type         : 1 to 63\n
*  - Bits per sample      : 16, 24, 32\n
*  - Q format             : 15 for bits per sample = 16 and 27 for bps = 32 and bps = 24\n
*  - Interleaving         : de-interleaved unpacked\n
*  - Signed/unsigned      : Signed }

     @h2xmlm_toolPolicy              {Calibration}

    @h2xmlm_dataMaxInputPorts    {CAPI_DECIMATE_MAX_IN_PORTS}
     @h2xmlm_dataInputPorts       {IN=2}
     @h2xmlm_dataMaxOutputPorts   {CAPI_DECIMATE_MAX_OUT_PORTS}
     @h2xmlm_dataOutputPorts      {OUT=1}
     @h2xmlm_supportedContTypes   {APM_CONTAINER_TYPE_SC, APM_CONTAINER_TYPE_GC}
     @h2xmlm_builtIn              {false}
     @h2xmlm_isOffloadable       {true}
     @h2xmlm_stackSize            {DECIMATE_STACK_SIZE}
     @h2xmlm_ToolPolicy              {Calibration}

 @{                   <-- Start of the Module -->
   @h2xml_Select        {"param_id_module_enable_t"}
   @h2xmlm_InsertParameter
*/

#define DECIMATE_PARAM_DECIMATION_FACTOR 0x0800122C
#include "spf_begin_pack.h"

typedef struct decimate_factor_cfg_t decimate_factor_cfg_t;
/** @h2xmlp_parameter   {"DECIMATE_PARAM_DECIMATION_FACTOR", DECIMATE_PARAM_DECIMATION_FACTOR}
    @h2xmlp_description {Decimate algorithm.\n
                   Fixed size for this parameter \n
                   Version 0 - 4 bytes\n\n} */

struct decimate_factor_cfg_t
{

   unsigned int decimation_factor;
   /**< @h2xmle_description {Controls audio decimation}
        @h2xmle_default     {0x0000}
        @h2xmle_range       {0..0xFFFFFFFF}

        @h2xmle_policy      {Basic} */
}
#include "spf_end_pack.h"
;

/** @}                   <-- End of the Module -->*/

#endif // DECIMATE_V2_CALIB_H
