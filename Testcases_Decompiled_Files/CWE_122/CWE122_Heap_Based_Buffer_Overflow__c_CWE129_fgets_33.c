
undefined8 globalReturnsTrue(void)

{
  return 1;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void bad1(void)

{
  return;
}




void bad8(void)

{
  return;
}




void bad4(void)

{
  return;
}




void good4(void)

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




void good6(void)

{
  return;
}




void bad6(void)

{
  return;
}




void bad2(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::bad() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::bad(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  void *local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_3c;
  local_3c = -1;
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
    local_3c = atoi(local_1e);
  }
  local_34 = *local_30;
  local_28 = malloc(0x28);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_38 * 4) = 0;
  }
  if (local_34 < 0) {
    printLine("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)local_34 * 4) = 1;
    for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
      printIntLine(*(undefined4 *)((long)local_28 + (long)local_38 * 4));
    }
  }
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
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




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void bad3(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::goodB2G() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::goodB2G(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  void *local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_3c;
  local_3c = -1;
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
    local_3c = atoi(local_1e);
  }
  local_34 = *local_30;
  local_28 = malloc(0x28);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_38 * 4) = 0;
  }
  if ((local_34 < 0) || (9 < local_34)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)local_34 * 4) = 1;
    for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
      printIntLine(*(undefined4 *)((long)local_28 + (long)local_38 * 4));
    }
  }
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
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




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::bad();
  printLine("Finished bad()");
  return 0;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good2(void)

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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void bad9(void)

{
  return;
}




void good3(void)

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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad7(void)

{
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




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::good() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
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




void good9(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_33::goodG2B(void)

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
    printLine("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_24 * 4) = 1;
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      printIntLine(*(undefined4 *)((long)local_18 + (long)local_28 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void bad5(void)

{
  return;
}




void good8(void)

{
  return;
}



