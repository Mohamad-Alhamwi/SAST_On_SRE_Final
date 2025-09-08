
/* WARNING: Removing unreachable block (ram,0x001025e4) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */

void FUN_001025c0(void)

{
  return;
}




undefined8 FUN_0010486e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010476a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00104719(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010486e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b62(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d3f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b00(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001043d0(undefined8 param_1)

{
  FUN_001043b0(param_1);
  return;
}




void FUN_001051f0(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e88)();
  return;
}




undefined8 FUN_00104aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104a53(undefined8 param_1)

{
  FUN_001042f8(param_1);
  return;
}




void FUN_00104c8d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001036b2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103334(param_1);
  local_50 = FUN_0010334a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010319b(local_58);
    local_59 = FUN_001029de(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001038da(local_58);
    }
    else {
      local_58 = FUN_00103a12(local_58);
    }
  }
  FUN_00103316(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103b12(param_1);
    cVar1 = FUN_00102970(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103b62(local_38,&local_58,&local_50);
      goto LAB_00103834;
    }
    FUN_001038ae(&local_48);
  }
  uVar2 = FUN_00103654(local_48);
  cVar1 = FUN_001029de(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010391c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103b62(local_38,&local_58,&local_50);
  }
LAB_00103834:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103866(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b00(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b00(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103492(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102970(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103e4c(undefined8 param_1)

{
  FUN_00103e6a(param_1);
  return;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001027d3(0x28,param_2);
  uVar1 = FUN_00102d60(param_5);
  uVar2 = FUN_00102d4e(param_4);
  uVar3 = FUN_00102d3c(param_3);
  uVar4 = FUN_00102c90(param_2);
  uVar5 = FUN_00103a50(param_1);
                    /* try { // try from 00103589 to 0010358d has its CatchHandler @ 00103590 */
  FUN_00103a90(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




long FUN_001027fc(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102928(param_1,param_2);
  local_28 = FUN_00102952(param_1);
  cVar2 = FUN_00102970(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102996(param_1);
    uVar3 = FUN_001029bc(&local_38);
    cVar2 = FUN_001029de(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010289c;
    }
  }
  bVar1 = true;
LAB_0010289c:
  if (bVar1) {
    uVar3 = FUN_00102a05(param_2);
    FUN_00102a42(local_30,uVar3);
    FUN_00102a7a(&local_28,&local_38);
    local_38 = FUN_00102a9c(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_001029bc(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00104126(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001043d0(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010417a to 001041dd has its CatchHandler @ 00104229 */
  puVar1 = (undefined4 *)FUN_001027fc(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001027fc(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001027fc(local_88,local_58);
  *puVar1 = 0x14;
  FUN_00104410(local_58,local_88);
                    /* try { // try from 001041e5 to 001041e9 has its CatchHandler @ 00104214 */
  FUN_0010270e(local_58);
  FUN_001043f0(local_58);
  FUN_001043f0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




undefined8 FUN_001035d8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103316(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d8e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104e91(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_0010517e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8
FUN_00102a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102d60(param_5);
  uVar2 = FUN_00102d4e(param_4);
  uVar3 = FUN_00102d3c(param_3);
  local_40 = FUN_00102d72(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102b18 to 00102b5b has its CatchHandler @ 00102b99 */
  uVar1 = FUN_0010319b(local_40);
  local_38 = FUN_00102df2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001032d8(param_1,local_40);
    FUN_00103316(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001031ee(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001051e5(void)

{
  return;
}




void FUN_00103baa(undefined8 param_1)

{
  FUN_00103d52(param_1);
  return;
}




void FUN_00103654(undefined8 param_1)

{
  FUN_0010319b(param_1);
  return;
}




void FUN_00103316(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102be2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010334a(param_1);
  uVar2 = FUN_00103334(param_1);
  FUN_00103360(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010391c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b00(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001053bd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104f1d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00104b3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e6a(undefined8 param_1)

{
  FUN_00103474(param_1);
  return;
}




void FUN_00102649(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_001027fc(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00104ce5(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001043b0(undefined8 param_1)

{
  FUN_0010443a(param_1);
  return;
}




undefined8 FUN_00102cb2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104db9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010476a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010489c(param_1,param_2);
  return;
}




undefined8 FUN_00104b4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034ce(param_1);
  uVar2 = FUN_00104b3c(param_2);
  FUN_00104b9a(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00104580(void)

{
  return;
}




void FUN_00104a35(undefined8 param_1)

{
  FUN_001042cb(param_1);
  return;
}




long FUN_001048c6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104a72(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104ad6(param_2);
                    /* try { // try from 00104935 to 001049c7 has its CatchHandler @ 001049f3 */
    uVar2 = FUN_001048c6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104aec(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104a72(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104ad6(local_38);
      uVar2 = FUN_001048c6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104aec(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00105497(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001045a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001038da(local_28);
    FUN_001045a0(param_1,uVar1);
    lVar2 = FUN_00103a12(local_28);
    FUN_001032d8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103a62(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c24(param_1,param_2,0);
  return;
}




void FUN_00105253(void)

{
  return;
}




void FUN_00104c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104b3c(param_3);
  puVar2 = (undefined8 *)FUN_001027d3(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103474(undefined8 param_1)

{
  FUN_00103a3a(param_1);
  return;
}




undefined8 FUN_0010397e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010270e(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_001027fc(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00104ce5(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001042f8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103db8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103e0a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_001031ee(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010334a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103654(param_3);
      uVar5 = FUN_0010319b(param_4);
      cVar1 = FUN_001029de(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103272;
      }
    }
  }
  bVar2 = true;
LAB_00103272:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103316(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001034ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a50(param_1);
  FUN_00103a62(uVar1,1);
  return;
}




void FUN_00103d64(void)

{
  return;
}




void FUN_00104b9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001027d3(0x28,param_2);
  uVar1 = FUN_00104b3c(param_3);
  uVar2 = FUN_00102c90(param_2);
  uVar3 = FUN_00103a50(param_1);
  FUN_00104c08(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102d4e(undefined8 param_1)

{
  return param_1;
}




void FUN_001032d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00103994(param_1,param_2);
  FUN_001039d8(param_1,param_2);
  return;
}




long FUN_00103850(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00105206(void)

{
  return;
}




void FUN_00102c82(void)

{
  return;
}




void FUN_00103bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d64(param_1,param_2);
  return;
}




void FUN_0010319b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010395c(param_1);
  FUN_0010397e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a3) */
/* WARNING: Removing unreachable block (ram,0x001025af) */

void FUN_00102590(void)

{
  return;
}




void FUN_00105248(void)

{
  return;
}




void FUN_00102952(undefined8 param_1)

{
  FUN_00102c32(param_1);
  return;
}




undefined8 FUN_00102a05(undefined8 param_1)

{
  return param_1;
}




void FUN_0010525e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010460a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104719(param_1,param_2);
  FUN_00104794(param_1,param_2);
  FUN_00104326(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c32(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103316(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00104690(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001047a8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001038da(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104560(undefined8 param_1)

{
  FUN_0010470a(param_1);
  return;
}




void FUN_001051ae(void)

{
  return;
}




void FUN_00102928(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be2(param_1,param_2);
  return;
}




undefined8 FUN_00102d60(undefined8 param_1)

{
  return param_1;
}




void FUN_0010521c(void)

{
  return;
}




void FUN_00104d63(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103da0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_00103d52(undefined8 param_1)

{
  return param_1;
}




void FUN_00104ebc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029bc(undefined8 *param_1)

{
  FUN_00102c90(*param_1);
  return;
}




void FUN_001051b9(void)

{
  return;
}




void FUN_00103c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d3c(param_3);
  uVar1 = FUN_00102d4e(param_4);
  FUN_00102a18(local_38,uVar1);
  FUN_00102d60(param_5);
  uVar1 = FUN_001027d3(8,param_2);
                    /* try { // try from 00103cfc to 00103d00 has its CatchHandler @ 00103d03 */
  FUN_00103db8(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104d0d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a7a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104266(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c8d("Calling good()...");
  FUN_00104256();
  FUN_00104c8d("Finished good()");
  FUN_00104c8d("Calling bad()...");
  FUN_00103e88();
  FUN_00104c8d("Finished bad()");
  return 0;
}




void FUN_0010395c(long param_1)

{
  FUN_00103baa(param_1 + 0x20);
  return;
}




void FUN_00104c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104b3c(param_3);
  FUN_00104c46(param_1,param_2,uVar1);
  return;
}




void FUN_00104794(void)

{
  return;
}




undefined8 * FUN_001038ae(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102df2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001035d8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010334a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103654(local_50);
    cVar2 = FUN_001029de(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103654(local_50);
      cVar2 = FUN_001029de(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010391c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010363e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010363e(local_60);
          local_48[1] = 0;
          FUN_00103672(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001038f0(local_48);
          uVar6 = FUN_00103654(*puVar5);
          cVar2 = FUN_001029de(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001036b2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001038da(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103672(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103866(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103850(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103850(local_60);
        uVar6 = FUN_00103850(local_60);
        FUN_00103866(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001038ae(local_48);
        uVar6 = FUN_00103654(*puVar5);
        cVar2 = FUN_001029de(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001036b2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001038da(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103672(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103866(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103180;
  }
  lVar3 = FUN_00103628(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102e94:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010363e(local_60);
    uVar6 = FUN_00103654(*puVar5);
    cVar2 = FUN_001029de(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102e94;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010363e(local_60);
    local_48[1] = 0;
    FUN_00103672(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001036b2(local_60,param_3);
  }
LAB_00103180:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00105540(void)

{
  return;
}




void FUN_00104590(void)

{
  return;
}




undefined8 FUN_00102d3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d78(param_1,param_2,param_3);
  return;
}




void FUN_00103e0a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103e4c(param_2);
  puVar2 = (undefined4 *)FUN_00103492(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_0010341e(undefined8 param_1)

{
  FUN_00103a28(param_1);
  return;
}




void FUN_001044d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010460a(param_1,param_2);
  lVar1 = FUN_0010467a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104690(param_1);
                    /* try { // try from 0010452f to 00104533 has its CatchHandler @ 00104539 */
    uVar3 = FUN_001046a6(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102a18(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cfc(param_1,param_2);
  return;
}




void FUN_00104390(undefined8 param_1)

{
  FUN_00104476(param_1);
  return;
}




void FUN_001027e9(void)

{
  return;
}




undefined4 FUN_00102996(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102c82(param_1);
  return unaff_EBX;
}




undefined8 FUN_00103a50(undefined8 param_1)

{
  return param_1;
}




void FUN_00104496(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103334(param_1);
  FUN_001045a0(param_1,uVar1);
  FUN_00104390(param_1);
  return;
}




long FUN_0010363e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104326(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104350(param_1);
  return;
}




void FUN_001039d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a50(param_1);
  FUN_00103bf2(uVar1,param_2,1);
  return;
}




void FUN_00104e69(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102cfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103474(param_2);
  uVar1 = FUN_00103492(uVar1);
  FUN_001034a4(param_1,uVar1);
  return;
}




void FUN_00104d39(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105211(void)

{
  return;
}




undefined8 FUN_00105295(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010525e,local_18);
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




void FUN_00104eea(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001046a6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047a8(local_18,param_1);
  FUN_001047c6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001051a3(void)

{
  return;
}




undefined8 FUN_00103a12(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_00104f7d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102d60(param_5);
  uVar2 = FUN_00102d4e(param_4);
  uVar3 = FUN_00102d3c(param_3);
  FUN_00103c74(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




long FUN_001042cb(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001047c6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010334a(param_1);
  uVar2 = FUN_001048b0(param_2);
  uVar1 = FUN_001048c6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103850(param_1);
  uVar2 = FUN_00104a35(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010363e(param_1);
  uVar2 = FUN_00104a53(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104b02(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104b3c(param_2);
  FUN_00104b4e(uVar1,uVar2);
  return;
}




void FUN_00103994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c90(param_2);
  uVar2 = FUN_00103a50(param_1);
  FUN_00103bc8(uVar2,uVar1);
  return;
}




undefined4 FUN_001029de(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 * FUN_001038f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102c90(long param_1)

{
  FUN_0010341e(param_1 + 0x20);
  return;
}




void FUN_00103672(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103b00(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105478(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00105160(void)

{
  return 1;
}




void FUN_00104de4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105232(void)

{
  return;
}




undefined8 FUN_0010467a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_0010334a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102a42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cb2(param_2);
  FUN_00102cc4(param_1,uVar1);
  return param_1;
}




void FUN_00103e88(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b8;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001043d0(local_a8);
  local_b8 = -1;
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_48,0x10);
                    /* try { // try from 00103f85 to 001040a7 has its CatchHandler @ 001040f6 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_b4 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_b4 != -1)) {
      sVar2 = recv(local_b4,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b8 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_b4 != -1) {
    close(local_b4);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_001027fc(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_001027fc(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_001027fc(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_00104410(local_78,local_a8);
                    /* try { // try from 001040af to 001040b3 has its CatchHandler @ 001040e1 */
  FUN_00102649(local_78);
  FUN_001043f0(local_78);
  FUN_001043f0(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001034a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cb2(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103b00(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103b12(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103316(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010470a(void)

{
  return;
}




void FUN_001051cf(void)

{
  return;
}




void FUN_00104350(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




bool FUN_00105362(pthread_t *param_1)

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




undefined8 FUN_00103360(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010319b(local_38);
    cVar1 = FUN_001029de(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001038da(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103a12(local_38);
    }
  }
  FUN_00103316(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




ulong FUN_00105081(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010609c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103da0(void)

{
  return 0x333333333333333;
}




undefined8 FUN_00102d72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001034ce(param_1);
  uVar2 = FUN_00102d60(param_4);
  uVar3 = FUN_00102d4e(param_3);
  uVar4 = FUN_00102d3c(param_2);
  FUN_001034fa(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001051c4(void)

{
  return;
}




undefined4 * FUN_00104a72(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010395c(param_2);
  puVar2 = (undefined4 *)FUN_00104b02(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104ce5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001051da(void)

{
  return;
}




undefined8 FUN_001048b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010343c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cb2(param_2);
  FUN_001034a4(param_1,uVar1);
  return;
}




void FUN_0010489c(void)

{
  return;
}




void FUN_0010523d(void)

{
  return;
}




void FUN_001054d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104cb3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010443a(long param_1)

{
  FUN_00104560(param_1);
  FUN_00104580(param_1);
  FUN_00104326(param_1 + 8);
  return;
}




void FUN_00105459(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001027d3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105198(void)

{
  return;
}




undefined8 FUN_00103d3f(undefined8 param_1)

{
  return param_1;
}




void FUN_00104256(void)

{
  FUN_00104126();
  return;
}




void FUN_00105227(void)

{
  return;
}




void FUN_001051fb(void)

{
  return;
}




void FUN_00103d78(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104410(undefined8 param_1,undefined8 param_2)

{
  FUN_001044d4(param_1,param_2);
  return;
}




undefined8 FUN_00103a28(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103a3a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cb2(param_2);
  FUN_0010343c(param_1,uVar1);
  return;
}




undefined8 FUN_0010516f(void)

{
  return 0;
}




void FUN_00104476(undefined8 param_1)

{
  FUN_00104590(param_1);
  return;
}




void FUN_001043f0(undefined8 param_1)

{
  FUN_00104496(param_1);
  return;
}




undefined8 FUN_001053e0(undefined8 *param_1)

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




undefined8 FUN_00104ad6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104e0f(undefined4 param_1)

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



