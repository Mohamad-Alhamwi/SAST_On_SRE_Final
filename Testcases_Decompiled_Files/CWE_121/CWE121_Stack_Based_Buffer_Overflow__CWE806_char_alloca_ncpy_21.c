
void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void good4(void)

{
  return;
}




void goodG2B2(void)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  ulong *puVar3;
  long in_FS_OFFSET;
  ulong local_58;
  char *local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = &local_58; puVar3 != &local_58; puVar3 = (ulong *)((long)puVar3 + -0x1000)) {
    *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  }
  *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  uVar1 = (ulong)((long)puVar3 + -0x61) & 0xfffffffffffffff0;
  goodG2B2Static = 1;
  local_58 = uVar1;
  local_50 = (char *)uVar1;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x10181a;
  pcVar2 = (char *)goodG2B2Source(uVar1);
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
  local_50 = pcVar2;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101860;
  __n = strlen(pcVar2);
  pcVar2 = local_50;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101876;
  strncpy(local_48,pcVar2,__n);
  pcVar2 = local_50;
  local_18 = local_18 & 0xff;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101886;
  printLine(pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar3 + -0x78) = 0x10189b;
  __stack_chk_fail();
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




void bad4(void)

{
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_21_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_21_bad();
  printLine("Finished bad()");
  return 0;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_21_bad(void)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  ulong *puVar3;
  long in_FS_OFFSET;
  ulong local_58;
  char *local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = &local_58; puVar3 != &local_58; puVar3 = (ulong *)((long)puVar3 + -0x1000)) {
    *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  }
  *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  uVar1 = (ulong)((long)puVar3 + -0x61) & 0xfffffffffffffff0;
  badStatic = 1;
  local_58 = uVar1;
  local_50 = (char *)uVar1;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101508;
  pcVar2 = (char *)badSource(uVar1);
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
  local_50 = pcVar2;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x10154e;
  __n = strlen(pcVar2);
  pcVar2 = local_50;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101564;
  strncpy(local_48,pcVar2,__n);
  pcVar2 = local_50;
  local_18 = local_18 & 0xff;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101574;
  printLine(pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101589;
  __stack_chk_fail();
}




void bad5(void)

{
  return;
}




void goodG2B1(void)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  ulong *puVar3;
  long in_FS_OFFSET;
  ulong local_58;
  char *local_50;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = &local_58; puVar3 != &local_58; puVar3 = (ulong *)((long)puVar3 + -0x1000)) {
    *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  }
  *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
  uVar1 = (ulong)((long)puVar3 + -0x61) & 0xfffffffffffffff0;
  goodG2B1Static = 0;
  local_58 = uVar1;
  local_50 = (char *)uVar1;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101698;
  pcVar2 = (char *)goodG2B1Source(uVar1);
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
  local_50 = pcVar2;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x1016de;
  __n = strlen(pcVar2);
  pcVar2 = local_50;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x1016f4;
  strncpy(local_48,pcVar2,__n);
  pcVar2 = local_50;
  local_18 = local_18 & 0xff;
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101704;
  printLine(pcVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar3 + -0x78) = 0x101719;
  __stack_chk_fail();
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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void bad7(void)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void * goodG2B1Source(void *param_1)

{
  if (goodG2B1Static == 0) {
    memset(param_1,0x41,0x31);
    *(undefined *)((long)param_1 + 0x31) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return param_1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void bad8(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void good6(void)

{
  return;
}




void good9(void)

{
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




void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
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




void bad1(void)

{
  return;
}




void bad6(void)

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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void good2(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void * goodG2B2Source(void *param_1)

{
  if (goodG2B2Static != 0) {
    memset(param_1,0x41,0x31);
    *(undefined *)((long)param_1 + 0x31) = 0;
  }
  return param_1;
}




void good7(void)

{
  return;
}




void bad3(void)

{
  return;
}




void bad9(void)

{
  return;
}




void good1(void)

{
  return;
}




void * badSource(void *param_1)

{
  if (badStatic != 0) {
    memset(param_1,0x41,99);
    *(undefined *)((long)param_1 + 99) = 0;
  }
  return param_1;
}



