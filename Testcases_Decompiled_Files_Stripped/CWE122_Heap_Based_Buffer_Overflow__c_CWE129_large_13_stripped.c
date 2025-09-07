
void FUN_00101b37(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101e24(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ee3(void)

{
  return;
}




void FUN_00101a34(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102063(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_00102008(pthread_t *param_1)

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




void FUN_00101b0f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ef9(void)

{
  return;
}




void FUN_00101e49(void)

{
  return;
}




void FUN_00101e3e(void)

{
  return;
}




void FUN_00101933(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019df(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e75(void)

{
  return;
}




void FUN_00101eb7(void)

{
  return;
}




void FUN_001020ff(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ecd(void)

{
  return;
}




void FUN_00101e96(void)

{
  return;
}




void FUN_001016a9(void)

{
  void *__ptr;
  int local_18;
  int local_14;
  
  local_18 = -1;
  if (DAT_00103114 == 5) {
    local_18 = 7;
  }
  else {
    FUN_00101933("Benign, fixed string");
  }
  if (DAT_00103114 == 5) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101933("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_0010198b(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101f04(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e8b(void)

{
  return;
}




undefined8 FUN_00102086(undefined8 *param_1)

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




void FUN_0010211e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101876) */

void FUN_001017a4(void)

{
  void *__ptr;
  undefined4 local_14;
  
  if (DAT_00103114 == 5) {
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
      FUN_0010198b(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
    free(__ptr);
  }
  return;
}




void FUN_00101e54(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101642) */
/* WARNING: Removing unreachable block (ram,0x00101686) */
/* WARNING: Removing unreachable block (ram,0x00101665) */
/* WARNING: Removing unreachable block (ram,0x0010168c) */

void FUN_001015b6(void)

{
  void *__ptr;
  int local_14;
  
  if (DAT_00103114 == 5) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    FUN_00101933("ERROR: Array index is out-of-bounds");
    free(__ptr);
  }
  return;
}




undefined8 FUN_00101e15(void)

{
  return 0;
}




void FUN_00101ea1(void)

{
  return;
}




void FUN_00101959(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101d27(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00101c23(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




void FUN_00101ec2(void)

{
  return;
}




void FUN_0010198b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e5f(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




undefined8 FUN_001018c4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101933("Calling good()...");
  FUN_00101891();
  FUN_00101933("Finished good()");
  FUN_00101933("Calling bad()...");
  FUN_001013c9();
  FUN_00101933("Finished bad()");
  return 0;
}




void FUN_001019b3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101a09(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101bc3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101eee(void)

{
  return;
}




void FUN_00101e80(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x0010154f) */
/* WARNING: Removing unreachable block (ram,0x00101593) */
/* WARNING: Removing unreachable block (ram,0x00101572) */
/* WARNING: Removing unreachable block (ram,0x00101599) */

void FUN_001014b6(void)

{
  void *__ptr;
  int local_14;
  
  if (DAT_00103114 == 5) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    FUN_00101933("ERROR: Array index is out-of-bounds");
    free(__ptr);
  }
  else {
    FUN_00101933("Benign, fixed string");
  }
  return;
}




void FUN_001021e0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x0010149b) */

void FUN_001013c9(void)

{
  void *__ptr;
  undefined4 local_14;
  
  if (DAT_00103114 == 5) {
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
      FUN_0010198b(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
    free(__ptr);
  }
  return;
}




undefined8 FUN_00101f3b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f04,local_18);
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




void FUN_0010213d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101891(void)

{
  FUN_001014b6();
  FUN_001015b6();
  FUN_001016a9();
  FUN_001017a4();
  return;
}




void FUN_00101a8a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ed8(void)

{
  return;
}




void FUN_00101e6a(void)

{
  return;
}




void FUN_00101b90(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101e06(void)

{
  return 1;
}




void FUN_00101a5f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ab5(undefined4 param_1)

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




void FUN_00101eac(void)

{
  return;
}



