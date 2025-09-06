
void good4(void)

{
  return;
}




void good2(void)

{
  return;
}




void good6(void)

{
  return;
}




void bad8(void)

{
  return;
}




void badSink(void)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar2 + 1; local_38 = local_38 + 1) {
    *(char *)(lVar1 + local_38) = local_1b[local_38];
  }
  printLine(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad1(void)

{
  return;
}




void good8(void)

{
  return;
}




void bad2(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void bad3(void)

{
  return;
}




void goodG2BSink(void)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  lVar1 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar2 + 1; local_38 = local_38 + 1) {
    *(char *)(lVar1 + local_38) = local_1b[local_38];
  }
  printLine(lVar1);
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




void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppuVar1 = &local_28; ppuVar1 != &local_28; ppuVar1 = (undefined **)((long)ppuVar1 + -0x1000))
  {
    *(undefined8 *)((long)ppuVar1 + -8) = *(undefined8 *)((long)ppuVar1 + -8);
  }
  *(undefined8 *)((long)ppuVar1 + -8) = *(undefined8 *)((long)ppuVar1 + -8);
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData =
       (undefined *)((ulong)((long)ppuVar1 + -0x11) & 0xfffffffffffffff0);
  local_28 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData;
  for (puVar2 = (undefined *)((long)ppuVar1 + -0x20); puVar2 != (undefined *)((long)ppuVar1 + -0x20)
      ; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_20 = (ulong)(puVar2 + -0x11) & 0xfffffffffffffff0;
  *CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData = 0;
  *(undefined8 *)(puVar2 + -0x28) = 0x1015bb;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_badData;
  badSink();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x28) = 0x1015d0;
  __stack_chk_fail();
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good5(void)

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




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void bad9(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void bad4(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void goodG2B(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  ulong local_28;
  undefined *local_20;
  undefined *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar1 = &local_28; puVar1 != &local_28; puVar1 = (ulong *)((long)puVar1 + -0x1000)) {
    *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  }
  *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  local_28 = (ulong)((long)puVar1 + -0x11) & 0xfffffffffffffff0;
  for (puVar2 = (undefined *)((long)puVar1 + -0x20); puVar2 != (undefined *)((long)puVar1 + -0x20);
      puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData =
       (undefined *)((ulong)(puVar2 + -0x11) & 0xfffffffffffffff0);
  *CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData = 0;
  *(undefined8 *)(puVar2 + -0x28) = 0x1017c4;
  local_20 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData;
  local_18 = CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_goodG2BData;
  goodG2BSink();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x28) = 0x1017d9;
  __stack_chk_fail();
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void good9(void)

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




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good(void)

{
  goodG2B();
  return;
}




void bad7(void)

{
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void good3(void)

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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void bad6(void)

{
  return;
}




void good1(void)

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




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_45_bad();
  printLine("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad5(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



