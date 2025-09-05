
void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad8(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good7(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE127_Buffer_Underread__char_alloca_ncpy_02_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE127_Buffer_Underread__char_alloca_ncpy_02_bad();
  printLine("Finished bad()");
  return 0;
}




void good9(void)

{
  return;
}




void CWE127_Buffer_Underread__char_alloca_ncpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void CWE127_Buffer_Underread__char_alloca_ncpy_02_bad(void)

{
  char *__src;
  size_t __n;
  void **ppvVar1;
  long in_FS_OFFSET;
  void *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar1 = &local_88; ppvVar1 != &local_88; ppvVar1 = (void **)((long)ppvVar1 + -0x1000)) {
    *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  }
  *(undefined8 *)((long)ppvVar1 + -8) = *(undefined8 *)((long)ppvVar1 + -8);
  local_88 = (void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1014bf;
  memset((void *)((ulong)((long)ppvVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_88 + 99) = 0;
  local_80 = (char *)((long)local_88 + -8);
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1014ec;
  memset(local_78,0x43,99);
  local_15 = 0;
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x1014fc;
  __n = strlen(local_78);
  __src = local_80;
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101512;
  strncpy(local_78,__src,__n);
  local_15 = 0;
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101522;
  printLine(local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar1 + -0x78) = 0x101537;
  __stack_chk_fail();
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void bad1(void)

{
  return;
}




void good1(void)

{
  return;
}




void goodG2B1(void)

{
  char *__src;
  size_t __n;
  char **ppcVar1;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar1 = &local_88; ppcVar1 != &local_88; ppcVar1 = (char **)((long)ppcVar1 + -0x1000)) {
    *(undefined8 *)((long)ppcVar1 + -8) = *(undefined8 *)((long)ppcVar1 + -8);
  }
  *(undefined8 *)((long)ppcVar1 + -8) = *(undefined8 *)((long)ppcVar1 + -8);
  local_88 = (char *)((ulong)((long)ppcVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x1015ef;
  memset((char *)((ulong)((long)ppcVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_88[99] = '\0';
  local_80 = local_88;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x101618;
  memset(local_78,0x43,99);
  local_15 = 0;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x101628;
  __n = strlen(local_78);
  __src = local_80;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10163e;
  strncpy(local_78,__src,__n);
  local_15 = 0;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10164e;
  printLine(local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x101663;
  __stack_chk_fail();
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




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void bad3(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void bad6(void)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
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




void bad4(void)

{
  return;
}




void bad9(void)

{
  return;
}




void good2(void)

{
  return;
}




void good5(void)

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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good6(void)

{
  return;
}




void bad2(void)

{
  return;
}




void bad7(void)

{
  return;
}




void goodG2B2(void)

{
  char *__src;
  size_t __n;
  char **ppcVar1;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar1 = &local_88; ppcVar1 != &local_88; ppcVar1 = (char **)((long)ppcVar1 + -0x1000)) {
    *(undefined8 *)((long)ppcVar1 + -8) = *(undefined8 *)((long)ppcVar1 + -8);
  }
  *(undefined8 *)((long)ppcVar1 + -8) = *(undefined8 *)((long)ppcVar1 + -8);
  local_88 = (char *)((ulong)((long)ppcVar1 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10171b;
  memset((char *)((ulong)((long)ppcVar1 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_88[99] = '\0';
  local_80 = local_88;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x101744;
  memset(local_78,0x43,99);
  local_15 = 0;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x101754;
  __n = strlen(local_78);
  __src = local_80;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10176a;
  strncpy(local_78,__src,__n);
  local_15 = 0;
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10177a;
  printLine(local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar1 + -0x78) = 0x10178f;
  __stack_chk_fail();
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void good3(void)

{
  return;
}




void good8(void)

{
  return;
}




void bad5(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
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



