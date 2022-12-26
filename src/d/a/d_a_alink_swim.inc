/* 80101890-801018E4 0FC1D0 0054+00 6/6 0/0 0/0 .text            checkZoraWearMaskDraw__9daAlink_cFv
 */
BOOL daAlink_c::checkZoraWearMaskDraw() {
    return checkZoraWearAbility() && !i_checkNoResetFlg0(FLG0_UNK_100);
}

/* 801018E4-80101934 0FC224 0050+00 1/1 0/0 0/0 .text checkAcceptUseItemInWater__9daAlink_cCFUs */
BOOL daAlink_c::checkAcceptUseItemInWater(u16 i_itemNo) const {
    return i_itemNo == HVY_BOOTS || i_itemNo == WATER_BOMB || checkHookshotItem(i_itemNo);
}

/* 80101934-801019B8 0FC274 0084+00 4/4 0/0 0/0 .text            swimDeleteItem__9daAlink_cFv */
void daAlink_c::swimDeleteItem() {
    if (!checkHookshotItem(mEquipItem) && (mEquipItem != 0x103 || !checkBootsOrArmorHeavy())) {
        deleteEquipItem(1, 1);
    }

    if (i_checkNoResetFlg2(FLG2_UNK_1)) {
        offKandelaarModel();
    }
}

/* 801019B8-80101A18 0FC2F8 0060+00 11/11 0/0 0/0 .text            getZoraSwim__9daAlink_cCFv */
bool daAlink_c::getZoraSwim() const {
    return checkUnderMove0BckNoArc(ANM_SWIM_C) || checkUnderMove0BckNoArc(ANM_SWIM_ZORA_START);
}

/* 80101A18-80101AA8 0FC358 0090+00 6/6 0/0 0/0 .text            getSwimFrontMaxSpeed__9daAlink_cCFv
 */
f32 daAlink_c::getSwimFrontMaxSpeed() const {
    if (checkBootsOrArmorHeavy()) {
        return daAlinkHIO_swim_c0::m.mUnderwaterMaxSinkSpeed;
    } else if (checkZoraWearAbility()) {
        return lit_8130;
    } else if (checkSwimDashMode()) {
        return daAlinkHIO_swim_c0::m.mDMaxSpeed;
    } else {
        return daAlinkHIO_swim_c0::m.mMaxForwardSpeed;
    }
}

/* 80101AA8-80101B44 0FC3E8 009C+00 5/5 0/0 0/0 .text            getSwimMaxFallSpeed__9daAlink_cCFv
 */
f32 daAlink_c::getSwimMaxFallSpeed() const {
    if (mProcID == PROC_DIVE_JUMP) {
        return -daAlinkHIO_swim_c0::m.mMaxUnderwaterSpeed;
    } else if (checkBootsOrArmorHeavy()) {
        return daAlinkHIO_swim_c0::m.mBootsMaxSinkSpeed;
    } else if (getZoraSwim()) {
        return daAlinkHIO_swim_c0::m.mMaxSinkSpeed;
    } else {
        return daAlinkHIO_swim_c0::m.mInitMaxSinkSpeed;
    }
}

/* 80101B44-80101C94 0FC484 0150+00 1/1 0/0 0/0 .text            checkOxygenTimer__9daAlink_cFv */
void daAlink_c::checkOxygenTimer() {
    BOOL hide_timer;

    if (!i_checkNoResetFlg0(FLG0_UNK_100) || (i_checkModeFlg(MODE_SWIMMING) && mWaterY > lit_7808 + current.pos.y)) {
        hide_timer = false;
    } else {
        hide_timer = true;
    }

    if (dComIfGp_getOxygenShowFlag()) {
        if (checkZoraWearAbility()) {
            offOxygenTimer();
        } else if (hide_timer) {
            s32 max = dComIfGp_getMaxOxygen();
            dComIfGp_setOxygenCount(max);

            if (field_0x2fbe < 90) {
                field_0x2fbe++;
            } else {
                offOxygenTimer();
            }
        } else if (!checkEventRun()) {
            dComIfGp_setOxygenCount(-1);
        }
    } else if (!hide_timer && !checkZoraWearAbility()) {
        if (field_0x2fbe != 0) {
            field_0x2fbe--;
        } else {
            dComIfGp_onOxygenShowFlag();
            dComIfGp_setOxygen(dComIfGp_getMaxOxygen());
        }
    }
}

