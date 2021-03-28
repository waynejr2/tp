// 
// Generated By: dol2asm
// Translation Unit: d/save/d_save_HIO
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/save/d_save_HIO.h"

// 
// Types:
// 

struct dSv_player_status_b_c {
	/* 80032BB0 */ void isDarkClearLV(int) const;
	/* 80032BEC */ void isTransformLV(int) const;
};

struct dSv_memBit_c {
	/* 800347E8 */ void isTbox(int) const;
	/* 80034860 */ void isSwitch(int) const;
	/* 800348EC */ void isItem(int) const;
};

struct dSv_light_drop_c {
	/* 80034340 */ void getLightDropNum(u8) const;
	/* 8003439C */ void isLightDropGetFlag(u8) const;
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

struct dSv_danBit_c {
	/* 80034BE8 */ void isSwitch(int) const;
	/* 80034C74 */ void isItem(int) const;
};

struct dSvBit_childTreasureHIO_c {
	/* 8025C874 */ ~dSvBit_childTreasureHIO_c();
};

struct dSvBit_childTransformHIO_c {
	/* 8025C0A0 */ dSvBit_childTransformHIO_c();
	/* 8025C0D4 */ void init();
	/* 8025C2E4 */ ~dSvBit_childTransformHIO_c();
};

struct dSvBit_childTbPerfectionHIO_c {
	/* 8025BF68 */ dSvBit_childTbPerfectionHIO_c();
	/* 8025BF9C */ void init();
	/* 8025C374 */ ~dSvBit_childTbPerfectionHIO_c();
};

struct dSvBit_childSwitchHIO_c {
	/* 8025C970 */ ~dSvBit_childSwitchHIO_c();
};

struct dSvBit_childSwZoneHIO_c {
	/* 8025BCB0 */ dSvBit_childSwZoneHIO_c();
	/* 8025BCE4 */ void init();
	/* 8025C524 */ ~dSvBit_childSwZoneHIO_c();
};

struct dSvBit_childSwPerfectionHIO_c {
	/* 8025BB78 */ dSvBit_childSwPerfectionHIO_c();
	/* 8025BBAC */ void init();
	/* 8025C5B4 */ ~dSvBit_childSwPerfectionHIO_c();
};

struct dSvBit_childSwOneZoneHIO_c {
	/* 8025BD10 */ dSvBit_childSwOneZoneHIO_c();
	/* 8025BD44 */ void init();
	/* 8025C4DC */ ~dSvBit_childSwOneZoneHIO_c();
};

struct dSvBit_childSwDungeonHIO_c {
	/* 8025BC14 */ dSvBit_childSwDungeonHIO_c();
	/* 8025BC48 */ void init();
	/* 8025C56C */ ~dSvBit_childSwDungeonHIO_c();
};

struct dSvBit_childOtherHIO_c {
	/* 8025C13C */ dSvBit_childOtherHIO_c();
	/* 8025C178 */ void init();
	/* 8025C29C */ ~dSvBit_childOtherHIO_c();
};

struct dSvBit_childItemHIO_c {
	/* 8025C8D4 */ ~dSvBit_childItemHIO_c();
};

struct dSvBit_childItZoneHIO_c {
	/* 8025BEA8 */ dSvBit_childItZoneHIO_c();
	/* 8025BEDC */ void init();
	/* 8025C404 */ ~dSvBit_childItZoneHIO_c();
};

struct dSvBit_childItPerfectionHIO_c {
	/* 8025BD70 */ dSvBit_childItPerfectionHIO_c();
	/* 8025BDA4 */ void init();
	/* 8025C494 */ ~dSvBit_childItPerfectionHIO_c();
};

struct dSvBit_childItOneZoneHIO_c {
	/* 8025BF08 */ dSvBit_childItOneZoneHIO_c();
	/* 8025BF3C */ void init();
	/* 8025C3BC */ ~dSvBit_childItOneZoneHIO_c();
};

struct dSvBit_childItDungeonHIO_c {
	/* 8025BE0C */ dSvBit_childItDungeonHIO_c();
	/* 8025BE40 */ void init();
	/* 8025C44C */ ~dSvBit_childItDungeonHIO_c();
};

struct dSvBit_childDarknessHIO_c {
	/* 8025C004 */ dSvBit_childDarknessHIO_c();
	/* 8025C038 */ void init();
	/* 8025C32C */ ~dSvBit_childDarknessHIO_c();
};

struct dSvBit_HIO_c {
	/* 8025C1F8 */ void init();
	/* 8025C6FC */ ~dSvBit_HIO_c();
};

// 
// Forward References:
// 

extern "C" extern u8 g_save_bit_HIO[1184 + 4 /* padding */];

extern "C" void __ct__29dSvBit_childSwPerfectionHIO_cFv();
extern "C" void init__29dSvBit_childSwPerfectionHIO_cFv();
extern "C" void __ct__26dSvBit_childSwDungeonHIO_cFv();
extern "C" void init__26dSvBit_childSwDungeonHIO_cFv();
extern "C" void __ct__23dSvBit_childSwZoneHIO_cFv();
extern "C" void init__23dSvBit_childSwZoneHIO_cFv();
extern "C" void __ct__26dSvBit_childSwOneZoneHIO_cFv();
extern "C" void init__26dSvBit_childSwOneZoneHIO_cFv();
extern "C" void __ct__29dSvBit_childItPerfectionHIO_cFv();
extern "C" void init__29dSvBit_childItPerfectionHIO_cFv();
extern "C" void __ct__26dSvBit_childItDungeonHIO_cFv();
extern "C" void init__26dSvBit_childItDungeonHIO_cFv();
extern "C" void __ct__23dSvBit_childItZoneHIO_cFv();
extern "C" void init__23dSvBit_childItZoneHIO_cFv();
extern "C" void __ct__26dSvBit_childItOneZoneHIO_cFv();
extern "C" void init__26dSvBit_childItOneZoneHIO_cFv();
extern "C" void __ct__29dSvBit_childTbPerfectionHIO_cFv();
extern "C" void init__29dSvBit_childTbPerfectionHIO_cFv();
extern "C" void __ct__25dSvBit_childDarknessHIO_cFv();
extern "C" void init__25dSvBit_childDarknessHIO_cFv();
extern "C" void __ct__26dSvBit_childTransformHIO_cFv();
extern "C" void init__26dSvBit_childTransformHIO_cFv();
extern "C" void __ct__22dSvBit_childOtherHIO_cFv();
extern "C" void init__22dSvBit_childOtherHIO_cFv();
extern "C" void init__12dSvBit_HIO_cFv();
extern "C" void __dt__22dSvBit_childOtherHIO_cFv();
extern "C" void __dt__26dSvBit_childTransformHIO_cFv();
extern "C" void __dt__25dSvBit_childDarknessHIO_cFv();
extern "C" void __dt__29dSvBit_childTbPerfectionHIO_cFv();
extern "C" void __dt__26dSvBit_childItOneZoneHIO_cFv();
extern "C" void __dt__23dSvBit_childItZoneHIO_cFv();
extern "C" void __dt__26dSvBit_childItDungeonHIO_cFv();
extern "C" void __dt__29dSvBit_childItPerfectionHIO_cFv();
extern "C" void __dt__26dSvBit_childSwOneZoneHIO_cFv();
extern "C" void __dt__23dSvBit_childSwZoneHIO_cFv();
extern "C" void __dt__26dSvBit_childSwDungeonHIO_cFv();
extern "C" void __dt__29dSvBit_childSwPerfectionHIO_cFv();
extern "C" void __sinit_d_save_HIO_cpp();
extern "C" void __dt__12dSvBit_HIO_cFv();
extern "C" void __dt__25dSvBit_childTreasureHIO_cFv();
extern "C" void __dt__21dSvBit_childItemHIO_cFv();
extern "C" void __dt__23dSvBit_childSwitchHIO_cFv();
extern "C" extern u8 g_save_bit_HIO[1184 + 4 /* padding */];

// 
// External References:
// 

void operator delete(void*);
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void isDarkClearLV__21dSv_player_status_b_cCFi();
extern "C" void isTransformLV__21dSv_player_status_b_cCFi();
extern "C" void getLightDropNum__16dSv_light_drop_cCFUc();
extern "C" void isLightDropGetFlag__16dSv_light_drop_cCFUc();
extern "C" void isTbox__12dSv_memBit_cCFi();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void isItem__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isSwitch__12dSv_danBit_cCFi();
extern "C" void isItem__12dSv_danBit_cCFi();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803C3300-803C330C 000C+00 s=3 e=0 z=0  None .data      __vt__22dSvBit_childOtherHIO_c                               */
SECTION_DATA static void* __vt__22dSvBit_childOtherHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__22dSvBit_childOtherHIO_cFv,
};

