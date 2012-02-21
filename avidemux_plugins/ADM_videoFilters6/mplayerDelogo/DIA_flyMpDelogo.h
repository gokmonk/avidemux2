/***************************************************************************
    copyright            : (C) 2011 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#ifndef FLY_MPDELOGO_H
#define FLY_MPDELOGO_H
/**
    \class flyASharp
*/
#include "delogo.h"
/**
    \class flyMpDelogo
*/
class flyMpDelogo : public FLY_DIALOG_TYPE
{
  
  public:
   delogo      param;
  public:
   uint8_t     processRgb(uint8_t *imageIn, uint8_t *imageOut);
   uint8_t     download(void);
   uint8_t     upload(void);
               flyMpDelogo (uint32_t width,uint32_t height,ADM_coreVideoFilter *in,
                                    void *canvas, void *slider) : 
                FLY_DIALOG_TYPE(width, height,in,canvas, slider,0,RESIZE_AUTO) 
                {};
         virtual ~flyMpDelogo() {};
};
// EOF


#endif