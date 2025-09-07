
undefined8 FUN_00104090(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103c12(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_00104392(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00102c95(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_0010369a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103cdc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103e02(param_1);
  uVar2 = FUN_00104478(param_2);
  uVar1 = FUN_0010448e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00104308(param_1);
  uVar2 = FUN_001045fd(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001040f6(param_1);
  uVar2 = FUN_0010461b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104676(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048da(param_1,param_2,param_3);
  return;
}




void FUN_001045fd(undefined8 param_1)

{
  FUN_00102c68(param_1);
  return;
}




undefined8 FUN_0010570e(undefined8 *param_1)

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




undefined4 * FUN_00104836(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001043fe(param_2);
  puVar2 = (undefined4 *)FUN_00104a42(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_00103e02(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001046a8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104436(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103dc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010463a(param_1);
  FUN_00104676(uVar1,param_2,1);
  return;
}




undefined8 FUN_00103f4a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010461b(undefined8 param_1)

{
  FUN_00102c95(param_1);
  return;
}




void FUN_0010323a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00105529(void)

{
  return;
}




undefined8 FUN_0010476d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001030d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001040e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00104c12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104ae5(param_3);
  FUN_00104c6e(param_1,param_2,uVar1);
  return;
}




void FUN_00104a42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104ae5(param_2);
  FUN_00104af8(uVar1,uVar2);
  return;
}




void FUN_001054d1(void)

{
  return;
}




void FUN_0010464c(undefined8 param_1,undefined8 param_2)

{
  FUN_001048c6(param_1,param_2);
  return;
}




undefined8 FUN_00104420(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8
FUN_00103b28(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103e02(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010410c(param_3);
      uVar5 = FUN_00103ad5(param_4);
      cVar1 = FUN_0010319e(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103bac;
      }
    }
  }
  bVar2 = true;
LAB_00103bac:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103c12(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103d84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035ca(param_2);
  uVar2 = FUN_0010463a(param_1);
  FUN_0010464c(uVar2,uVar1);
  return;
}




void FUN_001057a6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010356c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103c12(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001054e7(void)

{
  return;
}




undefined8
FUN_0010325c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010369a(param_5);
  uVar2 = FUN_00103688(param_4);
  uVar3 = FUN_00103676(param_3);
  local_40 = FUN_001036ac(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001032d8 to 0010331b has its CatchHandler @ 00103359 */
  uVar1 = FUN_00103ad5(local_40);
  local_38 = FUN_0010372c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001034de(param_1,local_40);
    FUN_00103c12(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103b28(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010285f(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d6c(local_88);
  local_58[0] = 0;
                    /* try { // try from 001028b3 to 00102916 has its CatchHandler @ 00102962 */
  puVar1 = (undefined4 *)FUN_00102e70(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102e70(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102e70(local_88,local_58);
  *puVar1 = 7;
  FUN_00102dac(local_58,local_88);
                    /* try { // try from 0010291e to 00102922 has its CatchHandler @ 0010294d */
  FUN_00104db4(local_58);
  FUN_00102d8c(local_58);
  FUN_00102d8c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103636(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103f2c(param_2);
  uVar1 = FUN_00103f4a(uVar1);
  FUN_00103f5c(param_1,uVar1);
  return;
}




void FUN_00102cec(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104cb5(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102e70(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00104fbb("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105013(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
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




long FUN_001040f6(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001035ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010416a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001030d2(param_1);
  local_50 = FUN_00103e02(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103ad5(local_58);
    local_59 = FUN_0010319e(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001034b1(local_58);
    }
    else {
      local_58 = FUN_001034c7(local_58);
    }
  }
  FUN_00103c12(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00104780(param_1);
    cVar1 = FUN_00103130(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001047d0(local_38,&local_58,&local_50);
      goto LAB_001042ec;
    }
    FUN_00104366(&local_48);
  }
  uVar2 = FUN_0010410c(local_48);
  cVar1 = FUN_0010319e(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001043be(local_38,&local_48,&local_40);
  }
  else {
    FUN_001047d0(local_38,&local_58,&local_50);
  }
LAB_001042ec:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102d2c(undefined8 param_1)

{
  FUN_00102e12(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_0010412a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010476d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105112(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010317c(undefined8 *param_1)

{
  FUN_001035ca(*param_1);
  return;
}




void FUN_0010551e(void)

{
  return;
}




void FUN_00105013(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001046cf(undefined8 param_1,undefined8 param_2)

{
  FUN_00104902(param_1,param_2,0);
  return;
}




void FUN_00103068(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001034b1(local_28);
    FUN_00103068(param_1,uVar1);
    lVar2 = FUN_001034c7(local_28);
    FUN_001034de(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103fb2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102c3f(0x28,param_2);
  uVar1 = FUN_0010369a(param_5);
  uVar2 = FUN_00103688(param_4);
  uVar3 = FUN_00103676(param_3);
  uVar4 = FUN_001035ca(param_2);
  uVar5 = FUN_0010463a(param_1);
                    /* try { // try from 00104041 to 00104045 has its CatchHandler @ 00104048 */
  FUN_001046fd(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c80(undefined8 param_1,undefined8 param_2)

{
  FUN_00104464(param_1,param_2);
  return;
}




void FUN_0010410c(undefined8 param_1)

{
  FUN_00103ad5(param_1);
  return;
}




void FUN_00104fe1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001057f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e32(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030d2(param_1);
  FUN_00103068(param_1,uVar1);
  FUN_00102d2c(param_1);
  return;
}




void FUN_00102c55(void)

{
  return;
}




int FUN_001054ac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00104a7c(void)

{
  return 0x333333333333333;
}




undefined8 FUN_001048b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105787(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001054f2(void)

{
  return;
}




void FUN_0010503b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010524b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00104780(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103c12(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ec(param_2);
  FUN_00103ef4(param_1,uVar1);
  return;
}




void FUN_001050e7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104818(undefined8 param_1)

{
  FUN_00104a30(param_1);
  return;
}




void FUN_001054fd(void)

{
  return;
}




undefined8 FUN_001055c3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010558c,local_18);
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




void FUN_00102dd6(long param_1)

{
  FUN_00103028(param_1);
  FUN_00103048(param_1);
  FUN_00102cc2(param_1 + 8);
  return;
}




undefined8 FUN_00103676(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010463a(undefined8 param_1)

{
  return param_1;
}




void FUN_001043fe(long param_1)

{
  FUN_00104818(param_1 + 0x20);
  return;
}




void FUN_00103f2c(undefined8 param_1)

{
  FUN_001046ba(param_1);
  return;
}




void FUN_001035ca(long param_1)

{
  FUN_00103ed6(param_1 + 0x20);
  return;
}




undefined8 FUN_00104a1d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104a30(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010549d(void)

{
  return 0;
}




undefined4 FUN_0010319e(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010298f(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d6c(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102a45 to 00102b46 has its CatchHandler @ 00102b95 */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_00102dac(local_78,local_a8);
                    /* try { // try from 00102b4e to 00102b52 has its CatchHandler @ 00102b80 */
  FUN_00104eb3(local_78);
  FUN_00102d8c(local_78);
  FUN_00102d8c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010343e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cbe(local_18,param_1);
  FUN_00103cdc(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104ae5(param_3);
  puVar2 = (undefined8 *)FUN_00102c3f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00105508(void)

{
  return;
}




void FUN_00104bf4(undefined8 param_1)

{
  FUN_00104c4f(param_1);
  return;
}




void FUN_00102d4c(undefined8 param_1)

{
  FUN_00102dd6(param_1);
  return;
}




void FUN_00103f86(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010463a(param_1);
  FUN_001046cf(uVar1,1);
  return;
}




void FUN_00104952(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103676(param_3);
  uVar1 = FUN_00103688(param_4);
  FUN_001031d8(local_38,uVar1);
  FUN_0010369a(param_5);
  uVar1 = FUN_00102c3f(8,param_2);
                    /* try { // try from 001049da to 001049de has its CatchHandler @ 001049e1 */
  FUN_00104a94(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102629(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d6c(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001026df to 001027e0 has its CatchHandler @ 0010282f */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102e70(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_00102dac(local_78,local_a8);
                    /* try { // try from 001027e8 to 001027ec has its CatchHandler @ 0010281a */
  FUN_00104cb5(local_78);
  FUN_00102d8c(local_78);
  FUN_00102d8c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104b86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102c3f(0x28,param_2);
  uVar1 = FUN_00104ae5(param_3);
  uVar2 = FUN_001035ca(param_2);
  uVar3 = FUN_0010463a(param_1);
  FUN_00104c12(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c12(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010554a(void)

{
  return;
}




void FUN_001046fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010369a(param_5);
  uVar2 = FUN_00103688(param_4);
  uVar3 = FUN_00103676(param_3);
  FUN_00104952(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ed6(undefined8 param_1)

{
  FUN_001046a8(param_1);
  return;
}




void FUN_00104eb3(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102e70(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00104fbb("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105013(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
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




void FUN_00105555(void)

{
  return;
}




void FUN_001047d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104a1d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010476d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102bc5(void)

{
  FUN_0010285f();
  FUN_0010298f();
  return;
}




long FUN_00103428(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103ef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ec(param_2);
  FUN_00103f5c(param_1,uVar1);
  return;
}




long FUN_0010448e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104836(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010489a(param_2);
                    /* try { // try from 001044fd to 0010458f has its CatchHandler @ 001045bb */
    uVar2 = FUN_0010448e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001048b0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104836(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010489a(local_38);
      uVar2 = FUN_0010448e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001048b0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102dac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f9c(param_1,param_2);
  return;
}




void FUN_00103048(void)

{
  return;
}




void FUN_001057c5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001051bf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102d6c(undefined8 param_1)

{
  FUN_00102d4c(param_1);
  return;
}




void FUN_00105091(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001050bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001031c5(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00103156(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001035bc(param_1);
  return unaff_EBX;
}




undefined8 FUN_0010548e(void)

{
  return 1;
}




void FUN_0010556b(void)

{
  return;
}




undefined8 FUN_00102bda(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104fbb("Calling good()...");
  FUN_00102bc5();
  FUN_00104fbb("Finished good()");
  FUN_00104fbb("Calling bad()...");
  FUN_00102629();
  FUN_00104fbb("Finished bad()");
  return 0;
}




void FUN_00103caa(void)

{
  return;
}




long FUN_00102c68(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103f5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ec(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00104436(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c80(param_1,param_2);
  return param_1;
}




ulong FUN_001052ab(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d8c(undefined8 param_1)

{
  FUN_00102e32(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010372c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00104090(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103e02(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010410c(local_50);
    cVar2 = FUN_0010319e(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010410c(local_50);
      cVar2 = FUN_0010319e(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001043be(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001040f6(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001040f6(local_60);
          local_48[1] = 0;
          FUN_0010412a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00104392(local_48);
          uVar6 = FUN_0010410c(*puVar5);
          cVar2 = FUN_0010319e(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010416a(local_60,param_3);
          }
          else {
            lVar3 = FUN_001034b1(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010412a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010431e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00104308(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00104308(local_60);
        uVar6 = FUN_00104308(local_60);
        FUN_0010431e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00104366(local_48);
        uVar6 = FUN_0010410c(*puVar5);
        cVar2 = FUN_0010319e(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010416a(local_60,param_3);
        }
        else {
          lVar3 = FUN_001034b1(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010412a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010431e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103aba;
  }
  lVar3 = FUN_001040e0(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001037ce:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001040f6(local_60);
    uVar6 = FUN_0010410c(*puVar5);
    cVar2 = FUN_0010319e(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001037ce;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001040f6(local_60);
    local_48[1] = 0;
    FUN_0010412a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010416a(local_60,param_3);
  }
LAB_00103aba:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001034de(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d84(param_1,param_2);
  FUN_00103dc8(param_1,param_2);
  return;
}




void FUN_00104fbb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_001035bc(void)

{
  return;
}




void FUN_00105581(void)

{
  return;
}




void FUN_001048da(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00102e70(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001030e8(param_1,param_2);
  local_28 = FUN_00103112(param_1);
  cVar2 = FUN_00103130(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00103156(param_1);
    uVar3 = FUN_0010317c(&local_38);
    cVar2 = FUN_0010319e(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102f10;
    }
  }
  bVar1 = true;
LAB_00102f10:
  if (bVar1) {
    uVar3 = FUN_001031c5(param_2);
    FUN_00103202(local_30,uVar3);
    FUN_0010323a(&local_28,&local_38);
    local_38 = FUN_0010325c(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_0010317c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_001033a2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103c30(param_1,param_2);
  FUN_00103caa(param_1,param_2);
  FUN_00102cc2(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010513d(undefined4 param_1)

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




void FUN_00105197(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103688(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103130(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105218(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001034b1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001036ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103f86(param_1);
  uVar2 = FUN_0010369a(param_4);
  uVar3 = FUN_00103688(param_3);
  uVar4 = FUN_00103676(param_2);
  FUN_00103fb2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00104ae5(undefined8 param_1)

{
  return param_1;
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




undefined8 FUN_00103e18(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103ad5(local_38);
    cVar1 = FUN_0010319e(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001034b1(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001034c7(local_38);
    }
  }
  FUN_00103c12(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104902(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104a7c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_001031d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00103636(param_1,param_2);
  return;
}




void FUN_00104b44(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104bf4(param_2);
  puVar2 = (undefined4 *)FUN_00103f4a(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




long FUN_00104308(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001034a2(void)

{
  return;
}




undefined8 FUN_00104478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010351c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103e02(param_1);
  uVar2 = FUN_001030d2(param_1);
  FUN_00103e18(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103ad5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001043fe(param_1);
  FUN_00104420(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104c4f(undefined8 param_1)

{
  FUN_00103f2c(param_1);
  return;
}




void FUN_001048c6(void)

{
  return;
}




void FUN_0010558c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001043be(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010476d(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00103202(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035ec(param_2);
  FUN_001035fe(param_1,uVar1);
  return param_1;
}




void FUN_0010553f(void)

{
  return;
}




void FUN_00103058(void)

{
  return;
}




void FUN_00102e12(undefined8 param_1)

{
  FUN_00103058(param_1);
  return;
}




void FUN_00104a94(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104b44(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cbe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103028(undefined8 param_1)

{
  FUN_001034a2(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_00105513(void)

{
  return;
}




void FUN_00105860(void)

{
  return;
}




undefined8 FUN_0010489a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001051ea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00105534(void)

{
  return;
}




void FUN_001054c6(void)

{
  return;
}




void FUN_00105560(void)

{
  return;
}




void FUN_00104464(void)

{
  return;
}




undefined8 FUN_001046ba(undefined8 *param_1)

{
  return *param_1;
}




bool FUN_00105690(pthread_t *param_1)

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




void FUN_00102cc2(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00102cec(param_1);
  return;
}




undefined8 FUN_00103412(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102f9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033a2(param_1,param_2);
  lVar1 = FUN_00103412(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103428(param_1);
                    /* try { // try from 00102ff7 to 00102ffb has its CatchHandler @ 00103001 */
    uVar3 = FUN_0010343e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103112(undefined8 param_1)

{
  FUN_0010356c(param_1);
  return;
}




void FUN_00104db4(undefined8 param_1)

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
  piVar1 = (int *)FUN_00102e70(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00104fbb("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00105013(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
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




undefined8 FUN_00104af8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103f86(param_1);
  uVar2 = FUN_00104ae5(param_2);
  FUN_00104b86(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00105576(void)

{
  return;
}




undefined8 * FUN_00104366(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001034c7(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001030e8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351c(param_1,param_2);
  return;
}




void FUN_00105067(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_001053af(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102c3f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001054dc(void)

{
  return;
}




void FUN_0010431e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010476d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010476d(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001056eb(void *param_1)

{
  free(param_1);
  return 1;
}



