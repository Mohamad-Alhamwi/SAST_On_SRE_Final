
void CWE121_Stack_Based_Buffer_Overflow__CWE135_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}




void good9(void)

{
  return;
}




void goodG2B1(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  char **ppcVar5;
  char **ppcVar6;
  long in_FS_OFFSET;
  char *local_28;
  size_t local_20;
  char *local_18;
  long local_10;
  
  ppcVar5 = &local_28;
  ppcVar6 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  iVar3 = globalReturnsFalse();
  if (iVar3 == 0) {
    local_28 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_20 = strlen(local_28);
    uVar4 = ((local_20 + 0x18) / 0x10) * 0x10;
    for (; ppcVar5 != (char **)((long)&local_28 - (uVar4 & 0xfffffffffffff000));
        ppcVar5 = (char **)((long)ppcVar5 + -0x1000)) {
      *(undefined8 *)((long)ppcVar5 + -8) = *(undefined8 *)((long)ppcVar5 + -8);
    }
    lVar1 = -(ulong)((uint)uVar4 & 0xfff);
    ppcVar6 = (char **)((long)ppcVar5 + lVar1);
    if ((uVar4 & 0xfff) != 0) {
      *(undefined8 *)((long)ppcVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)((long)ppcVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
    }
    pcVar2 = local_28;
    local_18 = (char *)((ulong)((long)ppcVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppcVar5 + lVar1 + -8) = 0x1018bd;
    strcpy((char *)((ulong)((long)ppcVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pcVar2);
    pcVar2 = local_18;
    *(undefined8 *)((long)ppcVar5 + lVar1 + -8) = 0x1018c9;
    printLine(pcVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppcVar6 + -8) = 0x1018de;
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




void bad3(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void bad7(void)

{
  return;
}




void good1(void)

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




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void bad4(void)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103188,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad6(void)

{
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE135_11_bad(void)

{
  long lVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulong uVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  long in_FS_OFFSET;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  ppwVar5 = &local_28;
  ppwVar6 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (wchar_t *)0x0;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_28 = L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  }
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_20 = strlen((char *)local_28);
    uVar4 = (((local_20 + 1) * 4 + 0x17) / 0x10) * 0x10;
    for (; ppwVar5 != (wchar_t **)((long)&local_28 - (uVar4 & 0xfffffffffffff000));
        ppwVar5 = (wchar_t **)((long)ppwVar5 + -0x1000)) {
      *(undefined8 *)((long)ppwVar5 + -8) = *(undefined8 *)((long)ppwVar5 + -8);
    }
    lVar1 = -(ulong)((uint)uVar4 & 0xfff);
    ppwVar6 = (wchar_t **)((long)ppwVar5 + lVar1);
    if ((uVar4 & 0xfff) != 0) {
      *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
    }
    pwVar2 = local_28;
    local_18 = (wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x10152e;
    wcscpy((wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pwVar2);
    pwVar2 = local_18;
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x10153a;
    printLine(pwVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppwVar6 + -8) = 0x10154f;
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
  CWE121_Stack_Based_Buffer_Overflow__CWE135_11_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE135_11_bad();
  printLine("Finished bad()");
  return 0;
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




void good2(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001011b0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void goodB2G1(void)

{
  long lVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulong uVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  long in_FS_OFFSET;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  ppwVar5 = &local_28;
  ppwVar6 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (wchar_t *)0x0;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_28 = L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  }
  iVar3 = globalReturnsFalse();
  if (iVar3 == 0) {
    local_20 = wcslen(local_28);
    uVar4 = (((local_20 + 1) * 4 + 0x17) / 0x10) * 0x10;
    for (; ppwVar5 != (wchar_t **)((long)&local_28 - (uVar4 & 0xfffffffffffff000));
        ppwVar5 = (wchar_t **)((long)ppwVar5 + -0x1000)) {
      *(undefined8 *)((long)ppwVar5 + -8) = *(undefined8 *)((long)ppwVar5 + -8);
    }
    lVar1 = -(ulong)((uint)uVar4 & 0xfff);
    ppwVar6 = (wchar_t **)((long)ppwVar5 + lVar1);
    if ((uVar4 & 0xfff) != 0) {
      *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
    }
    pwVar2 = local_28;
    local_18 = (wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x101663;
    wcscpy((wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pwVar2);
    pwVar2 = local_18;
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x10166f;
    printWLine(pwVar2);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppwVar6 + -8) = 0x101684;
    __stack_chk_fail();
  }
  return;
}




void bad5(void)

{
  return;
}




void good4(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void good7(void)

{
  return;
}




void bad8(void)

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




void good5(void)

{
  return;
}




void bad1(void)

{
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103190,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void bad2(void)

{
  return;
}




void goodG2B2(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  char **ppcVar5;
  char **ppcVar6;
  long in_FS_OFFSET;
  char *local_28;
  size_t local_20;
  char *local_18;
  long local_10;
  
  ppcVar5 = &local_28;
  ppcVar6 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_28 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  }
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_20 = strlen(local_28);
    uVar4 = ((local_20 + 0x18) / 0x10) * 0x10;
    for (; ppcVar5 != (char **)((long)&local_28 - (uVar4 & 0xfffffffffffff000));
        ppcVar5 = (char **)((long)ppcVar5 + -0x1000)) {
      *(undefined8 *)((long)ppcVar5 + -8) = *(undefined8 *)((long)ppcVar5 + -8);
    }
    lVar1 = -(ulong)((uint)uVar4 & 0xfff);
    ppcVar6 = (char **)((long)ppcVar5 + lVar1);
    if ((uVar4 & 0xfff) != 0) {
      *(undefined8 *)((long)ppcVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)((long)ppcVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
    }
    pcVar2 = local_28;
    local_18 = (char *)((ulong)((long)ppcVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppcVar5 + lVar1 + -8) = 0x1019e1;
    strcpy((char *)((ulong)((long)ppcVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pcVar2);
    pcVar2 = local_18;
    *(undefined8 *)((long)ppcVar5 + lVar1 + -8) = 0x1019ed;
    printLine(pcVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppcVar6 + -8) = 0x101a02;
    __stack_chk_fail();
  }
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good3(void)

{
  return;
}




void good8(void)

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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void goodB2G2(void)

{
  long lVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulong uVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  long in_FS_OFFSET;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  ppwVar5 = &local_28;
  ppwVar6 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (wchar_t *)0x0;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_28 = L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  }
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    local_20 = wcslen(local_28);
    uVar4 = (((local_20 + 1) * 4 + 0x17) / 0x10) * 0x10;
    for (; ppwVar5 != (wchar_t **)((long)&local_28 - (uVar4 & 0xfffffffffffff000));
        ppwVar5 = (wchar_t **)((long)ppwVar5 + -0x1000)) {
      *(undefined8 *)((long)ppwVar5 + -8) = *(undefined8 *)((long)ppwVar5 + -8);
    }
    lVar1 = -(ulong)((uint)uVar4 & 0xfff);
    ppwVar6 = (wchar_t **)((long)ppwVar5 + lVar1);
    if ((uVar4 & 0xfff) != 0) {
      *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)((long)ppwVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
    }
    pwVar2 = local_28;
    local_18 = (wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x10178b;
    wcscpy((wchar_t *)((ulong)((long)ppwVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pwVar2);
    pwVar2 = local_18;
    *(undefined8 *)((long)ppwVar5 + lVar1 + -8) = 0x101797;
    printWLine(pwVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppwVar6 + -8) = 0x1017ac;
    __stack_chk_fail();
  }
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void bad9(void)

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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good6(void)

{
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



