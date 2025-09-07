
/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_84::goodG2B(void)

{
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B *this;
  
  this = (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B *)operator_new(8);
                    /* try { // try from 001016d8 to 001016dc has its CatchHandler @ 00101701 */
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B(this,(void *)0x0);
  if (this != (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B *)0x0) {
    CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::
    ~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B(this);
    operator_delete(this,8);
  }
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




void bad8(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::goodB2G() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_84::goodB2G(void)

{
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G *this;
  
  this = (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G *)operator_new(8);
                    /* try { // try from 00101758 to 0010175c has its CatchHandler @ 00101781 */
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G(this,(void *)0x0);
  if (this != (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G *)0x0) {
    CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::
    ~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G(this);
    operator_delete(this,8);
  }
  return;
}




void bad6(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G()
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::
~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G *this)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = wcslen(*(wchar_t **)this);
  __dest = calloc(sVar1 + 1,4);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memcpy(__dest,*(void **)this,(sVar1 + 1) * 4);
  printWLine(__dest);
  free(__dest);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad(void*)
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::
CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad *this,void *param_1)

{
  wchar_t *__s;
  
  *(void **)this = param_1;
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  *(wchar_t **)this = __s;
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad()
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::
~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad *this)

{
  size_t sVar1;
  wchar_t *__dest;
  
  sVar1 = strlen(*(char **)this);
  __dest = (wchar_t *)calloc(sVar1 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,*(wchar_t **)this);
  printLine(__dest);
  free(__dest);
  return;
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




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G(void*)
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G::
CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodB2G *this,void *param_1)

{
  wchar_t *__s;
  
  *(void **)this = param_1;
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  *(wchar_t **)this = __s;
  return;
}




void bad7(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::good() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_84::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B()
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::
~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B *this)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(*(char **)this);
  __dest = (char *)calloc(sVar1 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,*(char **)this);
  printLine(__dest);
  free(__dest);
  return;
}




void good5(void)

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




void good6(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good3(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good4(void)

{
  return;
}




void bad3(void)

{
  return;
}




void bad5(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::bad() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_84::bad(void)

{
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad *this;
  
  this = (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad *)operator_new(8);
                    /* try { // try from 00101658 to 0010165c has its CatchHandler @ 00101681 */
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad
            (this,(void *)0x0);
  if (this != (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad *)0x0) {
    CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad::
    ~CWE122_Heap_Based_Buffer_Overflow__CWE135_84_bad(this);
    operator_delete(this,8);
  }
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__CWE135_84::bad();
  printLine("Finished bad()");
  return 0;
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




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B(void*)
    */

void __thiscall
CWE122_Heap_Based_Buffer_Overflow__CWE135_84::CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B::
CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B
          (CWE122_Heap_Based_Buffer_Overflow__CWE135_84_goodG2B *this,void *param_1)

{
  void *__s;
  
  *(void **)this = param_1;
  __s = malloc(0x32);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  *(void **)this = __s;
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




void good2(void)

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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




void bad1(void)

{
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void good7(void)

{
  return;
}




void good1(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
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




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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




void bad2(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed0)();
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}



