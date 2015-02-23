#ifndef __MTK_DRVB_DEV_H
#define __MTK_DRVB_DEV_H

/**************************************************************************
 *  TYPEDEF
 **************************************************************************/
typedef unsigned int uint32;
typedef unsigned char uchar;
typedef unsigned short uint16;

/**************************************************************************
 *  MODULE NUMBER
 **************************************************************************/ 
#define MTK_DRVB_MAJOR    176

/**************************************************************************
 *  EXPORT FUNCTIONS
 **************************************************************************/ 
int mtk_drvb_do_check (void);

#endif
