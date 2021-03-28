// 
// Generated By: dol2asm
// Translation Unit: d/cc/d_cc_mass_s
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/cc/d_cc_mass_s.h"

// 
// Types:
// 

struct fopAc_ac_c {
};

struct cCcD_Obj {
};

struct cXyz {
};

struct dCcMassS_Obj {
	/* 800300F4 */ ~dCcMassS_Obj();
	/* 800852E0 */ void Set(cCcD_Obj*, u8, void (*)(fopAc_ac_c*, cXyz*, u32));
	/* 800852F0 */ void Clear();
	/* 800855C8 */ dCcMassS_Obj();
};

struct cM3dGCps {
	/* 8026EF88 */ cM3dGCps();
	/* 8026EFA4 */ ~cM3dGCps();
	/* 8026F080 */ void SetCps(cM3dGCps const&);
};

struct Vec {
};

struct dCcMassS_HitInf {
	/* 80085334 */ void ClearPointer();
};

struct dCcMassS_Mng {
	/* 80085350 */ dCcMassS_Mng();
	/* 800855E4 */ void Ct();
	/* 80085630 */ void SetAttr(f32, f32, u8, u8);
	/* 80085690 */ void Prepare();
	/* 800858AC */ void Chk(cXyz*, fopAc_ac_c**, dCcMassS_HitInf*);
	/* 80085CF0 */ void Clear();
	/* 80085D98 */ void Set(cCcD_Obj*, u8);
	/* 80085E6C */ void SetCam(cM3dGCps const&);
	/* 80085EB0 */ void GetResultCam() const;
	/* 80085EB8 */ void GetCamTopPos(Vec*);
};

struct cM3dGCyl {
	/* 8026F1DC */ void SetC(cXyz const&);
	/* 8026F1F8 */ void SetH(f32);
	/* 8026F200 */ void SetR(f32);
};

struct cM3dGAab {
	/* 8026ECF8 */ void ClearForMinMax();
	/* 8026ED60 */ void SetMinMax(cM3dGAab const&);
};

struct cCcD_Stts {
	/* 80263934 */ void PlusCcMove(f32, f32, f32);
};

struct cCcD_ShapeAttr {
	/* 8008556C */ ~cCcD_ShapeAttr();
};

struct cCcD_DivideInfo {
	/* 80263358 */ void Set(u32, u32, u32);
	/* 80263368 */ void Chk(cCcD_DivideInfo const&) const;
};

struct cCcD_DivideArea {
	/* 802633A8 */ void SetArea(cM3dGAab const&);
	/* 802634D4 */ void CalcDivideInfo(cCcD_DivideInfo*, cM3dGAab const&, u32);
	/* 802636A0 */ void CalcDivideInfoOverArea(cCcD_DivideInfo*, cM3dGAab const&);
};

struct cCcD_CylAttr {
	/* 800854E0 */ ~cCcD_CylAttr();
};

struct cCcD_CpsAttr {
	/* 80085450 */ ~cCcD_CpsAttr();
};

// 
// Forward References:
// 


extern "C" void Set__12dCcMassS_ObjFP8cCcD_ObjUcPFP10fopAc_ac_cP4cXyzUl_v();
extern "C" void Clear__12dCcMassS_ObjFv();
extern "C" void ClearPointer__15dCcMassS_HitInfFv();
extern "C" void __ct__12dCcMassS_MngFv();
extern "C" void __dt__12cCcD_CpsAttrFv();
extern "C" void __dt__12cCcD_CylAttrFv();
extern "C" void __dt__14cCcD_ShapeAttrFv();
extern "C" void __ct__12dCcMassS_ObjFv();
extern "C" void Ct__12dCcMassS_MngFv();
extern "C" void SetAttr__12dCcMassS_MngFffUcUc();
extern "C" void Prepare__12dCcMassS_MngFv();
extern "C" void Chk__12dCcMassS_MngFP4cXyzPP10fopAc_ac_cP15dCcMassS_HitInf();
extern "C" void Clear__12dCcMassS_MngFv();
extern "C" void Set__12dCcMassS_MngFP8cCcD_ObjUc();
extern "C" void SetCam__12dCcMassS_MngFRC8cM3dGCps();
extern "C" void GetResultCam__12dCcMassS_MngCFv();
extern "C" void GetCamTopPos__12dCcMassS_MngFP3Vec();