/* 80101C94-80101CB8 0FC5D4 0024+00 3/3 0/0 0/0 .text            offOxygenTimer__9daAlink_cFv */
void daAlink_c::offOxygenTimer() {
    dComIfGp_offOxygenShowFlag();
    s32 max = dComIfGp_getMaxOxygen();
    dComIfGp_setOxygen(max);

    field_0x2fbe = 90;
}

/* 80101CB8-80101CF4 0FC5F8 003C+00 2/2 0/0 0/0 .text checkPossibleWaterInMode__9daAlink_cCFv */
BOOL daAlink_c::checkPossibleWaterInMode() const {
    return i_checkModeFlg(MODE_VINE_CLIMB) || i_dComIfGp_checkPlayerStatus1(0, 0x2000000) || mProcID == PROC_HOOKSHOT_FLY;
}

/* 80101CF4-80101D70 0FC634 007C+00 18/18 0/0 0/0 .text
 * setWaterInAnmRate__9daAlink_cFP16daPy_frameCtrl_cf           */
void daAlink_c::setWaterInAnmRate(daPy_frameCtrl_c* i_frameCtrl, f32 i_rate) {
    if (i_checkNoResetFlg0(FLG0_UNDERWATER)) {
        if (checkZoraWearAbility()) {
            i_rate *= daAlinkHIO_magneBoots_c0::m.mZoraWaterAnmSpeed;
        } else {
            i_rate *= daAlinkHIO_magneBoots_c0::m.mWaterWalkAnmRate;
        }
    }

    i_frameCtrl->setRate(i_rate);
}

/* 80101D70-801023E4 0FC6B0 0674+00 2/2 0/0 0/0 .text            swimBgCheck__9daAlink_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::swimBgCheck(f32 param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/swimBgCheck__9daAlink_cFf.s"
}
#pragma pop

/* 801023E4-801029C8 0FCD24 05E4+00 3/3 0/0 0/0 .text            setSpeedAndAngleSwim__9daAlink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setSpeedAndAngleSwim() {
    nofralloc
#include "asm/d/a/d_a_alink/setSpeedAndAngleSwim__9daAlink_cFv.s"
}
#pragma pop

/* 801029C8-80102B1C 0FD308 0154+00 3/3 0/0 0/0 .text            checkNextActionSwim__9daAlink_cFv
 */
int daAlink_c::checkNextActionSwim() {
    if (checkSwimButtonMove() && getZoraSwim()) {
        field_0x3000 = 30;
    }

    if ((checkZoraWearAbility() && !checkHeavyStateOn(1, 1)) || i_checkNoResetFlg0(FLG0_UNK_100)) {
        setTalkStatus();
    }

    if (orderTalk(1)) {
        return 1;
    }

    if (mAttList != NULL && mAttList->mType == 7 && i_checkNoResetFlg0(FLG0_UNK_100) && fopAcM_GetName(field_0x27f4) == PROC_CANOE) {
        setDoStatus(0x17);

        if (doTrigger()) {
            return procCanoeRideInit();
        }
    } else if (checkSwimButtonMove() && !checkZoraSwimMove()) {
        if (checkSwimButtonAccept()) {
            return procSwimDiveInit();
        }

        field_0x3000 = 30;
        return procSwimMoveInit();
    }

    return checkNextActionFromButton();
}

