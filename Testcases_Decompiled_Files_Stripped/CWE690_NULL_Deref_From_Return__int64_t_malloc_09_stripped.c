
void FUN_00101aec(void)

{
  return;
}




void FUN_0010172e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001014e3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101552("Calling good()...");
  FUN_001014c4();
  FUN_00101552("Finished good()");
  FUN_00101552("Calling bad()...");
  FUN_001013a9();
  FUN_00101552("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_00101552(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




undefined8 FUN_00101c82(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ab5(void)

{
  return;
}




void FUN_00101628(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ae1(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101d1e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ca5(undefined8 *param_1)

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




void FUN_00101a73(void)

{
  return;
}




void FUN_001015aa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a9f(void)

{
  return;
}




void FUN_00101af7(void)

{
  return;
}




void FUN_00101468(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if ((DAT_001020c0 != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    FUN_00101653(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101e00(void)

{
  return;
}




undefined8 FUN_00101a34(void)

{
  return 0;
}




void FUN_001013fe(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (DAT_001020c4 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      FUN_00101653(*__ptr);
      free(__ptr);
    }
  }
  else {
    FUN_00101552("Benign, fixed string");
  }
  return;
}




int FUN_00101a43(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d3d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101a25(void)

{
  return 1;
}




void FUN_001013a9(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (DAT_001020c0 != 0) {
    *__ptr = 5;
    FUN_00101653(*__ptr);
    free(__ptr);
  }
  return;
}




bool FUN_00101c27(pthread_t *param_1)

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




void FUN_00101a7e(void)

{
  return;
}




void FUN_00101b23(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001015fe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b18(void)

{
  return;
}




void FUN_001017e2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101a89(void)

{
  return;
}




void FUN_0010167e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d5c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001016a9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001016d4(undefined4 param_1)

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




void FUN_00101756(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a68(void)

{
  return;
}




void FUN_001017af(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a94(void)

{
  return;
}




void FUN_00101aaa(void)

{
  return;
}




void FUN_00101781(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b0d(void)

{
  return;
}




undefined8 FUN_00101b5a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b23,local_18);
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




void FUN_001014c4(void)

{
  FUN_001013fe();
  FUN_00101468();
  return;
}




ulong FUN_00101946(long param_1,ulong param_2,long param_3)

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




ulong FUN_00101842(long param_1,ulong param_2,long param_3)

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




void FUN_00101a5d(void)

{
  return;
}




void FUN_001015d2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101653(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101acb(void)

{
  return;
}




void FUN_00101578(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b02(void)

{
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




void FUN_00101ac0(void)

{
  return;
}




void FUN_00101ad6(void)

{
  return;
}



