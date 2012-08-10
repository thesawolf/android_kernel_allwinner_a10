/*
 * drivers/video/sun3i/disp/OSAL/OSAL_Pin.c
 *
 * (C) Copyright 2007-2012
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include "OSAL.h"

/*
****************************************************************************************************
*
*             CSP_PIN_DEV_req
*
*  Description:
*       设备某个逻辑设备的PIN，这里允许申请某个设备的部分PIN，
*
*  Parameters:
* 		dev_id			:	逻辑设备号
*		p_log_pin_list	:	逻辑PIN的list，如SPI_LOG_PINS{}
*		pin_nr			:	逻辑PIN的数目
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
****************************************************************************************************
*/
__hdle OSAL_PIN_DEV_req(LOG_DEVS_t dev_id ,u32 * p_log_pin_list ,u32 pin_nr)
{
    return 0;
}


/*
****************************************************************************************************
*
*             CSP_PIN_DEV_release
*
*  Description:
*       释放某逻辑设备的pin
*
*  Parameters:
* 		p_handler	:	handler
*
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
****************************************************************************************************
*/
s32 OSAL_PIN_DEV_release(__hdle handle)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_DEV_pull_ops
*
* Description:
*				获得/写入 某逻辑设备的逻辑PIN上拉的状态
* Arguments  :
*		p_handler	:	handler
*		log_pin_id	:	逻辑pin的ID
*		pull_state	:	上拉的状态
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32  OSAL_PIN_DEV_pull_ops(__hdle handle , u32 log_pin_id ,pin_pull_t * pull_state , u32 is_get)
{
    return 0;

}


/*
**********************************************************************************************************************
*                                               CSP_PIN_DEV_multi_drv_ops
*
* Description:
*		获得/写入 某逻辑设备的逻辑PIN驱动能力
* Arguments  :
*		p_handler	:	handler
*		log_pin_id	:	逻辑pin的ID
*		pull_state	:	驱动能力的状态
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32  OSAL_PIN_DEV_multi_drv_ops(__hdle handle , u32 log_pin_id ,pin_multi_driving_t * drive_level , u32 is_get)
{
    return 0;

}


/*
**********************************************************************************************************************
*                                               CSP_PIN_DEV_data_pos
*
* Description:
*		获得/写入 某逻辑设备的逻辑PIN驱动能力
* Arguments  :
*		p_handler	:	handler
*		log_pin_id	:	逻辑pin的ID
*		data		:	data值的读取/设置
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32 OSAL_PIN_DEV_data_ops(__hdle handle , u32 log_pin_id ,u32 * data , u32 is_get)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_DEV_direction_ops
*
* Description:
*		获得/写入 某逻辑设备的逻辑PIN方向
* Arguments  :
*		p_handler	:	handler
*		log_pin_id	:	逻辑pin的ID
*		data		:	方向的读取/设置
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32 OSAL_PIN_DEV_direction_ops(__hdle handle , u32 log_pin_id ,u32 * is_output , u32 is_get)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_req
*
* Description:
*		申请某个GPIO资源
* Arguments  :
*		phy_pin_group	:	属于那个组，这里都是物理的，用户得直接看spec
*		phy_pin_offset	:	该组内的偏移
*
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
__hdle  OSAL_PIN_GPIO_req(u8 phy_pin_group, u32 phy_pin_offset )
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_release
*
* Description:
*		释放某个GPIO
* Arguments  :
*		p_handler	:	handler
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32  OSAL_PIN_GPIO_release(__hdle handle)
{
    return 0;
}

/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_pull_ops
*
* Description:
*		获得/写入 某GPIO的上拉的状态
* Arguments  :
*		p_handler	:	handler
*		pull_state	:	上拉的状态
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32  OSAL_PIN_GPIO_pull_ops(__hdle handle  ,pin_pull_t * pull_state , u32 is_get)
{
    return 0;
}

/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_multi_drv_ops
*
* Description:
*		获得/写入 某GPIO的驱动能力的状态
* Arguments  :
*		p_handler	:	handler
*		drive_level	:	驱动能力
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32  OSAL_PIN_GPIO_multi_drv_ops(__hdle handle  ,pin_multi_driving_t * drive_level , u32 is_get)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_data_pos
*
* Description:
*		获得/写入 某GPIO的data
* Arguments  :
*		p_handler	:	handler
*		data		:	数据
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32 OSAL_PIN_GPIO_data_ops(__hdle handle ,u32 * data , u32 is_get)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_direction_ops
*
* Description:
*		获得/写入 某GPIO的方向
* Arguments  :
*		p_handler	:	handler
*		is_output	:	方向
*		is_get		:	!=0	:get	/	==0	:set
* Returns    :
*		EBSP_TRUE/EBSP_FALSE
* Notes      :
*
**********************************************************************************************************************
*/
s32 OSAL_PIN_GPIO_direction_ops(__hdle handle ,u32 * is_output , u32 is_get)
{
    return 0;
}


/*
**********************************************************************************************************************
*                                               CSP_PIN_GPIO_direction_ops
*
* Description:
*		根据逻辑设备名和逻辑PIN名，返回其物理group和物理offset(既返回其物理PIN的位置)
* Arguments  :
*		log_dev_name	:	设备名
*		log_pin_name	:	逻辑pin的名字
*		phy_pin_group	:	物理pin的group号码，如GPIOC16中的C，
*		phy_pin_offset	:	物理pin的偏移号，如GPIOC16中的16
* Returns    :
*		EBSP_FALSE	:	失败
*		EBSP_TRUE	:	成功
* Notes      :
*
**********************************************************************************************************************
*/
s32 OSAL_PIN_MISC_get_phy_pin(u8 * log_dev_name , u8 * log_pin_name , u32 * phy_pin_group, u32 * phy_pin_offset)
{
    return 0;
}




