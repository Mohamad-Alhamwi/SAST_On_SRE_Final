
void FUN_00103200(void)

{
  return;
}




ulong FUN_00102c47(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104278,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f28(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010292a(undefined8 *param_1)

{
  FUN_001028de(param_1);
  *param_1 = &PTR_FUN_00106c30;
  return;
}




void FUN_00102a58(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103087(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001029af(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102656(void)

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
  FUN_001028fc(puVar3);
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




void FUN_00102ec5(void)

{
  return;
}




void FUN_00102b86(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102868(void)

{
  FUN_001027fe();
  return;
}




void FUN_00102a03(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102957(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b33(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102e83(void)

{
  return;
}




void FUN_00102b5b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102efc(void)

{
  return;
}




void FUN_00103190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e6d(void)

{
  return;
}




void FUN_00102eaf(void)

{
  return;
}




void FUN_001027fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  FUN_0010292a(puVar1);
  (**(code **)*puVar1)(puVar1,0x14);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




bool FUN_0010302c(pthread_t *param_1)

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




void FUN_00103161(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102ef1(void)

{
  return;
}




void FUN_0010297d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102ad9(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001024e4) */
/* WARNING: Removing unreachable block (ram,0x001024f0) */

void FUN_001024c0(void)

{
  return;
}




void FUN_0010254a(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)param_2 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)param_2; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001029af(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_00102e8e(void)

{
  return;
}




void FUN_00103142(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a83(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102f12(void)

{
  return;
}




void FUN_001025d0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)param_2 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)param_2; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001029af(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_00102eba(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107018 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00102490();
    DAT_00107018 = 1;
    return;
  }
  return;
}




void FUN_00102ed0(void)

{
  return;
}




ulong FUN_00102d4b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104280,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102f5f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102f28,local_18);
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




void FUN_00103123(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a2d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102bb4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ea4(void)

{
  return;
}




undefined8 FUN_00102e2a(void)

{
  return 1;
}




undefined8 FUN_00102878(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102957("Calling good()...");
  FUN_00102868();
  FUN_00102957("Finished good()");
  FUN_00102957("Calling bad()...");
  FUN_00102656();
  FUN_00102957("Finished bad()");
  return 0;
}




undefined8 FUN_00102e39(void)

{
  return 0;
}




int FUN_00102e48(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102e99(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_00102ee6(void)

{
  return;
}




undefined8 FUN_001030aa(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x001024a3) */
/* WARNING: Removing unreachable block (ram,0x001024af) */

void FUN_00102490(void)

{
  return;
}




void FUN_00102aae(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f07(void)

{
  return;
}




void FUN_00102e78(void)

{
  return;
}




void FUN_00102f1d(void)

{
  return;
}




void FUN_00102be7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102e62(void)

{
  return;
}




void FUN_001028fc(undefined8 *param_1)

{
  FUN_001028de(param_1);
  *param_1 = &PTR_FUN_00106c48;
  return;
}




void FUN_00102edb(void)

{
  return;
}




void FUN_001029d7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001028de(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00106ca0;
  return;
}



