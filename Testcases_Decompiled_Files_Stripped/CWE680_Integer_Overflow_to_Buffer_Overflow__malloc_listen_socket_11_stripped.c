
undefined8 FUN_00101d76(void)

{
  return 0;
}




void FUN_00101daa(void)

{
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101e5a(void)

{
  return;
}




void FUN_00101df7(void)

{
  return;
}




void FUN_001018ba(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e2e(void)

{
  return;
}




void FUN_001020d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019eb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dd6(void)

{
  return;
}




void FUN_00101a70(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e23(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101210(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001014e9(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *__ptr;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  ulong local_48;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = -1;
  iVar1 = FUN_00101d67();
  if (iVar1 != 0) {
    local_54 = -1;
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = bind(iVar1,&local_38,0x10);
      if (((iVar2 != -1) && (iVar2 = listen(iVar1,5), iVar2 != -1)) &&
         (local_54 = accept(iVar1,(sockaddr *)0x0,(socklen_t *)0x0), local_54 != -1)) {
        sVar3 = recv(local_54,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_58 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
    if (local_54 != -1) {
      close(local_54);
    }
  }
  __ptr = (undefined4 *)malloc((long)local_58 << 2);
  if (__ptr != (undefined4 *)0x0) {
    for (local_48 = 0; local_48 < (ulong)(long)local_58; local_48 = local_48 + 1) {
      __ptr[local_48] = 0;
    }
    FUN_001018ec(*__ptr);
    free(__ptr);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101db5(void)

{
  return;
}




void FUN_0010196a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dcb(void)

{
  return;
}




void FUN_00101e65(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101fe7(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_00101e0d(void)

{
  return;
}




void FUN_00101e39(void)

{
  return;
}




void FUN_00101e4f(void)

{
  return;
}




void FUN_00101a98(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001018ec(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101769(void)

{
  int iVar1;
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  iVar1 = FUN_00101d67();
  if (iVar1 != 0) {
    local_1c = 0x14;
  }
  __ptr = (undefined4 *)malloc((long)local_1c << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)local_1c; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001018ec(*__ptr);
  free(__ptr);
  return;
}




void FUN_0010207f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101dc0(void)

{
  return;
}




void FUN_00101af1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




ulong FUN_00101c88(long param_1,ulong param_2,long param_3)

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




void FUN_00101de1(void)

{
  return;
}




void FUN_00101b24(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101d85(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102140(void)

{
  return;
}




void FUN_00101914(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101995(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e02(void)

{
  return;
}




void FUN_00102060(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101fc4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101894(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d9f(void)

{
  return;
}




void FUN_00101ac3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019c0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101d67(void)

{
  return 1;
}




undefined8 FUN_00101825(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101894("Calling good()...");
  FUN_00101806();
  FUN_00101894("Finished good()");
  FUN_00101894("Calling bad()...");
  FUN_001014e9();
  FUN_00101894("Finished bad()");
  return 0;
}




void FUN_00101e44(void)

{
  return;
}




bool FUN_00101f69(pthread_t *param_1)

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




undefined8 FUN_00101e9c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e65,local_18);
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




void FUN_0010209e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e18(void)

{
  return;
}




void FUN_00101dec(void)

{
  return;
}




void FUN_00101940(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a16(undefined4 param_1)

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




ulong FUN_00101b84(long param_1,ulong param_2,long param_3)

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




void FUN_00101806(void)

{
  FUN_001016be();
  FUN_00101769();
  return;
}




void FUN_001016be(void)

{
  int iVar1;
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  iVar1 = FUN_00101d76();
  if (iVar1 == 0) {
    local_1c = 0x14;
  }
  else {
    FUN_00101894("Benign, fixed string");
  }
  __ptr = (undefined4 *)malloc((long)local_1c << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)local_1c; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001018ec(*__ptr);
  free(__ptr);
  return;
}