// 
// External References:
// 

void cM_rndF(f32);
void operator delete(void*);
extern "C" extern void* __vt__12dCcMassS_Obj[3];
extern "C" extern void* __vt__15cCcD_DivideArea[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__15cCcD_DivideInfo[3];
extern "C" extern void* __vt__12dCcMassS_Mng[3 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

extern "C" void __dt__12dCcMassS_ObjFv();
extern "C" void Set__15cCcD_DivideInfoFUlUlUl();
extern "C" void Chk__15cCcD_DivideInfoCFRC15cCcD_DivideInfo();
extern "C" void SetArea__15cCcD_DivideAreaFRC8cM3dGAab();
extern "C" void CalcDivideInfo__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAabUl();
extern "C" void CalcDivideInfoOverArea__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAab();
extern "C" void PlusCcMove__9cCcD_SttsFfff();
extern "C" void cM_rndF__Ff();
extern "C" void ClearForMinMax__8cM3dGAabFv();
extern "C" void SetMinMax__8cM3dGAabFRC8cM3dGAab();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void __dt__8cM3dGCpsFv();
extern "C" void SetCps__8cM3dGCpsFRC8cM3dGCps();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void PSVECSubtract();
extern "C" void PSVECScale();
extern "C" void PSVECMag();
extern "C" void PSVECSquareDistance();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12dCcMassS_Obj[3];
extern "C" extern void* __vt__15cCcD_DivideArea[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__15cCcD_DivideInfo[3];
extern "C" extern void* __vt__12dCcMassS_Mng[3 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

// 
// Declarations:
// 

/* 800852E0-800852F0 0010+00 s=1 e=0 z=0  None .text      Set__12dCcMassS_ObjFP8cCcD_ObjUcPFP10fopAc_ac_cP4cXyzUl_v    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Obj::Set(cCcD_Obj* param_0, u8 param_1, void (*)(fopAc_ac_c*, cXyz*, u32)) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Set__12dCcMassS_ObjFP8cCcD_ObjUcPFP10fopAc_ac_cP4cXyzUl_v.s"
}
#pragma pop


/* 800852F0-80085334 0044+00 s=1 e=0 z=0  None .text      Clear__12dCcMassS_ObjFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Obj::Clear() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Clear__12dCcMassS_ObjFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452760-80452764 0004+00 s=5 e=0 z=0  None .sdata2    @3627                                                        */
SECTION_SDATA2 static u8 lit_3627[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80085334-80085350 001C+00 s=1 e=0 z=0  None .text      ClearPointer__15dCcMassS_HitInfFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_HitInf::ClearPointer() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/ClearPointer__15dCcMassS_HitInfFv.s"
}
#pragma pop


/* 80085350-80085450 0100+00 s=0 e=1 z=0  None .text      __ct__12dCcMassS_MngFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcMassS_Mng::dCcMassS_Mng() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/__ct__12dCcMassS_MngFv.s"
}
#pragma pop


/* 80085450-800854E0 0090+00 s=0 e=2 z=0  None .text      __dt__12cCcD_CpsAttrFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_CpsAttr::~cCcD_CpsAttr() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/__dt__12cCcD_CpsAttrFv.s"
}
#pragma pop


/* 800854E0-8008556C 008C+00 s=0 e=2 z=0  None .text      __dt__12cCcD_CylAttrFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_CylAttr::~cCcD_CylAttr() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/__dt__12cCcD_CylAttrFv.s"
}
#pragma pop


/* 8008556C-800855C8 005C+00 s=0 e=1 z=0  None .text      __dt__14cCcD_ShapeAttrFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_ShapeAttr::~cCcD_ShapeAttr() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/__dt__14cCcD_ShapeAttrFv.s"
}
#pragma pop


/* 800855C8-800855E4 001C+00 s=1 e=0 z=0  None .text      __ct__12dCcMassS_ObjFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcMassS_Obj::dCcMassS_Obj() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/__ct__12dCcMassS_ObjFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452764-80452768 0004+00 s=2 e=0 z=0  None .sdata2    @3724                                                        */
SECTION_SDATA2 static u32 lit_3724 = 0xCE6E6B28;

/* 800855E4-80085630 004C+00 s=1 e=1 z=0  None .text      Ct__12dCcMassS_MngFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::Ct() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Ct__12dCcMassS_MngFv.s"
}
#pragma pop


/* 80085630-80085690 0060+00 s=0 e=0 z=2  None .text      SetAttr__12dCcMassS_MngFffUcUc                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::SetAttr(f32 param_0, f32 param_1, u8 param_2, u8 param_3) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/SetAttr__12dCcMassS_MngFffUcUc.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452768-8045276C 0004+00 s=1 e=0 z=0  None .sdata2    @3780                                                        */
SECTION_SDATA2 static u32 lit_3780 = 0x4E6E6B28;

/* 80085690-800858AC 021C+00 s=0 e=1 z=1  None .text      Prepare__12dCcMassS_MngFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::Prepare() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Prepare__12dCcMassS_MngFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 8045276C-80452770 0004+00 s=2 e=0 z=0  None .sdata2    @3899                                                        */
SECTION_SDATA2 static u32 lit_3899 = 0x3F800000;

/* 80452770-80452774 0004+00 s=1 e=0 z=0  None .sdata2    @3900                                                        */
SECTION_SDATA2 static u32 lit_3900 = 0x41A00000;

/* 800858AC-80085CF0 0444+00 s=0 e=0 z=2  None .text      Chk__12dCcMassS_MngFP4cXyzPP10fopAc_ac_cP15dCcMassS_HitInf   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::Chk(cXyz* param_0, fopAc_ac_c** param_1, dCcMassS_HitInf* param_2) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Chk__12dCcMassS_MngFP4cXyzPP10fopAc_ac_cP15dCcMassS_HitInf.s"
}
#pragma pop


/* 80085CF0-80085D98 00A8+00 s=1 e=2 z=0  None .text      Clear__12dCcMassS_MngFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::Clear() {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Clear__12dCcMassS_MngFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452774-80452778 0004+00 s=1 e=0 z=0  None .sdata2    @3941                                                        */
SECTION_SDATA2 static u32 lit_3941 = 0x3F000000;

/* 80085D98-80085E6C 00D4+00 s=0 e=4 z=7  None .text      Set__12dCcMassS_MngFP8cCcD_ObjUc                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::Set(cCcD_Obj* param_0, u8 param_1) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/Set__12dCcMassS_MngFP8cCcD_ObjUc.s"
}
#pragma pop


/* 80085E6C-80085EB0 0044+00 s=0 e=1 z=0  None .text      SetCam__12dCcMassS_MngFRC8cM3dGCps                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::SetCam(cM3dGCps const& param_0) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/SetCam__12dCcMassS_MngFRC8cM3dGCps.s"
}
#pragma pop


/* 80085EB0-80085EB8 0008+00 s=0 e=1 z=0  None .text      GetResultCam__12dCcMassS_MngCFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::GetResultCam() const {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/GetResultCam__12dCcMassS_MngCFv.s"
}
#pragma pop


/* 80085EB8-80085ED4 001C+00 s=0 e=1 z=0  None .text      GetCamTopPos__12dCcMassS_MngFP3Vec                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcMassS_Mng::GetCamTopPos(Vec* param_0) {
	nofralloc
#include "asm/d/cc/d_cc_mass_s/GetCamTopPos__12dCcMassS_MngFP3Vec.s"
}
#pragma pop

