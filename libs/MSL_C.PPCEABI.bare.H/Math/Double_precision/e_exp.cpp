// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_exp
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_exp.h"

// 
// Forward References:
// 


extern "C" void __ieee754_exp();

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A2340-803A2350 0010+00 s=1 e=0 z=0  None .rodata    halF                                                         */
SECTION_RODATA static u8 const halF[16] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A2350-803A2360 0010+00 s=1 e=0 z=0  None .rodata    ln2HI                                                        */
SECTION_RODATA static u8 const ln2HI[16] = {
	0x3F, 0xE6, 0x2E, 0x42, 0xFE, 0xE0, 0x00, 0x00, 0xBF, 0xE6, 0x2E, 0x42, 0xFE, 0xE0, 0x00, 0x00,
};

/* 803A2360-803A2370 0010+00 s=1 e=0 z=0  None .rodata    ln2LO                                                        */
SECTION_RODATA static u8 const ln2LO[16] = {
	0x3D, 0xEA, 0x39, 0xEF, 0x35, 0x79, 0x3C, 0x76, 0xBD, 0xEA, 0x39, 0xEF, 0x35, 0x79, 0x3C, 0x76,
};

/* 804567E0-804567E8 0008+00 s=1 e=0 z=0  None .sdata2    @115                                                         */
SECTION_SDATA2 static u8 lit_115[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804567E8-804567F0 0008+00 s=1 e=0 z=0  None .sdata2    @116                                                         */
SECTION_SDATA2 static u8 lit_116[8] = {
	0x40, 0x86, 0x2E, 0x42, 0xFE, 0xFA, 0x39, 0xEF,
};

/* 804567F0-804567F8 0008+00 s=1 e=0 z=0  None .sdata2    @117                                                         */
SECTION_SDATA2 static u8 lit_117[8] = {
	0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804567F8-80456800 0008+00 s=1 e=0 z=0  None .sdata2    @118                                                         */
SECTION_SDATA2 static u8 lit_118[8] = {
	0xC0, 0x87, 0x49, 0x10, 0xD5, 0x2D, 0x30, 0x51,
};

/* 80456800-80456808 0008+00 s=1 e=0 z=0  None .sdata2    @119                                                         */
SECTION_SDATA2 static u8 lit_119[8] = {
	0x3F, 0xF7, 0x15, 0x47, 0x65, 0x2B, 0x82, 0xFE,
};

/* 80456808-80456810 0008+00 s=1 e=0 z=0  None .sdata2    @120                                                         */
SECTION_SDATA2 static u8 lit_120[8] = {
	0x7E, 0x37, 0xE4, 0x3C, 0x88, 0x00, 0x75, 0x9C,
};

/* 80456810-80456818 0008+00 s=1 e=0 z=0  None .sdata2    @121                                                         */
SECTION_SDATA2 static u8 lit_121[8] = {
	0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456818-80456820 0008+00 s=1 e=0 z=0  None .sdata2    @122                                                         */
SECTION_SDATA2 static u8 lit_122[8] = {
	0x3F, 0xC5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x3E,
};

/* 80456820-80456828 0008+00 s=1 e=0 z=0  None .sdata2    @123                                                         */
SECTION_SDATA2 static u8 lit_123[8] = {
	0xBF, 0x66, 0xC1, 0x6C, 0x16, 0xBE, 0xBD, 0x93,
};

/* 80456828-80456830 0008+00 s=1 e=0 z=0  None .sdata2    @124                                                         */
SECTION_SDATA2 static u8 lit_124[8] = {
	0x3F, 0x11, 0x56, 0x6A, 0xAF, 0x25, 0xDE, 0x2C,
};

/* 80456830-80456838 0008+00 s=1 e=0 z=0  None .sdata2    @125                                                         */
SECTION_SDATA2 static u8 lit_125[8] = {
	0xBE, 0xBB, 0xBD, 0x41, 0xC5, 0xD2, 0x6B, 0xF1,
};

/* 80456838-80456840 0008+00 s=1 e=0 z=0  None .sdata2    @126                                                         */
SECTION_SDATA2 static u8 lit_126[8] = {
	0x3E, 0x66, 0x37, 0x69, 0x72, 0xBE, 0xA4, 0xD0,
};

/* 80456840-80456848 0008+00 s=1 e=0 z=0  None .sdata2    @127                                                         */
SECTION_SDATA2 static u8 lit_127[8] = {
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456848-80456850 0008+00 s=1 e=0 z=0  None .sdata2    @128                                                         */
SECTION_SDATA2 static u8 lit_128[8] = {
	0x01, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456850-80456858 0008+00 s=1 e=0 z=0  None .sdata2    @131                                                         */
SECTION_SDATA2 static u8 lit_131[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80369978-80369B9C 0224+00 s=0 e=1 z=0  None .text      __ieee754_exp                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __ieee754_exp() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_exp/__ieee754_exp.s"
}
#pragma pop

