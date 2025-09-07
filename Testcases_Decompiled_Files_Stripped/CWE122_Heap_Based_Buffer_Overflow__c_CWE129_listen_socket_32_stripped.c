
ulong FUN_00101ef6(long param_1,ulong param_2,long param_3)

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




int FUN_00101ff3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001020b2(void)

{
  return;
}




void FUN_001023b0(void)

{
  return;
}




void FUN_0010204f(void)

{
  return;
}




undefined8 FUN_00101a93(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101b02("Calling good()...");
  FUN_00101a74();
  FUN_00101b02("Finished good()");
  FUN_00101b02("Calling bad()...");
  FUN_001014e9();
  FUN_00101b02("Finished bad()");
  return 0;
}




void FUN_00102086(void)

{
  return;
}




void FUN_001022ed(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c03(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010202e(void)

{
  return;
}




void FUN_00101c59(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010207b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_0010200d(void)

{
  return;
}




void FUN_00101b82(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102023(void)

{
  return;
}




void FUN_001020bd(void)

{
  return;
}




bool FUN_001021d7(pthread_t *param_1)

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




void FUN_00102091(void)

{
  return;
}




void FUN_00102065(void)

{
  return;
}




void FUN_001020a7(void)

{
  return;
}




void FUN_00101c84(undefined4 param_1)

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




void FUN_00101b02(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014e9(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_48;
  void *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_6c;
  local_48 = &local_6c;
  local_6c = -1;
  local_68 = -1;
  local_5c = 0xffffffff;
  local_64 = -1;
  local_5c = socket(2,1,6);
  if (local_5c != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_5c,&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_5c,5), iVar1 != -1)) &&
       (local_64 = accept(local_5c,(sockaddr *)0x0,(socklen_t *)0x0), local_64 != -1)) {
      sVar2 = recv(local_64,local_1e,0xd,0);
      local_58 = (int)sVar2;
      if ((local_58 != -1) && (local_58 != 0)) {
        local_1e[local_58] = '\0';
        local_68 = atoi(local_1e);
      }
    }
  }
  if (local_5c != -1) {
    close(local_5c);
  }
  if (local_64 != -1) {
    close(local_64);
  }
  *local_50 = local_68;
  local_54 = *local_48;
  local_40 = malloc(0x28);
  if (local_40 != (void *)0x0) {
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      *(undefined4 *)((long)local_40 + (long)local_60 * 4) = 0;
    }
    if (local_54 < 0) {
      FUN_00101b02("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)local_40 + (long)local_54 * 4) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        FUN_00101b5a(*(undefined4 *)((long)local_40 + (long)local_60 * 4));
      }
    }
    free(local_40);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




undefined8 FUN_00102255(undefined8 *param_1)

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




void FUN_00102018(void)

{
  return;
}




void FUN_00101d06(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d92(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102039(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_00101d31(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101fd5(void)

{
  return 1;
}




void FUN_0010230c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b28(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101bae(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010205a(void)

{
  return;
}




undefined8 FUN_00102232(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010210a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020d3,local_18);
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




void FUN_00101a74(void)

{
  FUN_0010171b();
  FUN_0010183c();
  return;
}




void FUN_00102340(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101fe4(void)

{
  return 0;
}




void FUN_00101cde(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bd8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101df2(long param_1,ulong param_2,long param_3)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010183c(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_48;
  void *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_6c;
  local_48 = &local_6c;
  local_6c = -1;
  local_68 = -1;
  local_5c = 0xffffffff;
  local_64 = -1;
  local_5c = socket(2,1,6);
  if (local_5c != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_5c,&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_5c,5), iVar1 != -1)) &&
       (local_64 = accept(local_5c,(sockaddr *)0x0,(socklen_t *)0x0), local_64 != -1)) {
      sVar2 = recv(local_64,local_1e,0xd,0);
      local_58 = (int)sVar2;
      if ((local_58 != -1) && (local_58 != 0)) {
        local_1e[local_58] = '\0';
        local_68 = atoi(local_1e);
      }
    }
  }
  if (local_5c != -1) {
    close(local_5c);
  }
  if (local_64 != -1) {
    close(local_64);
  }
  *local_50 = local_68;
  local_54 = *local_48;
  local_40 = malloc(0x28);
  if (local_40 != (void *)0x0) {
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      *(undefined4 *)((long)local_40 + (long)local_60 * 4) = 0;
    }
    if ((local_54 < 0) || (9 < local_54)) {
      FUN_00101b02("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_40 + (long)local_54 * 4) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        FUN_00101b5a(*(undefined4 *)((long)local_40 + (long)local_60 * 4));
      }
    }
    free(local_40);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_0010209c(void)

{
  return;
}




void FUN_001020d3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001020c8(void)

{
  return;
}




void FUN_001022ce(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102070(void)

{
  return;
}




void FUN_00102044(void)

{
  return;
}




void FUN_00101b5a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c2e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d5f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0010176a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010171b(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_30 = 7;
  local_38 = 7;
  local_2c = 7;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_34 * 4) = 0;
  }
  if (local_2c < 0) {
    FUN_00101b02("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      FUN_00101b5a(*(undefined4 *)((long)local_18 + (long)local_34 * 4));
    }
  }
  free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



