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
* Source file: Icon_SD_Card
* Dimensions:  24 * 32
* NumColors:   4
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_SD_Card[] = {
     0xFF00FF,0xF49706,0x010101,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_SD_Card = {
  4,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_SD_Card[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_SD_Card[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00,
  0x0F, 0xAA, 0xAA, 0xAA, 0xBC, 0x00,
  0x0F, 0xAA, 0xAA, 0xAA, 0xAF, 0x00,
  0x0F, 0xA5, 0x55, 0x55, 0xAB, 0xC0,
  0x0F, 0xA5, 0x55, 0x55, 0x6A, 0xF0,
  0x0F, 0xA5, 0x55, 0x55, 0x5A, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xA5, 0x55, 0x55, 0x56, 0xBC,
  0x0F, 0xAA, 0xAA, 0xAA, 0xAA, 0xBC,
  0x0F, 0xAA, 0xAA, 0xAA, 0xAA, 0xBC,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_SD_Card = {
  24, /* XSize */
  32, /* YSize */
  6, /* BytesPerLine */
  2, /* BitsPerPixel */
  acIcon_SD_Card,  /* Pointer to picture data (indices) */
  &PalIcon_SD_Card  /* Pointer to palette */
};

/* *** End of file *** */