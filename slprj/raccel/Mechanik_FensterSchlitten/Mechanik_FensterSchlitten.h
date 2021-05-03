#ifndef RTW_HEADER_Mechanik_FensterSchlitten_h_
#define RTW_HEADER_Mechanik_FensterSchlitten_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Mechanik_FensterSchlitten_COMMON_INCLUDES_
#define Mechanik_FensterSchlitten_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Mechanik_FensterSchlitten_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Mechanik_FensterSchlitten
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T i103fmtrco ; real_T dcota3ebth ; real_T akk5fzcv0t ;
real_T awi1rkrsmg ; real_T nruycyvzg3 ; real_T is3z3qldqk ; real_T h2cfasrczi
; real_T hcvtwxdpsb ; real_T bwqgktwrmm ; real_T daylyfb5eo ; real_T
o33mke4wi3 ; real_T msbnkvmeqk ; real_T ccir1jeg4a ; real_T f3mfvrleqr ;
real_T esyvynyzgx ; real_T kgd3qqwbe5 ; real_T cdqh5imuez ; real_T knix3l52w2
; } B ; typedef struct { struct { void * LoggedData ; } p3yxkf2kkj ; struct {
void * LoggedData ; } apylwzhwwr ; struct { void * LoggedData ; } hmrcg5kyjc
; struct { void * LoggedData ; } itwzksr5jk ; struct { void * LoggedData ; }
idxwocplae ; struct { void * LoggedData ; } dnjt3zivxq ; struct { void *
LoggedData ; } kbspfpddu0 ; int_T at555nvypv ; boolean_T b4ozlwd0ec ;
boolean_T c5tobhpbnw ; } DW ; typedef struct { real_T elutmsxzmw ; real_T
oxqxjudp3e ; real_T eat2ytfi42 ; real_T mzoq54xqoe ; } X ; typedef struct {
real_T elutmsxzmw ; real_T oxqxjudp3e ; real_T eat2ytfi42 ; real_T mzoq54xqoe
; } XDot ; typedef struct { boolean_T elutmsxzmw ; boolean_T oxqxjudp3e ;
boolean_T eat2ytfi42 ; boolean_T mzoq54xqoe ; } XDis ; typedef struct {
real_T elutmsxzmw ; real_T oxqxjudp3e ; real_T eat2ytfi42 ; real_T mzoq54xqoe
; } CStateAbsTol ; typedef struct { real_T elutmsxzmw ; real_T oxqxjudp3e ;
real_T eat2ytfi42 ; real_T mzoq54xqoe ; } CXPtMin ; typedef struct { real_T
elutmsxzmw ; real_T oxqxjudp3e ; real_T eat2ytfi42 ; real_T mzoq54xqoe ; }
CXPtMax ; typedef struct { real_T p4sjmepttn ; real_T ljj3ccksf0 ; real_T
j1ywvsqiqm ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T FR_Gleit ; real_T FR_Haft ; real_T
F_Seil_Gleit ; real_T c ; real_T d ; real_T g ; real_T mF ; real_T mS ;
real_T Integrator3_IC ; real_T Vorzeichenwechsel_Threshold ; real_T
HaftoderGleitfall_Threshold ; real_T Integrator1_IC ; real_T Integrator_IC ;
real_T Integrator2_IC ; real_T Gain_Gain ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Mechanik_FensterSchlitten_GetDWork ( ) ;
extern void mr_Mechanik_FensterSchlitten_SetDWork ( const mxArray * ssDW ) ;
extern mxArray * mr_Mechanik_FensterSchlitten_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
Mechanik_FensterSchlitten_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
