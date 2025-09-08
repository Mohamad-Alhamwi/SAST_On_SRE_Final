
void FUN_00103ba1(void)

{
  return;
}




void FUN_00103c0f(void)

{
  return;
}




bool FUN_00103d60(pthread_t *param_1)

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




void FUN_001015c3(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010167e(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_0010378c(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c04(void)

{
  return;
}




undefined8 * FUN_00103446(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_001024aa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037e2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void * FUN_0010357b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001024f6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101eba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c02(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ae6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102cb9(void)

{
  return;
}




void FUN_00101e30(void)

{
  return;
}




void FUN_0010378c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b1d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f65(param_2);
  uVar2 = FUN_00102f65(param_1);
  FUN_00102da7(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00102ddc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103761(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001036b1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




long FUN_00101f45(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027c0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027c0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103867(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101a94(param_1);
  return;
}




void FUN_00101825(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a74(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010185a to 00101932 has its CatchHandler @ 0010197e */
  local_68 = operator_new__(800);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  FUN_00101cbe(local_38,local_58);
                    /* try { // try from 0010193a to 0010193e has its CatchHandler @ 00101969 */
  FUN_001015c3(local_38);
  FUN_00101b32(local_38);
  FUN_00101b32(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a74(undefined8 param_1)

{
  FUN_00101a54(param_1);
  return;
}




void FUN_00103c3b(void)

{
  return;
}




void FUN_00103e95(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103311(undefined8 param_1)

{
  FUN_0010335e(param_1);
  return;
}




void FUN_00102e6e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c1a(void)

{
  return;
}




void FUN_00102866(undefined8 param_1)

{
  FUN_00102ccc(param_1);
  return;
}




void FUN_001031cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103376(param_2);
  uVar2 = FUN_00103376(param_1);
  FUN_00103388(uVar2,uVar1,param_3);
  return;
}




void FUN_001030ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d5b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010304e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010370b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ae0(long *param_1)

{
  FUN_00101e40(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a34(param_1);
  return;
}




void FUN_00102ee2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d4(param_1);
  FUN_0010311d(uVar1);
  return;
}




void FUN_00101dde(undefined8 param_1)

{
  FUN_00102732(param_1);
  return;
}




undefined8 FUN_00103dbb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010391b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103be3(void)

{
  return;
}




void FUN_00103bee(void)

{
  return;
}




void FUN_00101dfe(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103c30(void)

{
  return;
}




void FUN_001036e3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103737(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ce2(param_3);
  FUN_00102ff6(param_1,param_2,uVar1);
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




int FUN_00103b7c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001026fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c5c(param_1,param_2,param_3);
  return;
}




void FUN_00103186(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010335e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e5c(param_2);
  uVar2 = FUN_00102e5c(param_1);
  FUN_00102e6e(uVar2,uVar1,param_3);
  return;
}




void FUN_00103bac(void)

{
  return;
}




void FUN_001034e7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035de(&local_10);
  FUN_00102ddc(uVar1);
  return;
}




void FUN_0010350d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e5c(param_3);
  uVar2 = FUN_00102e5c(local_28);
  uVar3 = FUN_00102e5c(local_20);
  uVar1 = FUN_001035f3(uVar3,uVar2,uVar1);
  FUN_001030d6(&local_30,uVar1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010167e(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_0010378c(*puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_0010332f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001035de(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101eee(param_1);
  local_18 = FUN_00101f45(&local_38,&local_20);
  local_20 = FUN_001024aa(local_30);
  uVar1 = FUN_001024f6(&local_20,local_18);
  FUN_00101f8a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024aa(local_30);
  FUN_001024f6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103c93(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c5c,local_18);
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




long FUN_00102884(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101edc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101edc(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103dde(undefined8 *param_1)

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




void FUN_0010304e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_0010397b(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101cbe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025d4(param_2);
  FUN_00102583(&local_31,uVar1);
  uVar1 = FUN_0010255c(param_2);
                    /* try { // try from 00101d24 to 00101d28 has its CatchHandler @ 00101d91 */
  FUN_001025e6(param_1,uVar1,&local_31);
  FUN_00101ac0(&local_31);
  uVar2 = FUN_00101e7a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026a4(param_2);
  uVar4 = FUN_0010264c(param_2);
                    /* try { // try from 00101d72 to 00101d76 has its CatchHandler @ 00101daf */
  uVar1 = FUN_001026fc(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010311d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103311(param_1);
  puVar1 = (undefined8 *)FUN_0010332f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101b32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e7a(param_1);
  FUN_00101e8c(*param_1,param_1[1],uVar1);
  FUN_00101ae0(param_1);
  return;
}




void FUN_00103c25(void)

{
  return;
}




undefined8 FUN_00103491(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027c0(&local_10);
  return *puVar1;
}




void FUN_00101e40(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102741(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_001019b8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010368b("Calling good()...");
  FUN_001019a8();
  FUN_0010368b("Finished good()");
  FUN_0010368b("Calling bad()...");
  FUN_001016a2();
  FUN_0010368b("Finished bad()");
  return 0;
}




void FUN_001037b7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010335e(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102732(void)

{
  return;
}




undefined8 FUN_00102ae6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f37(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010388f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103c46(void)

{
  return;
}




void FUN_00103bc2(void)

{
  return;
}




undefined8 FUN_00103b6d(void)

{
  return 0;
}




undefined8 FUN_001026a4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010279e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102ce2(param_3);
  uVar2 = FUN_00102ccc(param_1);
  FUN_00102cf4(*param_1,uVar2,uVar1);
  return;
}




long FUN_0010255c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




ulong FUN_001029f6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ee2(param_1);
  lVar2 = FUN_0010255c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010255c(local_40);
  local_30 = FUN_0010255c(local_40);
  plVar3 = (long *)FUN_00102f08(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010255c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ee2(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ee2(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00103628(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00102e5c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010264c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010279e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034e7(param_2);
  uVar2 = FUN_001034e7(param_1);
  FUN_0010350d(uVar2,uVar1,param_3);
  return;
}




void FUN_00103bd8(void)

{
  return;
}




undefined8 FUN_001027c0(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_00102b75(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ba2(param_1,param_2);
  return param_1;
}




void FUN_00103e57(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00103a7f(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101edc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010321c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033f6(param_1,param_2,param_3);
  return;
}




void FUN_001035f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103628(param_1,param_2,param_3);
  return;
}




void FUN_00103bf9(void)

{
  return;
}




void FUN_00102920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ddc(param_2);
  uVar2 = FUN_00102ddc(param_1);
  FUN_00102dee(uVar2,uVar1,param_3);
  return;
}




void FUN_00102f37(undefined8 param_1,undefined8 param_2)

{
  FUN_00103186(param_1,param_2,0);
  return;
}




void FUN_001019a8(void)

{
  FUN_00101825();
  return;
}




void FUN_00101eba(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong * FUN_00102f08(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001025e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bcc(param_1,param_3);
                    /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102627 */
  FUN_00102c02(param_1,param_2);
  return;
}




void FUN_00102741(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c92(param_1,param_2,param_3);
  return;
}




void FUN_0010380d(undefined4 param_1)

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




undefined8 FUN_001030d6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102fc5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031cc(param_1,param_2,param_3);
  return;
}




long FUN_0010324d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00101e7a(undefined8 param_1)

{
  return param_1;
}




void FUN_001016a2(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a74(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016d7 to 001017af has its CatchHandler @ 001017fb */
  local_68 = operator_new__(400);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b7a(local_58);
  FUN_00101bca(local_38,&local_60);
  FUN_00101bf8(local_58,local_38[0],1,&local_68);
  FUN_00101cbe(local_38,local_58);
                    /* try { // try from 001017b7 to 001017bb has its CatchHandler @ 001017e6 */
  FUN_00101509(local_38);
  FUN_00101b32(local_38);
  FUN_00101b32(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c51(void)

{
  return;
}




undefined8 FUN_00103b5e(void)

{
  return 1;
}




long FUN_0010167e(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102ff6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102ce2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a1d(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102773(param_1,param_2);
  return;
}




void FUN_00103e76(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001025d4(undefined8 param_1)

{
  return param_1;
}




void FUN_001032c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e5c(param_1);
  uVar1 = FUN_00103446(uVar1,param_2,param_3);
  FUN_001030d6(&local_10,uVar1);
  return;
}




void FUN_0010368b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102583(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b75(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001030a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010324d(param_1,param_2,param_3);
  return;
}




void FUN_001038e8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a34(undefined8 param_1)

{
  FUN_00101ac0(param_1);
  return;
}




void FUN_00103b96(void)

{
  return;
}




void FUN_0010303a(void)

{
  return;
}




void FUN_00103bcd(void)

{
  return;
}




void FUN_00102832(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ccc(param_1);
  FUN_00102d31(*param_1,uVar1);
  return;
}




undefined8 FUN_00101a1d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101bca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101edc(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00101eee(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010279e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102eac(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103376(undefined8 param_1)

{
  return param_1;
}




void FUN_00102773(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb9(param_1,param_2);
  return;
}




void FUN_00101f8a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001029f6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024aa(local_80);
      local_60 = FUN_00102884(&local_88,&local_78);
      local_70 = FUN_00102ae6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e7a(local_80);
                    /* try { // try from 00102294 to 0010231f has its CatchHandler @ 001023d7 */
      FUN_001029c1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e7a(local_80);
      puVar2 = (undefined8 *)FUN_00101edc(&local_88);
      local_70 = FUN_00102b1d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e7a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101edc(&local_88);
      local_70 = FUN_00102b1d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e7a(local_80);
      FUN_00101e8c(*local_80,local_80[1],uVar1);
      FUN_00101e40(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027d2(local_38,param_1,param_4);
                    /* try { // try from 00102014 to 001021e7 has its CatchHandler @ 001023b9 */
      local_50 = FUN_00102866(local_38);
      local_78 = FUN_00101b7a(local_80);
      local_48 = FUN_00102884(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e7a(local_80);
        FUN_001028c8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101edc(&local_88);
        FUN_00102920(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101edc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101edc(&local_88);
        FUN_00102970(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e7a(local_80);
        lVar4 = FUN_001029c1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e7a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101edc(&local_88);
        FUN_001028c8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101edc(&local_88);
        FUN_00102970(*puVar2,local_40,local_50);
      }
      FUN_00102832(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d5b(param_2);
  uVar2 = FUN_00102d5b(param_1);
  FUN_00102da7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102fb2(void)

{
  return;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101dde(param_1);
  FUN_00101dfe(param_1);
  return;
}




void FUN_00102dee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e5c(param_3);
  uVar2 = FUN_00102e5c(local_28);
  uVar3 = FUN_00102e5c(local_20);
  uVar1 = FUN_001030a1(uVar3,uVar2,uVar1);
  FUN_001030d6(&local_30,uVar1);
  return;
}




void FUN_00102eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ec(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102f65(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010304e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_0010279e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103f30(void)

{
  return;
}




void FUN_00103bb7(void)

{
  return;
}




void FUN_00102c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fc5(param_1,param_2,param_3);
  return;
}




void FUN_00102bcc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ba2(param_1,param_2);
  FUN_00101dfe(param_1);
  return;
}




void FUN_00102d31(undefined8 param_1,undefined8 param_2)

{
  FUN_0010303a(param_1,param_2);
  return;
}




void FUN_001038ba(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102ce2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ac0(undefined8 param_1)

{
  FUN_00101e30(param_1);
  return;
}




void FUN_00102ba2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fb2(param_1,param_2);
  return;
}




undefined8 FUN_00101b7a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eba(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c5c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_00102ccc(long param_1)

{
  return param_1 + 8;
}




void FUN_00103388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e5c(param_3);
  uVar2 = FUN_00103491(local_28);
  uVar3 = FUN_00103491(local_20);
  uVar1 = FUN_001034b2(uVar3,uVar2,uVar1);
  FUN_001030d6(&local_30,uVar1);
  return;
}




void FUN_0010306c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010321c(param_1,param_2,param_3);
  return;
}




void FUN_00102c92(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102da7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010306c(param_1,param_2,param_3);
  return;
}




void FUN_001034b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010357b(param_1,param_2,param_3);
  return;
}



