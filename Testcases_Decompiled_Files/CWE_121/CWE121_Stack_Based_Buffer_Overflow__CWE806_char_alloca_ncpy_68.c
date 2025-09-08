
void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_bad(void)

{
  void *__s;
  undefined *puVar1;
  long in_FS_OFFSET;
  undefined auStack_28 [8];
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar1 = auStack_28; puVar1 != auStack_28; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  __s = (void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0);
  local_20 = __s;
  local_18 = __s;
  *(undefined8 *)(puVar1 + -0x78) = 0x1014c7;
  memset(__s,0x41,99);
  *(undefined *)((long)local_18 + 99) = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_badData = local_18;
  *(undefined8 *)(puVar1 + -0x78) = 0x1014e7;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68b_badSink();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar1 + -0x78) = 0x1014fc;
  __stack_chk_fail();
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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_bad();
  printLine("Finished bad()");
  return 0;
}




void good6(void)

{
  return;
}




void good5(void)

{
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_good(void)

{
  goodG2B();
  return;
}




void bad1(void)

{
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void bad7(void)

{
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68b_goodG2BSink(void)

{
  char *__src;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_goodG2BData;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_goodG2BData);
  strncpy(local_48,__src,__n);
  local_18 = local_18 & 0xff;
  printLine(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad9(void)

{
  return;
}




void bad4(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68b_badSink(void)

{
  char *__src;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  __src = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_badData;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_badData);
  strncpy(local_48,__src,__n);
  local_18 = local_18 & 0xff;
  printLine(__src);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




void bad3(void)

{
  return;
}




void goodG2B(void)

{
  void *__s;
  undefined *puVar1;
  long in_FS_OFFSET;
  undefined auStack_28 [8];
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar1 = auStack_28; puVar1 != auStack_28; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  __s = (void *)((ulong)(puVar1 + -0x61) & 0xfffffffffffffff0);
  local_20 = __s;
  local_18 = __s;
  *(undefined8 *)(puVar1 + -0x78) = 0x1015bc;
  memset(__s,0x41,0x31);
  *(undefined *)((long)local_18 + 0x31) = 0;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68_goodG2BData = local_18;
  *(undefined8 *)(puVar1 + -0x78) = 0x1015dc;
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_68b_goodG2BSink();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar1 + -0x78) = 0x1015f1;
  __stack_chk_fail();
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void good7(void)

{
  return;
}




void bad5(void)

{
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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
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




void bad8(void)

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




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void good8(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void bad2(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
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




void good9(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good2(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad6(void)

{
  return;
}



