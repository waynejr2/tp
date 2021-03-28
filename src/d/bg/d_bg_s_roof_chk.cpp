// 
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_roof_chk
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/bg/d_bg_s_roof_chk.h"

// 
// Types:
// 

struct dBgS_RoofChk {
	/* 80078FF4 */ dBgS_RoofChk();
	/* 80079090 */ ~dBgS_RoofChk();
	/* 80079124 */ void Init();
};

struct dBgS_Chk {
	/* 8007749C */ dBgS_Chk();
	/* 800774E8 */ ~dBgS_Chk();
	/* 80077560 */ void GetPolyPassChkInfo();
	/* 80077564 */ void GetGrpPassChkInfo();
};

struct cBgS_PolyInfo {
	/* 80268074 */ cBgS_PolyInfo();
	/* 802680B0 */ ~cBgS_PolyInfo();
	/* 80268120 */ void ClearPi();
};

struct cBgS_Chk {
	/* 80267B4C */ cBgS_Chk();
	/* 80267B70 */ ~cBgS_Chk();
};

// 
// Forward References:
// 


extern "C" void __ct__12dBgS_RoofChkFv();
extern "C" void __dt__12dBgS_RoofChkFv();
extern "C" void Init__12dBgS_RoofChkFv();
extern "C" static void func_8007914C();
extern "C" static void func_80079154();
extern "C" static void func_8007915C();

// 
// External References:
// 

void operator delete(void*);

extern "C" void __ct__8dBgS_ChkFv();
extern "C" void __dt__8dBgS_ChkFv();
extern "C" void GetPolyPassChkInfo__8dBgS_ChkFv();
extern "C" void GetGrpPassChkInfo__8dBgS_ChkFv();
extern "C" void __ct__8cBgS_ChkFv();
extern "C" void __dt__8cBgS_ChkFv();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void __dl__FPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803ABA50-803ABA80 0030+00 s=2 e=0 z=0  None .data      __vt__12dBgS_RoofChk                                         */
SECTION_DATA static void* __vt__12dBgS_RoofChk[12] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_RoofChkFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_8007914C,
	(void*)NULL,
	(void*)NULL,
	(void*)func_8007915C,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80079154,
};

/* 804526F0-804526F4 0004+00 s=1 e=0 z=0  None .sdata2    @316                                                         */
SECTION_SDATA2 static u8 lit_316[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80078FF4-80079090 009C+00 s=0 e=10 z=1  None .text      __ct__12dBgS_RoofChkFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_RoofChk::dBgS_RoofChk() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/__ct__12dBgS_RoofChkFv.s"
}
#pragma pop


/* 80079090-80079124 0094+00 s=4 e=11 z=1  None .text      __dt__12dBgS_RoofChkFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_RoofChk::~dBgS_RoofChk() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/__dt__12dBgS_RoofChkFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804526F4-804526F8 0004+00 s=1 e=0 z=0  None .sdata2    @333                                                         */
SECTION_SDATA2 static u32 lit_333 = 0x4E6E6B28;

/* 80079124-8007914C 0028+00 s=0 e=1 z=0  None .text      Init__12dBgS_RoofChkFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_RoofChk::Init() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/Init__12dBgS_RoofChkFv.s"
}
#pragma pop


/* 8007914C-80079154 0008+00 s=1 e=0 z=0  None .text      @16@__dt__12dBgS_RoofChkFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007914C() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/func_8007914C.s"
}
#pragma pop


/* 80079154-8007915C 0008+00 s=1 e=0 z=0  None .text      @52@__dt__12dBgS_RoofChkFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80079154() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/func_80079154.s"
}
#pragma pop


/* 8007915C-80079164 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_RoofChkFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007915C() {
	nofralloc
#include "asm/d/bg/d_bg_s_roof_chk/func_8007915C.s"
}
#pragma pop

