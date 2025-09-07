
void FUN_00101913(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fd2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101f3a(undefined8 *param_1)

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




void FUN_00102020(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101ad7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d6b(void)

{
  return;
}




void FUN_0010183f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101dad(void)

{
  return;
}




void FUN_00101da2(void)

{
  return;
}




void FUN_001018e8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d81(void)

{
  return;
}




undefined8 FUN_00101cba(void)

{
  return 1;
}




ulong FUN_00101bdb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010160d(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_00105024;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if ((iVar1 < 0) || (9 < iVar1)) {
      FUN_001017e7("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_0010183f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_001017e7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010193e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cfd(void)

{
  return;
}




void FUN_00101d3f(void)

{
  return;
}




undefined8 FUN_00101def(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101db8,local_18);
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




void FUN_00101d55(void)

{
  return;
}




void FUN_00101ff1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_001013c9(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_0010501c;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_001017e7("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_0010183f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d8c(void)

{
  return;
}




void FUN_00101d13(void)

{
  return;
}




void FUN_00101db8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101ebc(pthread_t *param_1)

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




void FUN_00101497(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    DAT_0010501c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    DAT_0010501c = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  FUN_001013c9();
  return;
}




undefined8 FUN_00101cc9(void)

{
  return 0;
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




void FUN_00101a77(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d29(void)

{
  return;
}




void FUN_001016e1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    DAT_00105024 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    DAT_00105024 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  FUN_0010160d();
  return;
}




void FUN_00101a16(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019eb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d4a(void)

{
  return;
}




void FUN_00102090(void)

{
  return;
}




void FUN_00101759(void)

{
  FUN_001015dd();
  FUN_001016e1();
  return;
}




int FUN_00101cd8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001015dd(void)

{
  DAT_00105020 = 7;
  FUN_0010150f();
  return;
}




undefined8 FUN_00101778(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017e7("Calling good()...");
  FUN_00101759();
  FUN_001017e7("Finished good()");
  FUN_001017e7("Calling bad()...");
  FUN_00101497();
  FUN_001017e7("Finished bad()");
  return 0;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_0010180d(long param_1)

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




void FUN_001019c3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d76(void)

{
  return;
}




void FUN_00101d08(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101fb3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101d97(void)

{
  return;
}




undefined8 FUN_00101f17(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010150f(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_00105020;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_001017e7("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_0010183f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101893(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d60(void)

{
  return;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_00101969(undefined4 param_1)

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




void FUN_00101a44(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101867(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018bd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d34(void)

{
  return;
}



