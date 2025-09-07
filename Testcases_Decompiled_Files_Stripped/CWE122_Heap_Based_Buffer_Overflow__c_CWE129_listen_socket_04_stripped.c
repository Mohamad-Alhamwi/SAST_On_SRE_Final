
void FUN_00101f3e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101feb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010233f(void)

{
  return;
}




undefined8 FUN_001023ef(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001023b8,local_18);
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




undefined8 FUN_00102517(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001022c9(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001025b3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102313(void)

{
  return;
}




void FUN_001023a2(void)

{
  return;
}




void FUN_00101d45(void)

{
  FUN_0010170a();
  FUN_0010193e();
  FUN_00101b65();
  FUN_00101c5c();
  return;
}




ulong FUN_001020d7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101de7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102308(void)

{
  return;
}




void FUN_001025f1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102016(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010193e(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *__ptr;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  local_50 = -1;
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
       (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
      sVar2 = recv(local_50,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        local_54 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_50 != -1) {
    close(local_50);
  }
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    *(undefined4 *)((long)__ptr + (long)local_4c * 4) = 0;
  }
  if ((local_54 < 0) || (9 < local_54)) {
    FUN_00101de7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)local_54 * 4) = 1;
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      FUN_00101e3f(*(undefined4 *)((long)__ptr + (long)local_4c * 4));
    }
  }
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102077(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010234a(void)

{
  return;
}




void FUN_00102376(void)

{
  return;
}




void FUN_0010231e(void)

{
  return;
}




void FUN_001022f2(void)

{
  return;
}




void FUN_00102334(void)

{
  return;
}




void FUN_00101e0d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_0010238c(void)

{
  return;
}




void FUN_00102620(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001025d2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102044(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e67(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010253a(undefined8 *param_1)

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




void FUN_00101ee8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001021db(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e93(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f69(undefined4 param_1)

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




void FUN_001023ad(void)

{
  return;
}




void FUN_001014e9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *__ptr;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  local_50 = -1;
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
       (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
      sVar2 = recv(local_50,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        local_54 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_50 != -1) {
    close(local_50);
  }
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    *(undefined4 *)((long)__ptr + (long)local_4c * 4) = 0;
  }
  if (local_54 < 0) {
    FUN_00101de7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)local_54 * 4) = 1;
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      FUN_00101e3f(*(undefined4 *)((long)__ptr + (long)local_4c * 4));
    }
  }
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101b81) */
/* WARNING: Removing unreachable block (ram,0x00101c41) */

void FUN_00101b65(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101e3f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




bool FUN_001024bc(pthread_t *param_1)

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




int FUN_001022d8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102381(void)

{
  return;
}




void FUN_0010236b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_001023b8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101fc3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e3f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101d2a) */

void FUN_00101c5c(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101e3f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




void FUN_00101f13(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102329(void)

{
  return;
}




void FUN_00102360(void)

{
  return;
}




void FUN_00102355(void)

{
  return;
}




void FUN_00102397(void)

{
  return;
}




void FUN_00102690(void)

{
  return;
}




void FUN_001022fd(void)

{
  return;
}




undefined8 FUN_001022ba(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0010185a) */

void FUN_0010170a(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *__ptr;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  local_50 = -1;
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
       (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
      sVar2 = recv(local_50,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        local_54 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_50 != -1) {
    close(local_50);
  }
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    *(undefined4 *)((long)__ptr + (long)local_4c * 4) = 0;
  }
  if ((local_54 < 0) || (9 < local_54)) {
    FUN_00101de7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)local_54 * 4) = 1;
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      FUN_00101e3f(*(undefined4 *)((long)__ptr + (long)local_4c * 4));
    }
  }
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d78(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101de7("Calling good()...");
  FUN_00101d45();
  FUN_00101de7("Finished good()");
  FUN_00101de7("Calling bad()...");
  FUN_001014e9();
  FUN_00101de7("Finished bad()");
  return 0;
}




void FUN_00101ebd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}



