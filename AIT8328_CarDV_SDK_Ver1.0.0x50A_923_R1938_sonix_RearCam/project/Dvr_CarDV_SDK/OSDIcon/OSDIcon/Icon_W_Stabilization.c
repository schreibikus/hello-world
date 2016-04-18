/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V5.04.
*        Compiled Jan  8 2010, 16:46:31
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: Icon_W_Stabilization
* Dimensions:  32 * 32
* NumColors:   10
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_W_Stabilization[] = {
     0xFF00FF,0x00FFFF,0xFF00FF,0x0000FF
    ,0xFFFF00,0x00FF00,0xFF0000,0x030303
    ,0xFFFFFF,0x1C1C1C
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_W_Stabilization = {
  10,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_W_Stabilization[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_W_Stabilization[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x77, 0x07, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x77, 0x70, 0x77, 0x87, 0x77, 0x87, 0x00, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x78, 0x77, 0x78, 0x77, 0x87, 0x87, 0x77, 0x78, 0x77, 0x77, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x77, 0x88, 0x77, 0x88, 0x77, 0x87, 0x87, 0x87, 0x78, 0x87, 0x87, 0x70, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x87, 0x78, 0x87, 0x77, 0x87, 0x87, 0x87, 0x79, 0x87, 0x88, 0x70, 0x00, 0x00,
  0x00, 0x07, 0x78, 0x87, 0x78, 0x87, 0x07, 0x87, 0x87, 0x87, 0x87, 0x88, 0x78, 0x77, 0x00, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x77, 0x77, 0x87, 0x87, 0x87, 0x87, 0x78, 0x78, 0x87, 0x00, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x78, 0x77, 0x88, 0x88, 0x87, 0x87, 0x78, 0x77, 0x87, 0x00, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x78, 0x77, 0x88, 0x88, 0x88, 0x87, 0x78, 0x77, 0x87, 0x00, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x78, 0x87, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x70, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x88, 0x88, 0x70, 0x00,
  0x00, 0x07, 0x88, 0x77, 0x88, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x87, 0x88, 0x70, 0x00,
  0x00, 0x07, 0x78, 0x87, 0x78, 0x87, 0x78, 0x88, 0x88, 0x88, 0x87, 0x78, 0x87, 0x88, 0x70, 0x00,
  0x00, 0x00, 0x78, 0x87, 0x78, 0x87, 0x78, 0x88, 0x88, 0x88, 0x87, 0x78, 0x87, 0x88, 0x70, 0x00,
  0x00, 0x00, 0x77, 0x88, 0x77, 0x88, 0x77, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x70, 0x00,
  0x00, 0x00, 0x07, 0x78, 0x77, 0x78, 0x77, 0x77, 0x77, 0x77, 0x70, 0x78, 0x87, 0x88, 0x70, 0x00,
  0x00, 0x00, 0x00, 0x77, 0x70, 0x77, 0x87, 0x00, 0x00, 0x00, 0x00, 0x78, 0x88, 0x88, 0x70, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x77, 0x00, 0x00, 0x00, 0x00, 0x77, 0x77, 0x77, 0x70, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_W_Stabilization = {
  32, /* XSize */
  32, /* YSize */
  16, /* BytesPerLine */
  4, /* BitsPerPixel */
  acIcon_W_Stabilization,  /* Pointer to picture data (indices) */
  &PalIcon_W_Stabilization  /* Pointer to palette */
};

/* *** End of file *** */