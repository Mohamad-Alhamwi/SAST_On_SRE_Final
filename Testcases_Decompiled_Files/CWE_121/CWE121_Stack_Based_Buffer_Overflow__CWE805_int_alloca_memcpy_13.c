
void goodG2B1(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined auStack_1c8 [8];
  undefined4 *local_1c0;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar7 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar4 = auStack_1c8; puVar4 != auStack_1c8; puVar4 = puVar4 + -0x1000) {
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  }
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  local_1b8 = (ulong)(puVar4 + -0xc1) & 0xfffffffffffffff0;
  for (puVar5 = puVar4 + -0xd0; puVar5 != puVar4 + -0xd0; puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  local_1b0 = (undefined4 *)((ulong)(puVar5 + -0x191) & 0xfffffffffffffff0);
  puVar2 = local_1b0;
  if (GLOBAL_CONST_FIVE != 5) {
    *(undefined8 *)(puVar5 + -0x1a8) = 0x1016b9;
    printLine("Benign, fixed string");
    puVar2 = local_1c0;
  }
  local_1c0 = puVar2;
  puVar6 = local_1a8;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined8 *)(puVar5 + -0x1a8) = 0x1016fe;
  memcpy(local_1c0,local_1a8,400);
  uVar1 = *local_1c0;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x10170e;
  printIntLine(uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + -0x1a8) = 0x101723;
    __stack_chk_fail();
  }
  return;
}




void bad5(void)

{
  return;
}




void bad3(void)

{
  return;
}




void bad7(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void good1(void)

{
  return;
}




void good7(void)

{
  return;
}




void good6(void)

{
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_13_bad(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined auStack_1c8 [8];
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  ulong local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = auStack_1c8; puVar3 != auStack_1c8; puVar3 = puVar3 + -0x1000) {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  }
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  local_1b8 = (undefined4 *)((ulong)(puVar3 + -0xc1) & 0xfffffffffffffff0);
  for (puVar4 = puVar3 + -0xd0; puVar4 != puVar3 + -0xd0; puVar4 = puVar4 + -0x1000) {
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  }
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  local_1b0 = (ulong)(puVar4 + -0x191) & 0xfffffffffffffff0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_1c0 = (undefined4 *)((ulong)(puVar3 + -0xc1) & 0xfffffffffffffff0);
  }
  puVar5 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(puVar4 + -0x1a8) = 0x101549;
  memcpy(local_1c0,local_1a8,400);
  uVar1 = *local_1c0;
  *(undefined8 *)(puVar4 + -0x1a8) = 0x101559;
  printIntLine(uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar4 + -0x1a8) = 0x10156e;
  __stack_chk_fail();
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




void bad9(void)

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




void good3(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void goodG2B2(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined auStack_1c8 [8];
  undefined4 *local_1c0;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = auStack_1c8; puVar3 != auStack_1c8; puVar3 = puVar3 + -0x1000) {
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  }
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  local_1b8 = (ulong)(puVar3 + -0xc1) & 0xfffffffffffffff0;
  for (puVar4 = puVar3 + -0xd0; puVar4 != puVar3 + -0xd0; puVar4 = puVar4 + -0x1000) {
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  }
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  local_1b0 = (undefined4 *)((ulong)(puVar4 + -0x191) & 0xfffffffffffffff0);
  if (GLOBAL_CONST_FIVE == 5) {
    local_1c0 = local_1b0;
  }
  puVar5 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(puVar4 + -0x1a8) = 0x1018a5;
  memcpy(local_1c0,local_1a8,400);
  uVar1 = *local_1c0;
  *(undefined8 *)(puVar4 + -0x1a8) = 0x1018b5;
  printIntLine(uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar4 + -0x1a8) = 0x1018ca;
  __stack_chk_fail();
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void good9(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad6(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void good4(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
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




void good8(void)

{
  return;
}




void bad1(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void bad8(void)

{
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_13_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_13_bad();
  printLine("Finished bad()");
  return 0;
}




void good2(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void bad4(void)

{
  return;
}




void good5(void)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad2(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



