#ifndef D_A_KMON_H
#define D_A_KMON_H

#include "f_op/f_op_actor.h"
#include "d/d_bg_s_acch.h"
#include "m_Do/m_Do_ext.h"

class daKmon_c : public fopAc_ac_c {
public:
    inline cPhs_State _create();
    inline bool _delete();
    inline bool _draw();
    inline bool _execute();

    void set_mtx();
    void CreateHeap();
    void CreateInit();
    void checkTalk();

public:
    /* Place member variables here */
    /* 0x290 */ int field_0x290;
    /* 0x294 */ int field_0x294;
    /* 0x298 */ J3DModel* model;
    /* 0x29C */ mDoExt_btkAnm field_0x29C;
    /* 0x2B0 */ mDoExt_bckAnm field_0x2B0;
    /* 0x2C0 */ dBgS_Acch field_0x2C0;
    /* 0x484 */ dBgS_AcchCir field_0x484;
    /* 0x4C4 */ fopAc_ac_c* field_0x4C4;
    // Size: 0x4C8
};

#endif /* D_A_KMON_H */
