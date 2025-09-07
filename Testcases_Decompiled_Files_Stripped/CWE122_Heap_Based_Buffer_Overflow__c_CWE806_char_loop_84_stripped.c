
void FUN_001014b4(long *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  sVar1 = strlen((char *)*param_1);
  for (local_58 = 0; local_58 < sVar1; local_58 = local_58 + 1) {
    *(undefined *)((long)&local_48 + local_58) = *(undefined *)(local_58 + *param_1);
  }
  local_18 = local_18 & 0xff;
  FUN_00101852(*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101953(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019a9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001019d4(undefined4 param_1)

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




undefined8 FUN_00101d34(void)

{
  return 0;
}




void FUN_00101dc0(void)

{
  return;
}




ulong FUN_00101c46(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101852(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101fa5(undefined8 *param_1)

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




void FUN_0010158c(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = operator_new(8);
                    /* try { // try from 001015d1 to 001015d5 has its CatchHandler @ 001015fa */
  FUN_00101730(pvVar2,pvVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_0010177a(pvVar2);
    operator_delete(pvVar2,8);
  }
  return;
}




undefined8 FUN_00101e5a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e23,local_18);
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




void FUN_001018aa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d25(void)

{
  return 1;
}




void FUN_00101dec(void)

{
  return;
}




undefined8 FUN_001016ca(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101852("Calling good()...");
  FUN_001016ba();
  FUN_00101852("Finished good()");
  FUN_00101852("Calling bad()...");
  FUN_0010158c();
  FUN_00101852("Finished bad()");
  return 0;
}




void FUN_00101a56(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e02(void)

{
  return;
}




void FUN_00102100(void)

{
  return;
}




void FUN_0010203d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101db5(void)

{
  return;
}




bool FUN_00101f27(pthread_t *param_1)

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




void FUN_001018d2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d68(void)

{
  return;
}




void FUN_00102090(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a2e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d5d(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f00)();
  return;
}




void FUN_001018fe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010197e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013b0();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001016ba(void)

{
  FUN_00101623();
  return;
}




undefined8 FUN_00101f82(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e23(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101daa(void)

{
  return;
}




void FUN_00101928(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101b42(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d9f(void)

{
  return;
}




void FUN_00101dcb(void)

{
  return;
}




void FUN_0010205c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a81(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dd6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_0010146a(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,0x31);
  *(undefined *)(*param_1 + 0x31) = 0;
  return;
}




void FUN_0010177a(long *param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  sVar1 = strlen((char *)*param_1);
  for (local_58 = 0; local_58 < sVar1; local_58 = local_58 + 1) {
    *(undefined *)((long)&local_48 + local_58) = *(undefined *)(local_58 + *param_1);
  }
  local_18 = local_18 & 0xff;
  FUN_00101852(*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aaf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ae2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101d43(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101730(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,99);
  *(undefined *)(*param_1 + 99) = 0;
  return;
}




void FUN_00101d73(void)

{
  return;
}




void FUN_00101d7e(void)

{
  return;
}




void FUN_00101de1(void)

{
  return;
}




void FUN_00101623(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = operator_new(8);
                    /* try { // try from 00101668 to 0010166c has its CatchHandler @ 00101691 */
  FUN_0010146a(pvVar2,pvVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_001014b4(pvVar2);
    operator_delete(pvVar2,8);
  }
  return;
}




void FUN_00101e18(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101df7(void)

{
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_00101e0d(void)

{
  return;
}




void FUN_0010201e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d94(void)

{
  return;
}




void FUN_00101878(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



