
void FUN_00101f0c(void)

{
  return;
}




void FUN_00101b83(undefined4 param_1)

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




void FUN_00101f2d(void)

{
  return;
}




void FUN_00101fa6(void)

{
  return;
}




void FUN_00101fd2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001013c9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  uint local_28;
  int local_24;
  
  local_28 = 0xffffffff;
  if (DAT_0010310c != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_28 = rand();
      local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (DAT_0010310c != 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
    }
    if ((int)local_28 < 0) {
      FUN_00101a01("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)(int)local_28 * 4) = 1;
      for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
        FUN_00101a59(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101f4e(void)

{
  return;
}




undefined8 FUN_00101ee3(void)

{
  return 0;
}




void FUN_00101a27(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101aad(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001021ec(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b02(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101df5(long param_1,ulong param_2,long param_3)

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




void FUN_0010177b(void)

{
  void *__ptr;
  int local_18;
  int local_14;
  
  local_18 = -1;
  if (DAT_00103110 == 0) {
    local_18 = 7;
  }
  else {
    FUN_00101a01("Benign, fixed string");
  }
  if (DAT_0010310c != 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101a01("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101a59(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101f90(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101b2d(undefined8 param_1)

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




void FUN_0010195f(void)

{
  FUN_001014fc();
  FUN_00101642();
  FUN_0010177b();
  FUN_00101874();
  return;
}




void FUN_00101a59(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101944) */

void FUN_00101874(void)

{
  void *__ptr;
  undefined4 local_14;
  
  if (DAT_0010310c != 0) {
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
      FUN_00101a59(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
    free(__ptr);
  }
  return;
}




void FUN_00101b58(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f59(void)

{
  return;
}




void FUN_001014fc(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  uint local_28;
  int local_24;
  
  local_28 = 0xffffffff;
  if (DAT_0010310c != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_28 = rand();
      local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (DAT_00103110 == 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
    }
    if (((int)local_28 < 0) || (9 < (int)local_28)) {
      FUN_00101a01("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)(int)local_28 * 4) = 1;
      for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
        FUN_00101a59(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
      }
    }
    free(__ptr);
  }
  else {
    FUN_00101a01("Benign, fixed string");
  }
  return;
}




void FUN_00101c30(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101f17(void)

{
  return;
}




void FUN_00101fbc(void)

{
  return;
}




void FUN_00101fb1(void)

{
  return;
}




void FUN_00101a01(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c5e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c05(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f38(void)

{
  return;
}




void FUN_00101f9b(void)

{
  return;
}




void FUN_00101f22(void)

{
  return;
}




void FUN_00101ad7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101ef2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102009(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fd2,local_18);
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




bool FUN_001020d6(pthread_t *param_1)

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




undefined8 FUN_00102131(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f43(void)

{
  return;
}




void FUN_00101bdd(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101fc7(void)

{
  return;
}




void FUN_00102240(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010220b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f7a(void)

{
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101f64(void)

{
  return;
}




undefined8 FUN_00101ed4(void)

{
  return 1;
}




void FUN_00101a81(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101992(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a01("Calling good()...");
  FUN_0010195f();
  FUN_00101a01("Finished good()");
  FUN_00101a01("Calling bad()...");
  FUN_001013c9();
  FUN_00101a01("Finished bad()");
  return 0;
}




ulong FUN_00101cf1(long param_1,ulong param_2,long param_3)

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




void FUN_001022b0(void)

{
  return;
}




undefined8 FUN_00102154(undefined8 *param_1)

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




void FUN_00101642(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  uint local_28;
  int local_24;
  
  local_28 = 0xffffffff;
  if (DAT_0010310c != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_28 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_28 = rand();
      local_28 = local_28 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (DAT_0010310c != 0) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
    }
    if (((int)local_28 < 0) || (9 < (int)local_28)) {
      FUN_00101a01("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)(int)local_28 * 4) = 1;
      for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
        FUN_00101a59(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
      }
    }
    free(__ptr);
  }
  return;
}




void FUN_00101c91(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f6f(void)

{
  return;
}




void FUN_00101f85(void)

{
  return;
}




void FUN_001021cd(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



