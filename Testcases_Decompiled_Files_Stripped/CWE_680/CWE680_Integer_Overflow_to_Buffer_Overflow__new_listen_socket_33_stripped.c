
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001016e5(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  ulong local_30;
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_38 = 0x14;
  local_34 = 0x14;
  local_20 = 0x50;
  local_18 = (undefined4 *)operator_new__(0x50);
  for (local_30 = 0; local_30 < (ulong)(long)local_34; local_30 = local_30 + 1) {
    local_18[local_30] = 0;
  }
  FUN_00101873(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019f7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a4a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a78(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d3c(void)

{
  return;
}




void FUN_00101db5(void)

{
  return;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_001018c7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102050(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001017a6(void)

{
  FUN_001016e5();
  return;
}




void FUN_00101fe7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010191c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d31(void)

{
  return;
}




void FUN_00101de1(void)

{
  return;
}




void FUN_00101841(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101b0b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101e23(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dec,local_18);
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




void FUN_00101daa(void)

{
  return;
}




void FUN_00102006(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101947(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d5d(void)

{
  return;
}




void FUN_00101aab(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d52(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_00101972(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a1f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_0010181b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102025(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101f6e(undefined8 *param_1)

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




void FUN_00101d9f(void)

{
  return;
}




void FUN_0010199d(undefined4 param_1)

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




int FUN_00101d0c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d94(void)

{
  return;
}




void FUN_00101dc0(void)

{
  return;
}




ulong FUN_00101c0f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dcb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101509(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulong local_58;
  int *local_50;
  ulong local_48;
  undefined4 *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_6c;
  local_6c = -1;
  local_64 = 0xffffffff;
  local_68 = -1;
  local_64 = socket(2,1,6);
  if (local_64 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_64,&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_64,5), iVar1 != -1)) &&
       (local_68 = accept(local_64,(sockaddr *)0x0,(socklen_t *)0x0), local_68 != -1)) {
      sVar2 = recv(local_68,local_1e,0xd,0);
      local_60 = (int)sVar2;
      if ((local_60 != -1) && (local_60 != 0)) {
        local_1e[local_60] = '\0';
        local_6c = atoi(local_1e);
      }
    }
  }
  if (local_64 != -1) {
    close(local_64);
  }
  if (local_68 != -1) {
    close(local_68);
  }
  local_5c = *local_50;
  local_48 = (long)local_5c << 2;
  local_40 = (undefined4 *)operator_new__(local_48);
  for (local_58 = 0; local_58 < (ulong)(long)local_5c; local_58 = local_58 + 1) {
    local_40[local_58] = 0;
  }
  FUN_00101873(*local_40);
  if (local_40 != (undefined4 *)0x0) {
    operator_delete__(local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010189b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101cee(void)

{
  return 1;
}




undefined8 FUN_00101cfd(void)

{
  return 0;
}




void FUN_00101d47(void)

{
  return;
}




void FUN_00101873(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d68(void)

{
  return;
}




void FUN_00101d73(void)

{
  return;
}




void FUN_00101dd6(void)

{
  return;
}




undefined8 FUN_001017b6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010181b("Calling good()...");
  FUN_001017a6();
  FUN_0010181b("Finished good()");
  FUN_0010181b("Calling bad()...");
  FUN_00101509();
  FUN_0010181b("Finished bad()");
  return 0;
}




undefined8 FUN_00101f4b(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101dec(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d7e(void)

{
  return;
}




bool FUN_00101ef0(pthread_t *param_1)

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




void FUN_001020c0(void)

{
  return;
}




void FUN_00101d89(void)

{
  return;
}




void FUN_001018f1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



