
void FUN_00102d11(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [10];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103182(local_e8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_b8[0] = 0;
                    /* try { // try from 00102d86 to 00102e07 has its CatchHandler @ 00102e5f */
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)auStack_90;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)auStack_90;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)auStack_90;
  FUN_001031c2(local_b8,local_e8);
                    /* try { // try from 00102e12 to 00102e16 has its CatchHandler @ 00102e47 */
  FUN_00101529(local_b8);
  FUN_001031a2(local_b8);
  FUN_001031a2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103182(undefined8 param_1)

{
  FUN_00103162(param_1);
  return;
}




void FUN_00103b20(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103342(void)

{
  return;
}




void FUN_00103162(undefined8 param_1)

{
  FUN_001031ec(param_1);
  return;
}




undefined8 FUN_00102762(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102a50(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bec(param_1,param_2);
  return;
}




void FUN_0010281c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b18(param_2);
  uVar2 = FUN_001028d8(param_1);
  FUN_00102a50(uVar2,uVar1);
  return;
}




undefined4 * FUN_00103824(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027e4(param_2);
  puVar2 = (undefined4 *)FUN_001038b4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001029ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102bc7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102988(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010299a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010219e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fd9(void)

{
  return;
}




undefined8 FUN_001028d8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f6b(void)

{
  return;
}




undefined8 FUN_001024b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001018a0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b84(param_1,param_2);
  return;
}




void FUN_00102aac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c28(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001024fa(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102988(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101844(undefined8 *param_1)

{
  FUN_00101b18(*param_1);
  return;
}




void FUN_00101671(void)

{
  return;
}




undefined8 FUN_0010253a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021bc(param_1);
  local_50 = FUN_001021d2(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102023(local_58);
    local_59 = FUN_00101866(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102762(local_58);
    }
    else {
      local_58 = FUN_0010289a(local_58);
    }
  }
  FUN_0010219e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010299a(param_1);
    cVar1 = FUN_001017f8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029ea(local_38,&local_58,&local_50);
      goto LAB_001026bc;
    }
    FUN_00102736(&local_48);
  }
  uVar2 = FUN_001024dc(local_48);
  cVar1 = FUN_00101866(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027a4(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029ea(local_38,&local_58,&local_50);
  }
LAB_001026bc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101b3a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103228(undefined8 param_1)

{
  FUN_00103342(param_1);
  return;
}




void FUN_001022c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b3a(param_2);
  FUN_0010232c(param_1,uVar1);
  return;
}




void FUN_00101b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b3a(param_2);
  FUN_001022c4(param_1,uVar1);
  return;
}




void FUN_00103458(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010355a(local_18,param_1);
  FUN_00103578(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_001031a2(undefined8 param_1)

{
  FUN_00103248(param_1);
  return;
}




void FUN_001017b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a6a(param_1,param_2);
  return;
}




void FUN_00104216(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010364e(void)

{
  return;
}




undefined8 FUN_00101be8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101be8(param_5);
  uVar2 = FUN_00101bd6(param_4);
  uVar3 = FUN_00101bc4(param_3);
  FUN_00102afc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001039ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038ee(param_3);
  FUN_001039f8(param_1,param_2,uVar1);
  return;
}




void FUN_00103fe4(void)

{
  return;
}




void FUN_00103b76(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00101684(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017b0(param_1,param_2);
  local_28 = FUN_001017da(param_1);
  cVar2 = FUN_001017f8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010181e(param_1);
    uVar3 = FUN_00101844(&local_38);
    cVar2 = FUN_00101866(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101724;
    }
  }
  bVar1 = true;
LAB_00101724:
  if (bVar1) {
    uVar3 = FUN_0010188d(param_2);
    FUN_001018ca(local_30,uVar3);
    FUN_00101902(&local_28,&local_38);
    local_38 = FUN_00101924(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101844(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103546(void)

{
  return;
}




void FUN_00104280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103352(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102762(local_28);
    FUN_00103352(param_1,uVar1);
    lVar2 = FUN_0010289a(local_28);
    FUN_00102160(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102bec(void)

{
  return;
}




void FUN_001030d8(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103102(param_1);
  return;
}




void FUN_00103ba1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103102(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102460(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010219e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038ee(param_2);
  FUN_00103900(uVar1,uVar2);
  return;
}




void FUN_001031ec(long param_1)

{
  FUN_00103312(param_1);
  FUN_00103332(param_1);
  FUN_001030d8(param_1 + 8);
  return;
}




void FUN_001028ea(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aac(param_1,param_2,0);
  return;
}




void FUN_001017da(undefined8 param_1)

{
  FUN_00101aba(param_1);
  return;
}




undefined8 FUN_00102988(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cd5(undefined8 param_1)

{
  FUN_00102cf3(param_1);
  return;
}




void FUN_00103fa2(void)

{
  return;
}




undefined8 FUN_0010165b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001021e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102023(local_38);
    cVar1 = FUN_00101866(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102762(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010289a(local_38);
    }
  }
  FUN_0010219e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102e8f(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103182(local_e8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_b8[0] = 0;
                    /* try { // try from 00102f00 to 00102f81 has its CatchHandler @ 00102fd9 */
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101684(local_e8,local_b8);
  *plVar1 = (long)local_88;
  FUN_001031c2(local_b8,local_e8);
                    /* try { // try from 00102f8c to 00102f90 has its CatchHandler @ 00102fc1 */
  FUN_001015c2(local_b8);
  FUN_001031a2(local_b8);
  FUN_001031a2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103805(undefined8 param_1)

{
  FUN_001030ab(param_1);
  return;
}




void FUN_001027e4(long param_1)

{
  FUN_00102a32(param_1 + 0x20);
  return;
}




void FUN_00103f60(void)

{
  return;
}




void FUN_001024dc(undefined8 param_1)

{
  FUN_00102023(param_1);
  return;
}




undefined8 FUN_00102806(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8
FUN_00102076(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021d2(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024dc(param_3);
      uVar5 = FUN_00102023(param_4);
      cVar1 = FUN_00101866(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020fa;
      }
    }
  }
  bVar2 = true;
LAB_001020fa:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010219e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101684(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_80,local_78);
  FUN_00103a4a(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022a6(undefined8 param_1)

{
  FUN_001028b0(param_1);
  return;
}




ulong FUN_00103d3a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101bc4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d8(param_1);
  FUN_00102a7a(uVar1,param_2,1);
  return;
}




void FUN_00103aca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_001021d2(long param_1)

{
  return param_1 + 8;
}




void FUN_00103332(void)

{
  return;
}




undefined8 FUN_0010188d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021d2(param_1);
  uVar2 = FUN_001021bc(param_1);
  FUN_001021e8(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001033bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034cb(param_1,param_2);
  FUN_00103546(param_1,param_2);
  FUN_001030d8(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042f0(void)

{
  return;
}




void FUN_00101b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022fc(param_2);
  uVar1 = FUN_0010231a(uVar1);
  FUN_0010232c(param_1,uVar1);
  return;
}




void FUN_00102c00(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103ca7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined4 FUN_00101866(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102160(undefined8 param_1,undefined8 param_2)

{
  FUN_0010281c(param_1,param_2);
  FUN_00102860(param_1,param_2);
  return;
}




void FUN_001031c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103286(param_1,param_2);
  return;
}




void FUN_00104254(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 * FUN_00102778(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103fad(void)

{
  return;
}




void FUN_001039f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038ee(param_3);
  puVar3 = (undefined8 *)FUN_0010165b(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00104010(void)

{
  return;
}




void FUN_00101902(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102a32(undefined8 param_1)

{
  FUN_00102bda(param_1);
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




void FUN_00103bcc(undefined4 param_1)

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




void FUN_00102afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bc4(param_3);
  uVar1 = FUN_00101bd6(param_4);
  FUN_001018a0(local_38,uVar1);
  FUN_00101be8(param_5);
  uVar1 = FUN_0010165b(0x10,param_2);
                    /* try { // try from 00102b84 to 00102b88 has its CatchHandler @ 00102b8b */
  FUN_00102c40(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103248(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021bc(param_1);
  FUN_00103352(param_1,uVar1);
  FUN_00103142(param_1);
  return;
}




undefined8 FUN_00103019(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a4a("Calling good()...");
  FUN_00103009();
  FUN_00103a4a("Finished good()");
  FUN_00103a4a("Calling bad()...");
  FUN_00102d11();
  FUN_00103a4a("Finished bad()");
  return 0;
}




void FUN_00102c92(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102cd5(param_2);
  puVar2 = (undefined4 *)FUN_0010231a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010394c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010165b(0x30,param_2);
  uVar1 = FUN_001038ee(param_3);
  uVar2 = FUN_00101b18(param_2);
  uVar3 = FUN_001028d8(param_1);
  FUN_001039ba(uVar3,uVar2,uVar1);
  return;
}




void FUN_00101b18(long param_1)

{
  FUN_001022a6(param_1 + 0x20);
  return;
}




undefined8 FUN_001021bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103578(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021d2(param_1);
  uVar2 = FUN_00103662(param_2);
  uVar1 = FUN_00103678(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026d8(param_1);
  uVar2 = FUN_001037e7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024c6(param_1);
  uVar2 = FUN_00103805(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_001028b0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102023(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027e4(param_1);
  FUN_00102806(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102356(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d8(param_1);
  FUN_001028ea(uVar1,1);
  return;
}




undefined8 * FUN_00102736(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103a4a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001030ab(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00101aba(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010219e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104005(void)

{
  return;
}




undefined4 FUN_0010181e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b0a(param_1);
  return unaff_EBX;
}




void FUN_00103c79(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001018ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b3a(param_2);
  FUN_00101b4c(param_1,uVar1);
  return param_1;
}




long FUN_00103678(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103824(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103888(param_2);
                    /* try { // try from 001036e7 to 00103779 has its CatchHandler @ 001037a5 */
    uVar2 = FUN_00103678(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010389e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103824(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103888(local_38);
      uVar2 = FUN_00103678(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010389e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




int FUN_00103f3b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010342c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103c26(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102c28(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102460(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021d2(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024dc(local_50);
    cVar2 = FUN_00101866(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024dc(local_50);
      cVar2 = FUN_00101866(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027a4(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024c6(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024c6(local_60);
          local_48[1] = 0;
          FUN_001024fa(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102778(local_48);
          uVar6 = FUN_001024dc(*puVar5);
          cVar2 = FUN_00101866(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010253a(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102762(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024fa(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026ee(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026d8(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026d8(local_60);
        uVar6 = FUN_001026d8(local_60);
        FUN_001026ee(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102736(local_48);
        uVar6 = FUN_001024dc(*puVar5);
        cVar2 = FUN_00101866(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010253a(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102762(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024fa(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026ee(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102008;
  }
  lVar3 = FUN_001024b0(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d1c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024c6(local_60);
    uVar6 = FUN_001024dc(*puVar5);
    cVar2 = FUN_00101866(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d1c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024c6(local_60);
    local_48[1] = 0;
    FUN_001024fa(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010253a(local_60,param_3);
  }
LAB_00102008:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_0010289a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103142(undefined8 param_1)

{
  FUN_00103228(param_1);
  return;
}




void FUN_00103fb8(void)

{
  return;
}




void FUN_00103f97(void)

{
  return;
}




void FUN_00103a70(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103af6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103c4e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010417a(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8
FUN_00101924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101be8(param_5);
  uVar2 = FUN_00101bd6(param_4);
  uVar3 = FUN_00101bc4(param_3);
  local_40 = FUN_00101bfa(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019a0 to 001019e3 has its CatchHandler @ 00101a21 */
  uVar1 = FUN_00102023(local_40);
  local_38 = FUN_00101c7a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102160(param_1,local_40);
    FUN_0010219e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102076(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00101bd6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001038ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c00(param_1,param_2,param_3);
  return;
}




void FUN_00104235(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010351c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010364e(param_1,param_2);
  return;
}




ulong FUN_00103e3e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fef(void)

{
  return;
}




undefined8 FUN_00103662(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00103f8c(void)

{
  return;
}




undefined8 FUN_0010231a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b0a(void)

{
  return;
}




undefined8 FUN_00104052(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010401b,local_18);
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




void FUN_00103286(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033bc(param_1,param_2);
  lVar1 = FUN_0010342c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103442(param_1);
                    /* try { // try from 001032e1 to 001032e5 has its CatchHandler @ 001032eb */
    uVar3 = FUN_00103458(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102c40(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c92(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015c2(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101684(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_80,local_78);
  FUN_00103a4a(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010389e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_001024c6(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102356(param_1);
  uVar2 = FUN_001038ee(param_2);
  FUN_0010394c(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_00103442(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010232c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b3a(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001037e7(undefined8 param_1)

{
  FUN_0010307e(param_1);
  return;
}




undefined8 FUN_001028c2(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102bda(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fc3(void)

{
  return;
}




void FUN_0010401b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102cf3(undefined8 param_1)

{
  FUN_001022fc(param_1);
  return;
}




void FUN_0010219e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010419d(undefined8 *param_1)

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




long FUN_0010307e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_001026d8(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00103620(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351c(param_1,param_2);
  return param_1;
}




void FUN_00103fce(void)

{
  return;
}




void FUN_00103f55(void)

{
  return;
}




void FUN_00103cda(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102382(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010165b(0x30,param_2);
  uVar1 = FUN_00101be8(param_5);
  uVar2 = FUN_00101bd6(param_4);
  uVar3 = FUN_00101bc4(param_3);
  uVar4 = FUN_00101b18(param_2);
  uVar5 = FUN_001028d8(param_1);
                    /* try { // try from 00102411 to 00102415 has its CatchHandler @ 00102418 */
  FUN_00102918(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010355a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103f2c(void)

{
  return 0;
}




undefined8 FUN_00103888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001034cb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103620(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001017f8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103009(void)

{
  FUN_00102e8f();
  return;
}




void FUN_00103b4b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ffa(void)

{
  return;
}




undefined8 FUN_00103f1d(void)

{
  return 1;
}




void FUN_00103f81(void)

{
  return;
}




void FUN_001022fc(undefined8 param_1)

{
  FUN_001028c2(param_1);
  return;
}




undefined8 FUN_00102bc7(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102356(param_1);
  uVar2 = FUN_00101be8(param_4);
  uVar3 = FUN_00101bd6(param_3);
  uVar4 = FUN_00101bc4(param_2);
  FUN_00102382(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




bool FUN_0010411f(pthread_t *param_1)

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




void FUN_00103f76(void)

{
  return;
}




void FUN_00103312(undefined8 param_1)

{
  FUN_001034bc(param_1);
  return;
}




void FUN_001026ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102988(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102988(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001034bc(void)

{
  return;
}




void FUN_00103aa2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001027a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102988(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}



