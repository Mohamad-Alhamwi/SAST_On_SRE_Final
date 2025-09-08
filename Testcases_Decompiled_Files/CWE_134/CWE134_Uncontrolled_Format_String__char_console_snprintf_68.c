
void good4(void)

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




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void goodG2B(void)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68_goodG2BData = &local_78;
  local_78 = 0x7274736465786966;
  local_70 = 0x74736574676e69;
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_goodG2BSink();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void bad2(void)

{
  return;
}




void CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_badSink(void)

{
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,CWE134_Uncontrolled_Format_String__char_console_snprintf_68_badData);
  printLine(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




void good5(void)

{
  return;
}




void bad4(void)

{
  return;
}




void goodB2G(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack_79 [105];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_79[1] = '\0';
  acStack_79[2] = '\0';
  acStack_79[3] = '\0';
  acStack_79[4] = '\0';
  acStack_79[5] = '\0';
  acStack_79[6] = '\0';
  acStack_79[7] = '\0';
  acStack_79[8] = '\0';
  acStack_79[9] = '\0';
  acStack_79[10] = '\0';
  acStack_79[0xb] = '\0';
  acStack_79[0xc] = '\0';
  acStack_79[0xd] = '\0';
  acStack_79[0xe] = '\0';
  acStack_79[0xf] = '\0';
  acStack_79[0x10] = '\0';
  acStack_79[0x11] = '\0';
  acStack_79[0x12] = '\0';
  acStack_79[0x13] = '\0';
  acStack_79[0x14] = '\0';
  acStack_79[0x15] = '\0';
  acStack_79[0x16] = '\0';
  acStack_79[0x17] = '\0';
  acStack_79[0x18] = '\0';
  acStack_79[0x19] = '\0';
  acStack_79[0x1a] = '\0';
  acStack_79[0x1b] = '\0';
  acStack_79[0x1c] = '\0';
  acStack_79[0x1d] = '\0';
  acStack_79[0x1e] = '\0';
  acStack_79[0x1f] = '\0';
  acStack_79[0x20] = '\0';
  acStack_79[0x21] = '\0';
  acStack_79[0x22] = '\0';
  acStack_79[0x23] = '\0';
  acStack_79[0x24] = '\0';
  acStack_79[0x25] = '\0';
  acStack_79[0x26] = '\0';
  acStack_79[0x27] = '\0';
  acStack_79[0x28] = '\0';
  acStack_79[0x29] = '\0';
  acStack_79[0x2a] = '\0';
  acStack_79[0x2b] = '\0';
  acStack_79[0x2c] = '\0';
  acStack_79[0x2d] = '\0';
  acStack_79[0x2e] = '\0';
  acStack_79[0x2f] = '\0';
  acStack_79[0x30] = '\0';
  acStack_79[0x31] = '\0';
  acStack_79[0x32] = '\0';
  acStack_79[0x33] = '\0';
  acStack_79[0x34] = '\0';
  acStack_79[0x35] = '\0';
  acStack_79[0x36] = '\0';
  acStack_79[0x37] = '\0';
  acStack_79[0x38] = '\0';
  acStack_79[0x39] = '\0';
  acStack_79[0x3a] = '\0';
  acStack_79[0x3b] = '\0';
  acStack_79[0x3c] = '\0';
  acStack_79[0x3d] = '\0';
  acStack_79[0x3e] = '\0';
  acStack_79[0x3f] = '\0';
  acStack_79[0x40] = '\0';
  acStack_79[0x41] = '\0';
  acStack_79[0x42] = '\0';
  acStack_79[0x43] = '\0';
  acStack_79[0x44] = '\0';
  acStack_79[0x45] = '\0';
  acStack_79[0x46] = '\0';
  acStack_79[0x47] = '\0';
  acStack_79[0x48] = '\0';
  acStack_79[0x49] = '\0';
  acStack_79[0x4a] = '\0';
  acStack_79[0x4b] = '\0';
  acStack_79[0x4c] = '\0';
  acStack_79[0x4d] = '\0';
  acStack_79[0x4e] = '\0';
  acStack_79[0x4f] = '\0';
  acStack_79[0x50] = '\0';
  acStack_79[0x51] = '\0';
  acStack_79[0x52] = '\0';
  acStack_79[0x53] = '\0';
  acStack_79[0x54] = '\0';
  acStack_79[0x55] = '\0';
  acStack_79[0x56] = '\0';
  acStack_79[0x57] = '\0';
  acStack_79[0x58] = '\0';
  acStack_79[0x59] = '\0';
  acStack_79[0x5a] = '\0';
  acStack_79[0x5b] = '\0';
  acStack_79[0x5c] = '\0';
  acStack_79[0x5d] = '\0';
  acStack_79[0x5e] = '\0';
  acStack_79[0x5f] = '\0';
  acStack_79[0x60] = '\0';
  acStack_79[0x61] = '\0';
  acStack_79[0x62] = '\0';
  acStack_79[99] = '\0';
  acStack_79[100] = '\0';
  __s = acStack_79 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68_goodB2GData = __s;
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_goodB2GSink();
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




void CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_goodG2BSink(void)

{
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,CWE134_Uncontrolled_Format_String__char_console_snprintf_68_goodG2BData);
  printLine(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good8(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void CWE134_Uncontrolled_Format_String__char_console_snprintf_68_bad(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack_79 [105];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_79[1] = '\0';
  acStack_79[2] = '\0';
  acStack_79[3] = '\0';
  acStack_79[4] = '\0';
  acStack_79[5] = '\0';
  acStack_79[6] = '\0';
  acStack_79[7] = '\0';
  acStack_79[8] = '\0';
  acStack_79[9] = '\0';
  acStack_79[10] = '\0';
  acStack_79[0xb] = '\0';
  acStack_79[0xc] = '\0';
  acStack_79[0xd] = '\0';
  acStack_79[0xe] = '\0';
  acStack_79[0xf] = '\0';
  acStack_79[0x10] = '\0';
  acStack_79[0x11] = '\0';
  acStack_79[0x12] = '\0';
  acStack_79[0x13] = '\0';
  acStack_79[0x14] = '\0';
  acStack_79[0x15] = '\0';
  acStack_79[0x16] = '\0';
  acStack_79[0x17] = '\0';
  acStack_79[0x18] = '\0';
  acStack_79[0x19] = '\0';
  acStack_79[0x1a] = '\0';
  acStack_79[0x1b] = '\0';
  acStack_79[0x1c] = '\0';
  acStack_79[0x1d] = '\0';
  acStack_79[0x1e] = '\0';
  acStack_79[0x1f] = '\0';
  acStack_79[0x20] = '\0';
  acStack_79[0x21] = '\0';
  acStack_79[0x22] = '\0';
  acStack_79[0x23] = '\0';
  acStack_79[0x24] = '\0';
  acStack_79[0x25] = '\0';
  acStack_79[0x26] = '\0';
  acStack_79[0x27] = '\0';
  acStack_79[0x28] = '\0';
  acStack_79[0x29] = '\0';
  acStack_79[0x2a] = '\0';
  acStack_79[0x2b] = '\0';
  acStack_79[0x2c] = '\0';
  acStack_79[0x2d] = '\0';
  acStack_79[0x2e] = '\0';
  acStack_79[0x2f] = '\0';
  acStack_79[0x30] = '\0';
  acStack_79[0x31] = '\0';
  acStack_79[0x32] = '\0';
  acStack_79[0x33] = '\0';
  acStack_79[0x34] = '\0';
  acStack_79[0x35] = '\0';
  acStack_79[0x36] = '\0';
  acStack_79[0x37] = '\0';
  acStack_79[0x38] = '\0';
  acStack_79[0x39] = '\0';
  acStack_79[0x3a] = '\0';
  acStack_79[0x3b] = '\0';
  acStack_79[0x3c] = '\0';
  acStack_79[0x3d] = '\0';
  acStack_79[0x3e] = '\0';
  acStack_79[0x3f] = '\0';
  acStack_79[0x40] = '\0';
  acStack_79[0x41] = '\0';
  acStack_79[0x42] = '\0';
  acStack_79[0x43] = '\0';
  acStack_79[0x44] = '\0';
  acStack_79[0x45] = '\0';
  acStack_79[0x46] = '\0';
  acStack_79[0x47] = '\0';
  acStack_79[0x48] = '\0';
  acStack_79[0x49] = '\0';
  acStack_79[0x4a] = '\0';
  acStack_79[0x4b] = '\0';
  acStack_79[0x4c] = '\0';
  acStack_79[0x4d] = '\0';
  acStack_79[0x4e] = '\0';
  acStack_79[0x4f] = '\0';
  acStack_79[0x50] = '\0';
  acStack_79[0x51] = '\0';
  acStack_79[0x52] = '\0';
  acStack_79[0x53] = '\0';
  acStack_79[0x54] = '\0';
  acStack_79[0x55] = '\0';
  acStack_79[0x56] = '\0';
  acStack_79[0x57] = '\0';
  acStack_79[0x58] = '\0';
  acStack_79[0x59] = '\0';
  acStack_79[0x5a] = '\0';
  acStack_79[0x5b] = '\0';
  acStack_79[0x5c] = '\0';
  acStack_79[0x5d] = '\0';
  acStack_79[0x5e] = '\0';
  acStack_79[0x5f] = '\0';
  acStack_79[0x60] = '\0';
  acStack_79[0x61] = '\0';
  acStack_79[0x62] = '\0';
  acStack_79[99] = '\0';
  acStack_79[100] = '\0';
  __s = acStack_79 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68_badData = __s;
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_badSink();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void bad5(void)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void bad6(void)

{
  return;
}




void bad9(void)

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




void good2(void)

{
  return;
}




void good7(void)

{
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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good3(void)

{
  return;
}




void CWE134_Uncontrolled_Format_String__char_console_snprintf_68b_goodB2GSink(void)

{
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",CWE134_Uncontrolled_Format_String__char_console_snprintf_68_goodB2GData)
  ;
  printLine(local_78);
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68_good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE134_Uncontrolled_Format_String__char_console_snprintf_68_bad();
  printLine("Finished bad()");
  return 0;
}




void good9(void)

{
  return;
}




void CWE134_Uncontrolled_Format_String__char_console_snprintf_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void good6(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a8,local_1c);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void bad3(void)

{
  return;
}