/* 803C330C-803C3318 000C+00 s=3 e=0 z=0  None .data      __vt__26dSvBit_childTransformHIO_c                           */
SECTION_DATA static void* __vt__26dSvBit_childTransformHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__26dSvBit_childTransformHIO_cFv,
};

/* 803C3318-803C3324 000C+00 s=3 e=0 z=0  None .data      __vt__25dSvBit_childDarknessHIO_c                            */
SECTION_DATA static void* __vt__25dSvBit_childDarknessHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__25dSvBit_childDarknessHIO_cFv,
};

/* 803C3324-803C3330 000C+00 s=4 e=0 z=0  None .data      __vt__29dSvBit_childTbPerfectionHIO_c                        */
SECTION_DATA static void* __vt__29dSvBit_childTbPerfectionHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__29dSvBit_childTbPerfectionHIO_cFv,
};

/* 803C3330-803C333C 000C+00 s=4 e=0 z=0  None .data      __vt__26dSvBit_childItOneZoneHIO_c                           */
SECTION_DATA static void* __vt__26dSvBit_childItOneZoneHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__26dSvBit_childItOneZoneHIO_cFv,
};

/* 803C333C-803C3348 000C+00 s=4 e=0 z=0  None .data      __vt__23dSvBit_childItZoneHIO_c                              */
SECTION_DATA static void* __vt__23dSvBit_childItZoneHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__23dSvBit_childItZoneHIO_cFv,
};

