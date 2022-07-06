#pragma once
/******************************************************************************/
/* File   : Dlt.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgDlt.hpp"
#include "Dlt_core.hpp"
#include "infDlt_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Dlt:
      INTERFACES_EXPORTED_DLT
      public abstract_module
   ,  public class_Dlt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      infPduRClient_Up infPduRClient_Dlt;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, DLT_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, DLT_CONFIG_DATA, DLT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DLT_CODE) DeInitFunction (void);
      FUNC(void, DLT_CODE) MainFunction   (void);
      DLT_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Dlt, DLT_VAR) Dlt;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
