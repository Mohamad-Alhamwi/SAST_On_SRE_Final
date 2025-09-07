
void FUN_00101d0e(void)

{
  return;
}




void FUN_00101d9d(void)

{
  return;
}




void FUN_00101db3(void)

{
  return;
}




void FUN_00101dbe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101919(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010156a(void)

{
  long in_FS_OFFSET;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &PTR_FUN_00105ca8;
  local_18 = &local_20;
  (*(code *)PTR_FUN_00105ca8)(local_18,10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010196f(undefined4 param_1)

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




void FUN_001020a0(void)

{
  return;
}




void FUN_00101ff7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d5b(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106018 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101310();
    DAT_00106018 = 1;
    return;
  }
  return;
}




void FUN_00101899(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a4a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d19(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101d71(void)

{
  return;
}




void FUN_00102030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001015d5(void)

{
  FUN_001014ff();
  FUN_0010156a();
  return;
}




void FUN_001017ed(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d3a(void)

{
  return;
}




bool FUN_00101ec2(pthread_t *param_1)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014ff(void)

{
  long in_FS_OFFSET;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &PTR_FUN_00105c90;
  local_18 = &local_20;
  (*(code *)PTR_FUN_00105c90)(local_18,7);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101cc0(void)

{
  return 1;
}




void FUN_00101845(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d7c(void)

{
  return;
}




void FUN_00101a7d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101a1c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019c9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101df5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dbe,local_18);
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




void FUN_001018c3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101be1(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103308,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d87(void)

{
  return;
}




void FUN_00101da8(void)

{
  return;
}




void FUN_00101944(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf8(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f28)();
  return;
}




void FUN_00101d2f(void)

{
  return;
}




void FUN_00101813(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010171a(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if ((param_2 < 0) || (9 < param_2)) {
    FUN_001017ed("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101845(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001018ee(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d92(void)

{
  return;
}




void FUN_00101fd8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101f1d(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101ccf(void)

{
  return 0;
}




void FUN_00101d03(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101494(void)

{
  long in_FS_OFFSET;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &PTR_FUN_00105c78;
  local_18 = &local_20;
  (*(code *)PTR_FUN_00105c78)(local_18,10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d50(void)

{
  return;
}




undefined8 FUN_00101f40(undefined8 *param_1)

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




void FUN_00101fb9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101650(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_001017ed("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101845(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101d45(void)

{
  return;
}




undefined8 FUN_001015ea(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017ed("Calling good()...");
  FUN_001015d5();
  FUN_001017ed("Finished good()");
  FUN_001017ed("Calling bad()...");
  FUN_00101494();
  FUN_001017ed("Finished bad()");
  return 0;
}




void FUN_00101d24(void)

{
  return;
}




void FUN_0010186d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00101add(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103300,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_001013ca(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_001017ed("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101845(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




int FUN_00101cde(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001019f1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d66(void)

{
  return;
}



