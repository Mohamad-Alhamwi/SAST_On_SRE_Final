
void FUN_00102d9c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001018c2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101920(param_1);
  FUN_0010196c(&local_18);
  FUN_00101990(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c87(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101920(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103249(void)

{
  return 1;
}




undefined8 FUN_0010282f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103281(void)

{
  return;
}




void FUN_00102444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102670(param_2);
  FUN_0010261f(&local_21,uVar1);
  FUN_00102682(param_1,&local_21);
  FUN_001023be(&local_21);
  uVar1 = FUN_0010270a(param_2);
  uVar2 = FUN_001026ba(param_2);
                    /* try { // try from 001024d0 to 001024d4 has its CatchHandler @ 001024d7 */
  FUN_00102756(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032ce(void)

{
  return;
}




void FUN_00101773(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018c2(param_1);
  FUN_0010169d(*puVar1,*puVar1);
  return;
}




undefined8 * FUN_00102a26(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102ef8(undefined4 param_1)

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




void FUN_00102c10(long param_1)

{
  FUN_00102cde(param_1 + 0x10);
  return;
}




void FUN_00102b00(undefined8 param_1)

{
  FUN_00102c59(param_1,1);
  return;
}




undefined8 FUN_00102d4c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e22(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102f52(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103580(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001032ef(void)

{
  return;
}




void FUN_00102312(undefined8 param_1)

{
  FUN_001023be(param_1);
  return;
}




void FUN_00102acd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c32(param_1,param_2,param_3);
  return;
}




void FUN_001032b8(void)

{
  return;
}




void FUN_00102fd3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102e4c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103305(void)

{
  return;
}




void FUN_00102c32(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102cde(undefined8 param_1)

{
  FUN_00102d4c(param_1);
  return;
}




void FUN_00103347(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001032a2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_001027d6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aba(param_1,param_2);
  return;
}




void FUN_00101a22(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102352(local_d8);
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
  local_f0 = local_88;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101b65 to 00101cc8 has its CatchHandler @ 00101d20 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  FUN_0010240a(local_d8,&local_f0);
  FUN_0010240a(local_d8,&local_f0);
  FUN_0010240a(local_d8,&local_f0);
  FUN_00102444(local_b8,local_d8);
                    /* try { // try from 00101cd3 to 00101cd7 has its CatchHandler @ 00101d08 */
  FUN_0010165f(local_b8);
  FUN_00102372(local_b8);
  FUN_00102372(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102392(undefined8 param_1)

{
  FUN_00102510(param_1);
  FUN_001022bc(param_1);
  return;
}




undefined8 FUN_00102670(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d76(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001027c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103542(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102332(undefined8 param_1)

{
  FUN_00102392(param_1);
  return;
}




undefined8 FUN_00102a00(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106eb8)();
  return;
}




void FUN_00102b5e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102acd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00103006(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




bool FUN_0010344b(pthread_t *param_1)

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




void FUN_001017b1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bfc(void)

{
  return;
}




void FUN_00103561(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102e77(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102964(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bfc(param_1,param_2);
  return;
}




void FUN_00101d50(void)

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
  FUN_00102352(local_c8);
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
                    /* try { // try from 00101e26 to 00101e75 has its CatchHandler @ 00101ecd */
  FUN_0010240a(local_c8,&local_d0);
  FUN_0010240a(local_c8,&local_d0);
  FUN_0010240a(local_c8,&local_d0);
  FUN_00102444(local_a8,local_c8);
                    /* try { // try from 00101e80 to 00101e84 has its CatchHandler @ 00101eb5 */
  FUN_00101773(local_a8);
  FUN_00102372(local_a8);
  FUN_00102372(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010240a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101920(param_1);
  FUN_001025be(param_1,uVar1,param_2);
  return;
}




void FUN_00102c59(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cfc(param_1,param_2,0);
  return;
}




undefined8 FUN_00101a10(undefined8 param_1)

{
  return param_1;
}




void FUN_001022bc(undefined8 param_1)

{
  FUN_001022dc(param_1);
  return;
}




void FUN_001029a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010298e(param_2);
  FUN_00102964(param_1,uVar1);
  FUN_001022bc(param_1);
  return;
}




long * FUN_0010196c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001023de(undefined8 param_1)

{
  FUN_00102540(param_1);
  FUN_00102312(param_1);
  return;
}




void FUN_001032e4(void)

{
  return;
}




void FUN_001019f2(undefined8 param_1)

{
  FUN_00101a10(param_1);
  return;
}




undefined8 FUN_001022a5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102510(undefined8 param_1)

{
  FUN_001027b4(param_1);
  return;
}




undefined8 FUN_0010298e(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014d0();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_00102a4a(undefined8 *param_1)

{
  FUN_00102c10(*param_1);
  return;
}




void FUN_00102372(undefined8 param_1)

{
  FUN_001023de(param_1);
  return;
}




void FUN_0010331b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_00103310(void)

{
  return;
}




void FUN_001019d0(long param_1)

{
  FUN_001019f2(param_1 + 0x10);
  return;
}




void FUN_00101efd(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined local_b8 [32];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102352(local_d8);
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
  local_f0 = local_88;
  local_e8 = strlen(local_f0);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102040 to 001021a3 has its CatchHandler @ 001021fb */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f0 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f0[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f0,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f0,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  FUN_0010240a(local_d8,&local_f0);
  FUN_0010240a(local_d8,&local_f0);
  FUN_0010240a(local_d8,&local_f0);
  FUN_00102444(local_b8,local_d8);
                    /* try { // try from 001021ae to 001021b2 has its CatchHandler @ 001021e3 */
  FUN_00101884(local_b8);
  FUN_00102372(local_b8);
  FUN_00102372(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102bda(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_0010270a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010333c(void)

{
  return;
}




undefined8 FUN_001026ba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102df6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001034c9(undefined8 *param_1)

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




undefined8 FUN_00102d5e(void)

{
  return 0x555555555555555;
}




void FUN_00102dce(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001035b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001027b4(void)

{
  return;
}




void FUN_001019b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101990(undefined8 *param_1)

{
  FUN_001019d0(*param_1);
  return;
}




void FUN_00102b9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010282f(param_3);
  FUN_00102c9a(param_1,param_2,uVar1);
  return;
}




void FUN_00102ecd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102aba(void)

{
  return;
}




void FUN_00102800(undefined8 param_1,undefined8 param_2)

{
  FUN_00102acd(param_1,param_2,1);
  return;
}




void FUN_00103620(void)

{
  return;
}




void FUN_001022dc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_0010337e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103347,local_18);
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




void FUN_00102ea2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001023be(undefined8 param_1)

{
  FUN_00102530(param_1);
  return;
}




void FUN_0010165f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018c2(param_1);
  FUN_00101589(*puVar1,*puVar1);
  return;
}




ulong FUN_0010316a(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010222b(void)

{
  FUN_00101d50();
  FUN_00101efd();
  return;
}




void FUN_00101884(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001018c2(param_1);
  FUN_001017b1(*puVar1,*puVar1);
  return;
}




void FUN_00102352(undefined8 param_1)

{
  FUN_00102332(param_1);
  return;
}




void FUN_00103331(void)

{
  return;
}




void FUN_00102a6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010282f(param_2);
  uVar2 = FUN_00101920(param_1);
  FUN_001025be(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102936(undefined8 param_1,undefined8 param_2)

{
  FUN_00102964(param_1,param_2);
  return param_1;
}




void FUN_00102f7a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c87(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001032d9(void)

{
  return;
}




void FUN_001032fa(void)

{
  return;
}




void FUN_00103326(void)

{
  return;
}




undefined8 FUN_00102240(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102d76("Calling good()...");
  FUN_0010222b();
  FUN_00102d76("Finished good()");
  FUN_00102d76("Calling bad()...");
  FUN_00101a22();
  FUN_00102d76("Finished bad()");
  return 0;
}




undefined8 FUN_00103258(void)

{
  return 0;
}




undefined8 FUN_0010261f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102936(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102842(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102b00(param_1);
  uVar2 = FUN_001027c4(param_1);
  FUN_00102b24(local_38,uVar2,uVar1);
  uVar3 = FUN_0010282f(param_2);
  uVar4 = FUN_001019d0(uVar1);
  FUN_00102b9d(uVar2,uVar4,uVar3);
  FUN_00102bda(local_38,0);
  FUN_00102b5e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001034a6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102682(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010298e(param_2);
  FUN_001029a0(param_1,uVar1);
  return;
}




void FUN_00102540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001019d0(local_20);
    uVar3 = FUN_001027c4(param_1);
    FUN_001027d6(uVar3,uVar2);
    FUN_00102800(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010169d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032ad(void)

{
  return;
}




void FUN_00102c9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010282f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001022a5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001025be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010282f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102842(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010290c(param_1,1);
  return;
}




void FUN_00101589(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102756(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102a00(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102a4a(&local_18);
    FUN_00102a6c(local_10,uVar2);
    FUN_00102a26(&local_18);
  }
  return;
}




void FUN_00103297(void)

{
  return;
}




void FUN_0010290c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102cfc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d5e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102fa5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102530(void)

{
  return;
}




ulong FUN_00103066(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010328c(void)

{
  return;
}




int FUN_00103267(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001032c3(void)

{
  return;
}




void FUN_001029e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



