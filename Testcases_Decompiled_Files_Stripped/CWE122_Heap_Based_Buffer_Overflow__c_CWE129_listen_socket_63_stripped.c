
void FUN_00101cfd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d89(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102072(void)

{
  return;
}




undefined8 FUN_0010224c(undefined8 *param_1)

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




void FUN_001022e4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010200f(void)

{
  return;
}




void FUN_00101692(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
  local_40 = 0xffffffff;
  local_44 = -1;
  local_40 = socket(2,1,6);
  if (local_40 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_40,&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_40,5), iVar1 != -1)) &&
       (local_44 = accept(local_40,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar2 = recv(local_44,local_1e,0xd,0);
      local_3c = (int)sVar2;
      if ((local_3c != -1) && (local_3c != 0)) {
        local_1e[local_3c] = '\0';
        local_48 = atoi(local_1e);
      }
    }
  }
  if (local_40 != -1) {
    close(local_40);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  FUN_00101a21(&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102330(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102046(void)

{
  return;
}




undefined8 FUN_00102101(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020ca,local_18);
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




void FUN_00101b1f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101fdb(void)

{
  return 0;
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




void FUN_00101b79(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010203b(void)

{
  return;
}




ulong FUN_00101de9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010194f(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101af9("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b51(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




undefined8 FUN_00101fcc(void)

{
  return 1;
}




void FUN_0010207d(void)

{
  return;
}




void FUN_001020a9(void)

{
  return;
}




void FUN_00102051(void)

{
  return;
}




void FUN_00102025(void)

{
  return;
}




void FUN_00102067(void)

{
  return;
}




void FUN_00101ba5(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017ef(void)

{
  FUN_00101646();
  FUN_00101692();
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001020bf(void)

{
  return;
}




void FUN_001023a0(void)

{
  return;
}




ulong FUN_00101eed(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101bfa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102303(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c7b(undefined4 param_1)

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




int FUN_00101fea(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c25(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d28(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




bool FUN_001021ce(pthread_t *param_1)

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




undefined8 FUN_0010180e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101af9("Calling good()...");
  FUN_001017ef();
  FUN_00101af9("Finished good()");
  FUN_00101af9("Calling bad()...");
  FUN_001014e9();
  FUN_00101af9("Finished bad()");
  return 0;
}




void FUN_00101a21(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if ((iVar1 < 0) || (9 < iVar1)) {
      FUN_00101af9("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b51(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_001022c5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010201a(void)

{
  return;
}




void FUN_001020b4(void)

{
  return;
}




void FUN_0010209e(void)

{
  return;
}




void FUN_00101646(void)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 7;
  FUN_0010194f(&local_14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102229(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d56(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bcf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101af9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101cd5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001014e9(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
  local_40 = 0xffffffff;
  local_44 = -1;
  local_40 = socket(2,1,6);
  if (local_40 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_40,&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_40,5), iVar1 != -1)) &&
       (local_44 = accept(local_40,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar2 = recv(local_44,local_1e,0xd,0);
      local_3c = (int)sVar2;
      if ((local_3c != -1) && (local_3c != 0)) {
        local_1e[local_3c] = '\0';
        local_48 = atoi(local_1e);
      }
    }
  }
  if (local_40 != -1) {
    close(local_40);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  FUN_0010187d(&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_0010205c(void)

{
  return;
}




void FUN_00102093(void)

{
  return;
}




void FUN_00102088(void)

{
  return;
}




void FUN_001020ca(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102030(void)

{
  return;
}




void FUN_00102004(void)

{
  return;
}




void FUN_0010187d(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101af9("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b51(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101b51(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c50(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}



