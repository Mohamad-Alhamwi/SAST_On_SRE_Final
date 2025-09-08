
undefined8 FUN_0010274b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010293a("Calling good()...");
  FUN_0010273b();
  FUN_0010293a("Finished good()");
  FUN_0010293a("Calling bad()...");
  FUN_00102529();
  FUN_0010293a("Finished bad()");
  return 0;
}




void FUN_00102e5b(void)

{
  return;
}




void FUN_00102a3b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b97(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103144(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102abc(undefined4 param_1)

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




void FUN_0010293a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102ef5(void)

{
  return;
}




int FUN_00102e2b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102992(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b3e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a66(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102483) */
/* WARNING: Removing unreachable block (ram,0x0010248f) */

void FUN_00102470(void)

{
  return;
}




undefined8 FUN_00102e0d(void)

{
  return 1;
}




void FUN_00102eb3(void)

{
  return;
}




undefined8 FUN_00102e1c(void)

{
  return 0;
}




void FUN_001026d1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  FUN_001027fc(puVar1);
  (**(code **)*puVar1)(puVar1,0x14);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




undefined8 FUN_0010306a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102e9d(void)

{
  return;
}




void FUN_00102edf(void)

{
  return;
}




void FUN_00102960(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001031e0(void)

{
  return;
}




bool FUN_0010300f(pthread_t *param_1)

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




void FUN_00102a91(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024c4) */
/* WARNING: Removing unreachable block (ram,0x001024d0) */

void FUN_001024a0(void)

{
  return;
}




ulong FUN_00102d2e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104284,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027ce(undefined8 *param_1)

{
  FUN_001027b0(param_1);
  *param_1 = &PTR_FUN_00106c50;
  return;
}




void FUN_0010282a(undefined8 param_1,int param_2)

{
  undefined4 *__ptr;
  ulong local_18;
  
  __ptr = (undefined4 *)malloc((long)param_2 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)param_2; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00102992(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00102ebe(void)

{
  return;
}




void FUN_00102bca(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103106(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001028b2(undefined8 param_1,int param_2)

{
  undefined4 *__ptr;
  ulong local_18;
  
  __ptr = (undefined4 *)malloc((long)param_2 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)param_2; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00102992(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102eea(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107018 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00102470();
    DAT_00107018 = 1;
    return;
  }
  return;
}




void FUN_001027fc(undefined8 *param_1)

{
  FUN_001027b0(param_1);
  *param_1 = &PTR_FUN_00106c38;
  return;
}




void FUN_00102e66(void)

{
  return;
}




void FUN_00102f00(void)

{
  return;
}




void FUN_00103170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b69(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102e45(void)

{
  return;
}




void FUN_00102ed4(void)

{
  return;
}




void FUN_00102e71(void)

{
  return;
}




void FUN_001029ba(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e7c(void)

{
  return;
}




void FUN_00102e87(void)

{
  return;
}




void FUN_00102ec9(void)

{
  return;
}




void FUN_0010273b(void)

{
  FUN_001026d1();
  return;
}




undefined8 FUN_00102f42(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102f0b,local_18);
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




void FUN_001027b0(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00106c68;
  return;
}




ulong FUN_00102c2a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010427c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010308d(undefined8 *param_1)

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




void FUN_00102ea8(void)

{
  return;
}




void FUN_00103125(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102e50(void)

{
  return;
}




void FUN_00102e92(void)

{
  return;
}




void FUN_00102529(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = -1;
  local_5c = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_5c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_5c != -1)) {
      sVar2 = recv(local_5c,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_60 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_5c != -1) {
    close(local_5c);
  }
  puVar3 = (undefined8 *)operator_new(8);
  FUN_001027ce(puVar3);
  (**(code **)*puVar3)(puVar3,local_60);
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102a10(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102f0b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102b16(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001029e6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



