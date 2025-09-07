
void FUN_0010247a(undefined8 param_1)

{
  FUN_00102a84(param_1);
  return;
}




void FUN_001041fc(void)

{
  return;
}




void FUN_0010425f(void)

{
  return;
}




void FUN_001026b0(undefined8 param_1)

{
  FUN_001021f7(param_1);
  return;
}




long FUN_001032ee(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103d5b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029b8(long param_1)

{
  FUN_00102c06(param_1 + 0x20);
  return;
}




long FUN_0010269a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101984(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c3e(param_1,param_2);
  return;
}




void FUN_00101d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024d0(param_2);
  uVar1 = FUN_001024ee(uVar1);
  FUN_00102500(param_1,uVar1);
  return;
}




void FUN_00103f3f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010447b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104560(void)

{
  return;
}




undefined4 FUN_00101a3a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102d9b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d0e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cec(long param_1)

{
  FUN_0010247a(param_1 + 0x20);
  return;
}




undefined8 FUN_00104182(void)

{
  return 1;
}




void FUN_00103e8b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_001040a3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041d0(void)

{
  return;
}




void FUN_0010449a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103890(undefined8 param_1,undefined8 param_2)

{
  FUN_0010378c(param_1,param_2);
  return param_1;
}




undefined8
FUN_00101af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101dbc(param_5);
  uVar2 = FUN_00101daa(param_4);
  uVar3 = FUN_00101d98(param_3);
  local_40 = FUN_00101dce(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101b74 to 00101bb7 has its CatchHandler @ 00101bf5 */
  uVar1 = FUN_001021f7(local_40);
  local_38 = FUN_00101e4e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102334(param_1,local_40);
    FUN_00102372(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010224a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010362c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010373b(param_1,param_2);
  FUN_001037b6(param_1,param_2);
  FUN_00103348(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104207(void)

{
  return;
}




undefined8 FUN_00101daa(undefined8 param_1)

{
  return param_1;
}




void FUN_001044f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104280(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103e06(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b5c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103f9f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102a84(undefined8 param_1)

{
  return param_1;
}




void FUN_00101529(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101858(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103caf("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d07(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010252a(param_1);
  uVar2 = FUN_00103b5e(param_2);
  FUN_00103bbc(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102c06(undefined8 param_1)

{
  FUN_00102dae(param_1);
  return;
}




void FUN_001038be(void)

{
  return;
}




undefined8 FUN_00101c8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102372(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ea8(undefined8 param_1)

{
  FUN_00102ec6(param_1);
  return;
}




void FUN_00103cd5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103348(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103372(param_1);
  return;
}




void FUN_00104212(void)

{
  return;
}




void FUN_00102aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101dbc(param_5);
  uVar2 = FUN_00101daa(param_4);
  uVar3 = FUN_00101d98(param_3);
  FUN_00102cd0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103b5e(param_3);
  puVar2 = (undefined8 *)FUN_0010182f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_001029da(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001021f7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029b8(param_1);
  FUN_001029da(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104233(void)

{
  return;
}




void FUN_00102556(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010182f(0x28,param_2);
  uVar1 = FUN_00101dbc(param_5);
  uVar2 = FUN_00101daa(param_4);
  uVar3 = FUN_00101d98(param_3);
  uVar4 = FUN_00101cec(param_2);
  uVar5 = FUN_00102aac(param_1);
                    /* try { // try from 001025e5 to 001025e9 has its CatchHandler @ 001025ec */
  FUN_00102aec(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103372(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102634(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102372(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dd4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_001028ac(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104228(void)

{
  return;
}




void FUN_00101c3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023a6(param_1);
  uVar2 = FUN_00102390(param_1);
  FUN_001023bc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101cde(void)

{
  return;
}




long FUN_001023a6(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010373b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103890(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0e(param_2);
  FUN_00102500(param_1,uVar1);
  return;
}




void FUN_00102cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d98(param_3);
  uVar1 = FUN_00101daa(param_4);
  FUN_00101a74(local_38,uVar1);
  FUN_00101dbc(param_5);
  uVar1 = FUN_0010182f(8,param_2);
                    /* try { // try from 00102d58 to 00102d5c has its CatchHandler @ 00102d5f */
  FUN_00102e14(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_001019f2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101cde(param_1);
  return unaff_EBX;
}




void FUN_001035c2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102936(local_28);
    FUN_001035c2(param_1,uVar1);
    lVar2 = FUN_00102a6e(local_28);
    FUN_00102334(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001041f1(void)

{
  return;
}




void FUN_00103eb3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010421d(void)

{
  return;
}




void FUN_00101a18(undefined8 *param_1)

{
  FUN_00101cec(*param_1);
  return;
}




void FUN_00101628(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101858(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103caf("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d07(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103498(undefined8 param_1)

{
  FUN_001035b2(param_1);
  return;
}




undefined8 FUN_00101a61(undefined8 param_1)

{
  return param_1;
}




void FUN_00103274(void)

{
  FUN_00103014();
  FUN_00103144();
  return;
}




void FUN_00102978(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b5c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001029f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101cec(param_2);
  uVar2 = FUN_00102aac(param_1);
  FUN_00102c24(uVar2,uVar1);
  return;
}




void FUN_00103caf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8
FUN_0010224a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001023a6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026b0(param_3);
      uVar5 = FUN_001021f7(param_4);
      cVar1 = FUN_00101a3a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001022ce;
      }
    }
  }
  bVar2 = true;
LAB_001022ce:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102372(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103432(undefined8 param_1,undefined8 param_2)

{
  FUN_001034f6(param_1,param_2);
  return;
}




void FUN_00103d07(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001044b9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104275(void)

{
  return;
}




undefined8 FUN_0010270e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102390(param_1);
  local_50 = FUN_001023a6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001021f7(local_58);
    local_59 = FUN_00101a3a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102936(local_58);
    }
    else {
      local_58 = FUN_00102a6e(local_58);
    }
  }
  FUN_00102372(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102b6e(param_1);
    cVar1 = FUN_001019cc(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bbe(local_38,&local_58,&local_50);
      goto LAB_00102890;
    }
    FUN_0010290a(&local_48);
  }
  uVar2 = FUN_001026b0(local_48);
  cVar1 = FUN_00101a3a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102978(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bbe(local_38,&local_58,&local_50);
  }
LAB_00102890:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001041c5(void)

{
  return;
}




void FUN_00103c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b5e(param_3);
  FUN_00103c68(param_1,param_2,uVar1);
  return;
}




void FUN_001019ae(undefined8 param_1)

{
  FUN_00101c8e(param_1);
  return;
}




void FUN_0010378c(undefined8 param_1,undefined8 param_2)

{
  FUN_001038be(param_1,param_2);
  return;
}




void FUN_00102ec6(undefined8 param_1)

{
  FUN_001024d0(param_1);
  return;
}




void FUN_00103a75(undefined8 param_1)

{
  FUN_0010331b(param_1);
  return;
}




void FUN_00101d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0e(param_2);
  FUN_00102498(param_1,uVar1);
  return;
}




void FUN_00101727(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101858(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103caf("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d07(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033b2(undefined8 param_1)

{
  FUN_00103498(param_1);
  return;
}




undefined8 FUN_00101dbc(undefined8 param_1)

{
  return param_1;
}




void FUN_001041e6(void)

{
  return;
}




undefined8 * FUN_0010290a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001024ee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102e66(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ea8(param_2);
  puVar2 = (undefined4 *)FUN_001024ee(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103e31(undefined4 param_1)

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




undefined8 FUN_00102b6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102372(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_001041a0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101a9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0e(param_2);
  FUN_00101d20(param_1,uVar1);
  return param_1;
}




long FUN_00101858(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101984(param_1,param_2);
  local_28 = FUN_001019ae(param_1);
  cVar2 = FUN_001019cc(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001019f2(param_1);
    uVar3 = FUN_00101a18(&local_38);
    cVar2 = FUN_00101a3a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001018f8;
    }
  }
  bVar1 = true;
LAB_001018f8:
  if (bVar1) {
    uVar3 = FUN_00101a61(param_2);
    FUN_00101a9e(local_30,uVar3);
    FUN_00101ad6(&local_28,&local_38);
    local_38 = FUN_00101af8(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a18(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00102ee4(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f38 to 00102f9b has its CatchHandler @ 00102fe7 */
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  FUN_00103432(local_58,local_88);
                    /* try { // try from 00102fa3 to 00102fa7 has its CatchHandler @ 00102fd2 */
  FUN_00101529(local_58);
  FUN_00103412(local_58);
  FUN_00103412(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010252a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aac(param_1);
  FUN_00102abe(uVar1,1);
  return;
}




void FUN_00103a57(undefined8 param_1)

{
  FUN_001032ee(param_1);
  return;
}




void FUN_001041ba(void)

{
  return;
}




undefined8 FUN_00104402(undefined8 *param_1)

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




void FUN_00103412(undefined8 param_1)

{
  FUN_001034b8(param_1);
  return;
}




void FUN_00102c4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dd4(param_1,param_2,param_3);
  return;
}




void FUN_001035a2(void)

{
  return;
}




void FUN_00102a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aac(param_1);
  FUN_00102c4e(uVar1,param_2,1);
  return;
}




void FUN_001033d2(undefined8 param_1)

{
  FUN_0010345c(param_1);
  return;
}




void FUN_00102334(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f0(param_1,param_2);
  FUN_00102a34(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00101a74(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d58(param_1,param_2);
  return;
}




undefined8 FUN_00102684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001037b6(void)

{
  return;
}




void FUN_0010372c(void)

{
  return;
}




void FUN_00103014(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00103068 to 001030cb has its CatchHandler @ 00103117 */
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 7;
  FUN_00103432(local_58,local_88);
                    /* try { // try from 001030d3 to 001030d7 has its CatchHandler @ 00103102 */
  FUN_00101628(local_58);
  FUN_00103412(local_58);
  FUN_00103412(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ede(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103289(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103caf("Calling good()...");
  FUN_00103274();
  FUN_00103caf("Finished good()");
  FUN_00103caf("Calling bad()...");
  FUN_00102ee4();
  FUN_00103caf("Finished bad()");
  return 0;
}




void FUN_001041db(void)

{
  return;
}




undefined8 FUN_001042b7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104280,local_18);
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




void FUN_001033f2(undefined8 param_1)

{
  FUN_001033d2(param_1);
  return;
}




void FUN_00103db0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103b24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103b5e(param_2);
  FUN_00103b70(uVar1,uVar2);
  return;
}




undefined8 FUN_00102dfc(void)

{
  return 0x333333333333333;
}




undefined8 FUN_00101d98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010182f(0x28,param_2);
  uVar1 = FUN_00103b5e(param_3);
  uVar2 = FUN_00101cec(param_2);
  uVar3 = FUN_00102aac(param_1);
  FUN_00103c2a(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102abe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c80(param_1,param_2,0);
  return;
}




void FUN_001034b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102390(param_1);
  FUN_001035c2(param_1,uVar1);
  FUN_001033b2(param_1);
  return;
}




undefined8 FUN_001038d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c24(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dc0(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103d2f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001036c8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037ca(local_18,param_1);
  FUN_001037e8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102936(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102372(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102dc0(void)

{
  return;
}




void FUN_00103d85(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102e14(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102e66(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a6e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102dfc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00101ad6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104191(void)

{
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102634(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023a6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026b0(local_50);
    cVar2 = FUN_00101a3a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026b0(local_50);
      cVar2 = FUN_00101a3a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102978(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010269a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010269a(local_60);
          local_48[1] = 0;
          FUN_001026ce(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010294c(local_48);
          uVar6 = FUN_001026b0(*puVar5);
          cVar2 = FUN_00101a3a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010270e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102936(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001026ce(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001028c2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028ac(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028ac(local_60);
        uVar6 = FUN_001028ac(local_60);
        FUN_001028c2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010290a(local_48);
        uVar6 = FUN_001026b0(*puVar5);
        cVar2 = FUN_00101a3a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010270e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102936(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001026ce(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001028c2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001021dc;
  }
  lVar3 = FUN_00102684(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101ef0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010269a(local_60);
    uVar6 = FUN_001026b0(*puVar5);
    cVar2 = FUN_00101a3a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101ef0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010269a(local_60);
    local_48[1] = 0;
    FUN_001026ce(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010270e(local_60,param_3);
  }
LAB_001021dc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001037ca(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010423e(void)

{
  return;
}




undefined4 * FUN_00103a94(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029b8(param_2);
  puVar2 = (undefined4 *)FUN_00103b24(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_001023bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001021f7(local_38);
    cVar1 = FUN_00101a3a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102936(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102a6e(local_38);
    }
  }
  FUN_00102372(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001043df(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103b5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ddb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0e(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_0010182f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bbe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102d9b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010426a(void)

{
  return;
}




undefined8 FUN_001037e8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023a6(param_1);
  uVar2 = FUN_001038d2(param_2);
  uVar1 = FUN_001038e8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028ac(param_1);
  uVar2 = FUN_00103a57(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010269a(param_1);
  uVar2 = FUN_00103a75(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001035b2(void)

{
  return;
}




void FUN_0010345c(long param_1)

{
  FUN_00103582(param_1);
  FUN_001035a2(param_1);
  FUN_00103348(param_1 + 8);
  return;
}




void FUN_00103f0c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102b5c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103582(undefined8 param_1)

{
  FUN_0010372c(param_1);
  return;
}




undefined8 FUN_00102dae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102aac(undefined8 param_1)

{
  return param_1;
}




void FUN_001024d0(undefined8 param_1)

{
  FUN_00102a96(param_1);
  return;
}




bool FUN_00104384(pthread_t *param_1)

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




long FUN_0010331b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




long FUN_001038e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103a94(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103af8(param_2);
                    /* try { // try from 00103957 to 001039e9 has its CatchHandler @ 00103a15 */
    uVar2 = FUN_001038e8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103b0e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103a94(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103af8(local_38);
      uVar2 = FUN_001038e8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103b0e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001034f6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010362c(param_1,param_2);
  lVar1 = FUN_0010369c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001036b2(param_1);
                    /* try { // try from 00103551 to 00103555 has its CatchHandler @ 0010355b */
    uVar3 = FUN_001036c8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_001036b2(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00101dce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010252a(param_1);
  uVar2 = FUN_00101dbc(param_4);
  uVar3 = FUN_00101daa(param_3);
  uVar4 = FUN_00101d98(param_2);
  FUN_00102556(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104254(void)

{
  return;
}




undefined8 FUN_00103b0e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010369c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_0010294c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101845(void)

{
  return;
}




undefined8 FUN_00102a96(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103144(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00103198 to 001031fb has its CatchHandler @ 00103247 */
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101858(local_88,local_58);
  *puVar1 = 10;
  FUN_00103432(local_58,local_88);
                    /* try { // try from 00103203 to 00103207 has its CatchHandler @ 00103232 */
  FUN_00101727(local_58);
  FUN_00103412(local_58);
  FUN_00103412(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104249(void)

{
  return;
}




undefined8 FUN_001019cc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



