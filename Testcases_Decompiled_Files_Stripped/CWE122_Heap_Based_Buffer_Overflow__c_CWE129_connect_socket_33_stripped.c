
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010169e(void)

{
  long in_FS_OFFSET;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &local_2c;
  local_2c = 7;
  local_24 = 7;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_28 * 4) = 0;
  }
  if (local_24 < 0) {
    FUN_001019fb("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_24 * 4) = 1;
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      FUN_00101a53(*(undefined4 *)((long)local_18 + (long)local_28 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f48(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101200(PTR_LOOP_00105008);
    }
    FUN_00101410();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101981(void)

{
  FUN_0010169e();
  FUN_001017a3();
  return;
}




void FUN_00101f69(void)

{
  return;
}




void FUN_00102205(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101fb6(void)

{
  return;
}




void FUN_00101b7d(undefined4 param_1)

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




undefined8 FUN_0010212b(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101def(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f95(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




undefined8 FUN_00101edd(void)

{
  return 0;
}




void FUN_00101a53(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




bool FUN_001020d0(pthread_t *param_1)

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




void FUN_00101a7b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001019fb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101f74(void)

{
  return;
}




void FUN_00101c58(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f8a(void)

{
  return;
}




void FUN_00102230(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001017a3(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  void *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &local_5c;
  local_5c = -1;
  local_54 = 0xffffffff;
  local_54 = socket(2,1,6);
  if (local_54 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(local_54,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_54,local_1e,0xd,0);
      local_50 = (int)sVar2;
      if ((local_50 != -1) && (local_50 != 0)) {
        local_1e[local_50] = '\0';
        local_5c = atoi(local_1e);
      }
    }
  }
  if (local_54 != -1) {
    close(local_54);
  }
  local_4c = *local_48;
  local_40 = malloc(0x28);
  if (local_40 != (void *)0x0) {
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
      *(undefined4 *)((long)local_40 + (long)local_58 * 4) = 0;
    }
    if ((local_4c < 0) || (9 < local_4c)) {
      FUN_001019fb("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)local_40 + (long)local_4c * 4) = 1;
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        FUN_00101a53(*(undefined4 *)((long)local_40 + (long)local_58 * 4));
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




void FUN_00101fcc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010214e(undefined8 *param_1)

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




void FUN_001021e6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00101eec(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101bd7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ad1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101f7f(void)

{
  return;
}




void FUN_00101f11(void)

{
  return;
}




void FUN_00101a21(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f32(void)

{
  return;
}




void FUN_00101fa0(void)

{
  return;
}




undefined8 FUN_00101996(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019fb("Calling good()...");
  FUN_00101981();
  FUN_001019fb("Finished good()");
  FUN_001019fb("Calling bad()...");
  FUN_001014c9();
  FUN_001019fb("Finished bad()");
  return 0;
}




void FUN_00101f1c(void)

{
  return;
}




void FUN_00101f53(void)

{
  return;
}




void FUN_00101bff(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c8b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101fc1(void)

{
  return;
}




void FUN_00101b52(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f5e(void)

{
  return;
}




void FUN_001014c9(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  void *local_40;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &local_5c;
  local_5c = -1;
  local_54 = 0xffffffff;
  local_54 = socket(2,1,6);
  if (local_54 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(local_54,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_54,local_1e,0xd,0);
      local_50 = (int)sVar2;
      if ((local_50 != -1) && (local_50 != 0)) {
        local_1e[local_50] = '\0';
        local_5c = atoi(local_1e);
      }
    }
  }
  if (local_54 != -1) {
    close(local_54);
  }
  local_4c = *local_48;
  local_40 = malloc(0x28);
  if (local_40 != (void *)0x0) {
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
      *(undefined4 *)((long)local_40 + (long)local_58 * 4) = 0;
    }
    if (local_4c < 0) {
      FUN_001019fb("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)local_40 + (long)local_4c * 4) = 1;
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        FUN_00101a53(*(undefined4 *)((long)local_40 + (long)local_58 * 4));
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




ulong FUN_00101ceb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f06(void)

{
  return;
}




void FUN_00101f3d(void)

{
  return;
}




void FUN_00101b27(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001021c7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001022a0(void)

{
  return;
}




undefined8 FUN_00102003(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fcc,local_18);
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




void FUN_00101fab(void)

{
  return;
}




void FUN_00101c2a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101ece(void)

{
  return 1;
}




void FUN_00101f27(void)

{
  return;
}




void FUN_00101afc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aa7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



