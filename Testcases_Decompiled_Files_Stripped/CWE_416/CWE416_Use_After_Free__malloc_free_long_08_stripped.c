
void FUN_001017fa(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00101e4f(pthread_t *param_1)

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




void FUN_00101d4b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101ecd(undefined8 *param_1)

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




void FUN_0010197e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101cd2(void)

{
  return;
}




void FUN_001016d8(void)

{
  FUN_00101484();
  FUN_0010151e();
  FUN_001015a8();
  FUN_00101647();
  return;
}




void FUN_00101d14(void)

{
  return;
}




void FUN_00101d09(void)

{
  return;
}




void FUN_001017d2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f65(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102020(void)

{
  return;
}




void FUN_00101ce8(void)

{
  return;
}




void FUN_001019d7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001019a9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001013d8(void)

{
  return 0;
}




void FUN_001015a8(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_001013d8();
  if (iVar1 == 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
  }
  else {
    FUN_0010177a("Benign, fixed string");
  }
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    FUN_00101850(*local_18);
  }
  return;
}




void FUN_00101826(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101c4d(void)

{
  return 1;
}




void FUN_00101ca6(void)

{
  return;
}




void FUN_00101d2a(void)

{
  return;
}




void FUN_00101cbc(void)

{
  return;
}




undefined8 FUN_00101eaa(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c85(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101cf3(void)

{
  return;
}




int FUN_00101c6b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d1f(void)

{
  return;
}




void FUN_00101d35(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101a0a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c90(void)

{
  return;
}




void FUN_00101956(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f84(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001013e7(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
    free(local_18);
  }
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    FUN_00101850(*local_18);
  }
  return;
}




void FUN_001018d1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018a6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101cb1(void)

{
  return;
}




void FUN_00101f46(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101484(void)

{
  int iVar1;
  void *__ptr;
  ulong local_18;
  
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
    }
    free(__ptr);
  }
  iVar1 = FUN_001013d8();
  if (iVar1 != 0) {
    FUN_0010177a("Benign, fixed string");
  }
  return;
}




ulong FUN_00101a6a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001013c9(void)

{
  return 1;
}




void FUN_0010151e(void)

{
  int iVar1;
  void *__ptr;
  undefined8 local_18;
  
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      *(undefined8 *)((long)__ptr + local_18 * 8) = 5;
    }
    free(__ptr);
  }
  FUN_001013c9();
  return;
}




void FUN_00101647(void)

{
  int iVar1;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)0x0;
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      local_18[local_10] = 5;
    }
  }
  iVar1 = FUN_001013c9();
  if (iVar1 != 0) {
    FUN_00101850(*local_18);
  }
  return;
}




void FUN_0010187b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cdd(void)

{
  return;
}




undefined8 FUN_00101c5c(void)

{
  return 0;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 FUN_00101d82(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d4b,local_18);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101cfe(void)

{
  return;
}




void FUN_00101d40(void)

{
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




void FUN_0010177a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101cc7(void)

{
  return;
}




ulong FUN_00101b6e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101850(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018fc(undefined4 param_1)

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




undefined8 FUN_0010170b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010177a("Calling good()...");
  FUN_001016d8();
  FUN_0010177a("Finished good()");
  FUN_0010177a("Calling bad()...");
  FUN_001013e7();
  FUN_0010177a("Finished bad()");
  return 0;
}




void FUN_001017a0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c9b(void)

{
  return;
}



