// 
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_movebg_actor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/bg/d_bg_s_movebg_actor.h"

// 
// Types:
// 

struct mDoMtx_stack_c {
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct cXyz {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 80078688 */ bool CreateHeap();
	/* 80078690 */ bool Create();
	/* 80078698 */ bool Execute(f32 (** )[3][4]);
	/* 800786A0 */ bool Draw();
	/* 800786A8 */ bool Delete();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800786C8 */ void MoveBGCreateHeap();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
	/* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

// 
// Forward References:
// 

static void CheckCreateHeap(fopAc_ac_c*);
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 m_set_func__16dBgS_MoveBgActor[4 + 4 /* padding */];

extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" bool CreateHeap__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool Execute__16dBgS_MoveBgActorFPPA3_A4_f();
extern "C" bool Draw__16dBgS_MoveBgActorFv();
extern "C" bool Delete__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreateHeap__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 m_set_func__16dBgS_MoveBgActor[4 + 4 /* padding */];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void* operator new(u32);
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803AB9A0-803AB9C8 0028+00 s=1 e=0 z=34  None .data      __vt__16dBgS_MoveBgActor                                     */
SECTION_DATA void* __vt__16dBgS_MoveBgActor[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__16dBgS_MoveBgActorFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__16dBgS_MoveBgActorFPPA3_A4_f,
	(void*)Draw__16dBgS_MoveBgActorFv,
	(void*)Delete__16dBgS_MoveBgActorFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80078624-80078668 0044+00 s=0 e=0 z=173  None .text      __ct__16dBgS_MoveBgActorFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_MoveBgActor::dBgS_MoveBgActor() {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/__ct__16dBgS_MoveBgActorFv.s"
}
#pragma pop


/* 80078668-80078688 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80078688-80078690 0008+00 s=1 e=0 z=2  None .text      CreateHeap__16dBgS_MoveBgActorFv                             */
bool dBgS_MoveBgActor::CreateHeap() {
	return true;
}


/* 80078690-80078698 0008+00 s=1 e=0 z=60  None .text      Create__16dBgS_MoveBgActorFv                                 */
bool dBgS_MoveBgActor::Create() {
	return true;
}


/* 80078698-800786A0 0008+00 s=1 e=0 z=3  None .text      Execute__16dBgS_MoveBgActorFPPA3_A4_f                        */
bool dBgS_MoveBgActor::Execute(f32 (** param_0)[3][4]) {
	return true;
}


/* 800786A0-800786A8 0008+00 s=1 e=0 z=2  None .text      Draw__16dBgS_MoveBgActorFv                                   */
bool dBgS_MoveBgActor::Draw() {
	return true;
}


/* 800786A8-800786B0 0008+00 s=1 e=0 z=6  None .text      Delete__16dBgS_MoveBgActorFv                                 */
bool dBgS_MoveBgActor::Delete() {
	return true;
}


/* 800786B0-800786B8 0008+00 s=1 e=0 z=171  None .text      IsDelete__16dBgS_MoveBgActorFv                               */
bool dBgS_MoveBgActor::IsDelete() {
	return true;
}


/* 800786B8-800786C0 0008+00 s=1 e=0 z=171  None .text      ToFore__16dBgS_MoveBgActorFv                                 */
bool dBgS_MoveBgActor::ToFore() {
	return true;
}


/* 800786C0-800786C8 0008+00 s=1 e=0 z=171  None .text      ToBack__16dBgS_MoveBgActorFv                                 */
bool dBgS_MoveBgActor::ToBack() {
	return true;
}


/* ############################################################################################## */
/* 80450F70-80450F74 0004+00 s=2 e=0 z=0  None .sbss      m_name__16dBgS_MoveBgActor                                   */
static u8 m_name__16dBgS_MoveBgActor[4];

/* 80450F74-80450F78 0004+00 s=2 e=0 z=0  None .sbss      m_dzb_id__16dBgS_MoveBgActor                                 */
static u8 m_dzb_id__16dBgS_MoveBgActor[4];

/* 80450F78-80450F80 0004+04 s=2 e=0 z=1  None .sbss      m_set_func__16dBgS_MoveBgActor                               */
u8 m_set_func__16dBgS_MoveBgActor[4 + 4 /* padding */];

/* 800786C8-800787BC 00F4+00 s=1 e=0 z=0  None .text      MoveBGCreateHeap__16dBgS_MoveBgActorFv                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBgActor::MoveBGCreateHeap() {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/MoveBGCreateHeap__16dBgS_MoveBgActorFv.s"
}
#pragma pop


/* 800787BC-800788DC 0120+00 s=0 e=0 z=169  None .text      MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBgActor::MoveBGCreate(char const* param_0, int param_1, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32 param_3, f32 (* param_4)[3][4]) {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/func_800787BC.s"
}
#pragma pop


/* 800788DC-80078950 0074+00 s=0 e=0 z=169  None .text      MoveBGDelete__16dBgS_MoveBgActorFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBgActor::MoveBGDelete() {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/MoveBGDelete__16dBgS_MoveBgActorFv.s"
}
#pragma pop


/* 80078950-80078A14 00C4+00 s=0 e=0 z=183  None .text      MoveBGExecute__16dBgS_MoveBgActorFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBgActor::MoveBGExecute() {
	nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/MoveBGExecute__16dBgS_MoveBgActorFv.s"
}
#pragma pop

