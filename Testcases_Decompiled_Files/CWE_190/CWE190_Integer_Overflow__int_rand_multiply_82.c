
void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_bad::action(int)
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_bad::
action(CWE190_Integer_Overflow__int_rand_multiply_82_bad *this,int param_1)

{
  if (0 < param_1) {
    printIntLine(param_1 * 2);
  }
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




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G::action(int)
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G
::action(CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G *this,int param_1)

{
  if (0 < param_1) {
    if (param_1 < 0x3fffffff) {
      printIntLine(param_1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}




void bad9(void)

{
  return;
}




void bad6(void)

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




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::good() */

void CWE190_Integer_Overflow__int_rand_multiply_82::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void bad5(void)

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




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_base::CWE190_Integer_Overflow__int_rand_multiply_82_base()
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_base::
CWE190_Integer_Overflow__int_rand_multiply_82_base
          (CWE190_Integer_Overflow__int_rand_multiply_82_base *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00105ce0;
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




void good3(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001032b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good5(void)

{
  return;
}




void good1(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE190_Integer_Overflow__int_rand_multiply_82::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE190_Integer_Overflow__int_rand_multiply_82::bad();
  printLine("Finished bad()");
  return 0;
}




void good6(void)

{
  return;
}




void good8(void)

{
  return;
}




void bad7(void)

{
  return;
}




void good4(void)

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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B()
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B
::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B
          (CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B *this)

{
  CWE190_Integer_Overflow__int_rand_multiply_82_base::
  CWE190_Integer_Overflow__int_rand_multiply_82_base
            ((CWE190_Integer_Overflow__int_rand_multiply_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c70;
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




void FUN_00101020(void)

{
  (*(code *)PTR_00105f20)();
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B::action(int)
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B
::action(CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B *this,int param_1)

{
  if (0 < param_1) {
    printIntLine(param_1 * 2);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001032b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::bad() */

void CWE190_Integer_Overflow__int_rand_multiply_82::bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CWE190_Integer_Overflow__int_rand_multiply_82_bad *this;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  this = (CWE190_Integer_Overflow__int_rand_multiply_82_bad *)operator_new(8);
  CWE190_Integer_Overflow__int_rand_multiply_82_bad::
  CWE190_Integer_Overflow__int_rand_multiply_82_bad(this);
  (*(code *)**(undefined8 **)this)(this,uVar1);
  if (this != (CWE190_Integer_Overflow__int_rand_multiply_82_bad *)0x0) {
    operator_delete(this,8);
  }
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::goodB2G() */

void CWE190_Integer_Overflow__int_rand_multiply_82::goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G *this;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  this = (CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G *)operator_new(8);
  CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G::
  CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G(this);
  (*(code *)**(undefined8 **)this)(this,uVar1);
  if (this != (CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G *)0x0) {
    operator_delete(this,8);
  }
  return;
}




void bad1(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G()
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G
::CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G
          (CWE190_Integer_Overflow__int_rand_multiply_82_goodB2G *this)

{
  CWE190_Integer_Overflow__int_rand_multiply_82_base::
  CWE190_Integer_Overflow__int_rand_multiply_82_base
            ((CWE190_Integer_Overflow__int_rand_multiply_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c58;
  return;
}




void bad3(void)

{
  return;
}




void good2(void)

{
  return;
}




void good9(void)

{
  return;
}




void bad2(void)

{
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::goodG2B() */

void CWE190_Integer_Overflow__int_rand_multiply_82::goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B *this;
  
  this = (CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B *)operator_new(8);
  CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B::
  CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B(this);
  (*(code *)**(undefined8 **)this)(this,2);
  if (this != (CWE190_Integer_Overflow__int_rand_multiply_82_goodG2B *)0x0) {
    operator_delete(this,8);
  }
  return;
}




/* CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_bad::CWE190_Integer_Overflow__int_rand_multiply_82_bad()
    */

void __thiscall
CWE190_Integer_Overflow__int_rand_multiply_82::CWE190_Integer_Overflow__int_rand_multiply_82_bad::
CWE190_Integer_Overflow__int_rand_multiply_82_bad
          (CWE190_Integer_Overflow__int_rand_multiply_82_bad *this)

{
  CWE190_Integer_Overflow__int_rand_multiply_82_base::
  CWE190_Integer_Overflow__int_rand_multiply_82_base
            ((CWE190_Integer_Overflow__int_rand_multiply_82_base *)this);
  *(undefined ***)this = &PTR_action_00105c88;
  return;
}




void good7(void)

{
  return;
}



