
undefined8 * FUN_0010349e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103709(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103e36(undefined8 *param_1)

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




void FUN_001038bf(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001036e3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102e34(undefined8 param_1)

{
  return param_1;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016d6(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001037e4(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010331b(param_1,param_2,param_3);
  return;
}




void FUN_00102f3a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010262c(param_1);
  FUN_00103175(uVar1);
  return;
}




void FUN_00103c46(void)

{
  return;
}




void FUN_001015ef(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  ulong local_348;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016d6(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    puVar1[local_348] = local_338[local_348];
  }
  FUN_001037e4(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101f9d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102818(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102818(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_0010254e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f12(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a5(param_1,param_2,param_3);
  return;
}




void FUN_00101ee4(undefined8 param_1,undefined8 param_2)

{
  FUN_001027cb(param_1,param_2);
  return;
}




void FUN_00102754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb4(param_1,param_2,param_3);
  return;
}




void FUN_001030c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103274(param_1,param_2,param_3);
  return;
}




void FUN_0010301d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103224(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001031de(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033b6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001037b9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001039d3(long param_1,ulong param_2,long param_3)

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




long FUN_00102d24(long param_1)

{
  return param_1 + 8;
}




void FUN_001027cb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d11(param_1,param_2);
  return;
}




void FUN_0010373b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f34(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102c5a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b3e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00102bcd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bfa(param_1,param_2);
  return param_1;
}




undefined8 FUN_001026a4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027f6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c0f(void)

{
  return;
}




void FUN_00103092(void)

{
  return;
}




void FUN_00103c93(void)

{
  return;
}




void FUN_00103ece(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102818(undefined8 param_1)

{
  return param_1;
}




int FUN_00103bd4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001038e7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010331b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102eb4(param_1);
  uVar1 = FUN_0010349e(uVar1,param_2,param_3);
  FUN_0010312e(&local_10,uVar1);
  return;
}




undefined8 FUN_00103636(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103eed(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010364b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103680(param_1,param_2,param_3);
  return;
}




void FUN_00103c67(void)

{
  return;
}




void FUN_0010378f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010304e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d3a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a75(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001030a6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010262c(undefined8 param_1)

{
  return param_1;
}




void FUN_001033e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb4(param_3);
  uVar2 = FUN_001034e9(local_28);
  uVar3 = FUN_001034e9(local_20);
  uVar1 = FUN_0010350a(uVar3,uVar2,uVar1);
  FUN_0010312e(&local_30,uVar1);
  return;
}




void FUN_00101a8c(undefined8 param_1)

{
  FUN_00101b18(param_1);
  return;
}




void FUN_00102c24(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bfa(param_1,param_2);
  FUN_00101e56(param_1);
  return;
}




void FUN_00101e56(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001034e9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102818(&local_10);
  return *puVar1;
}




void FUN_00103c3b(void)

{
  return;
}




void FUN_00102ec6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103144(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d3a(undefined8 param_1)

{
  return param_1;
}




ulong * FUN_00102f60(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




bool FUN_00103db8(pthread_t *param_1)

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




void FUN_00103865(undefined4 param_1)

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




void FUN_00101c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f46(param_1);
  local_18 = FUN_00101f9d(&local_38,&local_20);
  local_20 = FUN_00102502(local_30);
  uVar1 = FUN_0010254e(&local_20,local_18);
  FUN_00101fe2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102502(local_30);
  FUN_0010254e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103912(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f04(param_1,param_2,param_3);
  return;
}




void FUN_00103369(undefined8 param_1)

{
  FUN_001033b6(param_1);
  return;
}




void FUN_00102bfa(undefined8 param_1,undefined8 param_2)

{
  FUN_0010300a(param_1,param_2);
  return;
}




void FUN_00103763(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb4(param_3);
  uVar2 = FUN_00102eb4(local_28);
  uVar3 = FUN_00102eb4(local_20);
  uVar1 = FUN_001030f9(uVar3,uVar2,uVar1);
  FUN_0010312e(&local_30,uVar1);
  return;
}




void FUN_00103c9e(void)

{
  return;
}




undefined8 FUN_0010312e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d3a(param_3);
  FUN_0010304e(param_1,param_2,uVar1);
  return;
}




void FUN_00101aac(undefined8 param_1)

{
  FUN_00101aec(param_1);
  return;
}




void FUN_00103f20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101ed2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033ce(param_2);
  uVar2 = FUN_001033ce(param_1);
  FUN_001033e0(uVar2,uVar1,param_3);
  return;
}




void FUN_001037e4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010353f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103636(&local_10);
  FUN_00102e34(uVar1);
  return;
}




undefined8 FUN_001033ce(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c88(void)

{
  return;
}




undefined8 FUN_00101a75(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b8a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ed2(param_1);
  FUN_00101ee4(*param_1,param_1[1],uVar1);
  FUN_00101b38(param_1);
  return;
}




long FUN_001016d6(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103bf9(void)

{
  return;
}




void FUN_00101e98(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102799(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102fbd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102799(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101a10(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036e3("Calling good()...");
  FUN_00101a00();
  FUN_001036e3("Finished good()");
  FUN_001036e3("Calling bad()...");
  FUN_001016fa();
  FUN_001036e3("Finished bad()");
  return 0;
}




void FUN_00102dff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c4(param_1,param_2,param_3);
  return;
}




void FUN_00103ca9(void)

{
  return;
}




void * FUN_001035d3(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101b38(long *param_1)

{
  FUN_00101e98(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a8c(param_1);
  return;
}




void FUN_00101f12(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103c25(void)

{
  return;
}




void FUN_00103940(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103f90(void)

{
  return;
}




ulong * FUN_00103387(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010301d(param_1,param_2,param_3);
  return;
}




void FUN_00102f8f(undefined8 param_1,undefined8 param_2)

{
  FUN_001031de(param_1,param_2,0);
  return;
}




void * FUN_00103680(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101e36(undefined8 param_1)

{
  FUN_0010278a(param_1);
  return;
}




void FUN_0010288a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d24(param_1);
  FUN_00102d89(*param_1,uVar1);
  return;
}




void FUN_00103cb4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103e13(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_0010282a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d3a(param_3);
  uVar2 = FUN_00102d24(param_1);
  FUN_00102d4c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101a00(void)

{
  FUN_0010187d();
  return;
}




void FUN_00103c72(void)

{
  return;
}




void FUN_00101acc(undefined8 param_1)

{
  FUN_00101aac(param_1);
  return;
}




undefined8 FUN_00103175(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103369(param_1);
  puVar1 = (undefined8 *)FUN_00103387(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102b75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fbd(param_2);
  uVar2 = FUN_00102fbd(param_1);
  FUN_00102dff(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103bc5(void)

{
  return 0;
}




void FUN_00103c1a(void)

{
  return;
}




void FUN_00102920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102db3(param_2);
  uVar2 = FUN_00102db3(param_1);
  FUN_00102dff(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102cea(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010380f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001033b6(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c5c(void)

{
  return;
}




void FUN_00102978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e34(param_2);
  uVar2 = FUN_00102e34(param_1);
  FUN_00102e46(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c7d(void)

{
  return;
}




void FUN_00103973(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010187d(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101acc(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018b2 to 0010198a has its CatchHandler @ 001019d6 */
  local_68 = operator_new__(800);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  FUN_00101d16(local_38,local_58);
                    /* try { // try from 00101992 to 00101996 has its CatchHandler @ 001019c1 */
  FUN_001015ef(local_38);
  FUN_00101b8a(local_38);
  FUN_00101b8a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d11(void)

{
  return;
}




void FUN_0010300a(void)

{
  return;
}




void FUN_00103c30(void)

{
  return;
}




void FUN_001016fa(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101acc(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010172f to 00101807 has its CatchHandler @ 00101853 */
  local_68 = operator_new__(400);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bd2(local_58);
  FUN_00101c22(local_38,&local_60);
  FUN_00101c50(local_58,local_38[0],1,&local_68);
  FUN_00101d16(local_38,local_58);
                    /* try { // try from 0010180f to 00101813 has its CatchHandler @ 0010183e */
  FUN_00101509(local_38);
  FUN_00101b8a(local_38);
  FUN_00101b8a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b3e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f8f(param_1,param_2);
  }
  return uVar1;
}




long FUN_001032a5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010344e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010353f(param_2);
  uVar2 = FUN_0010353f(param_1);
  FUN_00103565(uVar2,uVar1,param_3);
  return;
}




void FUN_001029c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eb4(param_2);
  uVar2 = FUN_00102eb4(param_1);
  FUN_00102ec6(uVar2,uVar1,param_3);
  return;
}




void FUN_00103565(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102eb4(param_3);
  uVar2 = FUN_00102eb4(local_28);
  uVar3 = FUN_00102eb4(local_20);
  uVar1 = FUN_0010364b(uVar3,uVar2,uVar1);
  FUN_0010312e(&local_30,uVar1);
  return;
}




undefined8 FUN_00101bd2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f12(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e88(void)

{
  return;
}




void FUN_00102d89(undefined8 param_1,undefined8 param_2)

{
  FUN_00103092(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103c04(void)

{
  return;
}




void FUN_00101aec(undefined8 param_1)

{
  FUN_00101e36(param_1);
  FUN_00101e56(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00101d16(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010262c(param_2);
  FUN_001025db(&local_31,uVar1);
  uVar1 = FUN_001025b4(param_2);
                    /* try { // try from 00101d7c to 00101d80 has its CatchHandler @ 00101de9 */
  FUN_0010263e(param_1,uVar1,&local_31);
  FUN_00101b18(&local_31);
  uVar2 = FUN_00101ed2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026fc(param_2);
  uVar4 = FUN_001026a4(param_2);
                    /* try { // try from 00101dca to 00101dce has its CatchHandler @ 00101e07 */
  uVar1 = FUN_00102754(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001028dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f34(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f34(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103bee(void)

{
  return;
}




void FUN_00103c51(void)

{
  return;
}




void FUN_0010278a(void)

{
  return;
}




void FUN_001027f6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001028be(undefined8 param_1)

{
  FUN_00102d24(param_1);
  return;
}




void FUN_00101b18(undefined8 param_1)

{
  FUN_00101e88(param_1);
  return;
}




undefined8 FUN_00103bb6(void)

{
  return 1;
}




void FUN_0010350a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035d3(param_1,param_2,param_3);
  return;
}




void FUN_00101fe2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a4e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102502(local_80);
      local_60 = FUN_001028dc(&local_88,&local_78);
      local_70 = FUN_00102b3e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ed2(local_80);
                    /* try { // try from 001022ec to 00102377 has its CatchHandler @ 0010242f */
      FUN_00102a19(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ed2(local_80);
      puVar2 = (undefined8 *)FUN_00101f34(&local_88);
      local_70 = FUN_00102b75(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ed2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f34(&local_88);
      local_70 = FUN_00102b75(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ed2(local_80);
      FUN_00101ee4(*local_80,local_80[1],uVar1);
      FUN_00101e98(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010282a(local_38,param_1,param_4);
                    /* try { // try from 0010206c to 0010223f has its CatchHandler @ 00102411 */
      local_50 = FUN_001028be(local_38);
      local_78 = FUN_00101bd2(local_80);
      local_48 = FUN_001028dc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ed2(local_80);
        FUN_00102920(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f34(&local_88);
        FUN_00102978(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f34(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f34(&local_88);
        FUN_001029c8(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ed2(local_80);
        lVar4 = FUN_00102a19(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ed2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f34(&local_88);
        FUN_00102920(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f34(&local_88);
        FUN_001029c8(*puVar2,local_40,local_50);
      }
      FUN_0010288a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103eaf(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101f46(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027f6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010263e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c24(param_1,param_3);
                    /* try { // try from 00102678 to 0010267c has its CatchHandler @ 0010267f */
  FUN_00102c5a(param_1,param_2);
  return;
}




void FUN_00103274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010344e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001025db(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bcd(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101f34(undefined8 param_1)

{
  return param_1;
}




void FUN_0010383a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_001025b4(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102db3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102a4e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f3a(param_1);
  lVar2 = FUN_001025b4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025b4(local_40);
  local_30 = FUN_001025b4(local_40);
  plVar3 = (long *)FUN_00102f60(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025b4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f3a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f3a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102502(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f12(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103ad7(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103ceb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cb4,local_18);
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




undefined8 FUN_001026fc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027f6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102eb4(undefined8 param_1)

{
  return param_1;
}



