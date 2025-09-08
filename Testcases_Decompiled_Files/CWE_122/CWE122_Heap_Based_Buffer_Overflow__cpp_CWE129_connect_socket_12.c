
void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void bad2(void)

{
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




void good2(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void good8(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good6(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good7(void)

{
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void bad8(void)

{
  return;
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good5(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




void good3(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::good() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::good(void)

{
  goodB2G();
  goodG2B();
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad3(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::bad() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::bad(void)

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
  iVar1 = globalReturnsTrueOrFalse();
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
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    pvVar4 = operator_new__(0x28);
    for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_54 * 4) = 0;
    }
    if ((local_5c < 0) || (9 < local_5c)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        printIntLine(*(undefined4 *)((long)pvVar4 + (long)local_54 * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  else {
    pvVar4 = operator_new__(0x28);
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_58 * 4) = 0;
    }
    if (local_5c < 0) {
      printLine("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 1;
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        printIntLine(*(undefined4 *)((long)pvVar4 + (long)local_58 * 4));
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




void good1(void)

{
  return;
}




void good9(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void bad4(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void bad5(void)

{
  return;
}




void bad6(void)

{
  return;
}




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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void good4(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::goodB2G() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::goodB2G(void)

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
  iVar1 = globalReturnsTrueOrFalse();
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
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    pvVar4 = operator_new__(0x28);
    for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_5c * 4) = 0;
    }
    if ((local_64 < 0) || (9 < local_64)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_64 * 4) = 1;
      for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
        printIntLine(*(undefined4 *)((long)pvVar4 + (long)local_5c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  else {
    pvVar4 = operator_new__(0x28);
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_60 * 4) = 0;
    }
    if ((local_64 < 0) || (9 < local_64)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_64 * 4) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        printIntLine(*(undefined4 *)((long)pvVar4 + (long)local_60 * 4));
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




void bad1(void)

{
  return;
}




void bad7(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101bdd) */
/* WARNING: Removing unreachable block (ram,0x00101c90) */
/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::goodG2B(void)

{
  int iVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    pvVar2 = operator_new__(0x28);
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      printIntLine(*(undefined4 *)((long)pvVar2 + (long)local_1c * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  else {
    pvVar2 = operator_new__(0x28);
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      printIntLine(*(undefined4 *)((long)pvVar2 + (long)local_20 * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_12::bad();
  printLine("Finished bad()");
  return 0;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}



