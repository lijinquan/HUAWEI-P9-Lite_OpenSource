/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2015

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2015-06-10
 * @file
 * @brief
 *
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CPROC_HRPD_H
#define CPROC_HRPD_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/


/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CPROC_HRPD_WORKMODE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CPROC_HRPD_WORKMODE_ENUM
{
    CPROC_HRPD_WORKMODE_MASTER          = 0x0000, /**< Work mode is master */
    CPROC_HRPD_WORKMODE_SLAVE           = 0x0001, /**< Work mode is slave */
    CPROC_HRPD_WORKMODE_BUTT            = 0x0002
};
typedef VOS_UINT16 CPROC_HRPD_WORKMODE_ENUM_UINT16;

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/** ****************************************************************************
 * Name        : CPROC_HRPD_CHANNEL_RECORD_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_UINT16                          usBandClass;
    VOS_UINT16                          usChannelNumber;
} CPROC_HRPD_CHANNEL_RECORD_STRU;

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif