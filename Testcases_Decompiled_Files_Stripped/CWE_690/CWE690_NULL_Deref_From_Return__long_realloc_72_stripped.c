
undefined8 * FUN_00103368(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_001035d3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103d00(undefined8 *param_1)

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




void FUN_00103789(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001035ad(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102cfe(undefined8 param_1)

{
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101592(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_00103683(*puVar1);
  free(puVar1);
  return;
}




void FUN_0010300e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e5(param_1,param_2,param_3);
  return;
}




void FUN_00102e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f6(param_1);
  FUN_0010303f(uVar1);
  return;
}




void FUN_00103b10(void)

{
  return;
}




void FUN_0010153a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101592(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_00103683(*puVar1);
    free(puVar1);
  }
  return;
}




long FUN_00101e67(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026e2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026e2(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102418(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ddc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fc3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010316f(param_1,param_2,param_3);
  return;
}




void FUN_00101dae(undefined8 param_1,undefined8 param_2)

{
  FUN_00102695(param_1,param_2);
  return;
}




void FUN_0010261e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b7e(param_1,param_2,param_3);
  return;
}




void FUN_00102f8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010313e(param_1,param_2,param_3);
  return;
}




void FUN_00102ee7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ee(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_001030a8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103280(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103683(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_0010389d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102bee(long param_1)

{
  return param_1 + 8;
}




void FUN_00102695(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bdb(param_1,param_2);
  return;
}




void FUN_00103605(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101aec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dfe(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102b24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a08(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00102a97(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ac4(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010256e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ad9(void)

{
  return;
}




void FUN_00102f5c(void)

{
  return;
}




void FUN_00103b5d(void)

{
  return;
}




void FUN_00103d98(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001026e2(undefined8 param_1)

{
  return param_1;
}




int FUN_00103a9e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001037b1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001031e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d7e(param_1);
  uVar1 = FUN_00103368(uVar1,param_2,param_3);
  FUN_00102ff8(&local_10,uVar1);
  return;
}




undefined8 FUN_00103500(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103db7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103515(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010354a(param_1,param_2,param_3);
  return;
}




void FUN_00103b31(void)

{
  return;
}




void FUN_00103659(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c04(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010193f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102f70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001024f6(undefined8 param_1)

{
  return param_1;
}




void FUN_001032aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d7e(param_3);
  uVar2 = FUN_001033b3(local_28);
  uVar3 = FUN_001033b3(local_20);
  uVar1 = FUN_001033d4(uVar3,uVar2,uVar1);
  FUN_00102ff8(&local_30,uVar1);
  return;
}




void FUN_00101956(undefined8 param_1)

{
  FUN_001019e2(param_1);
  return;
}




void FUN_00102aee(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ac4(param_1,param_2);
  FUN_00101d20(param_1);
  return;
}




void FUN_00101d20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001033b3(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026e2(&local_10);
  return *puVar1;
}




void FUN_00103b05(void)

{
  return;
}




void FUN_00102d90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102dce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010300e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c04(undefined8 param_1)

{
  return param_1;
}




ulong * FUN_00102e2a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




bool FUN_00103c82(pthread_t *param_1)

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




void FUN_0010372f(undefined4 param_1)

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




void FUN_00101b1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101e10(param_1);
  local_18 = FUN_00101e67(&local_38,&local_20);
  local_20 = FUN_001023cc(local_30);
  uVar1 = FUN_00102418(&local_20,local_18);
  FUN_00101eac(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023cc(local_30);
  FUN_00102418(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037dc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001028e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dce(param_1,param_2,param_3);
  return;
}




void FUN_00103233(undefined8 param_1)

{
  FUN_00103280(param_1);
  return;
}




void FUN_00102ac4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ed4(param_1,param_2);
  return;
}




void FUN_0010362d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d7e(param_3);
  uVar2 = FUN_00102d7e(local_28);
  uVar3 = FUN_00102d7e(local_20);
  uVar1 = FUN_00102fc3(uVar3,uVar2,uVar1);
  FUN_00102ff8(&local_30,uVar1);
  return;
}




void FUN_00103b68(void)

{
  return;
}




undefined8 FUN_00102ff8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c04(param_3);
  FUN_00102f18(param_1,param_2,uVar1);
  return;
}




void FUN_00101976(undefined8 param_1)

{
  FUN_001019b6(param_1);
  return;
}




void FUN_00103df0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d9c(undefined8 param_1)

{
  return param_1;
}




void FUN_001030ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103298(param_2);
  uVar2 = FUN_00103298(param_1);
  FUN_001032aa(uVar2,uVar1,param_3);
  return;
}




void FUN_001036ae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103409(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103500(&local_10);
  FUN_00102cfe(uVar1);
  return;
}




undefined8 FUN_00103298(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b52(void)

{
  return;
}




undefined8 FUN_0010193f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d9c(param_1);
  FUN_00101dae(*param_1,param_1[1],uVar1);
  FUN_00101a02(param_1);
  return;
}




long FUN_00101592(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103ac3(void)

{
  return;
}




void FUN_00101d62(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102663(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102e87(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f70(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102663(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bb4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001018da(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035ad("Calling good()...");
  FUN_001018ca();
  FUN_001035ad("Finished good()");
  FUN_001035ad("Calling bad()...");
  FUN_001015b6();
  FUN_001035ad("Finished bad()");
  return 0;
}




void FUN_00102cc9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f8e(param_1,param_2,param_3);
  return;
}




void FUN_00103b73(void)

{
  return;
}




void * FUN_0010349d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101a02(long *param_1)

{
  FUN_00101d62(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101956(param_1);
  return;
}




void FUN_00101ddc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103aef(void)

{
  return;
}




void FUN_0010380a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103e60(void)

{
  return;
}




ulong * FUN_00103251(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee7(param_1,param_2,param_3);
  return;
}




void FUN_00102e59(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a8(param_1,param_2,0);
  return;
}




void * FUN_0010354a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101d00(undefined8 param_1)

{
  FUN_00102654(param_1);
  return;
}




void FUN_00102754(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bee(param_1);
  FUN_00102c53(*param_1,uVar1);
  return;
}




void FUN_00103b7e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103cdd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001026f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c04(param_3);
  uVar2 = FUN_00102bee(param_1);
  FUN_00102c16(*param_1,uVar2,uVar1);
  return;
}




void FUN_001018ca(void)

{
  FUN_00101740();
  return;
}




void FUN_00103b3c(void)

{
  return;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101976(param_1);
  return;
}




undefined8 FUN_0010303f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103233(param_1);
  puVar1 = (undefined8 *)FUN_00103251(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102a3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e87(param_2);
  uVar2 = FUN_00102e87(param_1);
  FUN_00102cc9(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103a8f(void)

{
  return 0;
}




void FUN_00103ae4(void)

{
  return;
}




void FUN_001027ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c7d(param_2);
  uVar2 = FUN_00102c7d(param_1);
  FUN_00102cc9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102bb4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001036d9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103280(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103b26(void)

{
  return;
}




void FUN_00102842(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cfe(param_2);
  uVar2 = FUN_00102cfe(param_1);
  FUN_00102d10(uVar2,uVar1,param_3);
  return;
}




void FUN_00103b47(void)

{
  return;
}




void FUN_0010383d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101740(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101996(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,8);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
                    /* try { // try from 001017bf to 00101854 has its CatchHandler @ 001018a0 */
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  FUN_00101be0(local_38,local_58);
                    /* try { // try from 0010185c to 00101860 has its CatchHandler @ 0010188b */
  FUN_0010153a(local_38);
  FUN_00101a54(local_38);
  FUN_00101a54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bdb(void)

{
  return;
}




void FUN_00102ed4(void)

{
  return;
}




void FUN_00103afa(void)

{
  return;
}




void FUN_001015b6(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101996(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,8);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
                    /* try { // try from 00101635 to 001016ca has its CatchHandler @ 00101716 */
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a9c(local_58);
  FUN_00101aec(local_38,&local_60);
  FUN_00101b1a(local_58,local_38[0],1,&local_68);
  FUN_00101be0(local_38,local_58);
                    /* try { // try from 001016d2 to 001016d6 has its CatchHandler @ 00101701 */
  FUN_001014e9(local_38);
  FUN_00101a54(local_38);
  FUN_00101a54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e59(param_1,param_2);
  }
  return uVar1;
}




long FUN_0010316f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103409(param_2);
  uVar2 = FUN_00103409(param_1);
  FUN_0010342f(uVar2,uVar1,param_3);
  return;
}




void FUN_00102892(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d7e(param_2);
  uVar2 = FUN_00102d7e(param_1);
  FUN_00102d90(uVar2,uVar1,param_3);
  return;
}




void FUN_0010342f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d7e(param_3);
  uVar2 = FUN_00102d7e(local_28);
  uVar3 = FUN_00102d7e(local_20);
  uVar1 = FUN_00103515(uVar3,uVar2,uVar1);
  FUN_00102ff8(&local_30,uVar1);
  return;
}




undefined8 FUN_00101a9c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ddc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_00102c53(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f5c(param_1,param_2);
  return;
}




void FUN_00103ace(void)

{
  return;
}




void FUN_001019b6(undefined8 param_1)

{
  FUN_00101d00(param_1);
  FUN_00101d20(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101be0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024f6(param_2);
  FUN_001024a5(&local_31,uVar1);
  uVar1 = FUN_0010247e(param_2);
                    /* try { // try from 00101c46 to 00101c4a has its CatchHandler @ 00101cb3 */
  FUN_00102508(param_1,uVar1,&local_31);
  FUN_001019e2(&local_31);
  uVar2 = FUN_00101d9c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025c6(param_2);
  uVar4 = FUN_0010256e(param_2);
                    /* try { // try from 00101c94 to 00101c98 has its CatchHandler @ 00101cd1 */
  uVar1 = FUN_0010261e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001027a6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dfe(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dfe(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103ab8(void)

{
  return;
}




void FUN_00103b1b(void)

{
  return;
}




void FUN_00102654(void)

{
  return;
}




void FUN_001026c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102788(undefined8 param_1)

{
  FUN_00102bee(param_1);
  return;
}




void FUN_001019e2(undefined8 param_1)

{
  FUN_00101d52(param_1);
  return;
}




undefined8 FUN_00103a80(void)

{
  return 1;
}




void FUN_001033d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010349d(param_1,param_2,param_3);
  return;
}




void FUN_00101eac(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00102918(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023cc(local_80);
      local_60 = FUN_001027a6(&local_88,&local_78);
      local_70 = FUN_00102a08(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d9c(local_80);
                    /* try { // try from 001021b6 to 00102241 has its CatchHandler @ 001022f9 */
      FUN_001028e3(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d9c(local_80);
      puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
      local_70 = FUN_00102a3f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d9c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
      local_70 = FUN_00102a3f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d9c(local_80);
      FUN_00101dae(*local_80,local_80[1],uVar1);
      FUN_00101d62(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026f4(local_38,param_1,param_4);
                    /* try { // try from 00101f36 to 00102109 has its CatchHandler @ 001022db */
      local_50 = FUN_00102788(local_38);
      local_78 = FUN_00101a9c(local_80);
      local_48 = FUN_001027a6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d9c(local_80);
        FUN_001027ea(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
        FUN_00102842(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dfe(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
        FUN_00102892(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d9c(local_80);
        lVar4 = FUN_001028e3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d9c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
        FUN_001027ea(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dfe(&local_88);
        FUN_00102892(*puVar2,local_40,local_50);
      }
      FUN_00102754(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d79(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e10(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aee(param_1,param_3);
                    /* try { // try from 00102542 to 00102546 has its CatchHandler @ 00102549 */
  FUN_00102b24(param_1,param_2);
  return;
}




void FUN_0010313e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103318(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001024a5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a97(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101dfe(undefined8 param_1)

{
  return param_1;
}




void FUN_00103704(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_0010247e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102c7d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f70(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102918(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102e04(param_1);
  lVar2 = FUN_0010247e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010247e(local_40);
  local_30 = FUN_0010247e(local_40);
  plVar3 = (long *)FUN_00102e2a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010247e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e04(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e04(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001023cc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ddc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001039a1(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bb5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b7e,local_18);
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




undefined8 FUN_001025c6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102d7e(undefined8 param_1)

{
  return param_1;
}



