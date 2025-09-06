
void goodG2B(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  long in_FS_OFFSET;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (undefined4 *)0x0;
  for (ppuVar3 = &local_18; ppuVar3 != &local_18; ppuVar3 = (undefined4 **)((long)ppuVar3 + -0x1000)
      ) {
    *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
  }
  *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
  local_18 = (undefined4 *)((ulong)((long)ppuVar3 + -0x191) & 0xfffffffffffffff0);
  *local_18 = 5;
  uVar1 = *local_18;
  *(undefined8 *)((long)ppuVar3 + -0x1a8) = 0x1015c4;
  printIntLine(uVar1);
  puVar2 = local_18;
  *(undefined8 *)((long)ppuVar3 + -0x1a8) = 0x1015d0;
  CWE401_Memory_Leak__int_realloc_54b_goodG2BSink(puVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar3 + -0x1a8) = 0x1015e5;
  __stack_chk_fail();
}




void good1(void)

{
  return;
}




void good4(void)

{
  return;
}




void CWE401_Memory_Leak__int_realloc_54_good(void)

{
  goodG2B();
  goodB2G();
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




void bad2(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void CWE401_Memory_Leak__int_realloc_54b_goodB2GSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54c_goodB2GSink(param_1);
  return;
}




void bad7(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void good8(void)

{
  return;
}




void CWE401_Memory_Leak__int_realloc_54b_badSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54c_badSink(param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void CWE401_Memory_Leak__int_realloc_54e_goodB2GSink(void *param_1)

{
  free(param_1);
  return;
}




void bad6(void)

{
  return;
}




void CWE401_Memory_Leak__int_realloc_54d_badSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54e_badSink(param_1);
  return;
}




void CWE401_Memory_Leak__int_realloc_54e_badSink(void)

{
  return;
}




void good5(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void good7(void)

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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,400);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  printIntLine(*puVar1);
  CWE401_Memory_Leak__int_realloc_54b_goodB2GSink(puVar1);
  return;
}




void bad4(void)

{
  return;
}




void bad8(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void CWE401_Memory_Leak__int_realloc_54d_goodB2GSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54e_goodB2GSink(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void good6(void)

{
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void CWE401_Memory_Leak__int_realloc_54c_badSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54d_badSink(param_1);
  return;
}




void CWE401_Memory_Leak__int_realloc_54e_goodG2BSink(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good9(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE401_Memory_Leak__int_realloc_54_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE401_Memory_Leak__int_realloc_54_bad();
  printLine("Finished bad()");
  return 0;
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void CWE401_Memory_Leak__int_realloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,400);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  printIntLine(*puVar1);
  CWE401_Memory_Leak__int_realloc_54b_badSink(puVar1);
  return;
}




void good2(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void CWE401_Memory_Leak__int_realloc_54b_goodG2BSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54c_goodG2BSink(param_1);
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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void CWE401_Memory_Leak__int_realloc_54c_goodB2GSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54d_goodB2GSink(param_1);
  return;
}




void bad9(void)

{
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
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




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void CWE401_Memory_Leak__int_realloc_54c_goodG2BSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54d_goodG2BSink(param_1);
  return;
}




void bad5(void)

{
  return;
}




void bad1(void)

{
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void CWE401_Memory_Leak__int_realloc_54d_goodG2BSink(undefined8 param_1)

{
  CWE401_Memory_Leak__int_realloc_54e_goodG2BSink(param_1);
  return;
}