/* 80102B1C-80103058 0FD45C 053C+00 3/3 0/0 0/0 .text            checkSwimAction__9daAlink_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::checkSwimAction(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/checkSwimAction__9daAlink_cFi.s"
}
#pragma pop

/* 80103058-801032C8 0FD998 0270+00 7/7 0/0 0/0 .text            checkSwimUpAction__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::checkSwimUpAction() {
    nofralloc
#include "asm/d/a/d_a_alink/checkSwimUpAction__9daAlink_cFv.s"
}
#pragma pop

/* 801032C8-80103398 0FDC08 00D0+00 8/8 0/0 0/0 .text            swimOutAfter__9daAlink_cFi */
// setInWater needs work
#ifdef NONMATCHING
void daAlink_c::swimOutAfter(int param_0) {
    i_onNoResetFlg0(FLG0_UNK_100);
    i_onEndResetFlg1(ERFLG1_UNK_100);
    mZ2Link.setInWater(false);

    if (i_checkNoResetFlg0(FLG0_UNDERWATER)) {
        i_offNoResetFlg0(FLG0_UNDERWATER);
    } else {
        field_0x2b98 = FLOAT_LABEL(lit_6108);
        field_0x2f98 = 4;
    }

    field_0x3750 = cXyz::Zero;
    field_0x3000 = 0;
    offOxygenTimer();

    if (checkSwimMoveHandAnime() || checkZoraSwimDamageAnime()) {
        resetUpperAnime(UPPER_2, lit_6109);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::swimOutAfter(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/swimOutAfter__9daAlink_cFi.s"
}
#pragma pop
#endif

/* 80103398-801033CC 0FDCD8 0034+00 1/1 0/0 0/0 .text            checkSwimFall__9daAlink_cFv */
bool daAlink_c::checkSwimFall() {
    if (!i_checkNoResetFlg0(FLG0_UNK_80) || current.pos.y > mWaterY + l_autoUpHeight) {
        return true;
    }

    return false;
}

/* 801033CC-80103698 0FDD0C 02CC+00 1/1 0/0 0/0 .text            checkSwimOutAction__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::checkSwimOutAction() {
    nofralloc
#include "asm/d/a/d_a_alink/checkSwimOutAction__9daAlink_cFv.s"
}
#pragma pop

/* 80103698-80103EE0 0FDFD8 0848+00 4/4 0/0 0/0 .text            setSwimMoveAnime__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setSwimMoveAnime() {
    nofralloc
#include "asm/d/a/d_a_alink/setSwimMoveAnime__9daAlink_cFv.s"
}
#pragma pop

/* 80103EE0-80103F08 0FE820 0028+00 5/5 0/0 0/0 .text            checkSwimButtonAccept__9daAlink_cFv
 */
bool daAlink_c::checkSwimButtonAccept() {
    return i_dComIfGp_getDoStatus() == 0x41 || i_dComIfGp_getDoStatus() == 0x4C;
}

/* 80103F08-80103F24 0FE848 001C+00 4/4 0/0 0/0 .text checkUpSwimButtonAccept__9daAlink_cFv */
bool daAlink_c::checkUpSwimButtonAccept() {
    return i_dComIfGp_getDoStatus() == 0x97;
}

/* 80103F24-80103F94 0FE864 0070+00 2/2 0/0 0/0 .text            checkSwimButtonMove__9daAlink_cFv
 */
BOOL daAlink_c::checkSwimButtonMove() {
    return !i_checkNoResetFlg0(FLG0_UNK_100) && (checkSwimButtonAccept() || checkUpSwimButtonAccept()) && doButton();
}

/* 80103F94-80103FE8 0FE8D4 0054+00 3/3 0/0 0/0 .text            checkZoraSwimMove__9daAlink_cFv */
BOOL daAlink_c::checkZoraSwimMove() {
    return checkSwimButtonMove() || field_0x3000 != 0;
}

/* 80103FE8-80104034 0FE928 004C+00 2/2 0/0 0/0 .text            checkSwimNeckUpDown__9daAlink_cCFv
 */
BOOL daAlink_c::checkSwimNeckUpDown() const {
    return !i_checkNoResetFlg0(FLG0_UNK_100) && checkUnderMove0BckNoArc(ANM_SWIM_WAIT);
}

/* 80104034-801040F8 0FE974 00C4+00 3/3 0/0 0/0 .text            setSwimUpDownOffset__9daAlink_cFv
 */
void daAlink_c::setSwimUpDownOffset() {
    mCommonCounter += (s16)((cM_rndF(lit_16570) + lit_27477) * lit_27476);

    f32 var_f1;
    if (i_checkWolf()) {
        if (checkHeavyStateOn(1, 1)) {
            var_f1 = daAlinkHIO_wlSwim_c0::m.field_0x98;
        } else {
            var_f1 = daAlinkHIO_wlSwim_c0::m.field_0x6C;
        }
    } else {
        var_f1 = daAlinkHIO_swim_c0::m.mWaitVibrationIntensity;
    }

    field_0x2b98 = var_f1 * cM_ssin(mCommonCounter);
}

/* 801040F8-801041E8 0FEA38 00F0+00 2/2 0/0 0/0 .text            procSwimUpInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimUpInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimUpInit__9daAlink_cFv.s"
}
#pragma pop

/* 801041E8-801042F8 0FEB28 0110+00 1/0 0/0 0/0 .text            procSwimUp__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimUp() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimUp__9daAlink_cFv.s"
}
#pragma pop

/* 801042F8-801044B4 0FEC38 01BC+00 15/15 0/0 0/0 .text            procSwimWaitInit__9daAlink_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimWaitInit(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimWaitInit__9daAlink_cFi.s"
}
#pragma pop

/* 801044B4-80104670 0FEDF4 01BC+00 1/0 0/0 0/0 .text            procSwimWait__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimWait() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimWait__9daAlink_cFv.s"
}
#pragma pop

/* 80104670-801047B8 0FEFB0 0148+00 9/9 0/0 0/0 .text            procSwimMoveInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimMoveInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimMoveInit__9daAlink_cFv.s"
}
#pragma pop

/* 801047B8-80104958 0FF0F8 01A0+00 1/0 0/0 0/0 .text            procSwimMove__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimMove() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimMove__9daAlink_cFv.s"
}
#pragma pop

/* 80104958-80104AA0 0FF298 0148+00 4/4 0/0 0/0 .text            procSwimDiveInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimDiveInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimDiveInit__9daAlink_cFv.s"
}
#pragma pop

/* 80104AA0-80104C50 0FF3E0 01B0+00 1/0 0/0 0/0 .text            procSwimDive__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimDive() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimDive__9daAlink_cFv.s"
}
#pragma pop

/* 80104C50-80104D7C 0FF590 012C+00 1/1 0/0 0/0 .text procSwimHookshotSubjectInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimHookshotSubjectInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimHookshotSubjectInit__9daAlink_cFv.s"
}
#pragma pop

/* 80104D7C-80104EB8 0FF6BC 013C+00 1/0 0/0 0/0 .text procSwimHookshotSubject__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimHookshotSubject() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimHookshotSubject__9daAlink_cFv.s"
}
#pragma pop

/* 80104EB8-80104FC4 0FF7F8 010C+00 1/1 0/0 0/0 .text procSwimHookshotMoveInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimHookshotMoveInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimHookshotMoveInit__9daAlink_cFv.s"
}
#pragma pop

/* 80104FC4-8010519C 0FF904 01D8+00 1/0 0/0 0/0 .text            procSwimHookshotMove__9daAlink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimHookshotMove() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimHookshotMove__9daAlink_cFv.s"
}
#pragma pop

/* 8010519C-80105728 0FFADC 058C+00 1/1 0/0 0/0 .text
 * procSwimDamageInit__9daAlink_cFP12dCcD_GObjInf               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimDamageInit(dCcD_GObjInf* param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimDamageInit__9daAlink_cFP12dCcD_GObjInf.s"
}
#pragma pop

/* 80105728-801058A0 100068 0178+00 1/0 0/0 0/0 .text            procSwimDamage__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procSwimDamage() {
    nofralloc
#include "asm/d/a/d_a_alink/procSwimDamage__9daAlink_cFv.s"
}
#pragma pop

/* 801058A0-80105A00 1001E0 0160+00 2/2 0/0 0/0 .text            procOctaIealSpitInit__9daAlink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procOctaIealSpitInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procOctaIealSpitInit__9daAlink_cFv.s"
}
#pragma pop

/* 80105A00-80105A84 100340 0084+00 1/0 0/0 0/0 .text            procOctaIealSpit__9daAlink_cFv */
int daAlink_c::procOctaIealSpit() {
    if (mDemo.getDemoMode() == 0x2E) {
        i_cancelOriginalDemo();
    }

    cLib_addCalc(&mNormalSpeed, FLOAT_LABEL(lit_6108), lit_5943, field_0x3478, lit_9054);
    field_0x2f99 = 7;

    if (mUnderFrameCtrl[0].checkAnmEnd()) {
        procSwimWaitInit(0);
    }

    return 1;
}