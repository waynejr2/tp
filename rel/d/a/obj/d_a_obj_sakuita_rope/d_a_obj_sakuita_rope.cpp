// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_sakuita_rope
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoExt_3DlineMat_c {
};

struct mDoExt_3DlineMatSortPacket {
	/* 80014738 */ void setMat(mDoExt_3DlineMat_c*);
};

struct ResTIMG {
};

struct dKy_tevstr_c {
};

struct _GXColor {
};

struct mDoExt_3DlineMat1_c {
	/* 80013360 */ void init(u16, u16, ResTIMG*, int);
	/* 80013FB0 */ void update(int, _GXColor&, dKy_tevstr_c*);
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daObjItaRope_c {
	/* 80CC57E4 */ void create_init();
	/* 80CC5E48 */ void initBaseMtx();
	/* 80CC5E7C */ void setBaseMtx();
	/* 80CC5ECC */ void setNormalRopePos();
};

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B34 */ void operator-(Vec const&) const;
	/* 80266B84 */ void operator*(f32) const;
	/* 80266F48 */ void normalizeZP();
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct J3DModel {
};

struct J3DModelData {
};

struct dComIfG_play_c {
	/* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
	/* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
	/* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
	/* 80CC6844 */ ~dCcD_GStts();
};

struct cCcD_GStts {
	/* 80CC68A0 */ ~cCcD_GStts();
};

struct Sakuita_c {
	/* 80CC5238 */ void setModelData(J3DModelData*);
	/* 80CC527C */ void create(cXyz*, s16, s8);
	/* 80CC5314 */ void execute(cXyz*, s16);
	/* 80CC5354 */ void draw();
	/* 80CC5390 */ void initBaseMtx();
	/* 80CC53B0 */ void setBaseMtx();
	/* 80CC5444 */ void setPlatePos(cXyz*);
	/* 80CC5720 */ void calcAngle();
	/* 80CC63E4 */ ~Sakuita_c();
	/* 80CC6420 */ Sakuita_c();
};

struct RopeWork_c {
	/* 80CC6424 */ ~RopeWork_c();
	/* 80CC6460 */ RopeWork_c();
};

// 
// Forward References:
// 

static void createSolidHeap(fopAc_ac_c*);
static void daObjItaRope_Draw(daObjItaRope_c*);
static void daObjItaRope_Execute(daObjItaRope_c*);
static bool daObjItaRope_IsDelete(daObjItaRope_c*);
static void daObjItaRope_Delete(daObjItaRope_c*);
static void daObjItaRope_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_ItaRope[12];

extern "C" void setModelData__9Sakuita_cFP12J3DModelData();
extern "C" void create__9Sakuita_cFP4cXyzsSc();
extern "C" void execute__9Sakuita_cFP4cXyzs();
extern "C" void draw__9Sakuita_cFv();
extern "C" void initBaseMtx__9Sakuita_cFv();
extern "C" void setBaseMtx__9Sakuita_cFv();
extern "C" void setPlatePos__9Sakuita_cFP4cXyz();
extern "C" void calcAngle__9Sakuita_cFv();
extern "C" void create_init__14daObjItaRope_cFv();
extern "C" void initBaseMtx__14daObjItaRope_cFv();
extern "C" void setBaseMtx__14daObjItaRope_cFv();
extern "C" void setNormalRopePos__14daObjItaRope_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void __dt__9Sakuita_cFv();
extern "C" void __ct__9Sakuita_cFv();
extern "C" void __dt__10RopeWork_cFv();
extern "C" void __ct__10RopeWork_cFv();
extern "C" static void daObjItaRope_Draw__FP14daObjItaRope_c();
extern "C" static void daObjItaRope_Execute__FP14daObjItaRope_c();
extern "C" static bool daObjItaRope_IsDelete__FP14daObjItaRope_c();
extern "C" static void daObjItaRope_Delete__FP14daObjItaRope_c();
extern "C" static void daObjItaRope_Create__FP10fopAc_ac_c();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_ItaRope[12];

// 
// External References:
// 

void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dPath_GetRoomPath(int, int);
void dKyw_get_AllWind_vecpow(cXyz*);
void cM_atan2s(f32, f32);
void cM_rnd();
void cLib_chaseF(f32*, f32, f32);
void cLib_targetAngleY(Vec const*, Vec const*);
void* operator new[](u32);
void operator delete(void*);
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyw_get_AllWind_vecpow__FP4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;

// 
// Declarations:
// 

/* 80CC5238-80CC527C 0044+00 s=1 e=0 z=0  None .text      setModelData__9Sakuita_cFP12J3DModelData                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::setModelData(J3DModelData* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/setModelData__9Sakuita_cFP12J3DModelData.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CC68F0-80CC6904 0014+00 s=4 e=0 z=0  None .rodata    M_attr__14daObjItaRope_c                                     */
SECTION_RODATA static u8 const M_attr__14daObjItaRope_c[20] = {
	0xC0, 0xA0, 0x00, 0x00, 0x3E, 0x4C, 0xCC, 0xCD, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD,
	0x00, 0x00, 0x00, 0x00,
};

/* 80CC6904-80CC6908 0004+00 s=2 e=0 z=0  None .rodata    @3634                                                        */
SECTION_RODATA static u32 const lit_3634 = 0x42960000;

/* 80CC6908-80CC690C 0004+00 s=4 e=0 z=0  None .rodata    @3635                                                        */
SECTION_RODATA static u8 const lit_3635[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CC527C-80CC5314 0098+00 s=1 e=0 z=0  None .text      create__9Sakuita_cFP4cXyzsSc                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::create(cXyz* param_0, s16 param_1, s8 param_2) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/create__9Sakuita_cFP4cXyzsSc.s"
}
#pragma pop


/* 80CC5314-80CC5354 0040+00 s=1 e=0 z=0  None .text      execute__9Sakuita_cFP4cXyzs                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::execute(cXyz* param_0, s16 param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/execute__9Sakuita_cFP4cXyzs.s"
}
#pragma pop


/* 80CC5354-80CC5390 003C+00 s=1 e=0 z=0  None .text      draw__9Sakuita_cFv                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/draw__9Sakuita_cFv.s"
}
#pragma pop


/* 80CC5390-80CC53B0 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__9Sakuita_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/initBaseMtx__9Sakuita_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CC690C-80CC6910 0004+00 s=1 e=0 z=0  None .rodata    @3669                                                        */
SECTION_RODATA static u32 const lit_3669 = 0x40C00000;

/* 80CC53B0-80CC5444 0094+00 s=2 e=0 z=0  None .text      setBaseMtx__9Sakuita_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/setBaseMtx__9Sakuita_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CC6910-80CC6918 0008+00 s=2 e=0 z=0  None .rodata    @3746                                                        */
SECTION_RODATA static u8 const lit_3746[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC6918-80CC6920 0008+00 s=2 e=0 z=0  None .rodata    @3747                                                        */
SECTION_RODATA static u8 const lit_3747[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC6920-80CC6928 0008+00 s=2 e=0 z=0  None .rodata    @3748                                                        */
SECTION_RODATA static u8 const lit_3748[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC6928-80CC692C 0004+00 s=2 e=0 z=0  None .rodata    @3749                                                        */
SECTION_RODATA static u32 const lit_3749 = 0x3DCCCCCD;

/* 80CC692C-80CC6930 0004+00 s=1 e=0 z=0  None .rodata    @3750                                                        */
SECTION_RODATA static u32 const lit_3750 = 0xC2700000;

/* 80CC6930-80CC6934 0004+00 s=1 e=0 z=0  None .rodata    @3751                                                        */
SECTION_RODATA static u32 const lit_3751 = 0x41700000;

/* 80CC6934-80CC6938 0004+00 s=1 e=0 z=0  None .rodata    @3752                                                        */
SECTION_RODATA static u32 const lit_3752 = 0x42C80000;

/* 80CC6938-80CC693C 0004+00 s=1 e=0 z=0  None .rodata    @3753                                                        */
SECTION_RODATA static u32 const lit_3753 = 0x3ECCCCCD;

/* 80CC693C-80CC6940 0004+00 s=1 e=0 z=0  None .rodata    @3754                                                        */
SECTION_RODATA static u32 const lit_3754 = 0x46000000;

/* 80CC6940-80CC6944 0004+00 s=1 e=0 z=0  None .rodata    @3755                                                        */
SECTION_RODATA static u32 const lit_3755 = 0x44610000;

/* 80CC6944-80CC6948 0004+00 s=2 e=0 z=0  None .rodata    @3756                                                        */
SECTION_RODATA static u32 const lit_3756 = 0xC2960000;

/* 80CC6948-80CC6950 0004+04 s=2 e=0 z=0  None .rodata    @3757                                                        */
SECTION_RODATA static u32 const lit_3757[1 + 1 /* padding */] = {
	0x3F000000,
	/* padding */
	0x00000000,
};

/* 80CC5444-80CC5720 02DC+00 s=1 e=0 z=0  None .text      setPlatePos__9Sakuita_cFP4cXyz                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::setPlatePos(cXyz* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/setPlatePos__9Sakuita_cFP4cXyz.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CC6950-80CC6958 0008+00 s=2 e=0 z=0  None .rodata    @3776                                                        */
SECTION_RODATA static u8 const lit_3776[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CC5720-80CC57E4 00C4+00 s=2 e=0 z=0  None .text      calcAngle__9Sakuita_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Sakuita_c::calcAngle() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/calcAngle__9Sakuita_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CC6958-80CC695C 0004+00 s=1 e=0 z=0  None .rodata    @3953                                                        */
SECTION_RODATA static u32 const lit_3953 = 0x3F800000;

/* 80CC695C-80CC6960 0004+00 s=1 e=0 z=0  None .rodata    @3954                                                        */
SECTION_RODATA static u32 const lit_3954 = 0x40400000;

/* 80CC6960-80CC6964 0004+00 s=1 e=0 z=0  None .rodata    @3955                                                        */
SECTION_RODATA static u32 const lit_3955 = 0xC30C0000;

/* 80CC6964-80CC6968 0004+00 s=1 e=0 z=0  None .rodata    @3956                                                        */
SECTION_RODATA static u32 const lit_3956 = 0x41A00000;

/* 80CC6968-80CC696C 0004+00 s=1 e=0 z=0  None .rodata    @4094                                                        */
SECTION_RODATA static u32 const lit_4094 = 0x3F19999A;

/* 80CC696C-80CC6970 0004+00 s=1 e=0 z=0  None .rodata    @4149                                                        */
SECTION_RODATA static u32 const lit_4149 = 0x40000000;

/* 80CC6970-80CC6995 0025+00 s=4 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CC6970 = "A_Sakuita";
SECTION_DEAD char const* const stringBase_80CC697A = "A_Sakuita.bmd";
SECTION_DEAD char const* const stringBase_80CC6988 = "Obj_Rope.bti";
#pragma pop

/* 80CC6998-80CC699C 0004+00 s=4 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CC57E4-80CC5E48 0664+00 s=1 e=0 z=0  None .text      create_init__14daObjItaRope_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjItaRope_c::create_init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/create_init__14daObjItaRope_cFv.s"
}
#pragma pop


/* 80CC5E48-80CC5E7C 0034+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjItaRope_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjItaRope_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/initBaseMtx__14daObjItaRope_cFv.s"
}
#pragma pop


/* 80CC5E7C-80CC5ECC 0050+00 s=1 e=0 z=0  None .text      setBaseMtx__14daObjItaRope_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjItaRope_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/setBaseMtx__14daObjItaRope_cFv.s"
}
#pragma pop


/* 80CC5ECC-80CC622C 0360+00 s=2 e=0 z=0  None .text      setNormalRopePos__14daObjItaRope_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjItaRope_c::setNormalRopePos() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/setNormalRopePos__14daObjItaRope_cFv.s"
}
#pragma pop


/* 80CC622C-80CC63E4 01B8+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80CC63E4-80CC6420 003C+00 s=2 e=0 z=0  None .text      __dt__9Sakuita_cFv                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Sakuita_c::~Sakuita_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/__dt__9Sakuita_cFv.s"
}
#pragma pop


/* 80CC6420-80CC6424 0004+00 s=1 e=0 z=0  None .text      __ct__9Sakuita_cFv                                           */
Sakuita_c::Sakuita_c() {
	/* empty function */
}


/* 80CC6424-80CC6460 003C+00 s=2 e=0 z=0  None .text      __dt__10RopeWork_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm RopeWork_c::~RopeWork_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/__dt__10RopeWork_cFv.s"
}
#pragma pop


/* 80CC6460-80CC6464 0004+00 s=1 e=0 z=0  None .text      __ct__10RopeWork_cFv                                         */
RopeWork_c::RopeWork_c() {
	/* empty function */
}


/* ############################################################################################## */
/* 80CC699C-80CC69A0 0004+00 s=1 e=0 z=0  None .data      l_color$localstatic3$draw__14daObjItaRope_cFv                */
SECTION_DATA static u8 data_80CC699C[4] = {
	0x14, 0x0F, 0x00, 0xFF,
};

/* 80CC6464-80CC652C 00C8+00 s=1 e=0 z=0  None .text      daObjItaRope_Draw__FP14daObjItaRope_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjItaRope_Draw(daObjItaRope_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/daObjItaRope_Draw__FP14daObjItaRope_c.s"
}
#pragma pop


/* 80CC652C-80CC6610 00E4+00 s=1 e=0 z=0  None .text      daObjItaRope_Execute__FP14daObjItaRope_c                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjItaRope_Execute(daObjItaRope_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/daObjItaRope_Execute__FP14daObjItaRope_c.s"
}
#pragma pop


/* 80CC6610-80CC6618 0008+00 s=1 e=0 z=0  None .text      daObjItaRope_IsDelete__FP14daObjItaRope_c                    */
static bool daObjItaRope_IsDelete(daObjItaRope_c* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80CC69A0-80CC69C0 0020+00 s=1 e=0 z=0  None .data      l_daObjItaRope_Method                                        */
SECTION_DATA static void* l_daObjItaRope_Method[8] = {
	(void*)daObjItaRope_Create__FP10fopAc_ac_c,
	(void*)daObjItaRope_Delete__FP14daObjItaRope_c,
	(void*)daObjItaRope_Execute__FP14daObjItaRope_c,
	(void*)daObjItaRope_IsDelete__FP14daObjItaRope_c,
	(void*)daObjItaRope_Draw__FP14daObjItaRope_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CC69C0-80CC69F0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_ItaRope                                        */
SECTION_DATA void* g_profile_Obj_ItaRope[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01530000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000638,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00230000,
	(void*)&l_daObjItaRope_Method,
	(void*)0x00040180,
	(void*)0x000E0000,
};

/* 80CC69F0-80CC6A04 0014+00 s=1 e=0 z=0  None .data      __vt__18mDoExt_3DlineMat_c                                   */
SECTION_DATA static void* __vt__18mDoExt_3DlineMat_c[5] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CC6A04-80CC6A10 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts                                           */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10cCcD_GSttsFv,
};

/* 80CC6A10-80CC6A1C 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts                                           */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10dCcD_GSttsFv,
};

/* 80CC6618-80CC6738 0120+00 s=1 e=0 z=0  None .text      daObjItaRope_Delete__FP14daObjItaRope_c                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjItaRope_Delete(daObjItaRope_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/daObjItaRope_Delete__FP14daObjItaRope_c.s"
}
#pragma pop


/* 80CC6738-80CC6844 010C+00 s=1 e=0 z=0  None .text      daObjItaRope_Create__FP10fopAc_ac_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjItaRope_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/daObjItaRope_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80CC6844-80CC68A0 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/__dt__10dCcD_GSttsFv.s"
}
#pragma pop


/* 80CC68A0-80CC68E8 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita_rope/d_a_obj_sakuita_rope/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

