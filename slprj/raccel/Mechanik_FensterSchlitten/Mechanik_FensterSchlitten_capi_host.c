#include "Mechanik_FensterSchlitten_capi_host.h"
static Mechanik_FensterSchlitten_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Mechanik_FensterSchlitten_host_InitializeDataMapInfo(&(root), "Mechanik_FensterSchlitten");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
