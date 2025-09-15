
void FUN_00102800(void)

{
  return;
}




void FUN_00101f78(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101ffe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010245d(void)

{
  return;
}




void FUN_001024e1(void)

{
  return;
}




void FUN_001024f7(void)

{
  return;
}




void FUN_00102156(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010250d(void)

{
  return;
}




ulong FUN_00102346(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024c0(void)

{
  return;
}




undefined8 FUN_00101409(void)

{
  return 1;
}




void FUN_001020a9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101427(void)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char acStack_e9 [113];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_e9[1] = '\0';
  acStack_e9[2] = '\0';
  acStack_e9[3] = '\0';
  acStack_e9[4] = '\0';
  acStack_e9[5] = '\0';
  acStack_e9[6] = '\0';
  acStack_e9[7] = '\0';
  acStack_e9[8] = '\0';
  acStack_e9[9] = '\0';
  acStack_e9[10] = '\0';
  acStack_e9[0xb] = '\0';
  acStack_e9[0xc] = '\0';
  acStack_e9[0xd] = '\0';
  acStack_e9[0xe] = '\0';
  acStack_e9[0xf] = '\0';
  acStack_e9[0x10] = '\0';
  acStack_e9[0x11] = '\0';
  acStack_e9[0x12] = '\0';
  acStack_e9[0x13] = '\0';
  acStack_e9[0x14] = '\0';
  acStack_e9[0x15] = '\0';
  acStack_e9[0x16] = '\0';
  acStack_e9[0x17] = '\0';
  acStack_e9[0x18] = '\0';
  acStack_e9[0x19] = '\0';
  acStack_e9[0x1a] = '\0';
  acStack_e9[0x1b] = '\0';
  acStack_e9[0x1c] = '\0';
  acStack_e9[0x1d] = '\0';
  acStack_e9[0x1e] = '\0';
  acStack_e9[0x1f] = '\0';
  acStack_e9[0x20] = '\0';
  acStack_e9[0x21] = '\0';
  acStack_e9[0x22] = '\0';
  acStack_e9[0x23] = '\0';
  acStack_e9[0x24] = '\0';
  acStack_e9[0x25] = '\0';
  acStack_e9[0x26] = '\0';
  acStack_e9[0x27] = '\0';
  acStack_e9[0x28] = '\0';
  acStack_e9[0x29] = '\0';
  acStack_e9[0x2a] = '\0';
  acStack_e9[0x2b] = '\0';
  acStack_e9[0x2c] = '\0';
  acStack_e9[0x2d] = '\0';
  acStack_e9[0x2e] = '\0';
  acStack_e9[0x2f] = '\0';
  acStack_e9[0x30] = '\0';
  acStack_e9[0x31] = '\0';
  acStack_e9[0x32] = '\0';
  acStack_e9[0x33] = '\0';
  acStack_e9[0x34] = '\0';
  acStack_e9[0x35] = '\0';
  acStack_e9[0x36] = '\0';
  acStack_e9[0x37] = '\0';
  acStack_e9[0x38] = '\0';
  acStack_e9[0x39] = '\0';
  acStack_e9[0x3a] = '\0';
  acStack_e9[0x3b] = '\0';
  acStack_e9[0x3c] = '\0';
  acStack_e9[0x3d] = '\0';
  acStack_e9[0x3e] = '\0';
  acStack_e9[0x3f] = '\0';
  acStack_e9[0x40] = '\0';
  acStack_e9[0x41] = '\0';
  acStack_e9[0x42] = '\0';
  acStack_e9[0x43] = '\0';
  acStack_e9[0x44] = '\0';
  acStack_e9[0x45] = '\0';
  acStack_e9[0x46] = '\0';
  acStack_e9[0x47] = '\0';
  acStack_e9[0x48] = '\0';
  acStack_e9[0x49] = '\0';
  acStack_e9[0x4a] = '\0';
  acStack_e9[0x4b] = '\0';
  acStack_e9[0x4c] = '\0';
  acStack_e9[0x4d] = '\0';
  acStack_e9[0x4e] = '\0';
  acStack_e9[0x4f] = '\0';
  acStack_e9[0x50] = '\0';
  acStack_e9[0x51] = '\0';
  acStack_e9[0x52] = '\0';
  acStack_e9[0x53] = '\0';
  acStack_e9[0x54] = '\0';
  acStack_e9[0x55] = '\0';
  acStack_e9[0x56] = '\0';
  acStack_e9[0x57] = '\0';
  acStack_e9[0x58] = '\0';
  acStack_e9[0x59] = '\0';
  acStack_e9[0x5a] = '\0';
  acStack_e9[0x5b] = '\0';
  acStack_e9[0x5c] = '\0';
  acStack_e9[0x5d] = '\0';
  acStack_e9[0x5e] = '\0';
  acStack_e9[0x5f] = '\0';
  acStack_e9[0x60] = '\0';
  acStack_e9[0x61] = '\0';
  acStack_e9[0x62] = '\0';
  acStack_e9[99] = '\0';
  acStack_e9[100] = '\0';
  __s = acStack_e9 + 1;
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    sVar2 = strlen(__s);
    if (1 < 100 - sVar2) {
      pcVar3 = fgets(__s + sVar2,100 - (int)sVar2,stdin);
      if (pcVar3 == (char *)0x0) {
        FUN_00101f52("fgets() failed");
        __s[sVar2] = '\0';
      }
      else {
        sVar2 = strlen(__s);
        if ((sVar2 != 0) && (__s[sVar2 - 1] == '\n')) {
          __s[sVar2 - 1] = '\0';
        }
      }
    }
  }
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
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
    snprintf(local_78,99,__s);
    FUN_00101f52(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102242(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102523(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102028(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_0010207e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102468(void)

{
  return;
}




void FUN_00102494(void)

{
  return;
}




undefined8 FUN_00102425(void)

{
  return 1;
}




void FUN_001021af(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00102443(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101685(void)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char acStack_e9 [113];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_e9[1] = '\0';
  acStack_e9[2] = '\0';
  acStack_e9[3] = '\0';
  acStack_e9[4] = '\0';
  acStack_e9[5] = '\0';
  acStack_e9[6] = '\0';
  acStack_e9[7] = '\0';
  acStack_e9[8] = '\0';
  acStack_e9[9] = '\0';
  acStack_e9[10] = '\0';
  acStack_e9[0xb] = '\0';
  acStack_e9[0xc] = '\0';
  acStack_e9[0xd] = '\0';
  acStack_e9[0xe] = '\0';
  acStack_e9[0xf] = '\0';
  acStack_e9[0x10] = '\0';
  acStack_e9[0x11] = '\0';
  acStack_e9[0x12] = '\0';
  acStack_e9[0x13] = '\0';
  acStack_e9[0x14] = '\0';
  acStack_e9[0x15] = '\0';
  acStack_e9[0x16] = '\0';
  acStack_e9[0x17] = '\0';
  acStack_e9[0x18] = '\0';
  acStack_e9[0x19] = '\0';
  acStack_e9[0x1a] = '\0';
  acStack_e9[0x1b] = '\0';
  acStack_e9[0x1c] = '\0';
  acStack_e9[0x1d] = '\0';
  acStack_e9[0x1e] = '\0';
  acStack_e9[0x1f] = '\0';
  acStack_e9[0x20] = '\0';
  acStack_e9[0x21] = '\0';
  acStack_e9[0x22] = '\0';
  acStack_e9[0x23] = '\0';
  acStack_e9[0x24] = '\0';
  acStack_e9[0x25] = '\0';
  acStack_e9[0x26] = '\0';
  acStack_e9[0x27] = '\0';
  acStack_e9[0x28] = '\0';
  acStack_e9[0x29] = '\0';
  acStack_e9[0x2a] = '\0';
  acStack_e9[0x2b] = '\0';
  acStack_e9[0x2c] = '\0';
  acStack_e9[0x2d] = '\0';
  acStack_e9[0x2e] = '\0';
  acStack_e9[0x2f] = '\0';
  acStack_e9[0x30] = '\0';
  acStack_e9[0x31] = '\0';
  acStack_e9[0x32] = '\0';
  acStack_e9[0x33] = '\0';
  acStack_e9[0x34] = '\0';
  acStack_e9[0x35] = '\0';
  acStack_e9[0x36] = '\0';
  acStack_e9[0x37] = '\0';
  acStack_e9[0x38] = '\0';
  acStack_e9[0x39] = '\0';
  acStack_e9[0x3a] = '\0';
  acStack_e9[0x3b] = '\0';
  acStack_e9[0x3c] = '\0';
  acStack_e9[0x3d] = '\0';
  acStack_e9[0x3e] = '\0';
  acStack_e9[0x3f] = '\0';
  acStack_e9[0x40] = '\0';
  acStack_e9[0x41] = '\0';
  acStack_e9[0x42] = '\0';
  acStack_e9[0x43] = '\0';
  acStack_e9[0x44] = '\0';
  acStack_e9[0x45] = '\0';
  acStack_e9[0x46] = '\0';
  acStack_e9[0x47] = '\0';
  acStack_e9[0x48] = '\0';
  acStack_e9[0x49] = '\0';
  acStack_e9[0x4a] = '\0';
  acStack_e9[0x4b] = '\0';
  acStack_e9[0x4c] = '\0';
  acStack_e9[0x4d] = '\0';
  acStack_e9[0x4e] = '\0';
  acStack_e9[0x4f] = '\0';
  acStack_e9[0x50] = '\0';
  acStack_e9[0x51] = '\0';
  acStack_e9[0x52] = '\0';
  acStack_e9[0x53] = '\0';
  acStack_e9[0x54] = '\0';
  acStack_e9[0x55] = '\0';
  acStack_e9[0x56] = '\0';
  acStack_e9[0x57] = '\0';
  acStack_e9[0x58] = '\0';
  acStack_e9[0x59] = '\0';
  acStack_e9[0x5a] = '\0';
  acStack_e9[0x5b] = '\0';
  acStack_e9[0x5c] = '\0';
  acStack_e9[0x5d] = '\0';
  acStack_e9[0x5e] = '\0';
  acStack_e9[0x5f] = '\0';
  acStack_e9[0x60] = '\0';
  acStack_e9[0x61] = '\0';
  acStack_e9[0x62] = '\0';
  acStack_e9[99] = '\0';
  acStack_e9[100] = '\0';
  __s = acStack_e9 + 1;
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    sVar2 = strlen(__s);
    if (1 < 100 - sVar2) {
      pcVar3 = fgets(__s + sVar2,100 - (int)sVar2,stdin);
      if (pcVar3 == (char *)0x0) {
        FUN_00101f52("fgets() failed");
        __s[sVar2] = '\0';
      }
      else {
        sVar2 = strlen(__s);
        if ((sVar2 != 0) && (__s[sVar2 - 1] == '\n')) {
          __s[sVar2 - 1] = '\0';
        }
      }
    }
  }
  iVar1 = FUN_00101418();
  if (iVar1 == 0) {
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
    snprintf(local_78,99,"%s",__s);
    FUN_00101f52(local_78);
  }
  else {
    FUN_00101f52("Benign, fixed string");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




undefined8 FUN_001026a5(undefined8 *param_1)

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




void FUN_001024aa(void)

{
  return;
}




undefined8 FUN_0010255a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102523,local_18);
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




void FUN_00102518(void)

{
  return;
}




void FUN_00102053(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b62(void)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_e8 [112];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_e8[0x30] = '\0';
  local_e8[0x31] = '\0';
  local_e8[0x32] = '\0';
  local_e8[0x33] = '\0';
  local_e8[0x34] = '\0';
  local_e8[0x35] = '\0';
  local_e8[0x36] = '\0';
  local_e8[0x37] = '\0';
  local_e8[0x38] = '\0';
  local_e8[0x39] = '\0';
  local_e8[0x3a] = '\0';
  local_e8[0x3b] = '\0';
  local_e8[0x3c] = '\0';
  local_e8[0x3d] = '\0';
  local_e8[0x3e] = '\0';
  local_e8[0x3f] = '\0';
  local_e8[0x40] = '\0';
  local_e8[0x41] = '\0';
  local_e8[0x42] = '\0';
  local_e8[0x43] = '\0';
  local_e8[0x44] = '\0';
  local_e8[0x45] = '\0';
  local_e8[0x46] = '\0';
  local_e8[0x47] = '\0';
  local_e8[0x48] = '\0';
  local_e8[0x49] = '\0';
  local_e8[0x4a] = '\0';
  local_e8[0x4b] = '\0';
  local_e8[0x4c] = '\0';
  local_e8[0x4d] = '\0';
  local_e8[0x4e] = '\0';
  local_e8[0x4f] = '\0';
  local_e8[0x50] = '\0';
  local_e8[0x51] = '\0';
  local_e8[0x52] = '\0';
  local_e8[0x53] = '\0';
  local_e8[0x54] = '\0';
  local_e8[0x55] = '\0';
  local_e8[0x56] = '\0';
  local_e8[0x57] = '\0';
  local_e8[0x58] = '\0';
  local_e8[0x59] = '\0';
  local_e8[0x5a] = '\0';
  local_e8[0x5b] = '\0';
  local_e8[0x5c] = '\0';
  local_e8[0x5d] = '\0';
  local_e8[0x5e] = '\0';
  local_e8[0x5f] = '\0';
  local_e8[0x60] = '\0';
  local_e8[0x61] = '\0';
  local_e8[0x62] = '\0';
  local_e8[99] = '\0';
  iVar1 = FUN_00101418();
  if (iVar1 == 0) {
    builtin_strncpy(local_e8,"fixedstringtest",0x10);
  }
  else {
    FUN_00101f52("Benign, fixed string");
  }
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
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
    snprintf(local_78,99,local_e8);
    FUN_00101f52(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102502(void)

{
  return;
}




undefined8 FUN_00101ee3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101f52("Calling good()...");
  FUN_00101eb0();
  FUN_00101f52("Finished good()");
  FUN_00101f52("Calling bad()...");
  FUN_00101427();
  FUN_00101f52("Finished bad()");
  return 0;
}




void FUN_001020d4(undefined4 param_1)

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




void FUN_00101d10(void)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_e8 [112];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_e8[0x30] = '\0';
  local_e8[0x31] = '\0';
  local_e8[0x32] = '\0';
  local_e8[0x33] = '\0';
  local_e8[0x34] = '\0';
  local_e8[0x35] = '\0';
  local_e8[0x36] = '\0';
  local_e8[0x37] = '\0';
  local_e8[0x38] = '\0';
  local_e8[0x39] = '\0';
  local_e8[0x3a] = '\0';
  local_e8[0x3b] = '\0';
  local_e8[0x3c] = '\0';
  local_e8[0x3d] = '\0';
  local_e8[0x3e] = '\0';
  local_e8[0x3f] = '\0';
  local_e8[0x40] = '\0';
  local_e8[0x41] = '\0';
  local_e8[0x42] = '\0';
  local_e8[0x43] = '\0';
  local_e8[0x44] = '\0';
  local_e8[0x45] = '\0';
  local_e8[0x46] = '\0';
  local_e8[0x47] = '\0';
  local_e8[0x48] = '\0';
  local_e8[0x49] = '\0';
  local_e8[0x4a] = '\0';
  local_e8[0x4b] = '\0';
  local_e8[0x4c] = '\0';
  local_e8[0x4d] = '\0';
  local_e8[0x4e] = '\0';
  local_e8[0x4f] = '\0';
  local_e8[0x50] = '\0';
  local_e8[0x51] = '\0';
  local_e8[0x52] = '\0';
  local_e8[0x53] = '\0';
  local_e8[0x54] = '\0';
  local_e8[0x55] = '\0';
  local_e8[0x56] = '\0';
  local_e8[0x57] = '\0';
  local_e8[0x58] = '\0';
  local_e8[0x59] = '\0';
  local_e8[0x5a] = '\0';
  local_e8[0x5b] = '\0';
  local_e8[0x5c] = '\0';
  local_e8[0x5d] = '\0';
  local_e8[0x5e] = '\0';
  local_e8[0x5f] = '\0';
  local_e8[0x60] = '\0';
  local_e8[0x61] = '\0';
  local_e8[0x62] = '\0';
  local_e8[99] = '\0';
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    builtin_strncpy(local_e8,"fixedstringtest",0x10);
  }
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
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
    snprintf(local_78,99,local_e8);
    FUN_00101f52(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024cb(void)

{
  return;
}




undefined8 FUN_00102682(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_001024ec(void)

{
  return;
}




void FUN_0010275c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102181(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010249f(void)

{
  return;
}




void FUN_00102489(void)

{
  return;
}




void FUN_001024d6(void)

{
  return;
}




void FUN_00101fd2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101eb0(void)

{
  FUN_00101685();
  FUN_001018fa();
  FUN_00101b62();
  FUN_00101d10();
  return;
}




void FUN_001018fa(void)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char acStack_e9 [113];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_e9[1] = '\0';
  acStack_e9[2] = '\0';
  acStack_e9[3] = '\0';
  acStack_e9[4] = '\0';
  acStack_e9[5] = '\0';
  acStack_e9[6] = '\0';
  acStack_e9[7] = '\0';
  acStack_e9[8] = '\0';
  acStack_e9[9] = '\0';
  acStack_e9[10] = '\0';
  acStack_e9[0xb] = '\0';
  acStack_e9[0xc] = '\0';
  acStack_e9[0xd] = '\0';
  acStack_e9[0xe] = '\0';
  acStack_e9[0xf] = '\0';
  acStack_e9[0x10] = '\0';
  acStack_e9[0x11] = '\0';
  acStack_e9[0x12] = '\0';
  acStack_e9[0x13] = '\0';
  acStack_e9[0x14] = '\0';
  acStack_e9[0x15] = '\0';
  acStack_e9[0x16] = '\0';
  acStack_e9[0x17] = '\0';
  acStack_e9[0x18] = '\0';
  acStack_e9[0x19] = '\0';
  acStack_e9[0x1a] = '\0';
  acStack_e9[0x1b] = '\0';
  acStack_e9[0x1c] = '\0';
  acStack_e9[0x1d] = '\0';
  acStack_e9[0x1e] = '\0';
  acStack_e9[0x1f] = '\0';
  acStack_e9[0x20] = '\0';
  acStack_e9[0x21] = '\0';
  acStack_e9[0x22] = '\0';
  acStack_e9[0x23] = '\0';
  acStack_e9[0x24] = '\0';
  acStack_e9[0x25] = '\0';
  acStack_e9[0x26] = '\0';
  acStack_e9[0x27] = '\0';
  acStack_e9[0x28] = '\0';
  acStack_e9[0x29] = '\0';
  acStack_e9[0x2a] = '\0';
  acStack_e9[0x2b] = '\0';
  acStack_e9[0x2c] = '\0';
  acStack_e9[0x2d] = '\0';
  acStack_e9[0x2e] = '\0';
  acStack_e9[0x2f] = '\0';
  acStack_e9[0x30] = '\0';
  acStack_e9[0x31] = '\0';
  acStack_e9[0x32] = '\0';
  acStack_e9[0x33] = '\0';
  acStack_e9[0x34] = '\0';
  acStack_e9[0x35] = '\0';
  acStack_e9[0x36] = '\0';
  acStack_e9[0x37] = '\0';
  acStack_e9[0x38] = '\0';
  acStack_e9[0x39] = '\0';
  acStack_e9[0x3a] = '\0';
  acStack_e9[0x3b] = '\0';
  acStack_e9[0x3c] = '\0';
  acStack_e9[0x3d] = '\0';
  acStack_e9[0x3e] = '\0';
  acStack_e9[0x3f] = '\0';
  acStack_e9[0x40] = '\0';
  acStack_e9[0x41] = '\0';
  acStack_e9[0x42] = '\0';
  acStack_e9[0x43] = '\0';
  acStack_e9[0x44] = '\0';
  acStack_e9[0x45] = '\0';
  acStack_e9[0x46] = '\0';
  acStack_e9[0x47] = '\0';
  acStack_e9[0x48] = '\0';
  acStack_e9[0x49] = '\0';
  acStack_e9[0x4a] = '\0';
  acStack_e9[0x4b] = '\0';
  acStack_e9[0x4c] = '\0';
  acStack_e9[0x4d] = '\0';
  acStack_e9[0x4e] = '\0';
  acStack_e9[0x4f] = '\0';
  acStack_e9[0x50] = '\0';
  acStack_e9[0x51] = '\0';
  acStack_e9[0x52] = '\0';
  acStack_e9[0x53] = '\0';
  acStack_e9[0x54] = '\0';
  acStack_e9[0x55] = '\0';
  acStack_e9[0x56] = '\0';
  acStack_e9[0x57] = '\0';
  acStack_e9[0x58] = '\0';
  acStack_e9[0x59] = '\0';
  acStack_e9[0x5a] = '\0';
  acStack_e9[0x5b] = '\0';
  acStack_e9[0x5c] = '\0';
  acStack_e9[0x5d] = '\0';
  acStack_e9[0x5e] = '\0';
  acStack_e9[0x5f] = '\0';
  acStack_e9[0x60] = '\0';
  acStack_e9[0x61] = '\0';
  acStack_e9[0x62] = '\0';
  acStack_e9[99] = '\0';
  acStack_e9[100] = '\0';
  __s = acStack_e9 + 1;
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
    sVar2 = strlen(__s);
    if (1 < 100 - sVar2) {
      pcVar3 = fgets(__s + sVar2,100 - (int)sVar2,stdin);
      if (pcVar3 == (char *)0x0) {
        FUN_00101f52("fgets() failed");
        __s[sVar2] = '\0';
      }
      else {
        sVar2 = strlen(__s);
        if ((sVar2 != 0) && (__s[sVar2 - 1] == '\n')) {
          __s[sVar2 - 1] = '\0';
        }
      }
    }
  }
  iVar1 = FUN_00101409();
  if (iVar1 != 0) {
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
    snprintf(local_78,99,"%s",__s);
    FUN_00101f52(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_00101f52(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010271e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102790(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 FUN_00102434(void)

{
  return 0;
}




void FUN_0010247e(void)

{
  return;
}




void FUN_00102473(void)

{
  return;
}




void FUN_001024b5(void)

{
  return;
}




bool FUN_00102627(pthread_t *param_1)

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




void FUN_001021e2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010212e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010273d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101418(void)

{
  return 0;
}




void FUN_00101faa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}



