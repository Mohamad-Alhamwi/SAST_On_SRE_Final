
void FUN_00102306(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102386(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102786(void)

{
  return;
}




void FUN_0010280a(void)

{
  return;
}




void FUN_00102820(void)

{
  return;
}




void FUN_001024ea(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




undefined8 FUN_00102862(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010282b,local_18);
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




int FUN_0010274b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001027e9(void)

{
  return;
}




void FUN_00101809(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  sockaddr local_f8;
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
  iVar1 = FUN_0010272d();
  if (iVar1 != 0) {
    sVar3 = strlen(local_e8);
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_f8,0,0x10);
      local_f8.sa_family = 2;
      local_f8.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_f8.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_f8,0x10);
      if (iVar2 != -1) {
        sVar4 = recv(iVar1,local_e8 + sVar3,99 - sVar3,0);
        iVar2 = (int)sVar4;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_e8[(long)iVar2 + sVar3] = '\0';
          pcVar5 = strchr(local_e8,0xd);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
          pcVar5 = strchr(local_e8,10);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_0010273c();
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
    snprintf(local_78,99,"%s",local_e8);
    FUN_0010225a(local_78);
  }
  else {
    FUN_0010225a("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010245e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e6a(void)

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
  iVar1 = FUN_0010273c();
  if (iVar1 == 0) {
    builtin_strncpy(local_e8,"fixedstringtest",0x10);
  }
  else {
    FUN_0010225a("Benign, fixed string");
  }
  iVar1 = FUN_0010272d();
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
    FUN_0010225a(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010273c(void)

{
  return 0;
}




undefined8 FUN_0010298a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001023b1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00102436(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102791(void)

{
  return;
}




void FUN_001027bd(void)

{
  return;
}




void FUN_00102765(void)

{
  return;
}




ulong FUN_0010264e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010277b(void)

{
  return;
}




void FUN_00102018(void)

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
  iVar1 = FUN_0010272d();
  if (iVar1 != 0) {
    builtin_strncpy(local_e8,"fixedstringtest",0x10);
  }
  iVar1 = FUN_0010272d();
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
    FUN_0010225a(local_78);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00102a64(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001027d3(void)

{
  return;
}




undefined8 FUN_001029ad(undefined8 *param_1)

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




bool FUN_0010292f(pthread_t *param_1)

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




void FUN_001023dc(undefined4 param_1)

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




undefined8 FUN_001021eb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010225a("Calling good()...");
  FUN_001021b8();
  FUN_0010225a("Finished good()");
  FUN_0010225a("Calling bad()...");
  FUN_001014e9();
  FUN_0010225a("Finished bad()");
  return 0;
}




void FUN_0010282b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001022b2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102489(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010225a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001027f4(void)

{
  return;
}




void FUN_00102a45(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101210(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00102815(void)

{
  return;
}




ulong FUN_0010254a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027c8(void)

{
  return;
}




void FUN_001027b2(void)

{
  return;
}




void FUN_001027ff(void)

{
  return;
}




void FUN_0010235b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102280(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001021b8(void)

{
  FUN_00101809();
  FUN_00101b40();
  FUN_00101e6a();
  FUN_00102018();
  return;
}




void FUN_001014e9(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  sockaddr local_f8;
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
  iVar1 = FUN_0010272d();
  if (iVar1 != 0) {
    sVar3 = strlen(local_e8);
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_f8,0,0x10);
      local_f8.sa_family = 2;
      local_f8.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_f8.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_f8,0x10);
      if (iVar2 != -1) {
        sVar4 = recv(iVar1,local_e8 + sVar3,99 - sVar3,0);
        iVar2 = (int)sVar4;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_e8[(long)iVar2 + sVar3] = '\0';
          pcVar5 = strchr(local_e8,0xd);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
          pcVar5 = strchr(local_e8,10);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_0010272d();
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
    FUN_0010225a(local_78);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001022da(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102770(void)

{
  return;
}




void FUN_001027a7(void)

{
  return;
}




void FUN_0010279c(void)

{
  return;
}




void FUN_001027de(void)

{
  return;
}




void FUN_00102a26(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010272d(void)

{
  return 1;
}




void FUN_001024b7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b00(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101b40(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ssize_t sVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  sockaddr local_f8;
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
  iVar1 = FUN_0010272d();
  if (iVar1 != 0) {
    sVar3 = strlen(local_e8);
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_f8,0,0x10);
      local_f8.sa_family = 2;
      local_f8.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_f8.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_f8,0x10);
      if (iVar2 != -1) {
        sVar4 = recv(iVar1,local_e8 + sVar3,99 - sVar3,0);
        iVar2 = (int)sVar4;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_e8[(long)iVar2 + sVar3] = '\0';
          pcVar5 = strchr(local_e8,0xd);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
          pcVar5 = strchr(local_e8,10);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_0010272d();
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
    snprintf(local_78,99,"%s",local_e8);
    FUN_0010225a(local_78);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102330(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



