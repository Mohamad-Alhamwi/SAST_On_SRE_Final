
void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void bad1(void)

{
  return;
}




void bad3(void)

{
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad7(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good3(void)

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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
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




void good5(void)

{
  return;
}




void bad8(void)

{
  return;
}




void bad6(void)

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




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101727) */

void goodG2B(void)

{
  long in_FS_OFFSET;
  int local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    printIntLine(*(undefined4 *)((long)&local_38 + (long)local_48 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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




void bad2(void)

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




void CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_31_bad(void)

{
  uint16_t uVar1;
  int __fd;
  int iVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  local_60 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48._0_8_ = local_48._0_8_ & 0xffffffff;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar2 = bind(__fd,&local_48,0x10);
    if (((iVar2 != -1) && (iVar2 = listen(__fd,5), iVar2 != -1)) &&
       (local_60 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_60 != -1)) {
      sVar3 = recv(local_60,local_1e,0xd,0);
      iVar2 = (int)sVar3;
      if ((iVar2 != -1) && (iVar2 != 0)) {
        local_1e[iVar2] = '\0';
        local_64 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_60 != -1) {
    close(local_60);
  }
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_64 < 0) {
    printLine("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_64 * 4 + -2) = 1;
    for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
      printIntLine(*(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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




void good4(void)

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




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void goodB2G(void)

{
  uint16_t uVar1;
  int __fd;
  int iVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  local_60 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48._0_8_ = local_48._0_8_ & 0xffffffff;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar2 = bind(__fd,&local_48,0x10);
    if (((iVar2 != -1) && (iVar2 = listen(__fd,5), iVar2 != -1)) &&
       (local_60 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_60 != -1)) {
      sVar3 = recv(local_60,local_1e,0xd,0);
      iVar2 = (int)sVar3;
      if ((iVar2 != -1) && (iVar2 != 0)) {
        local_1e[iVar2] = '\0';
        local_64 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_60 != -1) {
    close(local_60);
  }
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((local_64 < 0) || (9 < local_64)) {
    printLine("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_64 * 4 + -2) = 1;
    for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
      printIntLine(*(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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




void good6(void)

{
  return;
}




void bad9(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_31_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_31_bad();
  printLine("Finished bad()");
  return 0;
}



