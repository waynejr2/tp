// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_ceil
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/s_ceil.h"

// 
// Forward References:
// 


extern "C" void ceil();

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 80456AE0-80456AE8 0008+00 s=1 e=0 z=0  None .sdata2    @124                                                         */
SECTION_SDATA2 static u8 lit_124[8] = {
	0x7E, 0x37, 0xE4, 0x3C, 0x88, 0x00, 0x75, 0x9C,
};

/* 80456AE8-80456AF0 0008+00 s=1 e=0 z=0  None .sdata2    @125                                                         */
SECTION_SDATA2 static u8 lit_125[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036BEBC-8036C000 0144+00 s=0 e=2 z=0  None .text      ceil                                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void ceil() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/s_ceil/ceil.s"
}
#pragma pop

