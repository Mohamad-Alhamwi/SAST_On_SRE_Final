
void FUN_00105141(undefined8 param_1)

{
  FUN_001049d8(param_1);
  return;
}




void FUN_00105314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00105248(param_3);
  FUN_00105352(param_1,param_2,uVar1);
  return;
}




void FUN_001039ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c48(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c48(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104b46(long param_1)

{
  FUN_00104c6c(param_1);
  FUN_00104c8c(param_1);
  FUN_00104a32(param_1 + 8);
  return;
}




long FUN_00104d9c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00105580(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001054a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102590();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




int FUN_00105895(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00104e25(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104f7a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001055a8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104c9c(void)

{
  return;
}




void FUN_00104e16(void)

{
  return;
}




undefined8 FUN_00104f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00104e76(param_1,param_2);
  return param_1;
}




void FUN_001054d0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103ee8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




ulong FUN_00105694(long param_1,ulong param_2,long param_3)

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




void FUN_00103caa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103e87(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c48(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_00103336(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103492(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010379c(param_3);
      uVar5 = FUN_001032e3(param_4);
      cVar1 = FUN_00102b26(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001033ba;
      }
    }
  }
  bVar2 = true;
LAB_001033ba:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010345e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010515f(undefined8 param_1)

{
  FUN_00104a05(param_1);
  return;
}




void FUN_0010595f(void)

{
  return;
}




void FUN_00105907(void)

{
  return;
}




void FUN_00105526(undefined4 param_1)

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




undefined8 FUN_0010347c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00103492(long param_1)

{
  return param_1 + 8;
}




void FUN_001053ca(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104c6c(undefined8 param_1)

{
  FUN_00104e16(param_1);
  return;
}




void FUN_00102a9a(undefined8 param_1)

{
  FUN_00102d7a(param_1);
  return;
}




void FUN_00102e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035bc(param_2);
  uVar1 = FUN_001035da(uVar1);
  FUN_001035ec(param_1,uVar1);
  return;
}




void FUN_00104db2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104eb4(local_18,param_1);
  FUN_00104ed2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ab8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




long FUN_00104a05(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103f00(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103f52(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b4d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103720(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010345e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104adc(undefined8 param_1)

{
  FUN_00104abc(param_1);
  return;
}




undefined8 FUN_00103a22(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001059ac(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105975,local_18);
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




undefined4 * FUN_0010517e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103aa4(param_2);
  puVar2 = (undefined4 *)FUN_0010520e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104a9c(undefined8 param_1)

{
  FUN_00104b82(param_1);
  return;
}




void FUN_0010520e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00105248(param_2);
  FUN_0010525a(uVar1,uVar2);
  return;
}




undefined8 * FUN_00103a38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001032e3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103aa4(param_1);
  FUN_00103ac6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001035da(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001051f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e84(param_3);
  uVar1 = FUN_00102e96(param_4);
  FUN_00102b60(local_38,uVar1);
  FUN_00102ea8(param_5);
  uVar1 = FUN_0010291a(0x10,param_2);
                    /* try { // try from 00103e44 to 00103e48 has its CatchHandler @ 00103e4b */
  FUN_00103f00(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105b8f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102dfa(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001025e4) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */

void FUN_001025c0(void)

{
  return;
}




void FUN_00105601(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00103c5a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010345e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00104fd2(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010517e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001051e2(param_2);
                    /* try { // try from 00105041 to 001050d3 has its CatchHandler @ 001050ff */
    uVar2 = FUN_00104fd2(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001051f8(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010517e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001051e2(local_38);
      uVar2 = FUN_00104fd2(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001051f8(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104cac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103a22(local_28);
    FUN_00104cac(param_1,uVar1);
    lVar2 = FUN_00103b5a(local_28);
    FUN_00103420(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010345e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001051e2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00105b70(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8
FUN_00102be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102ea8(param_5);
  uVar2 = FUN_00102e96(param_4);
  uVar3 = FUN_00102e84(param_3);
  local_40 = FUN_00102eba(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102c60 to 00102ca3 has its CatchHandler @ 00102ce1 */
  uVar1 = FUN_001032e3(local_40);
  local_38 = FUN_00102f3a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103420(param_1,local_40);
    FUN_0010345e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103336(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dfa(param_2);
  FUN_00103584(param_1,uVar1);
  return;
}




undefined8 FUN_00103b70(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b04(undefined8 *param_1)

{
  FUN_00102dd8(*param_1);
  return;
}




undefined8 FUN_001037fa(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010347c(param_1);
  local_50 = FUN_00103492(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001032e3(local_58);
    local_59 = FUN_00102b26(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103a22(local_58);
    }
    else {
      local_58 = FUN_00103b5a(local_58);
    }
  }
  FUN_0010345e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103c5a(param_1);
    cVar1 = FUN_00102ab8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103caa(local_38,&local_58,&local_50);
      goto LAB_0010397c;
    }
    FUN_001039f6(&local_48);
  }
  uVar2 = FUN_0010379c(local_48);
  cVar1 = FUN_00102b26(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103a64(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103caa(local_38,&local_58,&local_50);
  }
LAB_0010397c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00105912(void)

{
  return;
}




void FUN_00102dd8(long param_1)

{
  FUN_00103566(param_1 + 0x20);
  return;
}




void FUN_001058ba(void)

{
  return;
}




undefined8 FUN_0010291a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105bae(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00105798(long param_1,ulong param_2,long param_3)

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




void FUN_00104abc(undefined8 param_1)

{
  FUN_00104b46(param_1);
  return;
}




undefined4 FUN_00102ade(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102dca(param_1);
  return unaff_EBX;
}




undefined8 FUN_00105886(void)

{
  return 0;
}




void FUN_00103b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b98(param_1);
  FUN_00103d3a(uVar1,param_2,1);
  return;
}




void FUN_00104afc(undefined8 param_1)

{
  FUN_00104ba2(param_1);
  return;
}




void FUN_001054fb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103492(param_1);
  uVar2 = FUN_0010347c(param_1);
  FUN_001034a8(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001053a4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00104ed2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103492(param_1);
  uVar2 = FUN_00104fbc(param_2);
  uVar1 = FUN_00104fd2(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103998(param_1);
  uVar2 = FUN_00105141(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103786(param_1);
  uVar2 = FUN_0010515f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104a5c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001058f1(void)

{
  return;
}




void FUN_001058fc(void)

{
  return;
}




undefined8 FUN_00103e87(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103fd1(void)

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
  FUN_00104adc(local_f8);
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
                    /* try { // try from 0010415b to 0010431b has its CatchHandler @ 00104373 */
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
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b1c(local_c8,local_f8);
                    /* try { // try from 00104326 to 0010432a has its CatchHandler @ 0010435b */
  FUN_00102649(local_c8);
  FUN_00104afc(local_c8);
  FUN_00104afc(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00105975(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102736(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00102944(param_1,&local_84);
  local_80 = (char *)*puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,local_80);
  FUN_001053a4(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105954(void)

{
  return;
}




void FUN_00103a64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c48(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00104fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001058e6(void)

{
  return;
}




void FUN_00103642(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010291a(0x30,param_2);
  uVar1 = FUN_00102ea8(param_5);
  uVar2 = FUN_00102e96(param_4);
  uVar3 = FUN_00102e84(param_3);
  uVar4 = FUN_00102dd8(param_2);
  uVar5 = FUN_00103b98(param_1);
                    /* try { // try from 001036d1 to 001036d5 has its CatchHandler @ 001036d8 */
  FUN_00103bd8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102a70(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d2a(param_1,param_2);
  return;
}




void FUN_00105949(void)

{
  return;
}




void FUN_00104c8c(void)

{
  return;
}




void FUN_00105634(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102dca(void)

{
  return;
}




void FUN_00104ea0(void)

{
  return;
}




undefined8 FUN_00105ad4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00105877(void)

{
  return 1;
}




void FUN_00102bc2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102eba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103616(param_1);
  uVar2 = FUN_00102ea8(param_4);
  uVar3 = FUN_00102e96(param_3);
  uVar4 = FUN_00102e84(param_2);
  FUN_00103642(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00103786(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103fb3(undefined8 param_1)

{
  FUN_001035bc(param_1);
  return;
}




void FUN_00102930(void)

{
  return;
}




void FUN_00104eb4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010547a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd8(param_2);
  uVar2 = FUN_00103b98(param_1);
  FUN_00103d10(uVar2,uVar1);
  return;
}




void FUN_00102649(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00102944(param_1,&local_84);
  local_80 = (char *)*puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,local_80);
  FUN_001053a4(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102ea8(param_5);
  uVar2 = FUN_00102e96(param_4);
  uVar3 = FUN_00102e84(param_3);
  FUN_00103dbc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103aa4(long param_1)

{
  FUN_00103cf2(param_1 + 0x20);
  return;
}




void FUN_00103566(undefined8 param_1)

{
  FUN_00103b70(param_1);
  return;
}




undefined8 FUN_00102b8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dfa(param_2);
  FUN_00102e0c(param_1,uVar1);
  return param_1;
}




void FUN_00105c50(void)

{
  return;
}




undefined8 FUN_00103e9a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d6c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103ee8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010379c(undefined8 param_1)

{
  FUN_001032e3(param_1);
  return;
}




void FUN_00104d16(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104e25(param_1,param_2);
  FUN_00104ea0(param_1,param_2);
  FUN_00104a32(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00103998(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104fa8(void)

{
  return;
}




void FUN_001053fc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103ac6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104ba2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010347c(param_1);
  FUN_00104cac(param_1,uVar1);
  FUN_00104a9c(param_1);
  return;
}




undefined8 FUN_00104973(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001053a4("Calling good()...");
  FUN_0010495e();
  FUN_001053a4("Finished good()");
  FUN_001053a4("Calling bad()...");
  FUN_00103fd1();
  FUN_001053a4("Finished bad()");
  return 0;
}




undefined8 FUN_00105af7(undefined8 *param_1)

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




void FUN_00102823(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  undefined8 local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00102944(param_1,&local_84);
  local_80 = *puVar1;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",local_80);
  FUN_001053a4(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00102b26(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001035ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dfa(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104a32(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104a5c(param_1);
  return;
}




void FUN_001058d0(void)

{
  return;
}




undefined8 FUN_00103b82(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103f52(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103f95(param_2);
  puVar2 = (undefined4 *)FUN_001035da(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e88)();
  return;
}




void FUN_00104b1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104be0(param_1,param_2);
  return;
}




void FUN_00103d3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103ec0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102e96(undefined8 param_1)

{
  return param_1;
}




long FUN_00102944(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102a70(param_1,param_2);
  local_28 = FUN_00102a9a(param_1);
  cVar2 = FUN_00102ab8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102ade(param_1);
    uVar3 = FUN_00102b04(&local_38);
    cVar2 = FUN_00102b26(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001029e4;
    }
  }
  bVar1 = true;
LAB_001029e4:
  if (bVar1) {
    uVar3 = FUN_00102b4d(param_2);
    FUN_00102b8a(local_30,uVar3);
    FUN_00102bc2(&local_28,&local_38);
    local_38 = FUN_00102be4(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102b04(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010458c(void)

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
  FUN_00104adc(local_f8);
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
                    /* try { // try from 00104716 to 001048d6 has its CatchHandler @ 0010492e */
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
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102944(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b1c(local_c8,local_f8);
                    /* try { // try from 001048e1 to 001048e5 has its CatchHandler @ 00104916 */
  FUN_00102823(local_c8);
  FUN_00104afc(local_c8);
  FUN_00104afc(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001035bc(undefined8 param_1)

{
  FUN_00103b82(param_1);
  return;
}




undefined8 FUN_001034a8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001032e3(local_38);
    cVar1 = FUN_00102b26(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103a22(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103b5a(local_38);
    }
  }
  FUN_0010345e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103420(undefined8 param_1,undefined8 param_2)

{
  FUN_00103adc(param_1,param_2);
  FUN_00103b20(param_1,param_2);
  return;
}




void FUN_00104b82(undefined8 param_1)

{
  FUN_00104c9c(param_1);
  return;
}




void FUN_00105928(void)

{
  return;
}




void FUN_00103616(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b98(param_1);
  FUN_00103baa(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a3) */
/* WARNING: Removing unreachable block (ram,0x001025af) */

void FUN_00102590(void)

{
  return;
}




undefined8 FUN_00102ea8(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e76(undefined8 param_1,undefined8 param_2)

{
  FUN_00104fa8(param_1,param_2);
  return;
}




void FUN_001058db(void)

{
  return;
}




void FUN_00103eac(void)

{
  return;
}




void FUN_0010593e(void)

{
  return;
}




undefined8 FUN_00105248(undefined8 param_1)

{
  return param_1;
}




void FUN_001043a3(void)

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
  FUN_00104adc(local_e8);
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
                    /* try { // try from 00104483 to 00104504 has its CatchHandler @ 0010455c */
  plVar1 = (long *)FUN_00102944(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102944(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102944(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00104b1c(local_b8,local_e8);
                    /* try { // try from 0010450f to 00104513 has its CatchHandler @ 00104544 */
  FUN_00102736(local_b8);
  FUN_00104afc(local_b8);
  FUN_00104afc(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105450(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102d7a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010345e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001049d8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00104be0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104d16(param_1,param_2);
  lVar1 = FUN_00104d86(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104d9c(param_1);
                    /* try { // try from 00104c3b to 00104c3f has its CatchHandler @ 00104c45 */
    uVar3 = FUN_00104db2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_0010596a(void)

{
  return;
}




void FUN_001058c5(void)

{
  return;
}




void FUN_00105352(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00105248(param_3);
  puVar3 = (undefined8 *)FUN_0010291a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103ec0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103c48(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103b5a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010591d(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102f3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103720(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103492(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010379c(local_50);
    cVar2 = FUN_00102b26(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010379c(local_50);
      cVar2 = FUN_00102b26(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103a64(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103786(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103786(local_60);
          local_48[1] = 0;
          FUN_001037ba(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103a38(local_48);
          uVar6 = FUN_0010379c(*puVar5);
          cVar2 = FUN_00102b26(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001037fa(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103a22(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001037ba(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001039ae(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103998(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103998(local_60);
        uVar6 = FUN_00103998(local_60);
        FUN_001039ae(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001039f6(local_48);
        uVar6 = FUN_0010379c(*puVar5);
        cVar2 = FUN_00102b26(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001037fa(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103a22(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001037ba(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001039ae(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001032c8;
  }
  lVar3 = FUN_00103770(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102fdc:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103786(local_60);
    uVar6 = FUN_0010379c(*puVar5);
    cVar2 = FUN_00102b26(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102fdc;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103786(local_60);
    local_48[1] = 0;
    FUN_001037ba(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001037fa(local_60,param_3);
  }
LAB_001032c8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103baa(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d6c(param_1,param_2,0);
  return;
}




undefined8 FUN_00104d86(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dfa(param_2);
  FUN_001035ec(param_1,uVar1);
  return;
}




void FUN_001058af(void)

{
  return;
}




void FUN_00105424(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001055d3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 * FUN_001039f6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103f95(undefined8 param_1)

{
  FUN_00103fb3(param_1);
  return;
}




undefined8 FUN_00103b98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d10(undefined8 param_1,undefined8 param_2)

{
  FUN_00103eac(param_1,param_2);
  return;
}




bool FUN_00105a79(pthread_t *param_1)

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




void FUN_00105933(void)

{
  return;
}




undefined8 FUN_00102e84(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b60(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e44(param_1,param_2);
  return;
}




void FUN_001052a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010291a(0x30,param_2);
  uVar1 = FUN_00105248(param_3);
  uVar2 = FUN_00102dd8(param_2);
  uVar3 = FUN_00103b98(param_1);
  FUN_00105314(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010495e(void)

{
  FUN_001043a3();
  FUN_0010458c();
  return;
}




void FUN_00103cf2(undefined8 param_1)

{
  FUN_00103e9a(param_1);
  return;
}




void FUN_00105be0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001037ba(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103c48(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010525a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103616(param_1);
  uVar2 = FUN_00105248(param_2);
  FUN_001052a6(param_1,uVar1,uVar2);
  return uVar1;
}



