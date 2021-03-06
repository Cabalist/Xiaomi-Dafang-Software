
/*-----------------------------------------------------------------------------
  This confidential and proprietary software/information may be used only
  as authorized by a licensing agreement from Apical Limited

  (C) COPYRIGHT 2011 - 2014 Apical Limited
  ALL RIGHTS RESERVED

  The entire notice above must be reproduced on all authorized
  copies and copies may only be made to the extent permitted
  by a licensing agreement from Apical Limited.
  -----------------------------------------------------------------------------*/
#if !defined(__APICAL_ISP_CORE_NOMEM_SETTINGS_H__)
#define __APICAL_ISP_CORE_NOMEM_SETTINGS_H__
#define ISP_CORE_ID    0x8c157f2d
#define ISP_PIPE_RAW_BITS    12
#define ISP_PIPE_RAW_WDR_BITS    16
#define ISP_PIPE_RGB_BITS    10
#define ISP_CONFIG_AW    15
#define ISP_CONFIG_DW    32
#define ISP_DEFECT_PIXEL_AW    12
#define ISP_DEFECT_PIXEL_CXW    12
#define ISP_DEFECT_PIXEL_CYW    12
#define ISP_SHADING_MX    6
#define ISP_SHADING_MY    6
#define ISP_SHADING_MW    8
#define ISP_SHADING_GEOM    13
#define ISP_SHADING_LUT_AW    5
#define ISP_FRONTEND_LUT0_AW    5
#define ISP_FRONTEND_LUT1_AW    8
#define ISP_GAMMA_RGB_AW    7
#define ISP_METERING_ZONES_AWB_V    15
#define ISP_METERING_ZONES_AWB_H    15
#define ISP_METERING_ZONES_V    15
#define ISP_METERING_ZONES_H    15
#define ISP_METERING_OFFSET_AE    0
#define ISP_METERING_OFFSET_AWB    464
#define ISP_METERING_OFFSET_AF    928
#define ISP_METERING_OFFSET_MVE    1392
#define ISP_METERING_MEM_END    2415
#define ISP_INTERRUPT_EVENT_NONES_COUNT    16
#define ISP_INTERRUPT_EVENT_ISP_START_FRAME_END    16
#define ISP_INTERRUPT_EVENT_ISP_START_FRAME_START    24
#define ISP_INTERRUPT_EVENT_ISP_DEFECT_PIXEL_FRAME_END    17
#define ISP_INTERRUPT_EVENT_ISP_DEFECT_PIXEL_FRAME_START    25
#define ISP_INTERRUPT_EVENT_ISP_SINTER_FRAME_END    18
#define ISP_INTERRUPT_EVENT_ISP_SINTER_FRAME_START    26
#define ISP_INTERRUPT_EVENT_ISP_TEMPER_FRAME_END    19
#define ISP_INTERRUPT_EVENT_ISP_TEMPER_FRAME_START    27
#define ISP_INTERRUPT_EVENT_ISP_IRIDIX_FRAME_END    20
#define ISP_INTERRUPT_EVENT_ISP_IRIDIX_FRAME_START    28
#define ISP_INTERRUPT_EVENT_ISP_DEMOSAIC_FRAME_END    21
#define ISP_INTERRUPT_EVENT_ISP_DEMOSAIC_FRAME_START    29
#define ISP_INTERRUPT_EVENT_ISP_FR_SHARPEN_FRAME_END    22
#define ISP_INTERRUPT_EVENT_ISP_FR_SHARPEN_FRAME_START    30
#define ISP_INTERRUPT_EVENT_ISP_FR_OUT_FRAME_END    23
#define ISP_INTERRUPT_EVENT_ISP_FR_OUT_FRAME_START    31
#define ISP_INTERRUPT_EVENT_ISP_DS1_SCALER_FRAME_END    48
#define ISP_INTERRUPT_EVENT_ISP_DS1_SCALER_FRAME_START    56
#define ISP_INTERRUPT_EVENT_ISP_DS1_SHARPEN_FRAME_END    49
#define ISP_INTERRUPT_EVENT_ISP_DS1_SHARPEN_FRAME_START    57
#define ISP_INTERRUPT_EVENT_ISP_DS1_OUT_FRAME_END    50
#define ISP_INTERRUPT_EVENT_ISP_DS1_OUT_FRAME_START    58
#define ISP_INTERRUPT_EVENT_ISP_DS2_SCALER_FRAME_END    51
#define ISP_INTERRUPT_EVENT_ISP_DS2_SCALER_FRAME_START    59
#define ISP_INTERRUPT_EVENT_ISP_DS2_SHARPEN_FRAME_END    52
#define ISP_INTERRUPT_EVENT_ISP_DS2_SHARPEN_FRAME_START    60
#define ISP_INTERRUPT_EVENT_ISP_DS2_OUT_FRAME_END    53
#define ISP_INTERRUPT_EVENT_ISP_DS2_OUT_FRAME_START    61
#define ISP_INTERRUPT_EVENT_METERING_AEXP    8
#define ISP_INTERRUPT_EVENT_METERING_AWB    9
#define ISP_INTERRUPT_EVENT_METERING_AF    10
#define ISP_INTERRUPT_EVENT_METERING_HIST    11
#define ISP_INTERRUPT_EVENT_MVE    12
#define ISP_INTERRUPT_EVENT_TEMPER_FRAME_BUFFER    13
#define ISP_INTERRUPT_EVENT_FR_DMA_WRITER    14
#define ISP_INTERRUPT_EVENT_DS1_DMA_WRITER    15
#define ISP_INTERRUPT_EVENT_DS2_DMA_WRITER    1
#define ISP_INTERRUPT_EVENT_FLASH_TIMER_OUTPUT_STROBE6    6
#define ISP_INTERRUPT_EVENT_FLASH_TIMER_OUTPUT_STROBE7    7
#endif /* __APICAL_ISP_CORE_NOMEM_SETTINGS_H__*/
