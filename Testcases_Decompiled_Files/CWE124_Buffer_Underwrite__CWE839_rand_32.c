
void printLongLine(undefined8 param_1)

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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void bad1(void)

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




void bad7(void)

{
  return;
}




void bad6(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void bad3(void)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
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




void CWE124_Buffer_Underwrite__CWE839_rand_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void bad9(void)

{
  return;
}




void good6(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void good8(void)

{
  return;
}




void good3(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void bad4(void)

{
  return;
}




void good2(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good4(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE124_Buffer_Underwrite__CWE839_rand_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_50 = &local_68;
  local_68 = 0xffffffff;
  local_60 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_60 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_60 = rand();
    local_60 = local_60 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_58 = local_60;
  local_5c = *local_50;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_5c < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_5c * 4) = 1;
    for (local_64 = 0; local_64 < 10; local_64 = local_64 + 1) {
      printIntLine(*(undefined4 *)((long)&local_48 + (long)local_64 * 4));
    }
  }
  else {
    printLine("ERROR: Array index is negative.");
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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




void good7(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00101517 */
/* WARNING: Removing unreachable block (ram,0x0010157c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &local_58;
  local_40 = &local_58;
  local_50 = 7;
  local_58 = 7;
  local_4c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_20._4_4_ = 1;
  for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
    printIntLine(*(undefined4 *)((long)&local_38 + (long)local_54 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_50 = &local_68;
  local_68 = 0xffffffff;
  local_60 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_60 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_60 = rand();
    local_60 = local_60 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_58 = local_60;
  local_5c = *local_50;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_5c < 0) || (9 < (int)local_5c)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_5c * 4) = 1;
    for (local_64 = 0; local_64 < 10; local_64 = local_64 + 1) {
      printIntLine(*(undefined4 *)((long)&local_48 + (long)local_64 * 4));
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE124_Buffer_Underwrite__CWE839_rand_32_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE124_Buffer_Underwrite__CWE839_rand_32_bad();
  printLine("Finished bad()");
  return 0;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void bad2(void)

{
  return;
}




void good1(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
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




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void good9(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void good5(void)

{
  return;
}



