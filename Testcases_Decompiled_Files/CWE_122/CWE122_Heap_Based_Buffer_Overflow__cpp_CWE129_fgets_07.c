
void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void bad1(void)

{
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void good1(void)

{
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




void good7(void)

{
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




undefined8 globalReturnsFalse(void)

{
  return 0;
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




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodB2G2() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodB2G2(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  if (staticFive == 5) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar1 = fgets(local_1e,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_30 = atoi(local_1e);
    }
  }
  if (staticFive == 5) {
    pvVar2 = operator_new__(0x28);
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
    }
    if ((local_30 < 0) || (9 < local_30)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
      for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
        printIntLine(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good5(void)

{
  return;
}




void bad9(void)

{
  return;
}




void good6(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::bad();
  printLine("Finished bad()");
  return 0;
}




void bad7(void)

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




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodG2B1() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodG2B1(void)

{
  void *pvVar1;
  int local_18;
  int local_14;
  
  local_18 = -1;
  if (staticFive == 5) {
    local_18 = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    pvVar1 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      printLine("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        printIntLine(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
      }
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return;
}




void good4(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::bad() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::bad(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  if (staticFive == 5) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar1 = fgets(local_1e,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_30 = atoi(local_1e);
    }
  }
  if (staticFive == 5) {
    pvVar2 = operator_new__(0x28);
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
    }
    if (local_30 < 0) {
      printLine("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
      for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
        printIntLine(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void good2(void)

{
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




/* WARNING: Removing unreachable block (ram,0x001019e9) */
/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodG2B2() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodG2B2(void)

{
  void *pvVar1;
  undefined4 local_14;
  
  if (staticFive == 5) {
    pvVar1 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      printIntLine(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void bad2(void)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good8(void)

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




void bad3(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void bad4(void)

{
  return;
}




void bad5(void)

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




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void good3(void)

{
  return;
}




void bad8(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodB2G1() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::goodB2G1(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  if (staticFive == 5) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar1 = fgets(local_1e,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_30 = atoi(local_1e);
    }
  }
  if (staticFive == 5) {
    pvVar2 = operator_new__(0x28);
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
    }
    if ((local_30 < 0) || (9 < local_30)) {
      printLine("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
      for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
        printIntLine(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good9(void)

{
  return;
}




void bad6(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::good() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_07::good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}



