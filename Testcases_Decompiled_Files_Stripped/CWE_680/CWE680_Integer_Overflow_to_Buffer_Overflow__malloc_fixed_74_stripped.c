
void FUN_00101aa6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010220e(param_1);
  uVar2 = FUN_001021f8(param_1);
  FUN_00102224(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101b54(long param_1)

{
  FUN_001022e2(param_1 + 0x20);
  return;
}




void FUN_00103bbf(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103ab9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103126(undefined8 param_1)

{
  FUN_00103106(param_1);
  return;
}




void FUN_0010378b(undefined8 param_1)

{
  FUN_00103021(param_1);
  return;
}




undefined8 FUN_00103eb6(void)

{
  return 1;
}




ulong FUN_00103cd3(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102c03(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c28(void)

{
  return;
}




void FUN_00102954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  FUN_00102b38(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001021f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_001033e6(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102a26(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c03(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_001020b2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010220e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102518(param_3);
      uVar5 = FUN_0010205f(param_4);
      cVar1 = FUN_001018a2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102136;
      }
    }
  }
  bVar2 = true;
LAB_00102136:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021da(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010346f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035c4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101c00(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a6e(undefined8 param_1)

{
  FUN_00102c16(param_1);
  return;
}




undefined8 FUN_00101697(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102392(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102914(param_1);
  FUN_00102926(uVar1,1);
  return;
}




void FUN_00103146(undefined8 param_1)

{
  FUN_001031ec(param_1);
  return;
}




void FUN_00102ae8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c64(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00102858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b54(param_2);
  uVar2 = FUN_00102914(param_1);
  FUN_00102a8c(uVar2,uVar1);
  return;
}




void FUN_001023be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101697(0x28,param_2);
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  uVar4 = FUN_00101b54(param_2);
  uVar5 = FUN_00102914(param_1);
                    /* try { // try from 0010244d to 00102451 has its CatchHandler @ 00102454 */
  FUN_00102954(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102cce(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d10(param_2);
  puVar2 = (undefined4 *)FUN_00102356(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00104136(undefined8 *param_1)

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




void FUN_0010193e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103eee(void)

{
  return;
}




void FUN_001033fc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034fe(local_18,param_1);
  FUN_0010351c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c24(undefined8 param_1)

{
  return param_1;
}




long FUN_0010361c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001037c8(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010382c(param_2);
                    /* try { // try from 0010368b to 0010371d has its CatchHandler @ 00103749 */
    uVar2 = FUN_0010361c(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103842(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001037c8(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010382c(local_38);
      uVar2 = FUN_0010361c(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103842(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103fa9(void)

{
  return;
}




void FUN_00103f88(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102518(undefined8 param_1)

{
  FUN_0010205f(param_1);
  return;
}




void FUN_00103ae4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001038f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101697(0x28,param_2);
  uVar1 = FUN_00103892(param_3);
  uVar2 = FUN_00101b54(param_2);
  uVar3 = FUN_00102914(param_1);
  FUN_0010395e(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c73(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101af6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c12(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c40(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101880(undefined8 *param_1)

{
  FUN_00101b54(*param_1);
  return;
}




void FUN_00103f04(void)

{
  return;
}




void FUN_0010399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103892(param_3);
  puVar2 = (undefined8 *)FUN_00101697(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_0010307c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030a6(param_1);
  return;
}




undefined8
FUN_00101960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  local_40 = FUN_00101c36(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019dc to 00101a1f has its CatchHandler @ 00101a5d */
  uVar1 = FUN_0010205f(local_40);
  local_38 = FUN_00101cb6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010219c(param_1,local_40);
    FUN_001021da(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020b2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102926(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ae8(param_1,param_2,0);
  return;
}




void FUN_00102d2e(undefined8 param_1)

{
  FUN_00102338(param_1);
  return;
}




undefined8 FUN_00101c36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_00101c24(param_4);
  uVar3 = FUN_00101c12(param_3);
  uVar4 = FUN_00101c00(param_2);
  FUN_001023be(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_0010351c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010220e(param_1);
  uVar2 = FUN_00103606(param_2);
  uVar1 = FUN_0010361c(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102714(param_1);
  uVar2 = FUN_0010378b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102502(param_1);
  uVar2 = FUN_001037a9(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103360(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010346f(param_1,param_2);
  FUN_001034ea(param_1,param_2);
  FUN_0010307c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102338(param_2);
  uVar1 = FUN_00102356(uVar1);
  FUN_00102368(param_1,uVar1);
  return;
}




void FUN_00103f9e(void)

{
  return;
}




void FUN_00102820(long param_1)

{
  FUN_00102a6e(param_1 + 0x20);
  return;
}




undefined8 FUN_001029d6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032d6(void)

{
  return;
}




void FUN_0010272a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102842(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101b76(undefined8 param_1)

{
  return param_1;
}




void FUN_00101509(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001016c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a3b(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c16(undefined8 param_1)

{
  return param_1;
}




void FUN_001041af(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001024ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103166(undefined8 param_1,undefined8 param_2)

{
  FUN_0010322a(param_1,param_2);
  return;
}




void FUN_001027e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001021da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00102368(param_1,uVar1);
  return;
}




void FUN_001039e3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010249c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a3b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f5c(void)

{
  return;
}




void FUN_00103b3a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102c64(void)

{
  return 0x333333333333333;
}




undefined8 FUN_001038a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_00103892(param_2);
  FUN_001038f0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103f93(void)

{
  return;
}




void FUN_0010219c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102858(param_1,param_2);
  FUN_0010289c(param_1,param_2);
  return;
}




undefined8 * FUN_00102772(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001031cc(undefined8 param_1)

{
  FUN_001032e6(param_1);
  return;
}




void FUN_001032b6(undefined8 param_1)

{
  FUN_00103460(param_1);
  return;
}




void FUN_001015d0(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001016c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a3b(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102224(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010205f(local_38);
    cVar1 = FUN_001018a2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010279e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028d6(local_38);
    }
  }
  FUN_001021da(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001041ce(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001031ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f8(param_1);
  FUN_001032f6(param_1,uVar1);
  FUN_001030e6(param_1);
  return;
}




void FUN_00102368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001034ea(void)

{
  return;
}




void FUN_00102d10(undefined8 param_1)

{
  FUN_00102d2e(param_1);
  return;
}




undefined4 FUN_0010185a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b46(param_1);
  return unaff_EBX;
}




void FUN_00103b0f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c3c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 * FUN_001027b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010395e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103892(param_3);
  FUN_0010399c(param_1,param_2,uVar1);
  return;
}




long FUN_00102714(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103190(long param_1)

{
  FUN_001032b6(param_1);
  FUN_001032d6(param_1);
  FUN_0010307c(param_1 + 8);
  return;
}




undefined8 FUN_001033d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




int FUN_00103ed4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001028fe(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104290(void)

{
  return;
}




undefined8 FUN_00103892(undefined8 param_1)

{
  return param_1;
}




void FUN_00102338(undefined8 param_1)

{
  FUN_001028fe(param_1);
  return;
}




undefined8 FUN_00103606(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010205f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102820(param_1);
  FUN_00102842(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010220e(long param_1)

{
  return param_1 + 8;
}




long FUN_0010304e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103858(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103892(param_2);
  FUN_001038a4(uVar1,uVar2);
  return;
}




void FUN_00102ab6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c3c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001035c4(undefined8 param_1,undefined8 param_2)

{
  FUN_001034c0(param_1,param_2);
  return param_1;
}




void FUN_00102e7c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103126(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102ed0 to 00102f33 has its CatchHandler @ 00102f7f */
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  FUN_00103166(local_58,local_88);
                    /* try { // try from 00102f3b to 00102f3f has its CatchHandler @ 00102f6a */
  FUN_001015d0(local_58);
  FUN_00103146(local_58);
  FUN_00103146(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102576(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021f8(param_1);
  local_50 = FUN_0010220e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010205f(local_58);
    local_59 = FUN_001018a2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010279e(local_58);
    }
    else {
      local_58 = FUN_001028d6(local_58);
    }
  }
  FUN_001021da(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029d6(param_1);
    cVar1 = FUN_00101834(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a26(local_38,&local_58,&local_50);
      goto LAB_001026f8;
    }
    FUN_00102772(&local_48);
  }
  uVar2 = FUN_00102518(local_48);
  cVar1 = FUN_001018a2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a26(local_38,&local_58,&local_50);
  }
LAB_001026f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103feb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103fb4,local_18);
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




void FUN_00103fb4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001016ad(void)

{
  return;
}




void FUN_00103a63(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001018c9(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f1a(void)

{
  return;
}




void FUN_001030a6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001034fe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b65(undefined4 param_1)

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




void FUN_00103f0f(void)

{
  return;
}




void FUN_00102d4c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103126(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102da0 to 00102e03 has its CatchHandler @ 00102e4f */
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x40000001;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x40000001;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x40000001;
  FUN_00103166(local_58,local_88);
                    /* try { // try from 00102e0b to 00102e0f has its CatchHandler @ 00102e3a */
  FUN_00101509(local_58);
  FUN_00103146(local_58);
  FUN_00103146(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101834(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001022e2(undefined8 param_1)

{
  FUN_001028ec(param_1);
  return;
}




void FUN_00102c7c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cce(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102502(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c00(param_3);
  uVar1 = FUN_00101c12(param_4);
  FUN_001018dc(local_38,uVar1);
  FUN_00101c24(param_5);
  uVar1 = FUN_00101697(8,param_2);
                    /* try { // try from 00102bc0 to 00102bc4 has its CatchHandler @ 00102bc7 */
  FUN_00102c7c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f7d(void)

{
  return;
}




void FUN_00101b46(void)

{
  return;
}




void FUN_00103f3b(void)

{
  return;
}




long FUN_001016c0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017ec(param_1,param_2);
  local_28 = FUN_00101816(param_1);
  cVar2 = FUN_00101834(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010185a(param_1);
    uVar3 = FUN_00101880(&local_38);
    cVar2 = FUN_001018a2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101760;
    }
  }
  bVar1 = true;
LAB_00101760:
  if (bVar1) {
    uVar3 = FUN_001018c9(param_2);
    FUN_00101906(local_30,uVar3);
    FUN_0010193e(&local_28,&local_38);
    local_38 = FUN_00101960(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101880(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




bool FUN_001040b8(pthread_t *param_1)

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




void FUN_00103a09(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001028d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102356(undefined8 param_1)

{
  return param_1;
}




void FUN_00103460(void)

{
  return;
}




void FUN_00101b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00102300(param_1,uVar1);
  return;
}




void FUN_00102a8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c28(param_1,param_2);
  return;
}




undefined8 FUN_001029c4(undefined8 param_1)

{
  return param_1;
}




void FUN_001030e6(undefined8 param_1)

{
  FUN_001031cc(param_1);
  return;
}




void FUN_00103106(undefined8 param_1)

{
  FUN_00103190(param_1);
  return;
}




void FUN_00103a8f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f46(void)

{
  return;
}




void FUN_00101816(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




void FUN_001035f2(void)

{
  return;
}




undefined8 FUN_001028ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104113(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103f72(void)

{
  return;
}




void FUN_001032f6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010279e(local_28);
    FUN_001032f6(param_1,uVar1);
    lVar2 = FUN_001028d6(local_28);
    FUN_0010219c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010279e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f51(void)

{
  return;
}




void FUN_001041ed(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103f30(void)

{
  return;
}




ulong FUN_00103dd7(long param_1,ulong param_2,long param_3)

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




void FUN_001018dc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc0(param_1,param_2);
  return;
}




void FUN_00103c12(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102914(undefined8 param_1)

{
  return param_1;
}




void FUN_00103be7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103ec5(void)

{
  return 0;
}




void FUN_00103ef9(void)

{
  return;
}




void FUN_00103f25(void)

{
  return;
}




undefined8 FUN_0010382c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010249c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010220e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102518(local_50);
    cVar2 = FUN_001018a2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102518(local_50);
      cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102502(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102502(local_60);
          local_48[1] = 0;
          FUN_00102536(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027b4(local_48);
          uVar6 = FUN_00102518(*puVar5);
          cVar2 = FUN_001018a2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102576(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010279e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102536(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010272a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102714(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102714(local_60);
        uVar6 = FUN_00102714(local_60);
        FUN_0010272a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102772(local_48);
        uVar6 = FUN_00102518(*puVar5);
        cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102576(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010279e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102536(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010272a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102044;
  }
  lVar3 = FUN_001024ec(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d58:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102502(local_60);
    uVar6 = FUN_00102518(*puVar5);
    cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d58;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102502(local_60);
    local_48[1] = 0;
    FUN_00102536(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102576(local_60,param_3);
  }
LAB_00102044:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010322a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103360(param_1,param_2);
  lVar1 = FUN_001033d0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001033e6(param_1);
                    /* try { // try from 00103285 to 00103289 has its CatchHandler @ 0010328f */
    uVar3 = FUN_001033fc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001034c0(undefined8 param_1,undefined8 param_2)

{
  FUN_001035f2(param_1,param_2);
  return;
}




void FUN_001017ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aa6(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001032e6(void)

{
  return;
}




undefined4 * FUN_001037c8(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102820(param_2);
  puVar2 = (undefined4 *)FUN_00103858(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102fbc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039e3("Calling good()...");
  FUN_00102fac();
  FUN_001039e3("Finished good()");
  FUN_001039e3("Calling bad()...");
  FUN_00102d4c();
  FUN_001039e3("Finished bad()");
  return 0;
}




undefined8 FUN_00101906(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00101b88(param_1,uVar1);
  return param_1;
}




void FUN_0010289c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102914(param_1);
  FUN_00102ab6(uVar1,param_2,1);
  return;
}




long FUN_00103021(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102536(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103842(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001037a9(undefined8 param_1)

{
  FUN_0010304e(param_1);
  return;
}




void FUN_00103f67(void)

{
  return;
}




void FUN_00104220(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined4 FUN_001018a2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102fac(void)

{
  FUN_00102e7c();
  return;
}



