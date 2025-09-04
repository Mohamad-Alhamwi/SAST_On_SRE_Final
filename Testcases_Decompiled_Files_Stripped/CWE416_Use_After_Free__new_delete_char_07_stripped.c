
void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_00101b5c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101452(void)

{
  undefined *puVar1;
  
  if (DAT_00104010 == 5) {
    puVar1 = (undefined *)operator_new(1);
    *puVar1 = 0x41;
    if (puVar1 != (undefined *)0x0) {
      operator_delete(puVar1,1);
    }
  }
  if (DAT_00104010 != 5) {
    FUN_0010163b("Benign, fixed string");
  }
  return;
}




void FUN_00101b7d(void)

{
  return;
}




undefined8 FUN_00101d6b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bca(void)

{
  return;
}




void FUN_00101711(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c01(void)

{
  return;
}




void FUN_0010186a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ba9(void)

{
  return;
}




void FUN_001018cb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101bf6(void)

{
  return;
}




void FUN_001015b7(void)

{
  FUN_00101452();
  FUN_001014b6();
  FUN_00101503();
  FUN_00101564();
  return;
}




undefined8 FUN_001015d6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010163b("Calling good()...");
  FUN_001015b7();
  FUN_0010163b("Finished good()");
  FUN_0010163b("Calling bad()...");
  FUN_001013e9();
  FUN_0010163b("Finished bad()");
  return 0;
}




void FUN_00101503(void)

{
  char *local_10;
  
  local_10 = (char *)0x0;
  if (DAT_00104010 == 5) {
    local_10 = (char *)operator_new(1);
    *local_10 = 'A';
  }
  else {
    FUN_0010163b("Benign, fixed string");
  }
  if (DAT_00104010 == 5) {
    FUN_00101792((int)*local_10);
  }
  return;
}




void FUN_00101b88(void)

{
  return;
}




void FUN_001017bd(undefined4 param_1)

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




void FUN_00101b9e(void)

{
  return;
}




undefined8 FUN_00101d8e(undefined8 *param_1)

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




void FUN_00101e70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001013e9(void)

{
  undefined8 local_10;
  
  local_10 = (char *)0x0;
  if (DAT_00104010 == 5) {
    local_10 = (char *)operator_new(1);
    *local_10 = 'A';
    if (local_10 != (char *)0x0) {
      operator_delete(local_10,1);
    }
  }
  if (DAT_00104010 == 5) {
    FUN_00101792((int)*local_10);
  }
  return;
}




void FUN_00101be0(void)

{
  return;
}




void FUN_00101c0c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00101d10(pthread_t *param_1)

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




ulong FUN_0010192b(long param_1,ulong param_2,long param_3)

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




void FUN_0010173c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101661(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101b93(void)

{
  return;
}




undefined8 FUN_00101b0e(void)

{
  return 1;
}




void FUN_00101564(void)

{
  undefined8 local_10;
  
  local_10 = (char *)0x0;
  if (DAT_00104010 == 5) {
    local_10 = (char *)operator_new(1);
    *local_10 = 'A';
  }
  if (DAT_00104010 == 5) {
    FUN_00101792((int)*local_10);
  }
  return;
}




void FUN_00101b46(void)

{
  return;
}




void FUN_00101bb4(void)

{
  return;
}




void FUN_001014b6(void)

{
  undefined *puVar1;
  
  if (DAT_00104010 == 5) {
    puVar1 = (undefined *)operator_new(1);
    *puVar1 = 0x41;
    if (puVar1 != (undefined *)0x0) {
      operator_delete(puVar1,1);
    }
  }
  return;
}




undefined8 FUN_00101b1d(void)

{
  return 0;
}




void FUN_00101b67(void)

{
  return;
}




void FUN_00101767(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101817(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bd5(void)

{
  return;
}




void FUN_00101ee0(void)

{
  return;
}




void FUN_00101e45(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001016e7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b72(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_0010183f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101a2f(long param_1,ulong param_2,long param_3)

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




void FUN_00101b51(void)

{
  return;
}




void FUN_001016bb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101c43(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c0c,local_18);
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




void FUN_00101e26(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101e07(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101beb(void)

{
  return;
}




void FUN_00101bbf(void)

{
  return;
}




void FUN_00101792(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101898(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00101b2c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101693(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010163b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



