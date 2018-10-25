#include"bStatusCode.h"

UINT8
DS_NOERROR(
    DS_STATUS Status
) {
    if (Status == DS_SUCCESS) {
        return bTRUE;
    }
    return bFALSE;
}