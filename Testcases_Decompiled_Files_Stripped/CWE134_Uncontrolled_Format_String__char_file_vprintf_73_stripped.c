
void FUN_00102c7c(undefined4 param_1)

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




void FUN_001015b8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010180e(param_1);
  FUN_001014e9(*puVar1,*puVar1);
  return;
}




void FUN_00102cd6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001030c0(void)

{
  return;
}




bool FUN_001031cf(pthread_t *param_1)

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




void FUN_00103094(void)

{
  return;
}




void FUN_001033a0(void)

{
  return;
}




void FUN_0010196e(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d6(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101a48 to 00101b30 has its CatchHandler @ 00101b88 */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e0 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00102afa("fgets() failed");
        local_e0[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  FUN_0010218e(local_c8,&local_e0);
  FUN_0010218e(local_c8,&local_e0);
  FUN_0010218e(local_c8,&local_e0);
  FUN_001021c8(local_a8,local_c8);
                    /* try { // try from 00101b3b to 00101b3f has its CatchHandler @ 00101b70 */
  FUN_001015b8(local_a8);
  FUN_001020f6(local_a8);
  FUN_001020f6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020f6(undefined8 param_1)

{
  FUN_00102162(param_1);
  return;
}




void FUN_00102584(undefined8 param_1,undefined8 param_2)

{
  FUN_00102851(param_1,param_2,1);
  return;
}




void FUN_00102690(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101faf(void)

{
  FUN_00101bb8();
  FUN_00101d65();
  return;
}




void FUN_0010255a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010283e(param_1,param_2);
  return;
}




void FUN_00102c26(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010248e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102766(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a62(undefined8 param_1)

{
  FUN_00102ad0(param_1);
  return;
}




void FUN_00102a80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102ae2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00102ad0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010191c(long param_1)

{
  FUN_0010193e(param_1 + 0x10);
  return;
}




void FUN_0010303c(void)

{
  return;
}




undefined8 FUN_0010186c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018fe(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103304(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102096(undefined8 param_1)

{
  FUN_00102142(param_1);
  return;
}




void FUN_001018fe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010218e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010186c(param_1);
  FUN_00102342(param_1,uVar1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




undefined8 FUN_00102548(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001025b3(undefined8 param_1)

{
  return param_1;
}




void FUN_00102294(undefined8 param_1)

{
  FUN_00102538(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_001028e2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102851(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001032c6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102b7a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102fcd(void)

{
  return 1;
}




void FUN_00103068(void)

{
  return;
}




void FUN_00102851(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001029b6(param_1,param_2,param_3);
  return;
}




void FUN_001022b4(void)

{
  return;
}




void FUN_00102724(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102712(param_2);
  FUN_001026e8(param_1,uVar1);
  FUN_00102040(param_1);
  return;
}




undefined8 FUN_00102712(undefined8 param_1)

{
  return param_1;
}




void FUN_0010193e(undefined8 param_1)

{
  FUN_0010195c(param_1);
  return;
}




void FUN_00102921(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025b3(param_3);
  FUN_00102a1e(param_1,param_2,uVar1);
  return;
}




void FUN_00102980(void)

{
  return;
}




void FUN_00102406(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102712(param_2);
  FUN_00102724(param_1,uVar1);
  return;
}




undefined8 FUN_00101fc4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102afa("Calling good()...");
  FUN_00101faf();
  FUN_00102afa("Finished good()");
  FUN_00102afa("Calling bad()...");
  FUN_0010196e();
  FUN_00102afa("Finished bad()");
  return 0;
}




undefined8 FUN_001023f4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103047(void)

{
  return;
}




void FUN_00102b20(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102afa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_00102784(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102fdc(void)

{
  return 0;
}




void FUN_00103089(void)

{
  return;
}




undefined8 FUN_0010243e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102766(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102040(undefined8 param_1)

{
  FUN_00102060(param_1);
  return;
}




void FUN_001015f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102eee(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103026(void)

{
  return;
}




void FUN_00102cfe(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001024da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102784(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001027ce(&local_18);
    FUN_001027f0(local_10,uVar2);
    FUN_001027aa(&local_18);
  }
  return;
}




void FUN_0010307e(void)

{
  return;
}




ulong FUN_00102dea(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102766(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102029(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102b52(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010301b(void)

{
  return;
}




void FUN_001017cf(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010180e(param_1);
  FUN_00101703(*puVar1,*puVar1);
  return;
}




void FUN_0010309f(void)

{
  return;
}




void FUN_00102060(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102bd0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023f4(param_2);
  FUN_001023a3(&local_21,uVar1);
  FUN_00102406(param_1,&local_21);
  FUN_00102142(&local_21);
  uVar1 = FUN_0010248e(param_2);
  uVar2 = FUN_0010243e(param_2);
                    /* try { // try from 00102254 to 00102258 has its CatchHandler @ 0010225b */
  FUN_001024da(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001025b3(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00102029(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010305d(void)

{
  return;
}




void FUN_00102ba6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d65(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d6(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d8 = strlen(local_e0);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101e3f to 00101f27 has its CatchHandler @ 00101f7f */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e0 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00102afa("fgets() failed");
        local_e0[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  FUN_0010218e(local_c8,&local_e0);
  FUN_0010218e(local_c8,&local_e0);
  FUN_0010218e(local_c8,&local_e0);
  FUN_001021c8(local_a8,local_c8);
                    /* try { // try from 00101f32 to 00101f36 has its CatchHandler @ 00101f67 */
  FUN_001017cf(local_a8);
  FUN_001020f6(local_a8);
  FUN_001020f6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102142(undefined8 param_1)

{
  FUN_001022b4(param_1);
  return;
}




undefined8 FUN_001026ba(undefined8 param_1,undefined8 param_2)

{
  FUN_001026e8(param_1,param_2);
  return param_1;
}




void FUN_001026e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102980(param_1,param_2);
  return;
}




void FUN_0010180e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010186c(param_1);
  FUN_001018b8(&local_18);
  FUN_001018dc(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d8a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00102feb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001020d6(undefined8 param_1)

{
  FUN_001020b6(param_1);
  return;
}




void FUN_001022c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010191c(local_20);
    uVar3 = FUN_00102548(param_1);
    FUN_0010255a(uVar3,uVar2);
    FUN_00102584(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001023a3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026ba(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001020b6(undefined8 param_1)

{
  FUN_00102116(param_1);
  return;
}




void FUN_00102116(undefined8 param_1)

{
  FUN_00102294(param_1);
  FUN_00102040(param_1);
  return;
}




void FUN_001028a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a0b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001014e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102538(void)

{
  return;
}




void FUN_001029b6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102d57(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102884(undefined8 param_1)

{
  FUN_001029dd(param_1,1);
  return;
}




void FUN_00102d29(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001016c5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010180e(param_1);
  FUN_001015f6(*puVar1,*puVar1);
  return;
}




void FUN_00102342(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001025b3(param_3);
  p_Var2 = (_List_node_base *)FUN_001025c6(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102690(param_1,1);
  return;
}




void FUN_00103031(void)

{
  return;
}




void FUN_00102994(long param_1)

{
  FUN_00102a62(param_1 + 0x10);
  return;
}




void FUN_0010283e(void)

{
  return;
}




long FUN_0010295e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029dd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a80(param_1,param_2,0);
  return;
}




void FUN_00102bfb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103073(void)

{
  return;
}




void FUN_00103005(void)

{
  return;
}




void FUN_00102c51(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103052(void)

{
  return;
}




void FUN_00101bb8(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
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
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d6(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d0 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
                    /* try { // try from 00101c8e to 00101cdd has its CatchHandler @ 00101d35 */
  FUN_0010218e(local_c8,&local_d0);
  FUN_0010218e(local_c8,&local_d0);
  FUN_0010218e(local_c8,&local_d0);
  FUN_001021c8(local_a8,local_c8);
                    /* try { // try from 00101ce8 to 00101cec has its CatchHandler @ 00101d1d */
  FUN_001016c5(local_a8);
  FUN_001020f6(local_a8);
  FUN_001020f6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027ce(undefined8 *param_1)

{
  FUN_00102994(*param_1);
  return;
}




undefined8 FUN_00102a0b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001025c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102884(param_1);
  uVar2 = FUN_00102548(param_1);
  FUN_001028a8(local_38,uVar2,uVar1);
  uVar3 = FUN_001025b3(param_2);
  uVar4 = FUN_0010191c(uVar1);
  FUN_00102921(uVar2,uVar4,uVar3);
  FUN_0010295e(local_38,0);
  FUN_001028e2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_0010195c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101703(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf("%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ae2(void)

{
  return 0x555555555555555;
}




void FUN_00103010(void)

{
  return;
}




void FUN_001030cb(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001030b5(void)

{
  return;
}




void FUN_001032e5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_001027aa(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_0010324d(undefined8 *param_1)

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




void FUN_001030aa(void)

{
  return;
}




void FUN_001027f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001025b3(param_2);
  uVar2 = FUN_0010186c(param_1);
  FUN_00102342(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_0010322a(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103102(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001030cb,local_18);
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




void FUN_001018dc(undefined8 *param_1)

{
  FUN_0010191c(*param_1);
  return;
}




void FUN_00103330(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long * FUN_001018b8(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102162(undefined8 param_1)

{
  FUN_001022c4(param_1);
  FUN_00102096(param_1);
  return;
}



