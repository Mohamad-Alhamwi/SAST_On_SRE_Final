
void FUN_00101c4e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101d0f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fa3(void)

{
  return;
}




void FUN_001021eb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102229(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f40(void)

{
  return;
}




void FUN_00101409(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = -1;
  iVar1 = FUN_00101f10();
  if (iVar1 == 0) {
    local_2c = 7;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_2c);
  }
  iVar1 = FUN_00101f10();
  if (iVar1 == 0) {
    local_20 = operator_new__(0x28);
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      *(undefined4 *)((long)local_20 + (long)local_24 * 4) = 0;
    }
    if ((local_2c < 0) || (9 < local_2c)) {
      FUN_00101a1f("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_20 + (long)local_2c * 4) = 1;
      for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
        FUN_00101a77(*(undefined4 *)((long)local_20 + (long)local_24 * 4));
      }
    }
    if (local_20 != (void *)0x0) {
      operator_delete__(local_20);
    }
  }
  else {
    local_18 = operator_new__(0x28);
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      *(undefined4 *)((long)local_18 + (long)local_28 * 4) = 0;
    }
    if (local_2c < 0) {
      FUN_00101a1f("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
      for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
        FUN_00101a77(*(undefined4 *)((long)local_18 + (long)local_28 * 4));
      }
    }
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022d0(void)

{
  return;
}




void FUN_00101f77(void)

{
  return;
}




bool FUN_001020f4(pthread_t *param_1)

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




void FUN_00101a77(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int FUN_00101f10(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101acb(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f6c(void)

{
  return;
}




ulong FUN_00101e13(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001019ba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a1f("Calling good()...");
  FUN_001019a5();
  FUN_00101a1f("Finished good()");
  FUN_00101a1f("Calling bad()...");
  FUN_00101409();
  FUN_00101a1f("Finished bad()");
  return 0;
}




undefined8 FUN_00101f01(void)

{
  return 0;
}




void FUN_00101fae(void)

{
  return;
}




void FUN_00101fda(void)

{
  return;
}




void FUN_00101f82(void)

{
  return;
}




void FUN_00101f56(void)

{
  return;
}




void FUN_00101f98(void)

{
  return;
}




void FUN_00101af5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015f4(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = -1;
  iVar1 = FUN_00101f10();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_2c);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00103008,&local_2c);
  }
  iVar1 = FUN_00101f10();
  if (iVar1 == 0) {
    local_20 = operator_new__(0x28);
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      *(undefined4 *)((long)local_20 + (long)local_24 * 4) = 0;
    }
    if ((local_2c < 0) || (9 < local_2c)) {
      FUN_00101a1f("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_20 + (long)local_2c * 4) = 1;
      for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
        FUN_00101a77(*(undefined4 *)((long)local_20 + (long)local_24 * 4));
      }
    }
    if (local_20 != (void *)0x0) {
      operator_delete__(local_20);
    }
  }
  else {
    local_18 = operator_new__(0x28);
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      *(undefined4 *)((long)local_18 + (long)local_28 * 4) = 0;
    }
    if ((local_2c < 0) || (9 < local_2c)) {
      FUN_00101a1f("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
      for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
        FUN_00101a77(*(undefined4 *)((long)local_18 + (long)local_28 * 4));
      }
    }
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ff0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101ef2(void)

{
  return 1;
}




void FUN_00101b4b(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void FUN_00101bfb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f2a(void)

{
  return;
}




void FUN_00101b76(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c7c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010214f(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001018d0) */
/* WARNING: Removing unreachable block (ram,0x00101983) */

void FUN_00101802(void)

{
  int iVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  FUN_00101f10();
  iVar1 = FUN_00101f10();
  if (iVar1 == 0) {
    pvVar2 = operator_new__(0x28);
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101a77(*(undefined4 *)((long)pvVar2 + (long)local_1c * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  else {
    pvVar2 = operator_new__(0x28);
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00101a77(*(undefined4 *)((long)pvVar2 + (long)local_20 * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




void FUN_00101a1f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010220a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f4b(void)

{
  return;
}




void FUN_00101fe5(void)

{
  return;
}




void FUN_00101fcf(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102172(undefined8 *param_1)

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




void FUN_00101caf(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a45(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c23(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101f8d(void)

{
  return;
}




void FUN_00101fc4(void)

{
  return;
}




void FUN_00101fb9(void)

{
  return;
}




undefined8 FUN_00102027(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ff0,local_18);
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




void FUN_00101f61(void)

{
  return;
}




void FUN_00101f35(void)

{
  return;
}




void FUN_001019a5(void)

{
  FUN_001015f4();
  FUN_00101802();
  return;
}




void FUN_00101a9f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ba1(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}



