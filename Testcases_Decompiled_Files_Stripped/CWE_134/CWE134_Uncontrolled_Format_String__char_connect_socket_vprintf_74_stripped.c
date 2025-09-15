
undefined8 FUN_001059a2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010596b,local_18);
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




undefined8 FUN_001038c0(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103542(param_1);
  local_50 = FUN_00103558(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001033a9(local_58);
    local_59 = FUN_00102bec(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103ae8(local_58);
    }
    else {
      local_58 = FUN_00103c20(local_58);
    }
  }
  FUN_00103524(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103d20(param_1);
    cVar1 = FUN_00102b7e(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103d70(local_38,&local_58,&local_50);
      goto LAB_00103a42;
    }
    FUN_00103abc(&local_48);
  }
  uVar2 = FUN_00103862(local_48);
  cVar1 = FUN_00102bec(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103b2a(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103d70(local_38,&local_58,&local_50);
  }
LAB_00103a42:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103ba2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e9e(param_2);
  uVar2 = FUN_00103c5e(param_1);
  FUN_00103dd6(uVar2,uVar1);
  return;
}




undefined8 FUN_00102f6e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010362c(undefined8 param_1)

{
  FUN_00103c36(param_1);
  return;
}




void FUN_00103dd6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f72(param_1,param_2);
  return;
}




undefined8 FUN_00103d0e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010562a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00105913(void)

{
  return;
}




void FUN_00103fc6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104018(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001036a0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103f86(param_1,param_2,param_3);
  return;
}