/* 803C3348-803C3354 000C+00 s=4 e=0 z=0  None .data      __vt__26dSvBit_childItDungeonHIO_c                           */
SECTION_DATA static void* __vt__26dSvBit_childItDungeonHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__26dSvBit_childItDungeonHIO_cFv,
};

/* 803C3354-803C3360 000C+00 s=4 e=0 z=0  None .data      __vt__29dSvBit_childItPerfectionHIO_c                        */
SECTION_DATA static void* __vt__29dSvBit_childItPerfectionHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__29dSvBit_childItPerfectionHIO_cFv,
};

/* 803C3360-803C336C 000C+00 s=4 e=0 z=0  None .data      __vt__26dSvBit_childSwOneZoneHIO_c                           */
SECTION_DATA static void* __vt__26dSvBit_childSwOneZoneHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__26dSvBit_childSwOneZoneHIO_cFv,
};

/* 803C336C-803C3378 000C+00 s=4 e=0 z=0  None .data      __vt__23dSvBit_childSwZoneHIO_c                              */
SECTION_DATA static void* __vt__23dSvBit_childSwZoneHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__23dSvBit_childSwZoneHIO_cFv,
};

/* 803C3378-803C3384 000C+00 s=4 e=0 z=0  None .data      __vt__26dSvBit_childSwDungeonHIO_c                           */
SECTION_DATA static void* __vt__26dSvBit_childSwDungeonHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__26dSvBit_childSwDungeonHIO_cFv,
};

/* 803C3384-803C3390 000C+00 s=4 e=0 z=0  None .data      __vt__29dSvBit_childSwPerfectionHIO_c                        */
SECTION_DATA static void* __vt__29dSvBit_childSwPerfectionHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__29dSvBit_childSwPerfectionHIO_cFv,
};

