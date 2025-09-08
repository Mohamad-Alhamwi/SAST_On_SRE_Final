
void good8(void)

{
  return;
}




void good6(void)

{
  return;
}




void bad1(void)

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




void CWE191_Integer_Underflow__short_rand_postdec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
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




void good1(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void bad5(void)

{
  return;
}




void bad3(void)

{
  return;
}




void bad6(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad7(void)

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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE191_Integer_Underflow__short_rand_postdec_07_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE191_Integer_Underflow__short_rand_postdec_07_bad();
  printLine("Finished bad()");
  return 0;
}




void good3(void)

{
  return;
}




void good9(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad8(void)

{
  return;
}




void good2(void)

{
  return;
}




void good4(void)

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




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}




void bad4(void)

{
  return;
}




void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((int)(short)(local_1c - 1));
    }
  }
  return;
}




void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((int)(short)(local_1c - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void bad2(void)

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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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




void CWE191_Integer_Underflow__short_rand_postdec_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1c = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    printIntLine((int)(short)(local_1c - 1));
  }
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good7(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good5(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void goodG2B1(void)

{
  short local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((int)(short)(local_c + -1));
  }
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void bad9(void)

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



