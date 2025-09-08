
undefined4 * FUN_00103430(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103697(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103dc4(undefined8 *param_1)

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




void FUN_0010384d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103671(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102dcc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101509(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010163c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001036c9(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001030d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ad(param_1,param_2,param_3);
  return;
}




void FUN_00102ece(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025c4(param_1);
  FUN_00103107(uVar1);
  return;
}




void FUN_00103bd4(void)

{
  return;
}




void FUN_001015a2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010163c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001036c9(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




long FUN_00101f35(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027b0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027b0(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_001024e6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101eaa(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010308b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103237(param_1,param_2,param_3);
  return;
}




void FUN_00101e7c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102763(param_1,param_2);
  return;
}




void FUN_001026ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c4c(param_1,param_2,param_3);
  return;
}




void FUN_00103056(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103206(param_1,param_2,param_3);
  return;
}




void FUN_00102fb1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031b6(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103170(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103348(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103747(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103961(long param_1,ulong param_2,long param_3)

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




long FUN_00102cbc(long param_1)

{
  return param_1 + 8;
}




void FUN_00102763(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca9(param_1,param_2);
  return;
}




void FUN_001036c9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101bba(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ecc(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102bf2(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ad6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




undefined8 FUN_00102b65(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b92(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010263c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010278e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b9d(void)

{
  return;
}




void FUN_00103024(void)

{
  return;
}




void FUN_00103c21(void)

{
  return;
}




void FUN_00103e5c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001027b0(undefined8 param_1)

{
  return param_1;
}




int FUN_00103b62(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103875(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001032ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e4c(param_1);
  uVar1 = FUN_00103430(uVar1,param_2,param_3);
  FUN_001030c0(&local_10,uVar1);
  return;
}




undefined8 FUN_001035c4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103e7b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001035d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010360e(param_1,param_2,param_3);
  return;
}




void FUN_00103bf5(void)

{
  return;
}




void FUN_0010371d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102fe2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102cd2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101a0d(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103038(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001025c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103372(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4c(param_3);
  uVar2 = FUN_00103477(local_28);
  uVar3 = FUN_00103477(local_20);
  uVar1 = FUN_00103498(uVar3,uVar2,uVar1);
  FUN_001030c0(&local_30,uVar1);
  return;
}




void FUN_00101a24(undefined8 param_1)

{
  FUN_00101ab0(param_1);
  return;
}




void FUN_00102bbc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b92(param_1,param_2);
  FUN_00101dee(param_1);
  return;
}




void FUN_00101dee(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00103477(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027b0(&local_10);
  return *puVar1;
}




void FUN_00103bc9(void)

{
  return;
}




void FUN_00102e5e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cd2(undefined8 param_1)

{
  return param_1;
}




ulong * FUN_00102ef4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




bool FUN_00103d46(pthread_t *param_1)

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




void FUN_001037f3(undefined4 param_1)

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




void FUN_00101be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101ede(param_1);
  local_18 = FUN_00101f35(&local_38,&local_20);
  local_20 = FUN_0010249a(local_30);
  uVar1 = FUN_001024e6(&local_20,local_18);
  FUN_00101f7a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010249a(local_30);
  FUN_001024e6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038a0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e98(param_1,param_2,param_3);
  return;
}




void FUN_001032fb(undefined8 param_1)

{
  FUN_00103348(param_1);
  return;
}




void FUN_00102b92(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f9e(param_1,param_2);
  return;
}




void FUN_001036f1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102dde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4c(param_3);
  uVar2 = FUN_00102e4c(local_28);
  uVar3 = FUN_00102e4c(local_20);
  uVar1 = FUN_0010308b(uVar3,uVar2,uVar1);
  FUN_001030c0(&local_30,uVar1);
  return;
}




void FUN_00103c2c(void)

{
  return;
}




undefined8 FUN_001030c0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cd2(param_3);
  FUN_00102fe2(param_1,param_2,uVar1);
  return;
}




void FUN_00101a44(undefined8 param_1)

{
  FUN_00101a84(param_1);
  return;
}




void FUN_00103eb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101e6a(undefined8 param_1)

{
  return param_1;
}




void FUN_001031b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103360(param_2);
  uVar2 = FUN_00103360(param_1);
  FUN_00103372(uVar2,uVar1,param_3);
  return;
}




void FUN_00103772(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001034cd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035c4(&local_10);
  FUN_00102dcc(uVar1);
  return;
}




undefined8 FUN_00103360(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c16(void)

{
  return;
}




undefined8 FUN_00101a0d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b22(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e6a(param_1);
  FUN_00101e7c(*param_1,param_1[1],uVar1);
  FUN_00101ad0(param_1);
  return;
}




long FUN_0010163c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103b87(void)

{
  return;
}




void FUN_00101e30(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102731(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102f51(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103038(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102731(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c82(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001019a8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103671("Calling good()...");
  FUN_00101998();
  FUN_00103671("Finished good()");
  FUN_00103671("Calling bad()...");
  FUN_00101660();
  FUN_00103671("Finished bad()");
  return 0;
}




void FUN_00102d97(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103056(param_1,param_2,param_3);
  return;
}




void FUN_00103c37(void)

{
  return;
}




void * FUN_00103561(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00101ad0(long *param_1)

{
  FUN_00101e30(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101a24(param_1);
  return;
}




void FUN_00101eaa(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103bb3(void)

{
  return;
}




void FUN_001038ce(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103f20(void)

{
  return;
}




ulong * FUN_00103319(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb1(param_1,param_2,param_3);
  return;
}




void FUN_00102f23(undefined8 param_1,undefined8 param_2)

{
  FUN_00103170(param_1,param_2,0);
  return;
}




void * FUN_0010360e(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00101dce(undefined8 param_1)

{
  FUN_00102722(param_1);
  return;
}




void FUN_00102822(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cbc(param_1);
  FUN_00102d21(*param_1,uVar1);
  return;
}




void FUN_00103c42(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103da1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_001027c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cd2(param_3);
  uVar2 = FUN_00102cbc(param_1);
  FUN_00102ce4(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101998(void)

{
  FUN_0010181d();
  return;
}




void FUN_00103c00(void)

{
  return;
}




void FUN_00101a64(undefined8 param_1)

{
  FUN_00101a44(param_1);
  return;
}




undefined8 FUN_00103107(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001032fb(param_1);
  puVar1 = (undefined8 *)FUN_00103319(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102b0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f51(param_2);
  uVar2 = FUN_00102f51(param_1);
  FUN_00102d97(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103b53(void)

{
  return 0;
}




void FUN_00103ba8(void)

{
  return;
}




void FUN_001028b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d4b(param_2);
  uVar2 = FUN_00102d4b(param_1);
  FUN_00102d97(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102c82(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010379d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103348(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103bea(void)

{
  return;
}




void FUN_00102910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dcc(param_2);
  uVar2 = FUN_00102dcc(param_1);
  FUN_00102dde(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c0b(void)

{
  return;
}




void FUN_00103901(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010181d(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a64(local_58);
  local_64 = 0x14;
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
                    /* try { // try from 0010188d to 00101922 has its CatchHandler @ 0010196e */
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  FUN_00101cae(local_38,local_58);
                    /* try { // try from 0010192a to 0010192e has its CatchHandler @ 00101959 */
  FUN_001015a2(local_38);
  FUN_00101b22(local_38);
  FUN_00101b22(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ca9(void)

{
  return;
}




void FUN_00102f9e(void)

{
  return;
}




void FUN_00103bbe(void)

{
  return;
}




void FUN_00101660(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a64(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
                    /* try { // try from 00101712 to 001017a7 has its CatchHandler @ 001017f3 */
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b6a(local_58);
  FUN_00101bba(local_38,&local_60);
  FUN_00101be8(local_58,local_38[0],1,&local_64);
  FUN_00101cae(local_38,local_58);
                    /* try { // try from 001017af to 001017b3 has its CatchHandler @ 001017de */
  FUN_00101509(local_38);
  FUN_00101b22(local_38);
  FUN_00101b22(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ad6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f23(param_1,param_2);
  }
  return uVar1;
}




long FUN_00103237(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_001033e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034cd(param_2);
  uVar2 = FUN_001034cd(param_1);
  FUN_001034f3(uVar2,uVar1,param_3);
  return;
}




void FUN_00102960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e4c(param_2);
  uVar2 = FUN_00102e4c(param_1);
  FUN_00102e5e(uVar2,uVar1,param_3);
  return;
}




void FUN_001034f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4c(param_3);
  uVar2 = FUN_00102e4c(local_28);
  uVar3 = FUN_00102e4c(local_20);
  uVar1 = FUN_001035d9(uVar3,uVar2,uVar1);
  FUN_001030c0(&local_30,uVar1);
  return;
}




undefined8 FUN_00101b6a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eaa(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e20(void)

{
  return;
}




void FUN_00102d21(undefined8 param_1,undefined8 param_2)

{
  FUN_00103024(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103b92(void)

{
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  FUN_00101dce(param_1);
  FUN_00101dee(param_1);
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




void FUN_00101cae(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025c4(param_2);
  FUN_00102573(&local_31,uVar1);
  uVar1 = FUN_0010254c(param_2);
                    /* try { // try from 00101d14 to 00101d18 has its CatchHandler @ 00101d81 */
  FUN_001025d6(param_1,uVar1,&local_31);
  FUN_00101ab0(&local_31);
  uVar2 = FUN_00101e6a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102694(param_2);
  uVar4 = FUN_0010263c(param_2);
                    /* try { // try from 00101d62 to 00101d66 has its CatchHandler @ 00101d9f */
  uVar1 = FUN_001026ec(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102874(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ecc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ecc(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103b7c(void)

{
  return;
}




void FUN_00103bdf(void)

{
  return;
}




void FUN_00102722(void)

{
  return;
}




void FUN_0010278e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102856(undefined8 param_1)

{
  FUN_00102cbc(param_1);
  return;
}




void FUN_00101ab0(undefined8 param_1)

{
  FUN_00101e20(param_1);
  return;
}




undefined8 FUN_00103b44(void)

{
  return 1;
}




void FUN_00103498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103561(param_1,param_2,param_3);
  return;
}




void FUN_00101f7a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_001029e6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010249a(local_80);
      local_60 = FUN_00102874(&local_88,&local_78);
      local_70 = FUN_00102ad6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e6a(local_80);
                    /* try { // try from 00102284 to 0010230f has its CatchHandler @ 001023c7 */
      FUN_001029b1(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e6a(local_80);
      puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
      local_70 = FUN_00102b0d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101e6a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
      local_70 = FUN_00102b0d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e6a(local_80);
      FUN_00101e7c(*local_80,local_80[1],uVar1);
      FUN_00101e30(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_001027c2(local_38,param_1,param_4);
                    /* try { // try from 00102004 to 001021d7 has its CatchHandler @ 001023a9 */
      local_50 = FUN_00102856(local_38);
      local_78 = FUN_00101b6a(local_80);
      local_48 = FUN_00102874(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e6a(local_80);
        FUN_001028b8(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
        FUN_00102910(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ecc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
        FUN_00102960(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101e6a(local_80);
        lVar4 = FUN_001029b1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e6a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
        FUN_001028b8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ecc(&local_88);
        FUN_00102960(*puVar2,local_40,local_50);
      }
      FUN_00102822(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e3d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ede(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010278e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bbc(param_1,param_3);
                    /* try { // try from 00102610 to 00102614 has its CatchHandler @ 00102617 */
  FUN_00102bf2(param_1,param_2);
  return;
}




void FUN_00103206(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102573(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b65(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101ecc(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_0010254c(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_00102d4b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103038(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_001029e6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ece(param_1);
  lVar2 = FUN_0010254c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010254c(local_40);
  local_30 = FUN_0010254c(local_40);
  plVar3 = (long *)FUN_00102ef4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010254c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ece(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ece(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010249a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eaa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103a65(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103c79(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c42,local_18);
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




undefined8 FUN_00102694(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010278e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e4c(undefined8 param_1)

{
  return param_1;
}



