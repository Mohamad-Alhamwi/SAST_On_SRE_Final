
undefined8 FUN_001018b0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101915("Calling good()...");
  FUN_0010189b();
  FUN_00101915("Finished good()");
  FUN_00101915("Calling bad()...");
  FUN_001016c4();
  FUN_00101915("Finished bad()");
  return 0;
}




void FUN_0010193b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010196d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b19(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001020e1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e36(void)

{
  return;
}




void FUN_00101a97(undefined4 param_1)

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




undefined4 FUN_00101670(undefined4 param_1)

{
  undefined4 local_c;
  
  if (DAT_00105020 == 0) {
    local_c = 0x14;
  }
  else {
    FUN_00101915("Benign, fixed string");
    local_c = param_1;
  }
  return local_c;
}




void FUN_00101ec5(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_00101ea4(void)

{
  return;
}




undefined8 FUN_00102068(undefined8 *param_1)

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




void FUN_001016c4(void)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  
  DAT_0010501c = 1;
  iVar1 = FUN_00101509(0xffffffff);
  puVar2 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_0010196d(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




void FUN_00101af1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e62(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001019c1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e78(void)

{
  return;
}




bool FUN_00101fea(pthread_t *param_1)

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




void FUN_00101edb(void)

{
  return;
}




void FUN_00101e2b(void)

{
  return;
}




void FUN_00101eaf(void)

{
  return;
}




void FUN_00101761(void)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  
  DAT_00105020 = 0;
  iVar1 = FUN_00101670(0xffffffff);
  puVar2 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_0010196d(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




void FUN_00101ba5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101f1d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101ee6,local_18);
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




void FUN_00101995(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b72(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010211f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102100(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001017fe(void)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  
  DAT_00105024 = 1;
  iVar1 = FUN_001016a3(0xffffffff);
  puVar2 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar2[local_20] = 0;
  }
  FUN_0010196d(*puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return;
}




void FUN_00101915(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001021c0(void)

{
  return;
}




void FUN_00101eba(void)

{
  return;
}




void FUN_00102150(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101e99(void)

{
  return;
}




void FUN_00101e20(void)

{
  return;
}




void FUN_0010189b(void)

{
  FUN_00101761();
  FUN_001017fe();
  return;
}




void FUN_00101a6c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_00101e06(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e41(void)

{
  return;
}




void FUN_00101ee6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001019eb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e4c(void)

{
  return;
}




int FUN_00101509(int param_1)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_4c;
  int local_44;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = param_1;
  if (DAT_0010501c != 0) {
    local_44 = -1;
    __fd = socket(2,1,6);
    if (__fd != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar1 = bind(__fd,&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
         (local_44 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
        sVar2 = recv(local_44,local_1e,0xd,0);
        iVar1 = (int)sVar2;
        if ((iVar1 != -1) && (iVar1 != 0)) {
          local_1e[iVar1] = '\0';
          local_4c = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
    if (local_44 != -1) {
      close(local_44);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101a16(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a41(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101c05(long param_1,ulong param_2,long param_3)

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




void FUN_00101e57(void)

{
  return;
}




ulong FUN_00101d09(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102045(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e8e(void)

{
  return;
}




void FUN_00101e6d(void)

{
  return;
}




undefined8 FUN_00101de8(void)

{
  return 1;
}




void FUN_00101e83(void)

{
  return;
}




void FUN_00101ed0(void)

{
  return;
}




undefined8 FUN_00101df7(void)

{
  return 0;
}




undefined4 FUN_001016a3(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = param_1;
  if (DAT_00105024 != 0) {
    local_c = 0x14;
  }
  return local_c;
}



