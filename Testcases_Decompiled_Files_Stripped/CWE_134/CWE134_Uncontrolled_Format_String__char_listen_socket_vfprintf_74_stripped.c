
long FUN_001050cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00105278(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001052dc(param_2);
                    /* try { // try from 0010513b to 001051cd has its CatchHandler @ 001051f9 */
    uVar2 = FUN_001050cc(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001052f2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00105278(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001052dc(local_38);
      uVar2 = FUN_001050cc(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001052f2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102649(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e24(param_1,param_2);
  return;
}




undefined8 FUN_00105971(void)

{
  return 1;
}




undefined8 FUN_00102e74(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104bb6(undefined8 param_1)

{
  FUN_00104c40(param_1);
  return;
}




undefined8 FUN_00102c84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ef4(param_2);
  FUN_00102f06(param_1,uVar1);
  return param_1;
}




void FUN_001054f6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001056cd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00105d50(void)

{
  return;
}




void FUN_00104f10(void)

{
  return;
}




undefined8 FUN_00102fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103710(param_1);
  uVar2 = FUN_00102fa2(param_4);
  uVar3 = FUN_00102f90(param_3);
  uVar4 = FUN_00102f7e(param_2);
  FUN_0010373c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00105aa6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105a6f,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102ec4(void)

{
  return;
}




void FUN_0010404c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010408f(param_2);
  puVar2 = (undefined4 *)FUN_001036d4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined4 * FUN_00105278(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103b9e(param_2);
  puVar2 = (undefined4 *)FUN_00105308(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102cbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00105a01(void)

{
  return;
}




void FUN_00102f3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036b6(param_2);
  uVar1 = FUN_001036d4(uVar1);
  FUN_001036e6(param_1,uVar1);
  return;
}




void FUN_0010540e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00105342(param_3);
  FUN_0010544c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001052f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010271f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a3e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00102649(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010386a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001055f5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103660(undefined8 param_1)

{
  FUN_00103c6a(param_1);
  return;
}




void FUN_00103e66(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103fe2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010358c(param_1);
  uVar2 = FUN_00103576(param_1);
  FUN_001035a2(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00105a6f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined4 FUN_00102bd8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102ec4(param_1);
  return unaff_EBX;
}




void FUN_00105a0c(void)

{
  return;
}




undefined8 FUN_00105bf1(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00104bf6(undefined8 param_1)

{
  FUN_00104c9c(param_1);
  return;
}




undefined8 FUN_00103f81(undefined8 param_1)

{
  return param_1;
}




void FUN_001038b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103d42(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104f70(undefined8 param_1,undefined8 param_2)

{
  FUN_001050a2(param_1,param_2);
  return;
}




undefined8 FUN_00105342(undefined8 param_1)

{
  return param_1;
}




void FUN_0010278e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001059d5(void)

{
  return;
}




void FUN_00105a59(void)

{
  return;
}




void FUN_001029a6(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a3e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_001028d3(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00104e96(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104d96(void)

{
  return;
}




undefined8 FUN_001052dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001028d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001059eb(void)

{
  return;
}




undefined8 FUN_00105074(undefined8 param_1,undefined8 param_2)

{
  FUN_00104f70(param_1,param_2);
  return param_1;
}




void FUN_00104e10(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104f1f(param_1,param_2);
  FUN_00104f9a(param_1,param_2);
  FUN_00104b2c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c92(param_1);
  FUN_00103e34(uVar1,param_2,1);
  return;
}




void FUN_00103ffa(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010404c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102ef4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010549e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102864(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a3e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_0010278e(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a028 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102590();
    DAT_0010a028 = 1;
    return;
  }
  return;
}




void FUN_00104f9a(void)

{
  return;
}




undefined8 * FUN_00103af0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104c40(long param_1)

{
  FUN_00104d66(param_1);
  FUN_00104d86(param_1);
  FUN_00104b2c(param_1 + 8);
  return;
}




void FUN_00103e0a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103fa6(param_1,param_2);
  return;
}




void FUN_0010367e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ef4(param_2);
  FUN_001036e6(param_1,uVar1);
  return;
}




void FUN_00105c89(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001033dd(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103b9e(param_1);
  FUN_00103bc0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00105bce(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104bd6(undefined8 param_1)

{
  FUN_00104bb6(param_1);
  return;
}




undefined8 FUN_00103f94(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00103b32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102fa2(param_5);
  uVar2 = FUN_00102f90(param_4);
  uVar3 = FUN_00102f7e(param_3);
  FUN_00103eb6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102f7e(undefined8 param_1)

{
  return param_1;
}




void FUN_001059b4(void)

{
  return;
}




void FUN_00103bd6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ed2(param_2);
  uVar2 = FUN_00103c92(param_1);
  FUN_00103e0a(uVar2,uVar1);
  return;
}




undefined8 FUN_00102fa2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fa6(void)

{
  return;
}




void FUN_00104b2c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104b56(param_1);
  return;
}




undefined8
FUN_00102cde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102fa2(param_5);
  uVar2 = FUN_00102f90(param_4);
  uVar3 = FUN_00102f7e(param_3);
  local_40 = FUN_00102fb4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102d5a to 00102d9d has its CatchHandler @ 00102ddb */
  uVar1 = FUN_001033dd(local_40);
  local_38 = FUN_00103034(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010351a(param_1,local_40);
    FUN_00103558(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103430(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00102bb2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e88)();
  return;
}




long FUN_0010358c(long param_1)

{
  return param_1 + 8;
}




void FUN_001054c4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001035a2(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_001033dd(local_38);
    cVar1 = FUN_00102c20(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103b1c(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103c54(local_38);
    }
  }
  FUN_00103558(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103dec(undefined8 param_1)

{
  FUN_00103f94(param_1);
  return;
}




void FUN_00104da6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103b1c(local_28);
    FUN_00104da6(param_1,uVar1);
    lVar2 = FUN_00103c54(local_28);
    FUN_0010351a(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00104fae(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103896(undefined8 param_1)

{
  FUN_001033dd(param_1);
  return;
}




void FUN_00103fba(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104d66(undefined8 param_1)

{
  FUN_00104f10(param_1);
  return;
}




ulong FUN_0010578e(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001059bf(void)

{
  return;
}




undefined8 FUN_0010381a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001025e4) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */

void FUN_001025c0(void)

{
  return;
}




void FUN_00104cda(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104e10(param_1,param_2);
  lVar1 = FUN_00104e80(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104e96(param_1);
                    /* try { // try from 00104d35 to 00104d39 has its CatchHandler @ 00104d3f */
    uVar3 = FUN_00104eac(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103576(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105c6a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010373c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102a15(0x30,param_2);
  uVar1 = FUN_00102fa2(param_5);
  uVar2 = FUN_00102f90(param_4);
  uVar3 = FUN_00102f7e(param_3);
  uVar4 = FUN_00102ed2(param_2);
  uVar5 = FUN_00103c92(param_1);
                    /* try { // try from 001037cb to 001037cf has its CatchHandler @ 001037d2 */
  FUN_00103cd2(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001050a2(void)

{
  return;
}




void FUN_001040cb(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bd6(local_f8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_11c = -1;
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00104255 to 00104415 has its CatchHandler @ 0010446d */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104c16(local_c8,local_f8);
                    /* try { // try from 00104420 to 00104424 has its CatchHandler @ 00104455 */
  FUN_0010271f(local_c8);
  FUN_00104bf6(local_c8);
  FUN_00104bf6(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102f06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ef4(param_2);
  FUN_0010367e(param_1,uVar1);
  return;
}




long FUN_00103a92(long param_1)

{
  return param_1 + 0x18;
}




void FUN_0010449d(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bd6(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 0010457d to 001045fe has its CatchHandler @ 00104656 */
  plVar1 = (long *)FUN_00102a3e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102a3e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102a3e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00104c16(local_b8,local_e8);
                    /* try { // try from 00104609 to 0010460d has its CatchHandler @ 0010463e */
  FUN_00102864(local_b8);
  FUN_00104bf6(local_b8);
  FUN_00104bf6(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010559f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102f90(undefined8 param_1)

{
  return param_1;
}




void FUN_00105259(undefined8 param_1)

{
  FUN_00104aff(param_1);
  return;
}




void FUN_00102c5a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f3e(param_1,param_2);
  return;
}




void FUN_00104c16(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cda(param_1,param_2);
  return;
}




undefined8 FUN_00103c7c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103b9e(long param_1)

{
  FUN_00103dec(param_1 + 0x20);
  return;
}




void FUN_00105a4e(void)

{
  return;
}




undefined8 FUN_00103bc0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001059e0(void)

{
  return;
}




undefined8 FUN_00105980(void)

{
  return 0;
}




void FUN_00103da4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103f81(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d42(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104a58(void)

{
  FUN_0010449d();
  FUN_00104686();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a3) */
/* WARNING: Removing unreachable block (ram,0x001025af) */

void FUN_00102590(void)

{
  return;
}




void FUN_00102bfe(undefined8 *param_1)

{
  FUN_00102ed2(*param_1);
  return;
}




bool FUN_00105b73(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00103d42(undefined8 param_1)

{
  return param_1;
}




void FUN_00104d86(void)

{
  return;
}




void FUN_001053a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102a15(0x30,param_2);
  uVar1 = FUN_00105342(param_3);
  uVar2 = FUN_00102ed2(param_2);
  uVar3 = FUN_00103c92(param_1);
  FUN_0010540e(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00105354(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103710(param_1);
  uVar2 = FUN_00105342(param_2);
  FUN_001053a0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103aa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d42(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d42(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001055ca(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00105ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001059f6(void)

{
  return;
}




long FUN_00104ad2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010351a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103bd6(param_1,param_2);
  FUN_00103c1a(param_1,param_2);
  return;
}




void FUN_00105574(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105a22(void)

{
  return;
}




undefined8 FUN_00103c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103c6a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e66(param_1,param_2,0);
  return;
}




void FUN_0010523b(undefined8 param_1)

{
  FUN_00104ad2(param_1);
  return;
}




void FUN_00105a64(void)

{
  return;
}




undefined8 FUN_001036d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00104c9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103576(param_1);
  FUN_00104da6(param_1,uVar1);
  FUN_00104b96(param_1);
  return;
}




void FUN_00103558(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00105a2d(void)

{
  return;
}




void FUN_00103710(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c92(param_1);
  FUN_00103ca4(uVar1,1);
  return;
}




void FUN_0010572e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102a15(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001056a2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102c47(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00105892(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103880(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010551e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105308(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00105342(param_2);
  FUN_00105354(uVar1,uVar2);
  return;
}




undefined8
FUN_00103430(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_0010358c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103896(param_3);
      uVar5 = FUN_001033dd(param_4);
      cVar1 = FUN_00102c20(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001034b4;
      }
    }
  }
  bVar2 = true;
LAB_001034b4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103558(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_00104aff(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102b94(undefined8 param_1)

{
  FUN_00102e74(param_1);
  return;
}




void FUN_001040ad(undefined8 param_1)

{
  FUN_001036b6(param_1);
  return;
}




undefined8 FUN_00104f1f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00105074(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010544c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00105342(param_3);
  puVar3 = (undefined8 *)FUN_00102a15(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




int FUN_0010598f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001036b6(undefined8 param_1)

{
  FUN_00103c7c(param_1);
  return;
}




undefined8 FUN_001050b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103fe2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104c7c(undefined8 param_1)

{
  FUN_00104d96(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00103034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_0010381a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010358c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103896(local_50);
    cVar2 = FUN_00102c20(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103896(local_50);
      cVar2 = FUN_00102c20(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103b5e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103880(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103880(local_60);
          local_48[1] = 0;
          FUN_001038b4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103b32(local_48);
          uVar6 = FUN_00103896(*puVar5);
          cVar2 = FUN_00102c20(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001038f4(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103b1c(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001038b4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103aa8(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103a92(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103a92(local_60);
        uVar6 = FUN_00103a92(local_60);
        FUN_00103aa8(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103af0(local_48);
        uVar6 = FUN_00103896(*puVar5);
        cVar2 = FUN_00102c20(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001038f4(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103b1c(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001038b4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103aa8(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001033c2;
  }
  lVar3 = FUN_0010386a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001030d6:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103880(local_60);
    uVar6 = FUN_00103896(*puVar5);
    cVar2 = FUN_00102c20(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001030d6;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103880(local_60);
    local_48[1] = 0;
    FUN_001038b4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001038f4(local_60,param_3);
  }
LAB_001033c2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00105ca8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103c92(undefined8 param_1)

{
  return param_1;
}




void FUN_0010408f(undefined8 param_1)

{
  FUN_001040ad(param_1);
  return;
}




void FUN_00103e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103fba(param_1,param_2,param_3);
  return;
}




void FUN_00105620(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001056fb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001059ca(void)

{
  return;
}




void FUN_00104686(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bd6(local_f8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_11c = -1;
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00104810 to 001049d0 has its CatchHandler @ 00104a28 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a3e(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104c16(local_c8,local_f8);
                    /* try { // try from 001049db to 001049df has its CatchHandler @ 00104a10 */
  FUN_001029a6(local_c8);
  FUN_00104bf6(local_c8);
  FUN_00104bf6(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00102c20(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102ed2(long param_1)

{
  FUN_00103660(param_1 + 0x20);
  return;
}




void FUN_00104b56(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001059a9(void)

{
  return;
}




void FUN_00105a43(void)

{
  return;
}




void FUN_00105a17(void)

{
  return;
}




void FUN_00105a38(void)

{
  return;
}




undefined8 FUN_001038f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00103576(param_1);
  local_50 = FUN_0010358c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001033dd(local_58);
    local_59 = FUN_00102c20(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103b1c(local_58);
    }
    else {
      local_58 = FUN_00103c54(local_58);
    }
  }
  FUN_00103558(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103d54(param_1);
    cVar1 = FUN_00102bb2(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103da4(local_38,&local_58,&local_50);
      goto LAB_00103a76;
    }
    FUN_00103af0(&local_48);
  }
  uVar2 = FUN_00103896(local_48);
  cVar1 = FUN_00102c20(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103b5e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103da4(local_38,&local_58,&local_50);
  }
LAB_00103a76:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001036e6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ef4(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00104a6d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010549e("Calling good()...");
  FUN_00104a58();
  FUN_0010549e("Finished good()");
  FUN_0010549e("Calling bad()...");
  FUN_001040cb();
  FUN_0010549e("Finished bad()");
  return 0;
}




long FUN_00102a3e(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00102b6a(param_1,param_2);
  local_28 = FUN_00102b94(param_1);
  cVar2 = FUN_00102bb2(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102bd8(param_1);
    uVar3 = FUN_00102bfe(&local_38);
    cVar2 = FUN_00102c20(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102ade;
    }
  }
  bVar1 = true;
LAB_00102ade:
  if (bVar1) {
    uVar3 = FUN_00102c47(param_2);
    FUN_00102c84(local_30,uVar3);
    FUN_00102cbc(&local_28,&local_38);
    local_38 = FUN_00102cde(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102bfe(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104eac(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104fae(local_18,param_1);
  FUN_00104fcc(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010554a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010567a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103b5e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d42(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00103d54(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103eb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f7e(param_3);
  uVar1 = FUN_00102f90(param_4);
  FUN_00102c5a(local_38,uVar1);
  FUN_00102fa2(param_5);
  uVar1 = FUN_00102a15(0x10,param_2);
                    /* try { // try from 00103f3e to 00103f42 has its CatchHandler @ 00103f45 */
  FUN_00103ffa(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a2b(void)

{
  return;
}




undefined8 FUN_00104fcc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010358c(param_1);
  uVar2 = FUN_001050b6(param_2);
  uVar1 = FUN_001050cc(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103a92(param_1);
  uVar2 = FUN_0010523b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103880(param_1);
  uVar2 = FUN_00105259(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104b96(undefined8 param_1)

{
  FUN_00104c7c(param_1);
  return;
}



