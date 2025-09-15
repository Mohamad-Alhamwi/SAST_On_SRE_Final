
void FUN_00101f11(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fc1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102332(void)

{
  return;
}




void FUN_001023b6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_001024ba(pthread_t *param_1)

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




undefined8 FUN_001022b8(void)

{
  return 1;
}




void FUN_00101220(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 FUN_00102538(undefined8 *param_1)

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




void FUN_00102306(void)

{
  return;
}




void FUN_00102395(void)

{
  return;
}




void FUN_00101bd5(void)

{
  long in_FS_OFFSET;
  char local_e8 [112];
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  builtin_strncpy(local_e8,"fixedstringtest",0x10);
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
  FUN_00101de5(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102075(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101d76(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101de5("Calling good()...");
  FUN_00101d57();
  FUN_00101de5("Finished good()");
  FUN_00101de5("Calling bad()...");
  FUN_00101509();
  FUN_00101de5("Finished bad()");
  return 0;
}




void FUN_001022fb(void)

{
  return;
}




void FUN_001025d0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fe9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101220(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00102042(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010233d(void)

{
  return;
}




void FUN_00102369(void)

{
  return;
}




void FUN_00102311(void)

{
  return;
}




int FUN_001022d6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102327(void)

{
  return;
}




void FUN_00101de5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010237f(void)

{
  return;
}




void FUN_001025ef(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001025b1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102014(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e3d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102515(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ebb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001020d5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e65(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001023a0(void)

{
  return;
}




void FUN_00102690(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101509(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_11c;
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
  local_11c = -1;
  sVar2 = strlen(local_e8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_f8,0,0x10);
    local_f8.sa_family = 2;
    local_f8.sa_data[2] = '\0';
    local_f8.sa_data[3] = '\0';
    local_f8.sa_data[4] = '\0';
    local_f8.sa_data[5] = '\0';
    local_f8.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_f8,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_e8 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_e8[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_e8,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_e8,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
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
  FUN_00101de5(local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001023ed(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001023b6,local_18);
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




undefined8 FUN_001022c7(void)

{
  return 0;
}




void FUN_00102374(void)

{
  return;
}




void FUN_0010235e(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_001023ab(void)

{
  return;
}




void FUN_00101f67(undefined4 param_1)

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




void FUN_00101e91(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e0b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010186a(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_11c;
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
  local_11c = -1;
  sVar2 = strlen(local_e8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_f8,0,0x10);
    local_f8.sa_family = 2;
    local_f8.sa_data[2] = '\0';
    local_f8.sa_data[3] = '\0';
    local_f8.sa_data[4] = '\0';
    local_f8.sa_data[5] = '\0';
    local_f8.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_f8,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_e8 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_e8[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_e8,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_e8,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
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
  FUN_00101de5(local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ee6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010231c(void)

{
  return;
}




void FUN_00102353(void)

{
  return;
}




void FUN_00102348(void)

{
  return;
}




void FUN_0010238a(void)

{
  return;
}




void FUN_00102620(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001022f0(void)

{
  return;
}




ulong FUN_001021d9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101d57(void)

{
  FUN_0010186a();
  FUN_00101bd5();
  return;
}




void FUN_00101f3c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