/* 8025BB78-8025BBAC 0034+00 s=1 e=0 z=0  None .text      __ct__29dSvBit_childSwPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwPerfectionHIO_c::dSvBit_childSwPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__29dSvBit_childSwPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025BBAC-8025BC14 0068+00 s=1 e=0 z=0  None .text      init__29dSvBit_childSwPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childSwPerfectionHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__29dSvBit_childSwPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025BC14-8025BC48 0034+00 s=1 e=0 z=0  None .text      __ct__26dSvBit_childSwDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwDungeonHIO_c::dSvBit_childSwDungeonHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__26dSvBit_childSwDungeonHIO_cFv.s"
}
#pragma pop


/* 8025BC48-8025BCB0 0068+00 s=1 e=0 z=0  None .text      init__26dSvBit_childSwDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childSwDungeonHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__26dSvBit_childSwDungeonHIO_cFv.s"
}
#pragma pop


/* 8025BCB0-8025BCE4 0034+00 s=1 e=0 z=0  None .text      __ct__23dSvBit_childSwZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwZoneHIO_c::dSvBit_childSwZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__23dSvBit_childSwZoneHIO_cFv.s"
}
#pragma pop


/* 8025BCE4-8025BD10 002C+00 s=1 e=0 z=0  None .text      init__23dSvBit_childSwZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childSwZoneHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__23dSvBit_childSwZoneHIO_cFv.s"
}
#pragma pop


/* 8025BD10-8025BD44 0034+00 s=1 e=0 z=0  None .text      __ct__26dSvBit_childSwOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwOneZoneHIO_c::dSvBit_childSwOneZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__26dSvBit_childSwOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025BD44-8025BD70 002C+00 s=1 e=0 z=0  None .text      init__26dSvBit_childSwOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childSwOneZoneHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__26dSvBit_childSwOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025BD70-8025BDA4 0034+00 s=1 e=0 z=0  None .text      __ct__29dSvBit_childItPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItPerfectionHIO_c::dSvBit_childItPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__29dSvBit_childItPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025BDA4-8025BE0C 0068+00 s=1 e=0 z=0  None .text      init__29dSvBit_childItPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childItPerfectionHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__29dSvBit_childItPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025BE0C-8025BE40 0034+00 s=1 e=0 z=0  None .text      __ct__26dSvBit_childItDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItDungeonHIO_c::dSvBit_childItDungeonHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__26dSvBit_childItDungeonHIO_cFv.s"
}
#pragma pop


/* 8025BE40-8025BEA8 0068+00 s=1 e=0 z=0  None .text      init__26dSvBit_childItDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childItDungeonHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__26dSvBit_childItDungeonHIO_cFv.s"
}
#pragma pop


/* 8025BEA8-8025BEDC 0034+00 s=1 e=0 z=0  None .text      __ct__23dSvBit_childItZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItZoneHIO_c::dSvBit_childItZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__23dSvBit_childItZoneHIO_cFv.s"
}
#pragma pop


/* 8025BEDC-8025BF08 002C+00 s=1 e=0 z=0  None .text      init__23dSvBit_childItZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childItZoneHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__23dSvBit_childItZoneHIO_cFv.s"
}
#pragma pop


/* 8025BF08-8025BF3C 0034+00 s=1 e=0 z=0  None .text      __ct__26dSvBit_childItOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItOneZoneHIO_c::dSvBit_childItOneZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__26dSvBit_childItOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025BF3C-8025BF68 002C+00 s=1 e=0 z=0  None .text      init__26dSvBit_childItOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childItOneZoneHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__26dSvBit_childItOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025BF68-8025BF9C 0034+00 s=1 e=0 z=0  None .text      __ct__29dSvBit_childTbPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childTbPerfectionHIO_c::dSvBit_childTbPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__29dSvBit_childTbPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025BF9C-8025C004 0068+00 s=1 e=0 z=0  None .text      init__29dSvBit_childTbPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childTbPerfectionHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__29dSvBit_childTbPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025C004-8025C038 0034+00 s=1 e=0 z=0  None .text      __ct__25dSvBit_childDarknessHIO_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childDarknessHIO_c::dSvBit_childDarknessHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__25dSvBit_childDarknessHIO_cFv.s"
}
#pragma pop


/* 8025C038-8025C0A0 0068+00 s=1 e=0 z=0  None .text      init__25dSvBit_childDarknessHIO_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childDarknessHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__25dSvBit_childDarknessHIO_cFv.s"
}
#pragma pop


/* 8025C0A0-8025C0D4 0034+00 s=1 e=0 z=0  None .text      __ct__26dSvBit_childTransformHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childTransformHIO_c::dSvBit_childTransformHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__26dSvBit_childTransformHIO_cFv.s"
}
#pragma pop


/* 8025C0D4-8025C13C 0068+00 s=1 e=0 z=0  None .text      init__26dSvBit_childTransformHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childTransformHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__26dSvBit_childTransformHIO_cFv.s"
}
#pragma pop


/* 8025C13C-8025C178 003C+00 s=1 e=0 z=0  None .text      __ct__22dSvBit_childOtherHIO_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childOtherHIO_c::dSvBit_childOtherHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__ct__22dSvBit_childOtherHIO_cFv.s"
}
#pragma pop


/* 8025C178-8025C1F8 0080+00 s=1 e=0 z=0  None .text      init__22dSvBit_childOtherHIO_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_childOtherHIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__22dSvBit_childOtherHIO_cFv.s"
}
#pragma pop


/* 8025C1F8-8025C29C 00A4+00 s=0 e=1 z=0  None .text      init__12dSvBit_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSvBit_HIO_c::init() {
	nofralloc
#include "asm/d/save/d_save_HIO/init__12dSvBit_HIO_cFv.s"
}
#pragma pop


/* 8025C29C-8025C2E4 0048+00 s=1 e=0 z=0  None .text      __dt__22dSvBit_childOtherHIO_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childOtherHIO_c::~dSvBit_childOtherHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__22dSvBit_childOtherHIO_cFv.s"
}
#pragma pop


/* 8025C2E4-8025C32C 0048+00 s=1 e=0 z=0  None .text      __dt__26dSvBit_childTransformHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childTransformHIO_c::~dSvBit_childTransformHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__26dSvBit_childTransformHIO_cFv.s"
}
#pragma pop


/* 8025C32C-8025C374 0048+00 s=1 e=0 z=0  None .text      __dt__25dSvBit_childDarknessHIO_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childDarknessHIO_c::~dSvBit_childDarknessHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__25dSvBit_childDarknessHIO_cFv.s"
}
#pragma pop


/* 8025C374-8025C3BC 0048+00 s=1 e=0 z=0  None .text      __dt__29dSvBit_childTbPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childTbPerfectionHIO_c::~dSvBit_childTbPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__29dSvBit_childTbPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025C3BC-8025C404 0048+00 s=1 e=0 z=0  None .text      __dt__26dSvBit_childItOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItOneZoneHIO_c::~dSvBit_childItOneZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__26dSvBit_childItOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025C404-8025C44C 0048+00 s=1 e=0 z=0  None .text      __dt__23dSvBit_childItZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItZoneHIO_c::~dSvBit_childItZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__23dSvBit_childItZoneHIO_cFv.s"
}
#pragma pop


/* 8025C44C-8025C494 0048+00 s=1 e=0 z=0  None .text      __dt__26dSvBit_childItDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItDungeonHIO_c::~dSvBit_childItDungeonHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__26dSvBit_childItDungeonHIO_cFv.s"
}
#pragma pop


/* 8025C494-8025C4DC 0048+00 s=1 e=0 z=0  None .text      __dt__29dSvBit_childItPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItPerfectionHIO_c::~dSvBit_childItPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__29dSvBit_childItPerfectionHIO_cFv.s"
}
#pragma pop


/* 8025C4DC-8025C524 0048+00 s=1 e=0 z=0  None .text      __dt__26dSvBit_childSwOneZoneHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwOneZoneHIO_c::~dSvBit_childSwOneZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__26dSvBit_childSwOneZoneHIO_cFv.s"
}
#pragma pop


/* 8025C524-8025C56C 0048+00 s=1 e=0 z=0  None .text      __dt__23dSvBit_childSwZoneHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwZoneHIO_c::~dSvBit_childSwZoneHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__23dSvBit_childSwZoneHIO_cFv.s"
}
#pragma pop


/* 8025C56C-8025C5B4 0048+00 s=1 e=0 z=0  None .text      __dt__26dSvBit_childSwDungeonHIO_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwDungeonHIO_c::~dSvBit_childSwDungeonHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__26dSvBit_childSwDungeonHIO_cFv.s"
}
#pragma pop


/* 8025C5B4-8025C5FC 0048+00 s=1 e=0 z=0  None .text      __dt__29dSvBit_childSwPerfectionHIO_cFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwPerfectionHIO_c::~dSvBit_childSwPerfectionHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__29dSvBit_childSwPerfectionHIO_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803C3390-803C339C 000C+00 s=3 e=0 z=0  None .data      __vt__25dSvBit_childTreasureHIO_c                            */
SECTION_DATA static void* __vt__25dSvBit_childTreasureHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__25dSvBit_childTreasureHIO_cFv,
};

