
void FUN_00101e6e(void)

{
  return;
}




void FUN_0010195d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_00101ec6(void)

{
  return;
}




int FUN_00101e28(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016f7(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_00101e19();
  if (iVar1 == 0) {
    local_40 = 7;
  }
  else {
    FUN_00101937("Benign, fixed string");
  }
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_0010198f(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101937("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e63(void)

{
  return;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_00101ed1(void)

{
  return;
}




void FUN_00101b94(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001013a9(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0xffffffff;
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_50 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_50 = rand();
      local_50 = local_50 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((int)local_50 < 10) {
      *(undefined4 *)((long)&local_48 + (long)(int)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_0010198f(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
    else {
      FUN_00101937("ERROR: Array index is negative.");
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101e0a(void)

{
  return 1;
}




void FUN_00101e79(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101f08(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102122(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
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




undefined8 FUN_00102067(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ab9(undefined4 param_1)

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




bool FUN_0010200c(pthread_t *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
  return;
}




void FUN_00101b13(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ee7(void)

{
  return;
}




void FUN_00101a8e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ebb(void)

{
  return;
}




undefined8 FUN_0010208a(undefined8 *param_1)

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




void FUN_00101bc7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ea5(void)

{
  return;
}




void FUN_001015df(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0xffffffff;
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_50 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_50 = rand();
      local_50 = local_50 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_50 < 0) || (9 < (int)local_50)) {
      FUN_00101937("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_0010198f(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e9a(void)

{
  return;
}




void FUN_00101a0d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102141(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101c27(long param_1,ulong param_2,long param_3)

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




void FUN_00101895(void)

{
  FUN_001014b9();
  FUN_001015df();
  FUN_001016f7();
  FUN_001017cd();
  return;
}




void FUN_00101ef2(void)

{
  return;
}




undefined8 FUN_001018c8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101937("Calling good()...");
  FUN_00101895();
  FUN_00101937("Finished good()");
  FUN_00101937("Calling bad()...");
  FUN_001013a9();
  FUN_00101937("Finished bad()");
  return 0;
}




void FUN_00101937(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010198f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b66(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019e3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101d2b(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101e19(void)

{
  return 0;
}




void FUN_001019b7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e8f(void)

{
  return;
}




undefined8 FUN_00101f3f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f08,local_18);
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




void FUN_00101a63(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b3b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001014b9(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0xffffffff;
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_50 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_50 = rand();
      local_50 = local_50 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = FUN_00101e19();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (((int)local_50 < 0) || (9 < (int)local_50)) {
      FUN_00101937("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)(int)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_0010198f(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
  }
  else {
    FUN_00101937("Benign, fixed string");
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001017cd(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    local_40 = 7;
  }
  iVar1 = FUN_00101e0a();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_0010198f(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101937("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e4d(void)

{
  return;
}




void FUN_001021e0(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00105008);
    }
    FUN_001012f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101efd(void)

{
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_00101eb0(void)

{
  return;
}




void FUN_00101e42(void)

{
  return;
}




void FUN_00101e58(void)

{
  return;
}




void FUN_00102103(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



