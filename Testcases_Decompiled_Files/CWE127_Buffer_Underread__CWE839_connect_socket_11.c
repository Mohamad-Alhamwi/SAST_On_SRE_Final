
bool stdThreadJoin(pthread_t *param_1)

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




void goodB2G1(void)

{
  uint16_t uVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_54 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_54 < 0) || (9 < local_54)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      printIntLine(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void goodG2B2(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_3c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_3c < 10) {
      printIntLine(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
    else {
      printLine("ERROR: Array index is too big.");
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void good6(void)

{
  return;
}




void good8(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printWcharLine(undefined4 param_1)

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




void good3(void)

{
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void bad3(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void CWE127_Buffer_Underread__CWE839_connect_socket_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void bad7(void)

{
  return;
}




void good1(void)

{
  return;
}




void bad4(void)

{
  return;
}




void bad2(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE127_Buffer_Underread__CWE839_connect_socket_11_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE127_Buffer_Underread__CWE839_connect_socket_11_bad();
  printLine("Finished bad()");
  return 0;
}




void good9(void)

{
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void good4(void)

{
  return;
}




void bad6(void)

{
  return;
}




void good7(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good5(void)

{
  return;
}




void goodG2B1(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_3c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_3c < 10) {
      printIntLine(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
    else {
      printLine("ERROR: Array index is too big.");
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void CWE127_Buffer_Underread__CWE839_connect_socket_11_bad(void)

{
  uint16_t uVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_54 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_54 < 10) {
      printIntLine(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
    else {
      printLine("ERROR: Array index is too big.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void bad8(void)

{
  return;
}




undefined8 stdThreadCreate(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,internal_start,local_18);
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




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong decodeHexWChars(long param_1,ulong param_2,long param_3)

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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong decodeHexChars(long param_1,ulong param_2,long param_3)

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




undefined8 stdThreadLockCreate(undefined8 *param_1)

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




void good2(void)

{
  return;
}




void bad5(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void bad9(void)

{
  return;
}




void bad1(void)

{
  return;
}




void goodB2G2(void)

{
  uint16_t uVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_54 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    local_48.sa_family = 0;
    local_48.sa_data[0] = '\0';
    local_48.sa_data[1] = '\0';
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data[6] = '\0';
    local_48.sa_data[7] = '\0';
    local_48.sa_data[8] = '\0';
    local_48.sa_data[9] = '\0';
    local_48.sa_data[10] = '\0';
    local_48.sa_data[0xb] = '\0';
    local_48.sa_data[0xc] = '\0';
    local_48.sa_data[0xd] = '\0';
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_54 < 0) || (9 < local_54)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      printIntLine(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



