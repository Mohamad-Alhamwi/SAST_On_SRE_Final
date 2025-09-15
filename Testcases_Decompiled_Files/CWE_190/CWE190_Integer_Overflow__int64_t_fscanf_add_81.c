
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::goodG2B() */

void CWE190_Integer_Overflow__int64_t_fscanf_add_81::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined **local_28;
  undefined8 local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 2;
  local_28 = &PTR_action_00104c78;
  local_18 = &local_28;
  (*(code *)PTR_action_00104c78)(local_18,2);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001022bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good2(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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




void bad4(void)

{
  return;
}




void good1(void)

{
  return;
}




/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodB2G::action(long)
   const */

void __thiscall
CWE190_Integer_Overflow__int64_t_fscanf_add_81::
CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodB2G::action
          (CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodB2G *this,long param_1)

{
  if (param_1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(param_1 + 1);
  }
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void bad2(void)

{
  return;
}




void bad8(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::good() */

void CWE190_Integer_Overflow__int64_t_fscanf_add_81::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001022c4,local_1c);
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void bad9(void)

{
  return;
}




/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodG2B::action(long)
   const */

void __thiscall
CWE190_Integer_Overflow__int64_t_fscanf_add_81::
CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodG2B::action
          (CWE190_Integer_Overflow__int64_t_fscanf_add_81_goodG2B *this,long param_1)

{
  printLongLongLine(param_1 + 1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE190_Integer_Overflow__int64_t_fscanf_add_81::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE190_Integer_Overflow__int64_t_fscanf_add_81::bad();
  printLine("Finished bad()");
  return 0;
}




void good6(void)

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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void good3(void)

{
  return;
}




void bad7(void)

{
  return;
}




void good7(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good8(void)

{
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




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::bad() */

void CWE190_Integer_Overflow__int64_t_fscanf_add_81::bad(void)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_0010222b,&local_28);
  local_20 = &PTR_action_00104c90;
  local_18 = &local_20;
  (*(code *)PTR_action_00104c90)(local_18,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::goodB2G() */

void CWE190_Integer_Overflow__int64_t_fscanf_add_81::goodB2G(void)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_0010222b,&local_28);
  local_20 = &PTR_action_00104ca8;
  local_18 = &local_20;
  (*(code *)PTR_action_00104ca8)(local_18,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad3(void)

{
  return;
}




void good4(void)

{
  return;
}




void bad1(void)

{
  return;
}




/* CWE190_Integer_Overflow__int64_t_fscanf_add_81::CWE190_Integer_Overflow__int64_t_fscanf_add_81_bad::action(long)
   const */

void __thiscall
CWE190_Integer_Overflow__int64_t_fscanf_add_81::CWE190_Integer_Overflow__int64_t_fscanf_add_81_bad::
action(CWE190_Integer_Overflow__int64_t_fscanf_add_81_bad *this,long param_1)

{
  printLongLongLine(param_1 + 1);
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



