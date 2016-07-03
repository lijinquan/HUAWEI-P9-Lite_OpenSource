

#ifndef __CNAS_XREG_TIMER_H__
#define __CNAS_XREG_TIMER_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include  "vos.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define TI_CNAS_XREG_TIMER_PWROFF_ESTCNF_PT_LEN     (5*1000)   /* ��XSD������ʱ������һ�� */
#define TI_CNAS_XREG_TIMER_ESTCNF_PT_LEN            (330*1000) /* ����㶨ʱ����СΪ5���� */
#define TI_CNAS_XREG_TIMER_ABORTCNF_PT_LEN          (30*1000)
#define TI_CNAS_XREG_TIMER_ZONELIST_PT_LEN          (3600000)  /* 1Сʱ */
#define TI_CNAS_XREG_TIMER_CARDFILE_CNF_LEN         (5*1000)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


enum CNAS_XREG_TIMER_ID_ENUM
{
    TI_CNAS_XREG_TIMER_T57M,                /* T57m��ʱ�� */
    TI_CNAS_XREG_TIMER_PERIOD_REG,          /* ����ע�ᶨʱ�� */
    TI_CNAS_XREG_TIMER_ESTCNF_PT,           /* ����CASע����Ϣ�ı�����ʱ�� */
    TI_CNAS_XREG_TIMER_PWROFF_ESTCNF_PT,    /* ����CAS�ػ���Ϣ�ı�����ʱ�� */
    TI_CNAS_XREG_TIMER_ABORTCNF_PT,         /* ����CAS��ֹ��Ϣ�ı�����ʱ�� */
    TI_CNAS_XREG_TIMER_ZONELIST_PT,         /* ZONELIST������ʱ��ȷ��SLICE��תû��Ӱ�� */
    TI_CNAS_XREG_TIMER_CARDFILE_CNF_PT,     /* ��ȡ���ļ�������ʱ�� */
    TI_CNAS_XREG_TIMER_ID_BUTT
};
typedef VOS_UINT32  CNAS_XREG_TIMER_ID_ENUM_UINT32;


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)



#endif




#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of __CNAS_XREG_TIMER_H__ */