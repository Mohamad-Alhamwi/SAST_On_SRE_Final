
void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::bad() */

void CWE401_Memory_Leak__int_malloc_82::bad(void)

{
  undefined4 *puVar1;
  CWE401_Memory_Leak__int_malloc_82_bad *this;
  
  puVar1 = (undefined4 *)malloc(400);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  printIntLine(*puVar1);
  this = (CWE401_Memory_Leak__int_malloc_82_bad *)operator_new(8);
  CWE401_Memory_Leak__int_malloc_82_bad::CWE401_Memory_Leak__int_malloc_82_bad(this);
  (*(code *)**(undefined8 **)this)(this,puVar1);
  if (this != (CWE401_Memory_Leak__int_malloc_82_bad *)0x0) {
    operator_delete(this,8);
  }
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::goodB2G() */

void CWE401_Memory_Leak__int_malloc_82::goodB2G(void)

{
  undefined4 *puVar1;
  CWE401_Memory_Leak__int_malloc_82_goodB2G *this;
  
  puVar1 = (undefined4 *)malloc(400);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  printIntLine(*puVar1);
  this = (CWE401_Memory_Leak__int_malloc_82_goodB2G *)operator_new(8);
  CWE401_Memory_Leak__int_malloc_82_goodB2G::CWE401_Memory_Leak__int_malloc_82_goodB2G(this);
  (*(code *)**(undefined8 **)this)(this,puVar1);
  if (this != (CWE401_Memory_Leak__int_malloc_82_goodB2G *)0x0) {
    operator_delete(this,8);
  }
  return;
}




void good9(void)

{
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodB2G::CWE401_Memory_Leak__int_malloc_82_goodB2G()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodB2G::
CWE401_Memory_Leak__int_malloc_82_goodB2G(CWE401_Memory_Leak__int_malloc_82_goodB2G *this)

{
  CWE401_Memory_Leak__int_malloc_82_base::CWE401_Memory_Leak__int_malloc_82_base
            ((CWE401_Memory_Leak__int_malloc_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c80;
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void bad4(void)

{
  return;
}




void bad5(void)

{
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




void bad9(void)

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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void good1(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103224,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodB2G::action(int*) */

void __thiscall
CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodB2G::action
          (CWE401_Memory_Leak__int_malloc_82_goodB2G *this,int *param_1)

{
  free(param_1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE401_Memory_Leak__int_malloc_82::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE401_Memory_Leak__int_malloc_82::bad();
  printLine("Finished bad()");
  return 0;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void bad3(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodG2B::action(int*) */

void CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodG2B::action
               (int *param_1)

{
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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f18)();
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
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




/* CWE401_Memory_Leak__int_malloc_82::goodG2B() */

void CWE401_Memory_Leak__int_malloc_82::goodG2B(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  CWE401_Memory_Leak__int_malloc_82_goodG2B *pCVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined auStack_38 [8];
  undefined4 *local_30;
  CWE401_Memory_Leak__int_malloc_82_goodG2B *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (undefined4 *)0x0;
  for (puVar5 = auStack_38; puVar5 != auStack_38; puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  local_30 = (undefined4 *)((ulong)(puVar5 + -0x191) & 0xfffffffffffffff0);
  *local_30 = 5;
  uVar1 = *local_30;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x1015b3;
  printIntLine(uVar1);
  *(undefined8 *)(puVar5 + -0x1a8) = 0x1015bd;
  pCVar4 = (CWE401_Memory_Leak__int_malloc_82_goodG2B *)operator_new(8);
  *(undefined8 *)(puVar5 + -0x1a8) = 0x1015c8;
  CWE401_Memory_Leak__int_malloc_82_goodG2B::CWE401_Memory_Leak__int_malloc_82_goodG2B(pCVar4);
  puVar3 = local_30;
  pcVar2 = (code *)**(undefined8 **)pCVar4;
  local_28 = pCVar4;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x1015e6;
  (*pcVar2)(pCVar4,puVar3);
  pCVar4 = local_28;
  if (local_28 != (CWE401_Memory_Leak__int_malloc_82_goodG2B *)0x0) {
    *(undefined8 *)(puVar5 + -0x1a8) = 0x1015fc;
    operator_delete(pCVar4,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar5 + -0x1a8) = 0x101611;
  __stack_chk_fail();
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_bad::CWE401_Memory_Leak__int_malloc_82_bad()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_bad::
CWE401_Memory_Leak__int_malloc_82_bad(CWE401_Memory_Leak__int_malloc_82_bad *this)

{
  CWE401_Memory_Leak__int_malloc_82_base::CWE401_Memory_Leak__int_malloc_82_base
            ((CWE401_Memory_Leak__int_malloc_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c50;
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodG2B::CWE401_Memory_Leak__int_malloc_82_goodG2B()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_goodG2B::
CWE401_Memory_Leak__int_malloc_82_goodG2B(CWE401_Memory_Leak__int_malloc_82_goodG2B *this)

{
  CWE401_Memory_Leak__int_malloc_82_base::CWE401_Memory_Leak__int_malloc_82_base
            ((CWE401_Memory_Leak__int_malloc_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c68;
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::good() */

void CWE401_Memory_Leak__int_malloc_82::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_base::CWE401_Memory_Leak__int_malloc_82_base()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_base::
CWE401_Memory_Leak__int_malloc_82_base(CWE401_Memory_Leak__int_malloc_82_base *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00105cf0;
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_bad::action(int*) */

void CWE401_Memory_Leak__int_malloc_82::CWE401_Memory_Leak__int_malloc_82_bad::action(int *param_1)

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




void good6(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010321c,local_1c);
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




void good8(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good5(void)

{
  return;
}




void good7(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void good3(void)

{
  return;
}



