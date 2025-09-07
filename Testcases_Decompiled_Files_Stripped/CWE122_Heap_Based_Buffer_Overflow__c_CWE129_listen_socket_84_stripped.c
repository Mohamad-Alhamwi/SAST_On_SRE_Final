
undefined8 FUN_00101a0e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101caa("Calling good()...");
  FUN_001019f9();
  FUN_00101caa("Finished good()");
  FUN_00101caa("Calling bad()...");
  FUN_00101882();
  FUN_00101caa("Finished bad()");
  return 0;
}




void FUN_001021ec(void)

{
  return;
}




void FUN_00101e2c(undefined4 param_1)

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




ulong FUN_0010209e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ed9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d2a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001022b2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010227b,local_18);
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




void FUN_001021cb(void)

{
  return;
}




void FUN_00101d80(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f3a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e86(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010178e(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




void FUN_001021b5(void)

{
  return;
}




void FUN_00102244(void)

{
  return;
}




void FUN_001021c0(void)

{
  return;
}




void FUN_0010197c(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001019a7 to 001019ab has its CatchHandler @ 001019d0 */
  FUN_0010154a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_001016b2(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00102495(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010222e(void)

{
  return;
}




void FUN_00102270(void)

{
  return;
}




void FUN_00101d56(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101490();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00102476(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101eae(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001017b4(int *param_1)

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
  if (*param_1 < 0) {
    FUN_00101caa("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101d02(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




int FUN_0010219b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101bdc(int *param_1)

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
  if (*param_1 < 0) {
    FUN_00101caa("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101d02(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101cd0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010154a(int *param_1,int param_2)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
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
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010224f(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ec8)();
  return;
}




undefined8 FUN_0010217d(void)

{
  return 1;
}




void FUN_001024e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d02(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010227b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101882(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001018ad to 001018b1 has its CatchHandler @ 001018d6 */
  FUN_00101a74(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101bdc(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101caa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001021f7(void)

{
  return;
}




bool FUN_0010237f(pthread_t *param_1)

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




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




ulong FUN_00101f9a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021d6(void)

{
  return;
}




void FUN_00102265(void)

{
  return;
}




void FUN_00102202(void)

{
  return;
}




void FUN_00101dab(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010220d(void)

{
  return;
}




void FUN_00102218(void)

{
  return;
}




void FUN_0010225a(void)

{
  return;
}




void FUN_001019f9(void)

{
  FUN_001018ff();
  FUN_0010197c();
  return;
}




undefined8 FUN_001023fd(undefined8 *param_1)

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




void FUN_00101a74(int *param_1,int param_2)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
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
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010218c(void)

{
  return 0;
}




void FUN_001024b4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102239(void)

{
  return;
}




void FUN_00102550(void)

{
  return;
}




void FUN_001016b2(int *param_1)

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
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_00101caa("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101d02(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001021e1(void)

{
  return;
}




void FUN_00102223(void)

{
  return;
}




void FUN_001018ff(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010192a to 0010192e has its CatchHandler @ 00101953 */
  FUN_0010178e(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_001017b4(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101e01(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001023da(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f07(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101dd6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}



