
void bad2(void)

{
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_bad::CWE401_Memory_Leak__int_malloc_84_bad(int*)
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_bad::
CWE401_Memory_Leak__int_malloc_84_bad(CWE401_Memory_Leak__int_malloc_84_bad *this,int *param_1)

{
  void *pvVar1;
  
  *(int **)this = param_1;
  pvVar1 = malloc(400);
  *(void **)this = pvVar1;
  if (*(long *)this == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  **(undefined4 **)this = 5;
  printIntLine(**(undefined4 **)this);
  return;
}




void good2(void)

{
  return;
}




void bad9(void)

{
  return;
}




void good5(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::goodB2G() */

void CWE401_Memory_Leak__int_malloc_84::goodB2G(void)

{
  CWE401_Memory_Leak__int_malloc_84_goodB2G *this;
  
  this = (CWE401_Memory_Leak__int_malloc_84_goodB2G *)operator_new(8);
                    /* try { // try from 001016e3 to 001016e7 has its CatchHandler @ 0010170c */
  CWE401_Memory_Leak__int_malloc_84_goodB2G::CWE401_Memory_Leak__int_malloc_84_goodB2G
            (this,(int *)0x0);
  if (this != (CWE401_Memory_Leak__int_malloc_84_goodB2G *)0x0) {
    CWE401_Memory_Leak__int_malloc_84_goodB2G::~CWE401_Memory_Leak__int_malloc_84_goodB2G(this);
    operator_delete(this,8);
  }
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::bad() */

void CWE401_Memory_Leak__int_malloc_84::bad(void)

{
  CWE401_Memory_Leak__int_malloc_84_bad *this;
  
  this = (CWE401_Memory_Leak__int_malloc_84_bad *)operator_new(8);
                    /* try { // try from 001015e3 to 001015e7 has its CatchHandler @ 0010160c */
  CWE401_Memory_Leak__int_malloc_84_bad::CWE401_Memory_Leak__int_malloc_84_bad(this,(int *)0x0);
  if (this != (CWE401_Memory_Leak__int_malloc_84_bad *)0x0) {
    CWE401_Memory_Leak__int_malloc_84_bad::~CWE401_Memory_Leak__int_malloc_84_bad(this);
    operator_delete(this,8);
  }
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::goodG2B() */

void CWE401_Memory_Leak__int_malloc_84::goodG2B(void)

{
  CWE401_Memory_Leak__int_malloc_84_goodG2B *this;
  
  this = (CWE401_Memory_Leak__int_malloc_84_goodG2B *)operator_new(8);
                    /* try { // try from 00101663 to 00101667 has its CatchHandler @ 0010168c */
  CWE401_Memory_Leak__int_malloc_84_goodG2B::CWE401_Memory_Leak__int_malloc_84_goodG2B
            (this,(int *)0x0);
  if (this != (CWE401_Memory_Leak__int_malloc_84_goodG2B *)0x0) {
    CWE401_Memory_Leak__int_malloc_84_goodG2B::~CWE401_Memory_Leak__int_malloc_84_goodG2B(this);
    operator_delete(this,8);
  }
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void bad1(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void bad8(void)

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




void good4(void)

{
  return;
}




void good9(void)

{
  return;
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




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodG2B::~CWE401_Memory_Leak__int_malloc_84_goodG2B()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodG2B::
~CWE401_Memory_Leak__int_malloc_84_goodG2B(CWE401_Memory_Leak__int_malloc_84_goodG2B *this)

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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void good8(void)

{
  return;
}




void bad6(void)

{
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodB2G::~CWE401_Memory_Leak__int_malloc_84_goodB2G()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodB2G::
~CWE401_Memory_Leak__int_malloc_84_goodB2G(CWE401_Memory_Leak__int_malloc_84_goodB2G *this)

{
  free(*(void **)this);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void good3(void)

{
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_bad::~CWE401_Memory_Leak__int_malloc_84_bad()
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_bad::
~CWE401_Memory_Leak__int_malloc_84_bad(CWE401_Memory_Leak__int_malloc_84_bad *this)

{
  return;
}




void good7(void)

{
  return;
}




void bad7(void)

{
  return;
}




void bad4(void)

{
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::good() */

void CWE401_Memory_Leak__int_malloc_84::good(void)

{
  goodG2B();
  goodB2G();
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




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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




void bad5(void)

{
  return;
}




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodB2G::CWE401_Memory_Leak__int_malloc_84_goodB2G(int*)
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodB2G::
CWE401_Memory_Leak__int_malloc_84_goodB2G
          (CWE401_Memory_Leak__int_malloc_84_goodB2G *this,int *param_1)

{
  void *pvVar1;
  
  *(int **)this = param_1;
  pvVar1 = malloc(400);
  *(void **)this = pvVar1;
  if (*(long *)this == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  **(undefined4 **)this = 5;
  printIntLine(**(undefined4 **)this);
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




/* CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodG2B::CWE401_Memory_Leak__int_malloc_84_goodG2B(int*)
    */

void __thiscall
CWE401_Memory_Leak__int_malloc_84::CWE401_Memory_Leak__int_malloc_84_goodG2B::
CWE401_Memory_Leak__int_malloc_84_goodG2B
          (CWE401_Memory_Leak__int_malloc_84_goodG2B *this,int *param_1)

{
  undefined4 uVar1;
  int **ppiVar2;
  long in_FS_OFFSET;
  int *local_28;
  CWE401_Memory_Leak__int_malloc_84_goodG2B *local_20;
  long local_10;
  
  local_20 = this;
  local_28 = param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(int **)this = param_1;
  for (ppiVar2 = &local_28; ppiVar2 != &local_28; ppiVar2 = (int **)((long)ppiVar2 + -0x1000)) {
    *(undefined8 *)((long)ppiVar2 + -8) = *(undefined8 *)((long)ppiVar2 + -8);
  }
  *(undefined8 *)((long)ppiVar2 + -8) = *(undefined8 *)((long)ppiVar2 + -8);
  *(ulong *)local_20 = (ulong)((long)ppiVar2 + -0x191) & 0xfffffffffffffff0;
  **(undefined4 **)local_20 = 5;
  uVar1 = **(undefined4 **)local_20;
  *(undefined8 *)((long)ppiVar2 + -0x1a8) = 0x10158e;
  printIntLine(uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppiVar2 + -0x1a8) = 0x1015a3;
  __stack_chk_fail();
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good1(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE401_Memory_Leak__int_malloc_84::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE401_Memory_Leak__int_malloc_84::bad();
  printLine("Finished bad()");
  return 0;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
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



