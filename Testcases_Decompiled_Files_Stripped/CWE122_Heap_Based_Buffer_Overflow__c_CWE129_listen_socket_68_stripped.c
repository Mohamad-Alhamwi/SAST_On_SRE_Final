
void FUN_00101c0b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101cbb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010202c(void)

{
  return;
}




void FUN_001020b0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_001021b4(pthread_t *param_1)

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




undefined8 FUN_00101fb2(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_00102232(undefined8 *param_1)

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




void FUN_00102000(void)

{
  return;
}




void FUN_0010208f(void)

{
  return;
}




void FUN_001018ed(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
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
        local_48 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  DAT_00105030 = local_48;
  FUN_00101685();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d6f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101a70(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101adf("Calling good()...");
  FUN_00101a51();
  FUN_00101adf("Finished good()");
  FUN_00101adf("Calling bad()...");
  FUN_00101759();
  FUN_00101adf("Finished bad()");
  return 0;
}




void FUN_00101ff5(void)

{
  return;
}




void FUN_001022ca(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ce3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101685(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_00105030;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if ((iVar1 < 0) || (9 < iVar1)) {
      FUN_00101adf("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b37(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d3c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102037(void)

{
  return;
}




void FUN_00102063(void)

{
  return;
}




void FUN_0010200b(void)

{
  return;
}




int FUN_00101fd0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102021(void)

{
  return;
}




void FUN_00101adf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
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




void FUN_00102079(void)

{
  return;
}




void FUN_001022e9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001022ab(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d0e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b37(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010220f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101bb5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101dcf(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b5f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c36(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010209a(void)

{
  return;
}




void FUN_00102390(void)

{
  return;
}




void FUN_001014e9(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_00105038;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101adf("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b37(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101759(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
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
        local_48 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  DAT_00105038 = local_48;
  FUN_001014e9();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001020e7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020b0,local_18);
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




undefined8 FUN_00101fc1(void)

{
  return 0;
}




void FUN_0010206e(void)

{
  return;
}




void FUN_00102058(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_001020a5(void)

{
  return;
}




void FUN_00101c61(undefined4 param_1)

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




void FUN_00101b05(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018bd(void)

{
  DAT_00105034 = 7;
  FUN_001015b7();
  return;
}




void FUN_00101be0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102016(void)

{
  return;
}




void FUN_0010204d(void)

{
  return;
}




void FUN_00102042(void)

{
  return;
}




void FUN_00102084(void)

{
  return;
}




void FUN_00102320(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fea(void)

{
  return;
}




ulong FUN_00101ed3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015b7(void)

{
  int iVar1;
  void *__ptr;
  int local_18;
  
  iVar1 = DAT_00105034;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101adf("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
        FUN_00101b37(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101a51(void)

{
  FUN_001018bd();
  FUN_001018ed();
  return;
}




void FUN_00101b8b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}



