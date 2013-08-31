// netsim scalar non-array variables
DLL_IMPORT int NETSIM_DETECTORS_mp_NUMDET;<ls>\label{lst:netsim-num-dets-import}<le>
#define net_det_num NETSIM_DETECTORS_mp_NUMDET<ls>\label{lst:netsim-num-dets-assign}<le>
// netsim statically allocated arrays
DLL_IMPORT struct<ls>\label{lst:netsim-nmap-import}<le>
{
    int NMAP[8999];
} SIN075;
#define net_node_num SIN075.NMAP<ls>\label{lst:netsim-nmap-assign}<le>
// netsim dinamically allocated arrays
DLL_IMPORT int *NETSIM_DETECTORS_mp_DTMODD;<ls>\label{lst:netsim-dets-mod-import}<le>
#define net_det_id NETSIM_DETECTORS_mp_DTMOD<ls>\label{lst:netsim-dets-mod-assign}<le>
// netsim exported functions
DLL_IMPORT void __stdcall abortcorsim(void);<ls>\label{lst:netsim-abort-func-import}<le>
