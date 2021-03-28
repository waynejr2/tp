// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv5FloorBoard
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoHIO_entry_c {
	/* 80C6A6B4 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
};

struct fOpAcm_HIO_entry_c {
	/* 80C6A658 */ ~fOpAcm_HIO_entry_c();
};

struct daFlorBoad_c {
	/* 80C6A6FC */ void setBaseMtx();
	/* 80C6A784 */ void CreateHeap();
	/* 80C6A7F0 */ void create();
	/* 80C6AAAC */ void Execute(f32 (** )[3][4]);
	/* 80C6AB04 */ void procMain();
	/* 80C6AB90 */ void init_modeWait();
	/* 80C6ABAC */ void modeWait();
	/* 80C6AC9C */ void init_modeBreak();
	/* 80C6AD40 */ void modeBreak();
	/* 80C6AEB0 */ void Draw();
	/* 80C6AF54 */ void Delete();
};

struct daFlorBoad_HIO_c {
	/* 80C6A60C */ daFlorBoad_HIO_c();
	/* 80C6B058 */ ~daFlorBoad_HIO_c();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {
};

struct J3DModelData {
};

struct cXyz {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
	/* 80083830 */ void Move();
	/* 80C6AA50 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
	/* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
	/* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 80078690 */ bool Create();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct cM3dGCyl {
	/* 8026F1DC */ void SetC(cXyz const&);
	/* 8026F1F8 */ void SetH(f32);
	/* 8026F200 */ void SetR(f32);
	/* 80C6A9C0 */ ~cM3dGCyl();
};

struct cM3dGAab {
	/* 80C6AA08 */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
	/* 80C6B010 */ ~cCcD_GStts();
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daFlorBoad_Draw(daFlorBoad_c*);
static void daFlorBoad_Execute(daFlorBoad_c*);
static void daFlorBoad_Delete(daFlorBoad_c*);
static void daFlorBoad_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv5FBoard[12];

extern "C" void __ct__16daFlorBoad_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daFlorBoad_cFv();
extern "C" void CreateHeap__12daFlorBoad_cFv();
extern "C" void create__12daFlorBoad_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__12daFlorBoad_cFPPA3_A4_f();
extern "C" void procMain__12daFlorBoad_cFv();
extern "C" void init_modeWait__12daFlorBoad_cFv();
extern "C" void modeWait__12daFlorBoad_cFv();
extern "C" void init_modeBreak__12daFlorBoad_cFv();
extern "C" void modeBreak__12daFlorBoad_cFv();
extern "C" void Draw__12daFlorBoad_cFv();
extern "C" void Delete__12daFlorBoad_cFv();
extern "C" static void daFlorBoad_Draw__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Execute__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Delete__FP12daFlorBoad_c();
extern "C" static void daFlorBoad_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daFlorBoad_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv5FloorBoard_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv5FBoard[12];

// 
// External References:
// 

void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C6B148-80C6B14C 0004+00 s=5 e=0 z=0  None .rodata    @3656                                                        */
SECTION_RODATA static u32 const lit_3656 = 0x3F800000;

/* 80C6B198-80C6B1A4 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6B1A4-80C6B1B8 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C6B1B8-80C6B1FC 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__12daFlorBoad_c                                      */
SECTION_DATA static u8 mCcDCyl__12daFlorBoad_c[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C6B1FC-80C6B208 000C+00 s=1 e=0 z=0  None .data      @3839                                                        */
SECTION_DATA static void* lit_3839[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__12daFlorBoad_cFv,
};

/* 80C6B208-80C6B214 000C+00 s=1 e=0 z=0  None .data      @3840                                                        */
SECTION_DATA static void* lit_3840[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeBreak__12daFlorBoad_cFv,
};

/* 80C6B214-80C6B22C 0018+00 s=1 e=0 z=0  None .data      mode_proc$3838                                               */
SECTION_DATA static u8 mode_proc[24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6B22C-80C6B24C 0020+00 s=1 e=0 z=0  None .data      l_daFlorBoad_Method                                          */
SECTION_DATA static void* l_daFlorBoad_Method[8] = {
	(void*)daFlorBoad_Create__FP10fopAc_ac_c,
	(void*)daFlorBoad_Delete__FP12daFlorBoad_c,
	(void*)daFlorBoad_Execute__FP12daFlorBoad_c,
	(void*)NULL,
	(void*)daFlorBoad_Draw__FP12daFlorBoad_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C6B24C-80C6B27C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv5FBoard                                      */
SECTION_DATA void* g_profile_Obj_Lv5FBoard[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x004F0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000734,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x021A0000,
	(void*)&l_daFlorBoad_Method,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C6B27C-80C6B288 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts                                           */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10cCcD_GSttsFv,
};

/* 80C6B288-80C6B294 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts                                           */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10dCcD_GSttsFv,
};

/* 80C6B294-80C6B2A0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80C6B2A0-80C6B2AC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C6B2AC-80C6B2D4 0028+00 s=1 e=0 z=0  None .data      __vt__12daFlorBoad_c                                         */
SECTION_DATA static void* __vt__12daFlorBoad_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__12daFlorBoad_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__12daFlorBoad_cFPPA3_A4_f,
	(void*)Draw__12daFlorBoad_cFv,
	(void*)Delete__12daFlorBoad_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C6B2D4-80C6B2E0 000C+00 s=2 e=0 z=0  None .data      __vt__16daFlorBoad_HIO_c                                     */
SECTION_DATA static void* __vt__16daFlorBoad_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__16daFlorBoad_HIO_cFv,
};

/* 80C6B2E0-80C6B2EC 000C+00 s=3 e=0 z=0  None .data      __vt__18fOpAcm_HIO_entry_c                                   */
SECTION_DATA static void* __vt__18fOpAcm_HIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80C6B2EC-80C6B2F8 000C+00 s=4 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C6A60C-80C6A658 004C+00 s=1 e=0 z=0  None .text      __ct__16daFlorBoad_HIO_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFlorBoad_HIO_c::daFlorBoad_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__ct__16daFlorBoad_HIO_cFv.s"
}
#pragma pop


/* 80C6A658-80C6A6B4 005C+00 s=1 e=0 z=0  None .text      __dt__18fOpAcm_HIO_entry_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop


/* 80C6A6B4-80C6A6FC 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80C6A6FC-80C6A784 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__12daFlorBoad_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/setBaseMtx__12daFlorBoad_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C6B14C-80C6B17C 0030+00 s=1 e=0 z=0  None .rodata    mCcDObjInfo__12daFlorBoad_c                                  */
SECTION_RODATA static u8 const mCcDObjInfo__12daFlorBoad_c[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02,
	0x00, 0x00, 0x00, 0x01, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6B17C-80C6B180 0004+00 s=1 e=0 z=0  None .rodata    @3870                                                        */
SECTION_RODATA static u32 const lit_3870 = 0x438C0000;

/* 80C6B180-80C6B184 0004+00 s=1 e=0 z=0  None .rodata    @3871                                                        */
SECTION_RODATA static u32 const lit_3871 = 0x432A0000;

/* 80C6B184-80C6B188 0004+00 s=1 e=0 z=0  None .rodata    @3872                                                        */
SECTION_RODATA static u32 const lit_3872 = 0x43160000;

/* 80C6B188-80C6B18C 0004+00 s=1 e=0 z=0  None .rodata    @3891                                                        */
SECTION_RODATA static u32 const lit_3891 = 0xBF800000;

/* 80C6B18C-80C6B195 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C6B18C = "L5haYuka";
#pragma pop

/* 80C6A784-80C6A7F0 006C+00 s=1 e=0 z=0  None .text      CreateHeap__12daFlorBoad_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/CreateHeap__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6A7F0-80C6A9C0 01D0+00 s=1 e=0 z=0  None .text      create__12daFlorBoad_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/create__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6A9C0-80C6AA08 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80C6AA08-80C6AA50 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C6AA50-80C6AAAC 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__10dCcD_GSttsFv.s"
}
#pragma pop


/* 80C6AAAC-80C6AB04 0058+00 s=1 e=0 z=0  None .text      Execute__12daFlorBoad_cFPPA3_A4_f                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Execute__12daFlorBoad_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C6B300-80C6B30C 000C+00 s=1 e=0 z=0  None .bss       @3647                                                        */
static u8 lit_3647[12];

/* 80C6B30C-80C6B320 0014+00 s=2 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[20];

/* 80C6B320-80C6B324 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80C6B320[4];

/* 80C6AB04-80C6AB90 008C+00 s=1 e=0 z=0  None .text      procMain__12daFlorBoad_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::procMain() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/procMain__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AB90-80C6ABAC 001C+00 s=1 e=0 z=0  None .text      init_modeWait__12daFlorBoad_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/init_modeWait__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6ABAC-80C6AC9C 00F0+00 s=1 e=0 z=0  None .text      modeWait__12daFlorBoad_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/modeWait__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AC9C-80C6AD40 00A4+00 s=1 e=0 z=0  None .text      init_modeBreak__12daFlorBoad_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::init_modeBreak() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/init_modeBreak__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AD40-80C6AEB0 0170+00 s=1 e=0 z=0  None .text      modeBreak__12daFlorBoad_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::modeBreak() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/modeBreak__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AEB0-80C6AF54 00A4+00 s=1 e=0 z=0  None .text      Draw__12daFlorBoad_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Draw__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AF54-80C6AF84 0030+00 s=1 e=0 z=0  None .text      Delete__12daFlorBoad_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFlorBoad_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/Delete__12daFlorBoad_cFv.s"
}
#pragma pop


/* 80C6AF84-80C6AFB0 002C+00 s=1 e=0 z=0  None .text      daFlorBoad_Draw__FP12daFlorBoad_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFlorBoad_Draw(daFlorBoad_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Draw__FP12daFlorBoad_c.s"
}
#pragma pop


/* 80C6AFB0-80C6AFD0 0020+00 s=1 e=0 z=0  None .text      daFlorBoad_Execute__FP12daFlorBoad_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFlorBoad_Execute(daFlorBoad_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Execute__FP12daFlorBoad_c.s"
}
#pragma pop


/* 80C6AFD0-80C6AFF0 0020+00 s=1 e=0 z=0  None .text      daFlorBoad_Delete__FP12daFlorBoad_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFlorBoad_Delete(daFlorBoad_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Delete__FP12daFlorBoad_c.s"
}
#pragma pop


/* 80C6AFF0-80C6B010 0020+00 s=1 e=0 z=0  None .text      daFlorBoad_Create__FP10fopAc_ac_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFlorBoad_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/daFlorBoad_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C6B010-80C6B058 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__10cCcD_GSttsFv.s"
}
#pragma pop


/* 80C6B058-80C6B0C4 006C+00 s=2 e=0 z=0  None .text      __dt__16daFlorBoad_HIO_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFlorBoad_HIO_c::~daFlorBoad_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__dt__16daFlorBoad_HIO_cFv.s"
}
#pragma pop


/* 80C6B0C4-80C6B134 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv5FloorBoard_cpp                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv5FloorBoard_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/d_a_obj_lv5FloorBoard/__sinit_d_a_obj_lv5FloorBoard_cpp.s"
}
#pragma pop

