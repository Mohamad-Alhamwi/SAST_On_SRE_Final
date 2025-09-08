
void FUN_00101f20(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101cd5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101d44("Calling good()...");
  FUN_00101cb6();
  FUN_00101d44("Finished good()");
  FUN_00101d44("Calling bad()...");
  FUN_001014c9();
  FUN_00101d44("Finished bad()");
  return 0;
}




void FUN_00101fa1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010227b(void)

{
  return;
}




void FUN_001022a7(void)

{
  return;
}




ulong FUN_00102138(long param_1,ulong param_2,long param_3)

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




void FUN_00101e9b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102510(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001022e9(void)

{
  return;
}




void FUN_00102580(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101778(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  iVar1 = FUN_00102235();
  if (iVar1 == 0) {
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
          local_64 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  else {
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
          local_64 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_00102235();
  if (iVar1 == 0) {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 0;
    }
    if ((local_64 < 0) || (9 < local_64)) {
      FUN_00101d44("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_64 * 4) = 1;
      for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
        FUN_00101d9c(*(undefined4 *)((long)pvVar4 + (long)local_5c * 4));
      }
    }
    free(pvVar4);
  }
  else {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_60 * 4) = 0;
    }
    if ((local_64 < 0) || (9 < local_64)) {
      FUN_00101d44("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_64 * 4) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        FUN_00101d9c(*(undefined4 *)((long)pvVar4 + (long)local_60 * 4));
      }
    }
    free(pvVar4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e45(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102265(void)

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




/* WARNING: Removing unreachable block (ram,0x00101be0) */
/* WARNING: Removing unreachable block (ram,0x00101c9b) */

void FUN_00101aff(void)

{
  int iVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  FUN_00102235();
  iVar1 = FUN_00102235();
  if (iVar1 == 0) {
    pvVar2 = malloc(0x28);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101d9c(*(undefined4 *)((long)pvVar2 + (long)local_1c * 4));
    }
    free(pvVar2);
  }
  else {
    pvVar2 = malloc(0x28);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00101d9c(*(undefined4 *)((long)pvVar2 + (long)local_20 * 4));
    }
    free(pvVar2);
  }
  return;
}




void FUN_00101cb6(void)

{
  FUN_00101778();
  FUN_00101aff();
  return;
}




undefined8 FUN_00102217(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101d9c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f48(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102291(void)

{
  return;
}




void FUN_00102286(void)

{
  return;
}




void FUN_00101dc4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fd4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d6a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102270(void)

{
  return;
}




undefined8 FUN_0010234c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102315,local_18);
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




void FUN_00101f73(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001014c9(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  iVar1 = FUN_00102235();
  if (iVar1 == 0) {
    local_5c = 7;
  }
  else {
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
          local_5c = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_00102235();
  if (iVar1 == 0) {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_54 * 4) = 0;
    }
    if ((local_5c < 0) || (9 < local_5c)) {
      FUN_00101d44("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101d9c(*(undefined4 *)((long)pvVar4 + (long)local_54 * 4));
      }
    }
    free(pvVar4);
  }
  else {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_58 * 4) = 0;
    }
    if (local_5c < 0) {
      FUN_00101d44("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 1;
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        FUN_00101d9c(*(undefined4 *)((long)pvVar4 + (long)local_58 * 4));
      }
    }
    free(pvVar4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ec6(undefined4 param_1)

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




void FUN_001022b2(void)

{
  return;
}




void FUN_001022bd(void)

{
  return;
}




void FUN_001022c8(void)

{
  return;
}




void FUN_00102315(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00102034(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102474(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d44(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102497(undefined8 *param_1)

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




void FUN_0010229c(void)

{
  return;
}




void FUN_001022ff(void)

{
  return;
}




void FUN_001022f4(void)

{
  return;
}




void FUN_0010224f(void)

{
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




bool FUN_00102419(pthread_t *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




void FUN_001025f0(void)

{
  return;
}




undefined8 FUN_00102226(void)

{
  return 0;
}




void FUN_00101e70(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010254e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e1a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010230a(void)

{
  return;
}




void FUN_0010252f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001022d3(void)

{
  return;
}




void FUN_00101df0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




int FUN_00102235(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010225a(void)

{
  return;
}




void FUN_001022de(void)

{
  return;
}



