
int FUN_00101f1a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101793(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_00101f0b();
  if (iVar1 == 0) {
    local_18 = 7;
  }
  else {
    FUN_00101a29("Benign, fixed string");
  }
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101a29("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101a81(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101f81(void)

{
  return;
}




void FUN_001021f5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101cb9(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101f0b(void)

{
  return 0;
}




void FUN_00102233(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f97(void)

{
  return;
}




void FUN_00101f8c(void)

{
  return;
}




void FUN_00101b80(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101c58(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f34(void)

{
  return;
}




void FUN_00101fc3(void)

{
  return;
}




undefined8 FUN_00102031(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ffa,local_18);
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




undefined8 FUN_00102159(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101fe4(void)

{
  return;
}




void FUN_00101ad5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102260(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fd9(void)

{
  return;
}




void FUN_00101aff(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101fa2(void)

{
  return;
}




void FUN_00101aa9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f76(void)

{
  return;
}




void FUN_00101fef(void)

{
  return;
}




void FUN_00101bab(undefined4 param_1)

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




void FUN_00101f60(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101f55(void)

{
  return;
}




void FUN_00101a29(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




bool FUN_001020fe(pthread_t *param_1)

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




void FUN_00101c05(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001013e9(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_20);
  }
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    local_18 = malloc(0x28);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
    }
    if (local_20 < 0) {
      FUN_00101a29("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
      for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
        FUN_00101a81(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
      }
    }
    free(local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101fad(void)

{
  return;
}




void FUN_00101518(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_20);
  }
  iVar1 = FUN_00101f0b();
  if (iVar1 == 0) {
    local_18 = malloc(0x28);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
    }
    if ((local_20 < 0) || (9 < local_20)) {
      FUN_00101a29("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
      for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
        FUN_00101a81(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
      }
    }
    free(local_18);
  }
  else {
    FUN_00101a29("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010165c(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_20);
  }
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    local_18 = malloc(0x28);
    if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
    }
    if ((local_20 < 0) || (9 < local_20)) {
      FUN_00101a29("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
      for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
        FUN_00101a81(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
      }
    }
    free(local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101894(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    local_18 = 7;
  }
  iVar1 = FUN_00101efc();
  if (iVar1 != 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101a29("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101a81(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101b55(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001019ba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a29("Calling good()...");
  FUN_00101987();
  FUN_00101a29("Finished good()");
  FUN_00101a29("Calling bad()...");
  FUN_001013e9();
  FUN_00101a29("Finished bad()");
  return 0;
}




void FUN_00101c2d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c86(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101987(void)

{
  FUN_00101518();
  FUN_0010165c();
  FUN_00101793();
  FUN_00101894();
  return;
}




void FUN_00101f4a(void)

{
  return;
}




void FUN_00102214(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fce(void)

{
  return;
}




void FUN_00101a81(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a4f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001022d0(void)

{
  return;
}




void FUN_00101b2a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105028 = 1;
    return;
  }
  return;
}




ulong FUN_00101e1d(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010217c(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101fb8(void)

{
  return;
}




void FUN_00101f3f(void)

{
  return;
}




void FUN_00101f6b(void)

{
  return;
}




ulong FUN_00101d19(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101efc(void)

{
  return 1;
}




void FUN_00101ffa(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



