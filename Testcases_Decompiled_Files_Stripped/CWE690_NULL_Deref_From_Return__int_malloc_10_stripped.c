
void FUN_00101b1a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00101839(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015f5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101462(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(4);
  if ((DAT_00104010 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 5;
    FUN_001015a1(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_0010161f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00104008);
    }
    FUN_001012f0();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_001014bb(void)

{
  FUN_001013fb();
  FUN_00101462();
  return;
}




void FUN_00101d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ae3(void)

{
  return;
}




void FUN_00101725(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b0f(void)

{
  return;
}




void FUN_001013a9(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(4);
  if (DAT_00104010 != 0) {
    *__ptr = 5;
    FUN_001015a1(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101df0(void)

{
  return;
}




void FUN_00101aa1(void)

{
  return;
}




void FUN_00101675(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101acd(void)

{
  return;
}




undefined8 FUN_00101b51(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b1a,local_18);
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




void FUN_001015a1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_00101a75(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_0010156f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a80(void)

{
  return;
}




void FUN_00101a6a(void)

{
  return;
}




void FUN_00101549(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d53(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101aac(void)

{
  return;
}




void FUN_00101d15(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001016cb(undefined4 param_1)

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




undefined8 FUN_00101c9c(undefined8 *param_1)

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




int FUN_00101a3a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ab7(void)

{
  return;
}




void FUN_00101778(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017a6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001017d9(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_0010193d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a96(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




undefined8 FUN_00101a2b(void)

{
  return 0;
}




void FUN_00101ac2(void)

{
  return;
}




undefined8 FUN_00101a1c(void)

{
  return 1;
}




void FUN_00101ad8(void)

{
  return;
}




undefined8 FUN_00101c79(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d34(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void FUN_001015c9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a5f(void)

{
  return;
}




void FUN_001013fb(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(4);
  if (DAT_00104020 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 5;
      FUN_001015a1(*__ptr);
      free(__ptr);
    }
  }
  else {
    FUN_00101549("Benign, fixed string");
  }
  return;
}




void FUN_00101a54(void)

{
  return;
}




void FUN_00101a8b(void)

{
  return;
}




void FUN_001016a0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010174d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101af9(void)

{
  return;
}




void FUN_0010164a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101c1e(pthread_t *param_1)

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




undefined8 FUN_001014da(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101549("Calling good()...");
  FUN_001014bb();
  FUN_00101549("Finished good()");
  FUN_00101549("Calling bad()...");
  FUN_001013a9();
  FUN_00101549("Finished bad()");
  return 0;
}




void FUN_00101aee(void)

{
  return;
}




void FUN_00101b04(void)

{
  return;
}