/* 803C339C-803C33A8 000C+00 s=3 e=0 z=0  None .data      __vt__21dSvBit_childItemHIO_c                                */
SECTION_DATA static void* __vt__21dSvBit_childItemHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__21dSvBit_childItemHIO_cFv,
};

/* 803C33A8-803C33B4 000C+00 s=3 e=0 z=0  None .data      __vt__23dSvBit_childSwitchHIO_c                              */
SECTION_DATA static void* __vt__23dSvBit_childSwitchHIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__23dSvBit_childSwitchHIO_cFv,
};

/* 803C33B4-803C33C0 000C+00 s=2 e=0 z=0  None .data      __vt__12dSvBit_HIO_c                                         */
SECTION_DATA static void* __vt__12dSvBit_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dSvBit_HIO_cFv,
};

/* 804307E0-804307EC 000C+00 s=1 e=0 z=0  None .bss       @3659                                                        */
static u8 lit_3659[12];

/* 804307EC-80430C90 04A0+04 s=1 e=2 z=0  None .bss       g_save_bit_HIO                                               */
u8 g_save_bit_HIO[1184 + 4 /* padding */];

/* 8025C5FC-8025C6FC 0100+00 s=0 e=1 z=0  None .text      __sinit_d_save_HIO_cpp                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_save_HIO_cpp() {
	nofralloc
#include "asm/d/save/d_save_HIO/__sinit_d_save_HIO_cpp.s"
}
#pragma pop


/* 8025C6FC-8025C874 0178+00 s=2 e=0 z=0  None .text      __dt__12dSvBit_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_HIO_c::~dSvBit_HIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__12dSvBit_HIO_cFv.s"
}
#pragma pop


/* 8025C874-8025C8D4 0060+00 s=1 e=0 z=0  None .text      __dt__25dSvBit_childTreasureHIO_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childTreasureHIO_c::~dSvBit_childTreasureHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__25dSvBit_childTreasureHIO_cFv.s"
}
#pragma pop


/* 8025C8D4-8025C970 009C+00 s=1 e=0 z=0  None .text      __dt__21dSvBit_childItemHIO_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childItemHIO_c::~dSvBit_childItemHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__21dSvBit_childItemHIO_cFv.s"
}
#pragma pop


/* 8025C970-8025CA0C 009C+00 s=1 e=0 z=0  None .text      __dt__23dSvBit_childSwitchHIO_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSvBit_childSwitchHIO_c::~dSvBit_childSwitchHIO_c() {
	nofralloc
#include "asm/d/save/d_save_HIO/__dt__23dSvBit_childSwitchHIO_cFv.s"
}
#pragma pop

