/* Solidification of Matter_Plugin_3_Sensor_Temp.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Sensor_Temp;

/********************************************************************
** Solidified function: pre_value
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Temp_pre_value,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(get_option),
    /* K2   */  be_const_int(1),
    /* K3   */  be_const_real_hex(0x3FE66666),
    }),
    be_str_weak(pre_value),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0xB80A0000,  //  0000  GETNGBL	R2	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x54120007,  //  0002  LDINT	R4	8
      0x7C080400,  //  0003  CALL	R2	2
      0x1C080502,  //  0004  EQ	R2	R2	K2
      0x780A0003,  //  0005  JMPF	R2	#000A
      0x540A001F,  //  0006  LDINT	R2	32
      0x04080202,  //  0007  SUB	R2	R1	R2
      0x0C080503,  //  0008  DIV	R2	R2	K3
      0x5C040400,  //  0009  MOVE	R1	R2
      0x4C080000,  //  000A  LDNIL	R2
      0x20080202,  //  000B  NE	R2	R1	R2
      0x780A0004,  //  000C  JMPF	R2	#0012
      0x60080009,  //  000D  GETGBL	R2	G9
      0x540E0063,  //  000E  LDINT	R3	100
      0x080C0203,  //  000F  MUL	R3	R1	R3
      0x7C080200,  //  0010  CALL	R2	1
      0x70020000,  //  0011  JMP		#0013
      0x4C080000,  //  0012  LDNIL	R2
      0x80040400,  //  0013  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: value_changed
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Temp_value_changed,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(attribute_updated),
    /* K1   */  be_const_int(0),
    }),
    be_str_weak(value_changed),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x8C080100,  //  0000  GETMET	R2	R0	K0
      0x54120401,  //  0001  LDINT	R4	1026
      0x58140001,  //  0002  LDCONST	R5	K1
      0x7C080600,  //  0003  CALL	R2	3
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: append_state_json
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Temp_append_state_json,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X2C_X22Temperature_X22_X3A_X25s),
    /* K1   */  be_nested_str_weak(shadow_value),
    }),
    be_str_weak(append_state_json),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x60040018,  //  0000  GETGBL	R1	G24
      0x58080000,  //  0001  LDCONST	R2	K0
      0x880C0101,  //  0002  GETMBR	R3	R0	K1
      0x7C040400,  //  0003  CALL	R1	2
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_Temp_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(attribute),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(shadow_value),
    /* K6   */  be_nested_str_weak(set),
    /* K7   */  be_nested_str_weak(I2),
    /* K8   */  be_nested_str_weak(NULL),
    /* K9   */  be_const_int(1),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str_weak(U4),
    /* K12  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[69]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E0401,  //  0004  LDINT	R7	1026
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0033,  //  0006  JMPF	R7	#003B
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E000F,  //  0008  JMPF	R7	#0019
      0x881C0105,  //  0009  GETMBR	R7	R0	K5
      0x4C200000,  //  000A  LDNIL	R8
      0x201C0E08,  //  000B  NE	R7	R7	R8
      0x781E0005,  //  000C  JMPF	R7	#0013
      0x8C1C0706,  //  000D  GETMET	R7	R3	K6
      0x88240907,  //  000E  GETMBR	R9	R4	K7
      0x88280105,  //  000F  GETMBR	R10	R0	K5
      0x7C1C0600,  //  0010  CALL	R7	3
      0x80040E00,  //  0011  RET	1	R7
      0x70020004,  //  0012  JMP		#0018
      0x8C1C0706,  //  0013  GETMET	R7	R3	K6
      0x88240908,  //  0014  GETMBR	R9	R4	K8
      0x4C280000,  //  0015  LDNIL	R10
      0x7C1C0600,  //  0016  CALL	R7	3
      0x80040E00,  //  0017  RET	1	R7
      0x70020020,  //  0018  JMP		#003A
      0x1C1C0D09,  //  0019  EQ	R7	R6	K9
      0x781E0005,  //  001A  JMPF	R7	#0021
      0x8C1C0706,  //  001B  GETMET	R7	R3	K6
      0x88240907,  //  001C  GETMBR	R9	R4	K7
      0x5429EC77,  //  001D  LDINT	R10	-5000
      0x7C1C0600,  //  001E  CALL	R7	3
      0x80040E00,  //  001F  RET	1	R7
      0x70020018,  //  0020  JMP		#003A
      0x1C1C0D0A,  //  0021  EQ	R7	R6	K10
      0x781E0005,  //  0022  JMPF	R7	#0029
      0x8C1C0706,  //  0023  GETMET	R7	R3	K6
      0x88240907,  //  0024  GETMBR	R9	R4	K7
      0x542A3A97,  //  0025  LDINT	R10	15000
      0x7C1C0600,  //  0026  CALL	R7	3
      0x80040E00,  //  0027  RET	1	R7
      0x70020010,  //  0028  JMP		#003A
      0x541EFFFB,  //  0029  LDINT	R7	65532
      0x1C1C0C07,  //  002A  EQ	R7	R6	R7
      0x781E0005,  //  002B  JMPF	R7	#0032
      0x8C1C0706,  //  002C  GETMET	R7	R3	K6
      0x8824090B,  //  002D  GETMBR	R9	R4	K11
      0x58280004,  //  002E  LDCONST	R10	K4
      0x7C1C0600,  //  002F  CALL	R7	3
      0x80040E00,  //  0030  RET	1	R7
      0x70020007,  //  0031  JMP		#003A
      0x541EFFFC,  //  0032  LDINT	R7	65533
      0x1C1C0C07,  //  0033  EQ	R7	R6	R7
      0x781E0004,  //  0034  JMPF	R7	#003A
      0x8C1C0706,  //  0035  GETMET	R7	R3	K6
      0x8824090B,  //  0036  GETMBR	R9	R4	K11
      0x542A0003,  //  0037  LDINT	R10	4
      0x7C1C0600,  //  0038  CALL	R7	3
      0x80040E00,  //  0039  RET	1	R7
      0x70020008,  //  003A  JMP		#0044
      0x601C0003,  //  003B  GETGBL	R7	G3
      0x5C200000,  //  003C  MOVE	R8	R0
      0x7C1C0200,  //  003D  CALL	R7	1
      0x8C1C0F0C,  //  003E  GETMET	R7	R7	K12
      0x5C240200,  //  003F  MOVE	R9	R1
      0x5C280400,  //  0040  MOVE	R10	R2
      0x5C2C0600,  //  0041  MOVE	R11	R3
      0x7C1C0800,  //  0042  CALL	R7	4
      0x80040E00,  //  0043  RET	1	R7
      0x80000000,  //  0044  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Sensor_Temp
********************************************************************/
extern const bclass be_class_Matter_Plugin_Sensor;
be_local_class(Matter_Plugin_Sensor_Temp,
    0,
    &be_class_Matter_Plugin_Sensor,
    be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(pre_value, -1), be_const_closure(Matter_Plugin_Sensor_Temp_pre_value_closure) },
        { be_const_key_weak(TYPES, 3), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(770, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(append_state_json, 1), be_const_closure(Matter_Plugin_Sensor_Temp_append_state_json_closure) },
        { be_const_key_weak(CLUSTERS, 7), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(6,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(1026, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(5,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(5, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(57, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(17),
        be_const_int(3),
        be_const_int(5),
        be_const_int(10),
        be_const_int(15),
        be_const_int(17),
        be_const_int(18),
    }))    ) } )) },
        { be_const_key_int(3, 2), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(4,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(4, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(29, 1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(6,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(temperature) },
        { be_const_key_weak(value_changed, 4), be_const_closure(Matter_Plugin_Sensor_Temp_value_changed_closure) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Temperature) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Sensor_Temp_read_attribute_closure) },
    })),
    be_str_weak(Matter_Plugin_Sensor_Temp)
);
/*******************************************************************/

void be_load_Matter_Plugin_Sensor_Temp_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Sensor_Temp);
    be_setglobal(vm, "Matter_Plugin_Sensor_Temp");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
