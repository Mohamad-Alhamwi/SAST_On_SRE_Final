
long FUN_001027ae(long param_1)

{
  return param_1 + 0x18;
}




bool FUN_001041a1(pthread_t *param_1)

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




undefined8 FUN_00102970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033b4(void)

{
  return;
}




undefined8 FUN_00103fae(void)

{
  return 0;
}




void FUN_00102b08(undefined8 param_1)

{
  FUN_00102cb0(param_1);
  return;
}




void FUN_00102936(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ae(param_1);
  FUN_00102b50(uVar1,param_2,1);
  return;
}




void FUN_00101be0(void)

{
  return;
}




void FUN_0010237c(undefined8 param_1)

{
  FUN_00102986(param_1);
  return;
}




void FUN_0010402f(void)

{
  return;
}




undefined8 FUN_00101c9a(undefined8 param_1)

{
  return param_1;
}




long FUN_00103100(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_001022a8(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102292(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104050(void)

{
  return;
}




void FUN_00104003(void)

{
  return;
}




void FUN_00104045(void)

{
  return;
}




void FUN_00104087(void)

{
  return;
}




void FUN_00103a7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103970(param_3);
  puVar3 = (undefined8 *)FUN_00101731(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001020f9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028ba(param_1);
  FUN_001028dc(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103869(undefined8 param_1)

{
  FUN_00103100(param_1);
  return;
}




undefined8 FUN_001041fc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001023d2(undefined8 param_1)

{
  FUN_00102998(param_1);
  return;
}




void FUN_00103fed(void)

{
  return;
}




void FUN_001029c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b82(param_1,param_2,0);
  return;
}




void FUN_0010403a(void)

{
  return;
}




undefined8 FUN_00102c9d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101976(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c5a(param_1,param_2);
  return;
}




undefined8 FUN_00102986(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018f4(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101be0(param_1);
  return unaff_EBX;
}




void FUN_00103ca8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101886(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b40(param_1,param_2);
  return;
}




void FUN_00102dc9(undefined8 param_1)

{
  FUN_001023d2(param_1);
  return;
}




void FUN_00103acc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102236(undefined8 param_1,undefined8 param_2)

{
  FUN_001028f2(param_1,param_2);
  FUN_00102936(param_1,param_2);
  return;
}




void FUN_00103224(undefined8 param_1)

{
  FUN_001032ca(param_1);
  return;
}




ulong FUN_00103dbc(long param_1,ulong param_2,long param_3)

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




void FUN_001033d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102838(local_28);
    FUN_001033d4(param_1,uVar1);
    lVar2 = FUN_00102970(local_28);
    FUN_00102236(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010421f(undefined8 *param_1)

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




undefined8 FUN_00102cfe(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103d29(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b26(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc2(param_1,param_2);
  return;
}




void FUN_00102458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101731(0x30,param_2);
  uVar1 = FUN_00101cbe(param_5);
  uVar2 = FUN_00101cac(param_4);
  uVar3 = FUN_00101c9a(param_3);
  uVar4 = FUN_00101bee(param_2);
  uVar5 = FUN_001029ae(param_1);
                    /* try { // try from 001024e7 to 001024eb has its CatchHandler @ 001024ee */
  FUN_001029ee(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001042d6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001028ba(long param_1)

{
  FUN_00102b08(param_1 + 0x20);
  return;
}




void FUN_0010343e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010354d(param_1,param_2);
  FUN_001035c8(param_1,param_2);
  FUN_0010315a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001028dc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103184(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001029ae(undefined8 param_1)

{
  return param_1;
}




void FUN_001042b7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8
FUN_0010214c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022a8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025b2(param_3);
      uVar5 = FUN_001020f9(param_4);
      cVar1 = FUN_0010193c(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021d0;
      }
    }
  }
  bVar2 = true;
LAB_001021d0:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102274(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102274(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001025d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a5e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103936(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103970(param_2);
  FUN_00103982(uVar1,uVar2);
  return;
}




undefined8 FUN_001018ce(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001027c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5e(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010309b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103acc("Calling good()...");
  FUN_0010308b();
  FUN_00103acc("Finished good()");
  FUN_00103acc("Calling bad()...");
  FUN_00102de7();
  FUN_00103acc("Finished bad()");
  return 0;
}




void FUN_00101c22(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c10(param_2);
  FUN_0010239a(param_1,uVar1);
  return;
}




long FUN_001036fa(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038a6(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010390a(param_2);
                    /* try { // try from 00103769 to 001037fb has its CatchHandler @ 00103827 */
    uVar2 = FUN_001036fa(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103920(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038a6(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010390a(local_38);
      uVar2 = FUN_001036fa(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103920(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_001040d4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010409d,local_18);
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




void FUN_0010400e(void)

{
  return;
}




void FUN_00104298(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d2(param_2);
  uVar1 = FUN_001023f0(uVar1);
  FUN_00102402(param_1,uVar1);
  return;
}




undefined8 FUN_001019a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c10(param_2);
  FUN_00101c22(param_1,uVar1);
  return param_1;
}




void FUN_001035c8(void)

{
  return;
}




undefined8 FUN_00101cac(undefined8 param_1)

{
  return param_1;
}




void FUN_00103308(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010343e(param_1,param_2);
  lVar1 = FUN_001034ae(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034c4(param_1);
                    /* try { // try from 00103363 to 00103367 has its CatchHandler @ 0010336d */
    uVar3 = FUN_001034da(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c9d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd6(param_1,param_2,param_3);
  return;
}




void FUN_00103d5c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010161d(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_354;
  ulong local_350;
  ulong local_348;
  void *local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_354 = 2;
  plVar1 = (long *)FUN_0010175a(param_1,&local_354);
  local_340 = (void *)*plVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_348 * 8 + (long)local_340) = (&uStack_338)[local_348];
  }
  FUN_00103d29(local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102536(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102274(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010354d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036a2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103ec0(long param_1,ulong param_2,long param_3)

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




void FUN_001018b0(undefined8 param_1)

{
  FUN_00101b90(param_1);
  return;
}




undefined8 FUN_00102998(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010407c(void)

{
  return;
}




void FUN_00103cfb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101bee(long param_1)

{
  FUN_0010237c(param_1 + 0x20);
  return;
}




undefined8 FUN_00103970(undefined8 param_1)

{
  return param_1;
}




void FUN_00103244(undefined8 param_1,undefined8 param_2)

{
  FUN_00103308(param_1,param_2);
  return;
}




void FUN_00103b78(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001022be(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020f9(local_38);
    cVar1 = FUN_0010193c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102838(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102970(local_38);
    }
  }
  FUN_00102274(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001019d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001034ae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001023f0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010409d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cbe(param_5);
  uVar2 = FUN_00101cac(param_4);
  uVar3 = FUN_00101c9a(param_3);
  FUN_00102bd2(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001025b2(undefined8 param_1)

{
  FUN_001020f9(param_1);
  return;
}




void FUN_00103204(undefined8 param_1)

{
  FUN_001031e4(param_1);
  return;
}




void FUN_00103ff8(void)

{
  return;
}




void FUN_00102d68(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102dab(param_2);
  puVar2 = (undefined4 *)FUN_001023f0(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00104066(void)

{
  return;
}




undefined8 FUN_00101cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010242c(param_1);
  uVar2 = FUN_00101cbe(param_4);
  uVar3 = FUN_00101cac(param_3);
  uVar4 = FUN_00101c9a(param_2);
  FUN_00102458(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00101b90(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102274(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010326e(long param_1)

{
  FUN_00103394(param_1);
  FUN_001033b4(param_1);
  FUN_0010315a(param_1 + 8);
  return;
}




void FUN_0010287a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5e(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103b4c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104071(void)

{
  return;
}




void FUN_0010353e(void)

{
  return;
}




void FUN_00102f39(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103204(local_88);
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102fa9 to 00103012 has its CatchHandler @ 0010305e */
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103244(local_58,local_88);
                    /* try { // try from 0010301a to 0010301e has its CatchHandler @ 00103049 */
  FUN_0010161d(local_58);
  FUN_00103224(local_58);
  FUN_00103224(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036d0(void)

{
  return;
}




void FUN_00102b82(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cfe(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




long FUN_001034c4(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102586(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010191a(undefined8 *param_1)

{
  FUN_00101bee(*param_1);
  return;
}




undefined8 FUN_00101cbe(undefined8 param_1)

{
  return param_1;
}




void FUN_001028f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bee(param_2);
  uVar2 = FUN_001029ae(param_1);
  FUN_00102b26(uVar2,uVar1);
  return;
}




undefined8 FUN_00103982(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010242c(param_1);
  uVar2 = FUN_00103970(param_2);
  FUN_001039ce(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00103920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001032aa(undefined8 param_1)

{
  FUN_001033c4(param_1);
  return;
}




void FUN_00104019(void)

{
  return;
}




void FUN_00103394(undefined8 param_1)

{
  FUN_0010353e(param_1);
  return;
}




void FUN_00104092(void)

{
  return;
}




void FUN_001034da(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035dc(local_18,param_1);
  FUN_001035fa(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fd7(void)

{
  return;
}




void FUN_00103c23(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001031c4(undefined8 param_1)

{
  FUN_001032aa(param_1);
  return;
}




void FUN_0010239a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c10(param_2);
  FUN_00102402(param_1,uVar1);
  return;
}




void FUN_00103cd0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_0010175a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101886(param_1,param_2);
  local_28 = FUN_001018b0(param_1);
  cVar2 = FUN_001018ce(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018f4(param_1);
    uVar3 = FUN_0010191a(&local_38);
    cVar2 = FUN_0010193c(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017fa;
    }
  }
  bVar1 = true;
LAB_001017fa:
  if (bVar1) {
    uVar3 = FUN_00101963(param_2);
    FUN_001019a0(local_30,uVar3);
    FUN_001019d8(&local_28,&local_38);
    local_38 = FUN_001019fa(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010191a(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102cd6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001035dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103af2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102de7(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103204(local_88);
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102e57 to 00102ec0 has its CatchHandler @ 00102f0c */
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010175a(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103244(local_58,local_88);
                    /* try { // try from 00102ec8 to 00102ecc has its CatchHandler @ 00102ef7 */
  FUN_00101509(local_58);
  FUN_00103224(local_58);
  FUN_00103224(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined4 FUN_0010193c(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00103f9f(void)

{
  return 1;
}




undefined8 FUN_0010390a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103bcd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102a5e(undefined8 param_1)

{
  return param_1;
}




long FUN_0010259c(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010315a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103184(param_1);
  return;
}




int FUN_00103fbd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_001031e4(undefined8 param_1)

{
  FUN_0010326e(param_1);
  return;
}




void FUN_00102bd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c9a(param_3);
  uVar1 = FUN_00101cac(param_4);
  FUN_00101976(local_38,uVar1);
  FUN_00101cbe(param_5);
  uVar1 = FUN_00101731(0x10,param_2);
                    /* try { // try from 00102c5a to 00102c5e has its CatchHandler @ 00102c61 */
  FUN_00102d16(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010308b(void)

{
  FUN_00102f39();
  return;
}




undefined8 FUN_00101963(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102536(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022a8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025b2(local_50);
    cVar2 = FUN_0010193c(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025b2(local_50);
      cVar2 = FUN_0010193c(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010287a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010259c(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010259c(local_60);
          local_48[1] = 0;
          FUN_001025d0(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010284e(local_48);
          uVar6 = FUN_001025b2(*puVar5);
          cVar2 = FUN_0010193c(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102610(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102838(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025d0(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027c4(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ae(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ae(local_60);
        uVar6 = FUN_001027ae(local_60);
        FUN_001027c4(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010280c(local_48);
        uVar6 = FUN_001025b2(*puVar5);
        cVar2 = FUN_0010193c(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102610(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102838(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025d0(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027c4(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020de;
  }
  lVar3 = FUN_00102586(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101df2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010259c(local_60);
    uVar6 = FUN_001025b2(*puVar5);
    cVar2 = FUN_0010193c(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101df2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010259c(local_60);
    local_48[1] = 0;
    FUN_001025d0(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102610(local_60,param_3);
  }
LAB_001020de:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010405b(void)

{
  return;
}




void FUN_00101747(void)

{
  return;
}




void FUN_0010242c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ae(param_1);
  FUN_001029c0(uVar1,1);
  return;
}




void FUN_001039ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101731(0x30,param_2);
  uVar1 = FUN_00103970(param_3);
  uVar2 = FUN_00101bee(param_2);
  uVar3 = FUN_001029ae(param_1);
  FUN_00103a3c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103ba2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102610(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102292(param_1);
  local_50 = FUN_001022a8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020f9(local_58);
    local_59 = FUN_0010193c(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102838(local_58);
    }
    else {
      local_58 = FUN_00102970(local_58);
    }
  }
  FUN_00102274(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a70(param_1);
    cVar1 = FUN_001018ce(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102ac0(local_38,&local_58,&local_50);
      goto LAB_00102792;
    }
    FUN_0010280c(&local_48);
  }
  uVar2 = FUN_001025b2(local_48);
  cVar1 = FUN_0010193c(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010287a(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102ac0(local_38,&local_58,&local_50);
  }
LAB_00102792:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103c4e(undefined4 param_1)

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




void FUN_00101509(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_354;
  ulong local_350;
  ulong local_348;
  void *local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_354 = 2;
  plVar1 = (long *)FUN_0010175a(param_1,&local_354);
  local_340 = (void *)*plVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_348 * 8 + (long)local_340) = (&uStack_338)[local_348];
  }
  FUN_00103d29(local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fe2(void)

{
  return;
}




undefined8 * FUN_0010284e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8
FUN_001019fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cbe(param_5);
  uVar2 = FUN_00101cac(param_4);
  uVar3 = FUN_00101c9a(param_3);
  local_40 = FUN_00101cd0(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a76 to 00101ab9 has its CatchHandler @ 00101af7 */
  uVar1 = FUN_001020f9(local_40);
  local_38 = FUN_00101d50(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102236(param_1,local_40);
    FUN_00102274(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010214c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102dab(undefined8 param_1)

{
  FUN_00102dc9(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103970(param_3);
  FUN_00103a7a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001036e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010359e(undefined8 param_1,undefined8 param_2)

{
  FUN_001036d0(param_1,param_2);
  return;
}




void FUN_00104024(void)

{
  return;
}




void FUN_00102d16(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d68(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001036a2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010359e(param_1,param_2);
  return param_1;
}




long FUN_0010312d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102cc2(void)

{
  return;
}




undefined8 * FUN_0010280c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001033c4(void)

{
  return;
}




void FUN_00103b24(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001035fa(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022a8(param_1);
  uVar2 = FUN_001036e4(param_2);
  uVar1 = FUN_001036fa(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ae(param_1);
  uVar2 = FUN_00103869(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010259c(param_1);
  uVar2 = FUN_00103887(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined4 * FUN_001038a6(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028ba(param_2);
  puVar2 = (undefined4 *)FUN_00103936(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102402(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c10(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103bf8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103887(undefined8 param_1)

{
  FUN_0010312d(param_1);
  return;
}




undefined8 FUN_00102a70(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102274(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022a8(param_1);
  uVar2 = FUN_00102292(param_1);
  FUN_001022be(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102cb0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101731(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001032ca(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102292(param_1);
  FUN_001033d4(param_1,uVar1);
  FUN_001031c4(param_1);
  return;
}




void FUN_00104380(void)

{
  return;
}




undefined8 FUN_00101c10(undefined8 param_1)

{
  return param_1;
}



