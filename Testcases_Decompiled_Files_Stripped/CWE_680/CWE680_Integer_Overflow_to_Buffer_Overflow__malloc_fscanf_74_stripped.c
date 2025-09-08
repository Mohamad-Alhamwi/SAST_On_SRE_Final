
undefined8 FUN_00102862(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001029f6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103498(void)

{
  return;
}




void FUN_00103f5d(void)

{
  return;
}




void FUN_00102c48(void)

{
  return;
}




undefined8 FUN_001029e4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c44(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024bc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fcb(void)

{
  return;
}




void FUN_001021bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102878(param_1,param_2);
  FUN_001028bc(param_1,param_2);
  return;
}




void FUN_0010317e(undefined8 param_1)

{
  FUN_00103224(param_1);
  return;
}




void FUN_001023b2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102934(param_1);
  FUN_00102946(uVar1,1);
  return;
}




void FUN_00102388(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b96(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103fec(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103f9f(void)

{
  return;
}




void FUN_00103fe1(void)

{
  return;
}




void FUN_001041e7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103b1c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102302(undefined8 param_1)

{
  FUN_0010290c(param_1);
  return;
}




undefined8 FUN_001038dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023b2(param_1);
  uVar2 = FUN_001038ca(param_2);
  FUN_00103928(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_00102522(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103f89(void)

{
  return;
}




void FUN_00102ad6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c5c(param_1,param_2,param_3);
  return;
}




void FUN_00103fd6(void)

{
  return;
}




void FUN_00102d30(undefined8 param_1)

{
  FUN_00102d4e(param_1);
  return;
}




void FUN_00101b74(long param_1)

{
  FUN_00102302(param_1 + 0x20);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102a46(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c23(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_00101980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c44(param_5);
  uVar2 = FUN_00101c32(param_4);
  uVar3 = FUN_00101c20(param_3);
  local_40 = FUN_00101c56(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019fc to 00101a3f has its CatchHandler @ 00101a7d */
  uVar1 = FUN_0010207f(local_40);
  local_38 = FUN_00101cd6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021bc(param_1,local_40);
    FUN_001021fa(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020d2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00103eee(void)

{
  return 1;
}




void FUN_001018fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101be0(param_1,param_2);
  return;
}




void FUN_001030b4(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030de(param_1);
  return;
}




void FUN_00103b47(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102358(undefined8 param_1)

{
  FUN_0010291e(param_1);
  return;
}




void FUN_0010330e(void)

{
  return;
}




void FUN_00103f3c(void)

{
  return;
}




void FUN_001034f8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010362a(param_1,param_2);
  return;
}




void FUN_00101529(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016e0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a73(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fe4(void)

{
  FUN_00102eb4();
  return;
}




void FUN_00103f26(void)

{
  return;
}




void FUN_00102c5c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00102734(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102934(undefined8 param_1)

{
  return param_1;
}




void FUN_00103522(void)

{
  return;
}




void FUN_00102946(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b08(param_1,param_2,0);
  return;
}




void FUN_00103204(undefined8 param_1)

{
  FUN_0010331e(param_1);
  return;
}




void FUN_00102aac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c48(param_1,param_2);
  return;
}




void FUN_00102320(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b96(param_2);
  FUN_00102388(param_1,uVar1);
  return;
}




undefined8 FUN_00102376(undefined8 param_1)

{
  return param_1;
}




void FUN_00102800(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103a41(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010195e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102878(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b74(param_2);
  uVar2 = FUN_00102934(param_1);
  FUN_00102aac(uVar2,uVar1);
  return;
}




void FUN_0010315e(undefined8 param_1)

{
  FUN_0010313e(param_1);
  return;
}




void FUN_0010207f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102840(param_1);
  FUN_00102862(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001038ca(undefined8 param_1)

{
  return param_1;
}




void FUN_001042c0(void)

{
  return;
}




void FUN_00103faa(void)

{
  return;
}




undefined8
FUN_001020d2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010222e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102538(param_3);
      uVar5 = FUN_0010207f(param_4);
      cVar1 = FUN_001018c2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102156;
      }
    }
  }
  bVar2 = true;
LAB_00102156:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021fa(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101b96(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c3(undefined8 param_1)

{
  FUN_00103059(param_1);
  return;
}




void FUN_00104250(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001021fa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_0010341e(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102c36(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c84(void)

{
  return 0x333333333333333;
}




void FUN_00103f31(void)

{
  return;
}




undefined4 FUN_0010187a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b66(param_1);
  return unaff_EBX;
}




void FUN_0010274a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010363e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f47(void)

{
  return;
}




undefined8 FUN_00101926(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b96(param_2);
  FUN_00101ba8(param_1,uVar1);
  return param_1;
}




void FUN_00102a8e(undefined8 param_1)

{
  FUN_00102c36(param_1);
  return;
}




undefined8 FUN_0010416e(undefined8 *param_1)

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




int FUN_00103f0c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101c56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023b2(param_1);
  uVar2 = FUN_00101c44(param_4);
  uVar3 = FUN_00101c32(param_3);
  uVar4 = FUN_00101c20(param_2);
  FUN_001023de(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103a73(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010331e(void)

{
  return;
}




void FUN_00103c1f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001023de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016b7(0x28,param_2);
  uVar1 = FUN_00101c44(param_5);
  uVar2 = FUN_00101c32(param_4);
  uVar3 = FUN_00101c20(param_3);
  uVar4 = FUN_00101b74(param_2);
  uVar5 = FUN_00102934(param_1);
                    /* try { // try from 0010246d to 00102471 has its CatchHandler @ 00102474 */
  FUN_00102974(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b96(param_2);
  FUN_00102320(param_1,uVar1);
  return;
}




void FUN_00103536(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102538(undefined8 param_1)

{
  FUN_0010207f(param_1);
  return;
}




void FUN_00104225(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102b08(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c84(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_001028f6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_001027d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001032ee(undefined8 param_1)

{
  FUN_00103498(param_1);
  return;
}




void FUN_00103f94(void)

{
  return;
}




long FUN_00103059(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




bool FUN_001040f0(pthread_t *param_1)

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




long FUN_0010222e(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101c32(undefined8 param_1)

{
  return param_1;
}




void FUN_0010332e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027be(local_28);
    FUN_0010332e(param_1,uVar1);
    lVar2 = FUN_001028f6(local_28);
    FUN_001021bc(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010291e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103bf7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010414b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010362a(void)

{
  return;
}




void FUN_0010311e(undefined8 param_1)

{
  FUN_00103204(param_1);
  return;
}




undefined8 FUN_0010387a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c9c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cee(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103554(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010222e(param_1);
  uVar2 = FUN_0010363e(param_2);
  uVar1 = FUN_00103654(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102734(param_1);
  uVar2 = FUN_001037c3(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102522(param_1);
  uVar2 = FUN_001037e1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 * FUN_00102792(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101ac6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010222e(param_1);
  uVar2 = FUN_00102218(param_1);
  FUN_00102244(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c44(param_5);
  uVar2 = FUN_00101c32(param_4);
  uVar3 = FUN_00101c20(param_3);
  FUN_00102b58(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103a9b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103a1b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001016b7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103398(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034a7(param_1,param_2);
  FUN_00103522(param_1,param_2);
  FUN_001030b4(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fb5(void)

{
  return;
}




void FUN_00103434(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103536(local_18,param_1);
  FUN_00103554(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104206(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001035fc(undefined8 param_1,undefined8 param_2)

{
  FUN_001034f8(param_1,param_2);
  return param_1;
}




void FUN_00103f73(void)

{
  return;
}




void FUN_001015f0(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016e0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a73(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103d0b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_00103224(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102218(param_1);
  FUN_0010332e(param_1,uVar1);
  FUN_0010311e(param_1);
  return;
}




undefined8 FUN_0010250c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103efd(void)

{
  return 0;
}




undefined8 FUN_001018e9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102eb4(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010315e(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f08 to 00102f6b has its CatchHandler @ 00102fb7 */
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = 0x14;
  FUN_0010319e(local_58,local_88);
                    /* try { // try from 00102f73 to 00102f77 has its CatchHandler @ 00102fa2 */
  FUN_001015f0(local_58);
  FUN_0010317e(local_58);
  FUN_0010317e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037e1(undefined8 param_1)

{
  FUN_00103086(param_1);
  return;
}




void FUN_00103b72(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030de(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010180c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ac6(param_1,param_2);
  return;
}




undefined8 FUN_00101b16(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fa(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f52(void)

{
  return;
}




void FUN_001039d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001038ca(param_3);
  puVar2 = (undefined8 *)FUN_001016b7(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103c78(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c20(param_3);
  uVar1 = FUN_00101c32(param_4);
  FUN_001018fc(local_38,uVar1);
  FUN_00101c44(param_5);
  uVar1 = FUN_001016b7(8,param_2);
                    /* try { // try from 00102be0 to 00102be4 has its CatchHandler @ 00102be7 */
  FUN_00102c9c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001027be(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001031c8(long param_1)

{
  FUN_001032ee(param_1);
  FUN_0010330e(param_1);
  FUN_001030b4(param_1 + 8);
  return;
}




void FUN_00103f68(void)

{
  return;
}




void FUN_00101836(undefined8 param_1)

{
  FUN_00101b16(param_1);
  return;
}




void FUN_00103262(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103398(param_1,param_2);
  lVar1 = FUN_00103408(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010341e(param_1);
                    /* try { // try from 001032bd to 001032c1 has its CatchHandler @ 001032c7 */
    uVar3 = FUN_00103434(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102cee(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d30(param_2);
  puVar2 = (undefined4 *)FUN_00102376(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_0010313e(undefined8 param_1)

{
  FUN_001031c8(param_1);
  return;
}




void FUN_00101b66(void)

{
  return;
}




undefined8 FUN_00102244(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010207f(local_38);
    cVar1 = FUN_001018c2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027be(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028f6(local_38);
    }
  }
  FUN_001021fa(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00104023(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103fec,local_18);
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




undefined4 FUN_001018c2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102596(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102218(param_1);
  local_50 = FUN_0010222e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010207f(local_58);
    local_59 = FUN_001018c2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027be(local_58);
    }
    else {
      local_58 = FUN_001028f6(local_58);
    }
  }
  FUN_001021fa(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029f6(param_1);
    cVar1 = FUN_00101854(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a46(local_38,&local_58,&local_50);
      goto LAB_00102718;
    }
    FUN_00102792(&local_48);
  }
  uVar2 = FUN_00102538(local_48);
  cVar1 = FUN_001018c2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102800(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a46(local_38,&local_58,&local_50);
  }
LAB_00102718:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103ac7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103c4a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102840(long param_1)

{
  FUN_00102a8e(param_1 + 0x20);
  return;
}




ulong FUN_00103e0f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101854(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103f7e(void)

{
  return;
}




undefined8 FUN_0010290c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102358(param_2);
  uVar1 = FUN_00102376(uVar1);
  FUN_00102388(param_1,uVar1);
  return;
}




long FUN_00103086(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




long FUN_001016e0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010180c(param_1,param_2);
  local_28 = FUN_00101836(param_1);
  cVar2 = FUN_00101854(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010187a(param_1);
    uVar3 = FUN_001018a0(&local_38);
    cVar2 = FUN_001018c2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101780;
    }
  }
  bVar1 = true;
LAB_00101780:
  if (bVar1) {
    uVar3 = FUN_001018e9(param_2);
    FUN_00101926(local_30,uVar3);
    FUN_0010195e(&local_28,&local_38);
    local_38 = FUN_00101980(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018a0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103af1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103890(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038ca(param_2);
  FUN_001038dc(uVar1,uVar2);
  return;
}




long FUN_00103654(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103800(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103864(param_2);
                    /* try { // try from 001036c3 to 00103755 has its CatchHandler @ 00103781 */
    uVar2 = FUN_00103654(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010387a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103800(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103864(local_38);
      uVar2 = FUN_00103654(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010387a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103fc0(void)

{
  return;
}




undefined8 FUN_00102ff4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a1b("Calling good()...");
  FUN_00102fe4();
  FUN_00103a1b("Finished good()");
  FUN_00103a1b("Calling bad()...");
  FUN_00102d6c();
  FUN_00103a1b("Finished bad()");
  return 0;
}




undefined8 FUN_00103864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010319e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103262(param_1,param_2);
  return;
}




void FUN_001016cd(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102d6c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010315e(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 00102dbe to 00102e3b has its CatchHandler @ 00102e87 */
  __isoc99_fscanf(stdin,&DAT_0010500a,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016e0(local_88,local_58);
  *puVar1 = local_8c;
  FUN_0010319e(local_58,local_88);
                    /* try { // try from 00102e43 to 00102e47 has its CatchHandler @ 00102e72 */
  FUN_00101529(local_58);
  FUN_0010317e(local_58);
  FUN_0010317e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102934(param_1);
  FUN_00102ad6(uVar1,param_2,1);
  return;
}




undefined8 FUN_001034a7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035fc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b9d(undefined4 param_1)

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




undefined4 * FUN_00103800(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102840(param_2);
  puVar2 = (undefined4 *)FUN_00103890(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103996(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038ca(param_3);
  FUN_001039d4(param_1,param_2,uVar1);
  return;
}




void FUN_00102556(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029e4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103cab(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016b7(0x28,param_2);
  uVar1 = FUN_001038ca(param_3);
  uVar2 = FUN_00101b74(param_2);
  uVar3 = FUN_00102934(param_1);
  FUN_00103996(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102c23(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c20(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d4e(undefined8 param_1)

{
  FUN_00102358(param_1);
  return;
}




void FUN_001018a0(undefined8 *param_1)

{
  FUN_00101b74(*param_1);
  return;
}




undefined8 FUN_00103408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024bc(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010222e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102538(local_50);
    cVar2 = FUN_001018c2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102538(local_50);
      cVar2 = FUN_001018c2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102800(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102522(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102522(local_60);
          local_48[1] = 0;
          FUN_00102556(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027d4(local_48);
          uVar6 = FUN_00102538(*puVar5);
          cVar2 = FUN_001018c2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102596(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027be(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102556(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010274a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102734(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102734(local_60);
        uVar6 = FUN_00102734(local_60);
        FUN_0010274a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102792(local_48);
        uVar6 = FUN_00102538(*puVar5);
        cVar2 = FUN_001018c2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102596(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027be(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102556(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010274a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102064;
  }
  lVar3 = FUN_0010250c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d78:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102522(local_60);
    uVar6 = FUN_00102538(*puVar5);
    cVar2 = FUN_001018c2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d78;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102522(local_60);
    local_48[1] = 0;
    FUN_00102556(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102596(local_60,param_3);
  }
LAB_00102064:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}



