
undefined8 FUN_00101a63(void)

{
  return 0;
}




void FUN_001013c9(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)calloc(1,8);
  if (DAT_00104010 != 0) {
    *__ptr = 5;
    FUN_00101682(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101ace(void)

{
  return;
}




undefined8 FUN_00101cd4(undefined8 *param_1)

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




void FUN_001017de(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101e30(void)

{
  return;
}




undefined8 FUN_00101a54(void)

{
  return 1;
}




void FUN_00101d6c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ae4(void)

{
  return;
}




void FUN_00101ad9(void)

{
  return;
}




void FUN_001016ad(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101785(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00101a72(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b10(void)

{
  return;
}




void FUN_00101b52(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101c56(pthread_t *param_1)

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




void FUN_00101b31(void)

{
  return;
}




void FUN_00101601(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d8b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b26(void)

{
  return;
}




void FUN_0010162d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101aef(void)

{
  return;
}




void FUN_001015d9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ac3(void)

{
  return;
}




void FUN_00101b3c(void)

{
  return;
}




void FUN_001016d8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101aad(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101aa2(void)

{
  return;
}




undefined8 FUN_00101512(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101581("Calling good()...");
  FUN_001014f3();
  FUN_00101581("Finished good()");
  FUN_00101581("Calling bad()...");
  FUN_001013c9();
  FUN_00101581("Finished bad()");
  return 0;
}




undefined8 FUN_00101b89(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b52,local_18);
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




void FUN_00101703(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101afa(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_00101423(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)calloc(1,8);
  if (DAT_00104024 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      FUN_00101682(*__ptr);
      free(__ptr);
    }
  }
  else {
    FUN_00101581("Benign, fixed string");
  }
  return;
}




void FUN_00101682(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001014f3(void)

{
  FUN_00101423();
  FUN_00101492();
  return;
}




void FUN_0010175d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001017b0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101492(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)calloc(1,8);
  if ((DAT_00104010 != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    FUN_00101682(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00101a97(void)

{
  return;
}




void FUN_00101d4d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b1b(void)

{
  return;
}




void FUN_001015a7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101581(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101657(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101871(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101cb1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b05(void)

{
  return;
}




void FUN_00101a8c(void)

{
  return;
}




void FUN_00101ab8(void)

{
  return;
}




void FUN_00101811(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101975(long param_1,ulong param_2,long param_3)

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




void FUN_00101b47(void)

{
  return;
}



