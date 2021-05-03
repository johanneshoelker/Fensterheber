#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Mechanik_FensterSchlitten_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Mechanik_FensterSchlitten.h"
#include "Mechanik_FensterSchlitten_capi.h"
#include "Mechanik_FensterSchlitten_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 1 , 0 , TARGET_STRING ( "Mechanik_FensterSchlitten/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Haft- oder Gleitfall" ) , TARGET_STRING (
"resultierende Reibkraft" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Vorzeichenwechsel" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Dämpfungskonstante" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Federkonstante" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add2" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add4" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Add5" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static
const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 18 , TARGET_STRING
( "Mechanik_FensterSchlitten/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 19 , TARGET_STRING ( "Mechanik_FensterSchlitten/Haft- oder Gleitfall" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"Mechanik_FensterSchlitten/Vorzeichenwechsel" ) , TARGET_STRING ( "Threshold"
) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 23 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"Mechanik_FensterSchlitten/Subsystem/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 25 , TARGET_STRING (
"FR_Gleit" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING ( "FR_Haft" ) , 0 , 0 , 0 }
, { 27 , TARGET_STRING ( "F_Seil_Gleit" ) , 0 , 0 , 0 } , { 28 ,
TARGET_STRING ( "c" ) , 0 , 0 , 0 } , { 29 , TARGET_STRING ( "d" ) , 0 , 0 ,
0 } , { 30 , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
"mF" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING ( "mS" ) , 0 , 0 , 0 } , { 0 , (
NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . akk5fzcv0t , & rtB . knix3l52w2 ,
& rtB . awi1rkrsmg , & rtB . dcota3ebth , & rtB . hcvtwxdpsb , & rtB .
o33mke4wi3 , & rtB . kgd3qqwbe5 , & rtB . ccir1jeg4a , & rtB . is3z3qldqk , &
rtB . nruycyvzg3 , & rtB . bwqgktwrmm , & rtB . i103fmtrco , & rtB .
msbnkvmeqk , & rtB . f3mfvrleqr , & rtB . esyvynyzgx , & rtB . cdqh5imuez , &
rtB . h2cfasrczi , & rtB . daylyfb5eo , & rtP . Gain_Gain , & rtP .
HaftoderGleitfall_Threshold , & rtP . Vorzeichenwechsel_Threshold , & rtP .
Integrator_IC , & rtP . Integrator1_IC , & rtP . Integrator2_IC , & rtP .
Integrator3_IC , & rtP . FR_Gleit , & rtP . FR_Haft , & rtP . F_Seil_Gleit ,
& rtP . c , & rtP . d , & rtP . g , & rtP . mF , & rtP . mS , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 18 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 7 , rtModelParameters , 8 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1700840425U , 1038845939U , 265376977U ,
1433895428U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Mechanik_FensterSchlitten_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Mechanik_FensterSchlitten_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Mechanik_FensterSchlitten_host_InitializeDataMapInfo (
Mechanik_FensterSchlitten_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