void FUN_00103524(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103682(undefined8 param_1)

{
  FUN_00103c48(param_1);
  return;
}




undefined8 FUN_00103836(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103d20(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103524(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b60(undefined8 param_1)

{
  FUN_00102e40(param_1);
  return;
}




void FUN_001053c0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00105aed(undefined8 *param_1)

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




undefined8 FUN_00103f60(undefined8 param_1)

{
  return param_1;
}




void FUN_00102629(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105b85(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00103a5e(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104b12(undefined8 param_1,undefined8 param_2)

{
  FUN_00104bd6(param_1,param_2);
  return;
}




long FUN_001049ce(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001051ee(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103db8(undefined8 param_1)

{
  FUN_00103f60(param_1);
  return;
}




undefined8 FUN_00103c36(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001033fc(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103558(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103862(param_3);
      uVar5 = FUN_001033a9(param_4);
      cVar1 = FUN_00102bec(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103480;
      }
    }
  }
  bVar2 = true;
LAB_00103480:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103524(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010364a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ec0(param_2);
  FUN_001036b2(param_1,uVar1);
  return;
}




ulong FUN_0010578e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e40(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103524(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010523e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b7e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102f0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103682(param_2);
  uVar1 = FUN_001036a0(uVar1);
  FUN_001036b2(param_1,uVar1);
  return;
}




void FUN_00104b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103542(param_1);
  FUN_00104ca2(param_1,uVar1);
  FUN_00104a92(param_1);
  return;
}




void FUN_00105929(void)

{
  return;
}




void FUN_00105bd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d0e(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d0e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102ec0(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00103afe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001058fd(void)

{
  return;
}




void FUN_001058d1(void)

{
  return;
}




void FUN_00105b66(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00103ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00105955(void)

{
  return;
}




void FUN_001058e7(void)

{
  return;
}




undefined8 FUN_00104e1b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104f70(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102971(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a0a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_001028a5(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010539a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104ca2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103ae8(local_28);
    FUN_00104ca2(param_1,uVar1);
    lVar2 = FUN_00103c20(local_28);
    FUN_001034e6(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103e82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f4a(param_3);
  uVar1 = FUN_00102f5c(param_4);
  FUN_00102c26(local_38,uVar1);
  FUN_00102f6e(param_5);
  uVar1 = FUN_001029e0(0x10,param_2);
                    /* try { // try from 00103f0a to 00103f0e has its CatchHandler @ 00103f11 */
  FUN_00103fc6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_00103880(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103d0e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103542(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_00103abc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00105934(void)

{
  return;
}




void FUN_00104c92(void)

{
  return;
}




undefined8 FUN_0010587c(void)

{
  return 0;
}




undefined4 * FUN_00105174(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103b6a(param_2);
  puVar2 = (undefined4 *)FUN_00105204(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_001049fb(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_0010405b(undefined8 param_1)

{
  FUN_00104079(param_1);
  return;
}




ulong FUN_0010568a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00105250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036dc(param_1);
  uVar2 = FUN_0010523e(param_2);
  FUN_0010529c(param_1,uVar1,uVar2);
  return uVar1;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_00104d0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104e1b(param_1,param_2);
  FUN_00104e96(param_1,param_2);
  FUN_00104a28(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104f9e(void)

{
  return;
}




void FUN_00103f72(void)

{
  return;
}




void FUN_00102ed2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ec0(param_2);
  FUN_0010364a(param_1,uVar1);
  return;
}




void FUN_00104e0c(void)

{
  return;
}




undefined8 FUN_00103fae(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010529c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001029e0(0x30,param_2);
  uVar1 = FUN_0010523e(param_3);
  uVar2 = FUN_00102e9e(param_2);
  uVar3 = FUN_00103c5e(param_1);
  FUN_0010530a(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010559e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102f4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103f4d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d0e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001037e6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103524(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e9e(long param_1)

{
  FUN_0010362c(param_1 + 0x20);
  return;
}




void FUN_00104954(void)

{
  FUN_00104401();
  FUN_001045ea();
  return;
}




undefined8 FUN_00104969(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010539a("Calling good()...");
  FUN_00104954();
  FUN_0010539a("Finished good()");
  FUN_0010539a("Calling bad()...");
  FUN_00104097();
  FUN_0010539a("Finished bad()");
  return 0;
}




void FUN_00105155(undefined8 param_1)

{
  FUN_001049fb(param_1);
  return;
}




undefined8 FUN_001029e0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001058dc(void)

{
  return;
}




void FUN_0010593f(void)

{
  return;
}




undefined8 FUN_00102c13(undefined8 param_1)

{
  return param_1;
}




void FUN_00104b78(undefined8 param_1)

{
  FUN_00104c92(param_1);
  return;
}




void FUN_0010530a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010523e(param_3);
  FUN_00105348(param_1,param_2,uVar1);
  return;
}




void FUN_001058bb(void)

{
  return;
}




void FUN_00104af2(undefined8 param_1)

{
  FUN_00104b98(param_1);
  return;
}




void FUN_00103862(undefined8 param_1)

{
  FUN_001033a9(param_1);
  return;
}




void FUN_001058b0(void)

{
  return;
}




void FUN_001045ea(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104ad2(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 0010472d to 001048cc has its CatchHandler @ 00104924 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
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
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b12(local_c8,local_f8);
                    /* try { // try from 001048d7 to 001048db has its CatchHandler @ 0010490c */
  FUN_00102971(local_c8);
  FUN_00104af2(local_c8);
  FUN_00104af2(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104ad2(undefined8 param_1)

{
  FUN_00104ab2(param_1);
  return;
}




void FUN_001034e6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ba2(param_1,param_2);
  FUN_00103be6(param_1,param_2);
  return;
}




void FUN_00105960(void)

{
  return;
}




void FUN_00105446(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103f4d(undefined8 param_1)

{
  return param_1;
}




void FUN_001036dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c5e(param_1);
  FUN_00103c70(uVar1,1);
  return;
}




void FUN_00104c62(undefined8 param_1)

{
  FUN_00104e0c(param_1);
  return;
}




void FUN_00105470(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103f86(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined4 FUN_00102bec(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00105aca(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001029e0(0x30,param_2);
  uVar1 = FUN_00102f6e(param_5);
  uVar2 = FUN_00102f5c(param_4);
  uVar3 = FUN_00102f4a(param_3);
  uVar4 = FUN_00102e9e(param_2);
  uVar5 = FUN_00103c5e(param_1);
                    /* try { // try from 00103797 to 0010379b has its CatchHandler @ 0010379e */
  FUN_00103c9e(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102f6e(param_5);
  uVar2 = FUN_00102f5c(param_4);
  uVar3 = FUN_00102f4a(param_3);
  FUN_00103e82(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010586d(void)

{
  return 1;
}




void FUN_00104eaa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00104d92(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104da8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104eaa(local_18,param_1);
  FUN_00104ec8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029f6(void)

{
  return;
}




void FUN_001028a5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vprintf("%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105137(undefined8 param_1)

{
  FUN_001049ce(param_1);
  return;
}




void FUN_001054c6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00103558(long param_1)

{
  return param_1 + 8;
}




long FUN_0010384c(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103c48(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00104fb2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00103000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001037e6(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103558(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103862(local_50);
    cVar2 = FUN_00102bec(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103862(local_50);
      cVar2 = FUN_00102bec(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103b2a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010384c(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010384c(local_60);
          local_48[1] = 0;
          FUN_00103880(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103afe(local_48);
          uVar6 = FUN_00103862(*puVar5);
          cVar2 = FUN_00102bec(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001038c0(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103ae8(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103880(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103a74(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103a5e(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103a5e(local_60);
        uVar6 = FUN_00103a5e(local_60);
        FUN_00103a74(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103abc(local_48);
        uVar6 = FUN_00103862(*puVar5);
        cVar2 = FUN_00102bec(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001038c0(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103ae8(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103880(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103a74(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010338e;
  }
  lVar3 = FUN_00103836(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001030a2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010384c(local_60);
    uVar6 = FUN_00103862(*puVar5);
    cVar2 = FUN_00102bec(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001030a2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010384c(local_60);
    local_48[1] = 0;
    FUN_00103880(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001038c0(local_60,param_3);
  }
LAB_0010338e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001058c6(void)

{
  return;
}




void FUN_00105c40(void)

{
  return;
}




undefined8
FUN_00102caa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102f6e(param_5);
  uVar2 = FUN_00102f5c(param_4);
  uVar3 = FUN_00102f4a(param_3);
  local_40 = FUN_00102f80(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102d26 to 00102d69 has its CatchHandler @ 00102da7 */
  uVar1 = FUN_001033a9(local_40);
  local_38 = FUN_00103000(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001034e6(param_1,local_40);
    FUN_00103524(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001033fc(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104c82(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_00102e90(void)

{
  return;
}




void FUN_0010551c(undefined4 param_1)

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




void FUN_00104097(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104ad2(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001041da to 00104379 has its CatchHandler @ 001043d1 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
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
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a0a(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b12(local_c8,local_f8);
                    /* try { // try from 00104384 to 00104388 has its CatchHandler @ 001043b9 */
  FUN_001026f8(local_c8);
  FUN_00104af2(local_c8);
  FUN_00104af2(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00102ba4(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102e90(param_1);
  return unaff_EBX;
}




void FUN_00104e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104f9e(param_1,param_2);
  return;
}




void FUN_00104e96(void)

{
  return;
}




undefined8 FUN_00102f5c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102836(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a0a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00102767(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104f70(undefined8 param_1,undefined8 param_2)

{
  FUN_00104e6c(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ec0(param_2);
  FUN_00102ed2(param_1,uVar1);
  return param_1;
}




bool FUN_00105a6f(pthread_t *param_1)

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




undefined8 FUN_00102f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001036dc(param_1);
  uVar2 = FUN_00102f6e(param_4);
  uVar3 = FUN_00102f5c(param_3);
  uVar4 = FUN_00102f4a(param_2);
  FUN_00103708(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104a52(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001036b2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ec0(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001058a5(void)

{
  return;
}




void FUN_00104401(void)

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
  FUN_00104ad2(local_e8);
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
                    /* try { // try from 001044e1 to 00104562 has its CatchHandler @ 001045ba */
  plVar1 = (long *)FUN_00102a0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102a0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102a0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00104b12(local_b8,local_e8);
                    /* try { // try from 0010456d to 00104571 has its CatchHandler @ 001045a2 */
  FUN_00102836(local_b8);
  FUN_00104af2(local_b8);
  FUN_00104af2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102a0a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102b36(param_1,param_2);
  local_28 = FUN_00102b60(param_1);
  cVar2 = FUN_00102b7e(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102ba4(param_1);
    uVar3 = FUN_00102bca(&local_38);
    cVar2 = FUN_00102bec(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102aaa;
    }
  }
  bVar1 = true;
LAB_00102aaa:
  if (bVar1) {
    uVar3 = FUN_00102c13(param_2);
    FUN_00102c50(local_30,uVar3);
    FUN_00102c88(&local_28,&local_38);
    local_38 = FUN_00102caa(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102bca(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104ab2(undefined8 param_1)

{
  FUN_00104b3c(param_1);
  return;
}




void FUN_00103b2a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d0e(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102c26(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f0a(param_1,param_2);
  return;
}




void FUN_00103c70(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e32(param_1,param_2,0);
  return;
}




void FUN_00102df0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103558(param_1);
  uVar2 = FUN_00103542(param_1);
  FUN_0010356e(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001033a9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103b6a(param_1);
  FUN_00103b8c(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104b3c(long param_1)

{
  FUN_00104c62(param_1);
  FUN_00104c82(param_1);
  FUN_00104a28(param_1 + 8);
  return;
}




void FUN_00105ba4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104079(undefined8 param_1)

{
  FUN_00103682(param_1);
  return;
}




void FUN_00105576(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103be6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c5e(param_1);
  FUN_00103e00(uVar1,param_2,1);
  return;
}




void FUN_00102b36(undefined8 param_1,undefined8 param_2)

{
  FUN_00102df0(param_1,param_2);
  return;
}




void FUN_0010541a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_0010591e(void)

{
  return;
}




void FUN_00104a28(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104a52(param_1);
  return;
}




void FUN_0010596b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001058f2(void)

{
  return;
}




undefined8 FUN_0010356e(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001033a9(local_38);
    cVar1 = FUN_00102bec(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103ae8(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103c20(local_38);
    }
  }
  FUN_00103524(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00105348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010523e(param_3);
  puVar3 = (undefined8 *)FUN_001029e0(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




int FUN_0010588b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104018(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010405b(param_2);
  puVar2 = (undefined4 *)FUN_001036a0(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00104ec8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103558(param_1);
  uVar2 = FUN_00104fb2(param_2);
  uVar1 = FUN_00104fc8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103a5e(param_1);
  uVar2 = FUN_00105137(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010384c(param_1);
  uVar2 = FUN_00105155(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001053f2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001051d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010549b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103c5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e32(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103fae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001055c9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102bca(undefined8 *param_1)

{
  FUN_00102e9e(*param_1);
  return;
}




void FUN_00102767(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104bd6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104d0c(param_1,param_2);
  lVar1 = FUN_00104d7c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104d92(param_1);
                    /* try { // try from 00104c31 to 00104c35 has its CatchHandler @ 00104c3b */
    uVar3 = FUN_00104da8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104a92(undefined8 param_1)

{
  FUN_00104b78(param_1);
  return;
}




void FUN_001054f1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103b8c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105908(void)

{
  return;
}




void FUN_00102c88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001026f8(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a0a(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00102629(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00104fc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00105174(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001051d8(param_2);
                    /* try { // try from 00105037 to 001050c9 has its CatchHandler @ 001050f5 */
    uVar2 = FUN_00104fc8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001051ee(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00105174(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001051d8(local_38);
      uVar2 = FUN_00104fc8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001051ee(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00105204(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010523e(param_2);
  FUN_00105250(uVar1,uVar2);
  return;
}




void FUN_00103b6a(long param_1)

{
  FUN_00103db8(param_1 + 0x20);
  return;
}




void FUN_0010594a(void)

{
  return;
}




void FUN_001055f7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}



