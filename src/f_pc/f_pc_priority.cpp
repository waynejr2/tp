// 
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_priority
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_priority.h"

// 
// Types:
// 

struct process_priority_class {
};

struct process_method_tag_class {
};

struct node_list_class {
};

struct line_tag {
};

struct layer_management_tag_class {
};

struct layer_class {
};

struct create_tag_class {
};

// 
// Forward References:
// 

void fpcPi_IsInQueue(process_priority_class*);
static void fpcPi_QueueTo(process_priority_class*);
static void fpcPi_ToQueue(process_priority_class*);
static void fpcPi_GetFromQueue();
void fpcPi_Delete(process_priority_class*);
static void fpcPi_IsNormal(unsigned int, u16, u16);
void fpcPi_Change(process_priority_class*, unsigned int, u16, u16);
void fpcPi_Handler();
void fpcPi_Init(process_priority_class*, void*, unsigned int, u16, u16);
extern "C" extern u8 data_804505F0[8];

extern "C" void fpcPi_IsInQueue__FP22process_priority_class();
extern "C" static void fpcPi_QueueTo__FP22process_priority_class();
extern "C" static void fpcPi_ToQueue__FP22process_priority_class();
extern "C" static void fpcPi_GetFromQueue__Fv();
extern "C" void fpcPi_Delete__FP22process_priority_class();
extern "C" static void fpcPi_IsNormal__FUiUsUs();
extern "C" void fpcPi_Change__FP22process_priority_classUiUsUs();
extern "C" void fpcPi_Handler__Fv();
extern "C" void fpcPi_Init__FP22process_priority_classPvUiUsUs();
extern "C" extern u8 data_804505F0[8];

// 
// External References:
// 

void fpcLy_CancelQTo(process_method_tag_class*);
void fpcLy_ToCancelQ(layer_class*, process_method_tag_class*);
void fpcLy_Layer(unsigned int);
void fpcLyTg_Move(layer_management_tag_class*, unsigned int, u16, u16);
void fpcLnTg_Move(line_tag*, int);
void fpcMtdTg_Init(process_method_tag_class*, int (*)(void*), void*);
void cTg_IsUse(create_tag_class*);
void cTg_GetFirst(node_list_class*);
void cTg_SingleCut(create_tag_class*);
void cTg_Addition(node_list_class*, create_tag_class*);
void cTg_Create(create_tag_class*, void*);

extern "C" void fpcLy_CancelQTo__FP24process_method_tag_class();
extern "C" void fpcLy_ToCancelQ__FP11layer_classP24process_method_tag_class();
extern "C" void fpcLy_Layer__FUi();
extern "C" void fpcLyTg_Move__FP26layer_management_tag_classUiUsUs();
extern "C" void fpcLnTg_Move__FP8line_tagi();
extern "C" void fpcMtdTg_Init__FP24process_method_tag_classPFPv_iPv();
extern "C" void cTg_IsUse__FP16create_tag_class();
extern "C" void cTg_GetFirst__FP15node_list_class();
extern "C" void cTg_SingleCut__FP16create_tag_class();
extern "C" void cTg_Addition__FP15node_list_classP16create_tag_class();
extern "C" void cTg_Create__FP16create_tag_classPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();

// 
// Declarations:
// 

/* 80023130-80023150 0020+00 s=0 e=1 z=0  None .text      fpcPi_IsInQueue__FP22process_priority_class                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPi_IsInQueue(process_priority_class* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_IsInQueue__FP22process_priority_class.s"
}
#pragma pop


/* 80023150-80023188 0038+00 s=1 e=0 z=0  None .text      fpcPi_QueueTo__FP22process_priority_class                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fpcPi_QueueTo(process_priority_class* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_QueueTo__FP22process_priority_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 803F4E58-803F4E68 000C+04 s=2 e=0 z=0  None .bss       l_fpcPi_Queue                                                */
static u8 l_fpcPi_Queue[12 + 4 /* padding */];

/* 80023188-80023214 008C+00 s=1 e=0 z=0  None .text      fpcPi_ToQueue__FP22process_priority_class                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fpcPi_ToQueue(process_priority_class* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_ToQueue__FP22process_priority_class.s"
}
#pragma pop


/* 80023214-80023268 0054+00 s=1 e=0 z=0  None .text      fpcPi_GetFromQueue__Fv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fpcPi_GetFromQueue() {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_GetFromQueue__Fv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804505E8-804505F0 0008+00 s=1 e=0 z=0  None .sdata     crear$2224                                                   */
SECTION_SDATA static u8 crear[8] = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80023268-800232B4 004C+00 s=1 e=1 z=0  None .text      fpcPi_Delete__FP22process_priority_class                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPi_Delete(process_priority_class* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_Delete__FP22process_priority_class.s"
}
#pragma pop


/* 800232B4-800232E8 0034+00 s=2 e=0 z=0  None .text      fpcPi_IsNormal__FUiUsUs                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fpcPi_IsNormal(unsigned int param_0, u16 param_1, u16 param_2) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_IsNormal__FUiUsUs.s"
}
#pragma pop


/* 800232E8-80023428 0140+00 s=0 e=3 z=0  None .text      fpcPi_Change__FP22process_priority_classUiUsUs               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPi_Change(process_priority_class* param_0, unsigned int param_1, u16 param_2, u16 param_3) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_Change__FP22process_priority_classUiUsUs.s"
}
#pragma pop


/* 80023428-800234BC 0094+00 s=0 e=1 z=0  None .text      fpcPi_Handler__Fv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPi_Handler() {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_Handler__Fv.s"
}
#pragma pop


/* 800234BC-80023564 00A8+00 s=0 e=1 z=0  None .text      fpcPi_Init__FP22process_priority_classPvUiUsUs               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcPi_Init(process_priority_class* param_0, void* param_1, unsigned int param_2, u16 param_3, u16 param_4) {
	nofralloc
#include "asm/f_pc/f_pc_priority/fpcPi_Init__FP22process_priority_classPvUiUsUs.s"
}
#pragma pop


/* ############################################################################################## */
/* 804505F0-804505F8 0008+00 s=0 e=5 z=1  None .sdata     None                                                         */
SECTION_SDATA u8 data_804505F0[8] = {
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
