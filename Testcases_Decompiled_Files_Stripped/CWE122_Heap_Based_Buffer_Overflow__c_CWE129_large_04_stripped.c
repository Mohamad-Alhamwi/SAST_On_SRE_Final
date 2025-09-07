
void FUN_00101b7c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101e35(void)

{
  return;
}




void FUN_00101ee5(void)

{
  return;
}




void FUN_00101a76(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010210a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001020eb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b4e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f27(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ef0,local_18);
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




void FUN_00101e4b(void)

{
  return;
}




void FUN_00101e40(void)

{
  return;
}




void FUN_00101977(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a20(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101baf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e77(void)

{
  return;
}




void FUN_00101eb9(void)

{
  return;
}




void FUN_00102160(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ecf(void)

{
  return;
}




void FUN_00101e98(void)

{
  return;
}




void FUN_0010187d(void)

{
  FUN_001014b2();
  FUN_001015ae();
  FUN_0010169d();
  FUN_00101794();
  return;
}




bool FUN_00101ff4(pthread_t *param_1)

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




void FUN_00101e8d(void)

{
  return;
}




void FUN_00102129(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001021d0(void)

{
  return;
}




undefined8 FUN_001018b0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010191f("Calling good()...");
  FUN_0010187d();
  FUN_0010191f("Finished good()");
  FUN_0010191f("Calling bad()...");
  FUN_001013c9();
  FUN_0010191f("Finished bad()");
  return 0;
}




void FUN_00101e56(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101862) */

void FUN_00101794(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101977(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




void FUN_00101e2a(void)

{
  return;
}




void FUN_00101ea3(void)

{
  return;
}




void FUN_0010199f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101e01(void)

{
  return 0;
}




undefined8 FUN_00101df2(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001014de) */
/* WARNING: Removing unreachable block (ram,0x00101547) */
/* WARNING: Removing unreachable block (ram,0x0010158b) */
/* WARNING: Removing unreachable block (ram,0x0010156a) */
/* WARNING: Removing unreachable block (ram,0x00101591) */

void FUN_001014b2(void)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    FUN_0010191f("ERROR: Array index is out-of-bounds");
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101ec4(void)

{
  return;
}




void FUN_001019cb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e61(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101945(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101497) */

void FUN_001013c9(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x28) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101977(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




void FUN_001019f5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a4b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




ulong FUN_00101d13(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ef0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e82(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001016b9) */
/* WARNING: Removing unreachable block (ram,0x00101779) */

void FUN_0010169d(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101977(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101636) */
/* WARNING: Removing unreachable block (ram,0x0010167a) */
/* WARNING: Removing unreachable block (ram,0x00101659) */
/* WARNING: Removing unreachable block (ram,0x00101680) */

void FUN_001015ae(void)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    FUN_0010191f("ERROR: Array index is out-of-bounds");
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




undefined8 FUN_0010204f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010191f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102072(undefined8 *param_1)

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




void FUN_00101afb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101eda(void)

{
  return;
}




void FUN_00101e6c(void)

{
  return;
}




ulong FUN_00101c0f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00101e10(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101aa1(undefined4 param_1)

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




void FUN_00101b23(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101eae(void)

{
  return;
}



