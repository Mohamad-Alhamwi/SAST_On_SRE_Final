
/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101d82(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dd8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e03(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101ff2(long param_1,ulong param_2,long param_3)

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




void FUN_001025b0(void)

{
  return;
}




void FUN_0010224f(void)

{
  return;
}




void FUN_00101f5f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b97(void)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    local_18 = 7;
  }
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101d02("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101d5a(*(undefined4 *)((long)pvVar2 + (long)local_14 * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




undefined8 FUN_0010230a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001022d3,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001022bd(void)

{
  return;
}




void FUN_00102540(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101c9d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101d02("Calling good()...");
  FUN_00101c7e();
  FUN_00101d02("Finished good()");
  FUN_00101d02("Calling bad()...");
  FUN_001014e9();
  FUN_00101d02("Finished bad()");
  return 0;
}




void FUN_00101f92(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010227b(void)

{
  return;
}




void FUN_001016c7(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001021e4();
  if (iVar1 == 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101d02("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d5a(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  else {
    FUN_00101d02("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e59(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102291(void)

{
  return;
}




void FUN_001024ed(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102432(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102244(void)

{
  return;
}




void FUN_001022c8(void)

{
  return;
}




void FUN_00101d02(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001021e4(void)

{
  return 0;
}




void FUN_001024ce(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e2e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001021d5(void)

{
  return 1;
}




void FUN_00101d28(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101dae(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_001014e9(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if (local_50 < 0) {
      FUN_00101d02("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d5a(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001022d3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001022b2(void)

{
  return;
}




void FUN_00102239(void)

{
  return;
}




void FUN_00101d5a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f31(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010222e(void)

{
  return;
}




void FUN_0010225a(void)

{
  return;
}




undefined8 FUN_00102455(undefined8 *param_1)

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




void FUN_00101e84(undefined4 param_1)

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




void FUN_00102265(void)

{
  return;
}




void FUN_00101aa2(void)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_001021e4();
  if (iVar1 == 0) {
    local_18 = 7;
  }
  else {
    FUN_00101d02("Benign, fixed string");
  }
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101d02("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101d5a(*(undefined4 *)((long)pvVar2 + (long)local_14 * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




void FUN_00101ede(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f06(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_001020f6(long param_1,ulong param_2,long param_3)

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




int FUN_001021f3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018bb(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001021d5();
  if (iVar1 != 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101d02("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d5a(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102270(void)

{
  return;
}




void FUN_0010220d(void)

{
  return;
}




void FUN_0010250c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001022a7(void)

{
  return;
}




void FUN_00102286(void)

{
  return;
}




void FUN_00102218(void)

{
  return;
}




void FUN_0010229c(void)

{
  return;
}




bool FUN_001023d7(pthread_t *param_1)

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




void FUN_00102223(void)

{
  return;
}




void FUN_00101c7e(void)

{
  FUN_001016c7();
  FUN_001018bb();
  FUN_00101aa2();
  FUN_00101b97();
  return;
}



