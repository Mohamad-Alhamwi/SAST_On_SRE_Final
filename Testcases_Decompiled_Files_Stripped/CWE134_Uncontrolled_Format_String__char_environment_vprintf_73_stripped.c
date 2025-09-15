
void FUN_00102c55(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102faa(void)

{
  return;
}




void FUN_00101fc2(undefined8 param_1)

{
  FUN_0010206e(param_1);
  return;
}




void FUN_00102fb5(void)

{
  return;
}




undefined8 FUN_001022cf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025e6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001024f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027b0(param_1);
  uVar2 = FUN_00102474(param_1);
  FUN_001027d4(local_38,uVar2,uVar1);
  uVar3 = FUN_001024df(param_2);
  uVar4 = FUN_001018fc(uVar1);
  FUN_0010284d(uVar2,uVar4,uVar3);
  FUN_0010288a(local_38,0);
  FUN_0010280e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001028c0(long param_1)

{
  FUN_0010298e(param_1 + 0x10);
  return;
}




undefined8 FUN_00102937(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010236a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102692(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028ac(void)

{
  return;
}




void FUN_00102f94(void)

{
  return;
}




void FUN_001027d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102937(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101b3e(void)

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
  FUN_00102002(local_c8);
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
                    /* try { // try from 00101c14 to 00101c63 has its CatchHandler @ 00101cbb */
  FUN_001020ba(local_c8,&local_d0);
  FUN_001020ba(local_c8,&local_d0);
  FUN_001020ba(local_c8,&local_d0);
  FUN_001020f4(local_a8,local_c8);
                    /* try { // try from 00101c6e to 00101c72 has its CatchHandler @ 00101ca3 */
  FUN_001016a5(local_a8);
  FUN_00102022(local_a8);
  FUN_00102022(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102f08(void)

{
  return 0;
}




int FUN_00102f17(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102f31(void)

{
  return;
}




void FUN_001021e0(void)

{
  return;
}




void FUN_001032d0(void)

{
  return;
}




void FUN_0010208e(undefined8 param_1)

{
  FUN_001021f0(param_1);
  FUN_00101fc2(param_1);
  return;
}




void FUN_001014c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102486(undefined8 param_1,undefined8 param_2)

{
  FUN_0010276a(param_1,param_2);
  return;
}




void FUN_001021c0(undefined8 param_1)

{
  FUN_00102464(param_1);
  return;
}




void FUN_00101f6c(undefined8 param_1)

{
  FUN_00101f8c(param_1);
  return;
}




undefined8 FUN_0010263e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010194e(void)

{
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102002(local_c8);
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
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e0 + local_d8,local_d0,99 - local_d8);
  }
                    /* try { // try from 00101a67 to 00101ab6 has its CatchHandler @ 00101b0e */
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020f4(local_a8,local_c8);
                    /* try { // try from 00101ac1 to 00101ac5 has its CatchHandler @ 00101af6 */
  FUN_00101598(local_a8);
  FUN_00102022(local_a8);
  FUN_00102022(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ceb(void)

{
  long in_FS_OFFSET;
  char *local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102002(local_c8);
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
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e0 + local_d8,local_d0,99 - local_d8);
  }
                    /* try { // try from 00101e04 to 00101e53 has its CatchHandler @ 00101eab */
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020ba(local_c8,&local_e0);
  FUN_001020f4(local_a8,local_c8);
                    /* try { // try from 00101e5e to 00101e62 has its CatchHandler @ 00101e93 */
  FUN_001017af(local_a8);
  FUN_00102022(local_a8);
  FUN_00102022(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010288a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001028e2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102692(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001017ee(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010184c(param_1);
  FUN_00101898(&local_18);
  FUN_001018bc(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00101898(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101ef0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102a26("Calling good()...");
  FUN_00101edb();
  FUN_00102a26("Finished good()");
  FUN_00102a26("Calling bad()...");
  FUN_0010194e();
  FUN_00102a26("Finished bad()");
  return 0;
}




void FUN_00102b7d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f68(void)

{
  return;
}




undefined8 FUN_0010302e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ff7,local_18);
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




void FUN_00102afc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001026b0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_001029fc(undefined8 param_1)

{
  return param_1;
}




void FUN_001015d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_001029ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102a0e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001021f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001018fc(local_20);
    uVar3 = FUN_00102474(param_1);
    FUN_00102486(uVar3,uVar2);
    FUN_001024b0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102ba8(undefined4 param_1)

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




void FUN_00102c2a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010277d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001028e2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001023ba(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102692(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010276a(void)

{
  return;
}




void FUN_00102f52(void)

{
  return;
}




void FUN_00102f47(void)

{
  return;
}




undefined8 FUN_00101f55(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a26(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




bool FUN_001030fb(pthread_t *param_1)

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




void FUN_001027b0(undefined8 param_1)

{
  FUN_00102909(param_1,1);
  return;
}




void FUN_00102464(void)

{
  return;
}




void FUN_001016e3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00101fe2(undefined8 param_1)

{
  FUN_00102042(param_1);
  return;
}




void FUN_00102ff7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103230(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102fc0(void)

{
  return;
}




void FUN_0010191e(undefined8 param_1)

{
  FUN_0010193c(param_1);
  return;
}




void FUN_0010280e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010277d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102fec(void)

{
  return;
}




undefined8 FUN_00102a0e(void)

{
  return 0x555555555555555;
}




void FUN_00102406(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001026b0(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001026fa(&local_18);
    FUN_0010271c(local_10,uVar2);
    FUN_001026d6(&local_18);
  }
  return;
}




void FUN_00102f5d(void)

{
  return;
}




void FUN_00103211(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102042(undefined8 param_1)

{
  FUN_001021c0(param_1);
  FUN_00101f6c(param_1);
  return;
}




undefined8 FUN_00102474(undefined8 param_1)

{
  return param_1;
}




void FUN_00101edb(void)

{
  FUN_00101b3e();
  FUN_00101ceb();
  return;
}




void FUN_00102f7e(void)

{
  return;
}




void FUN_00102650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010263e(param_2);
  FUN_00102614(param_1,uVar1);
  FUN_00101f6c(param_1);
  return;
}




undefined8 FUN_00102ef9(void)

{
  return 1;
}




void FUN_00102f73(void)

{
  return;
}




void FUN_00102332(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010263e(param_2);
  FUN_00102650(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 FUN_001025e6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102614(param_1,param_2);
  return param_1;
}




void FUN_0010294a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001024df(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101f55(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001017af(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017ee(param_1);
  FUN_001016e3(*puVar1,*puVar1);
  return;
}




void FUN_0010298e(undefined8 param_1)

{
  FUN_001029fc(param_1);
  return;
}




void FUN_0010206e(undefined8 param_1)

{
  FUN_001021e0(param_1);
  return;
}




void FUN_00102fe1(void)

{
  return;
}




undefined8 FUN_00103156(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010193c(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001024df(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001026d6(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010271c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001024df(param_2);
  uVar2 = FUN_0010184c(param_1);
  FUN_0010226e(param_1,uVar2,uVar1);
  return;
}




void FUN_001024b0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010277d(param_1,param_2,1);
  return;
}




void FUN_001025bc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102b52(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018de(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f8c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010284d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024df(param_3);
  FUN_0010294a(param_1,param_2,uVar1);
  return;
}




void FUN_00102cb6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102fd6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102b27(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fcb(void)

{
  return;
}




void FUN_00102002(undefined8 param_1)

{
  FUN_00101fe2(param_1);
  return;
}




void FUN_001018bc(undefined8 *param_1)

{
  FUN_001018fc(*param_1);
  return;
}




void FUN_001026fa(undefined8 *param_1)

{
  FUN_001028c0(*param_1);
  return;
}




void FUN_00103260(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102c83(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102ad2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c02(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00102d16(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f89(void)

{
  return;
}




undefined8 FUN_00103179(undefined8 *param_1)

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




void FUN_00102f9f(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_001016a5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017ee(param_1);
  FUN_001015d6(*puVar1,*puVar1);
  return;
}




undefined8 FUN_00102320(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a7e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00102e1a(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101598(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017ee(param_1);
  FUN_001014c9(*puVar1,*puVar1);
  return;
}




undefined8 FUN_0010184c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018de(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102022(undefined8 param_1)

{
  FUN_0010208e(param_1);
  return;
}




void FUN_0010226e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001024df(param_3);
  p_Var2 = (_List_node_base *)FUN_001024f2(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001025bc(param_1,1);
  return;
}




void FUN_00102909(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ac(param_1,param_2,0);
  return;
}




void FUN_00102f3c(void)

{
  return;
}




void FUN_001031f2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001018fc(long param_1)

{
  FUN_0010191e(param_1 + 0x10);
  return;
}




void FUN_00102a4c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102aa6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001020f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102320(param_2);
  FUN_001022cf(&local_21,uVar1);
  FUN_00102332(param_1,&local_21);
  FUN_0010206e(&local_21);
  uVar1 = FUN_001023ba(param_2);
  uVar2 = FUN_0010236a(param_2);
                    /* try { // try from 00102180 to 00102184 has its CatchHandler @ 00102187 */
  FUN_00102406(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010184c(param_1);
  FUN_0010226e(param_1,uVar1,param_2);
  return;
}




void FUN_00102614(undefined8 param_1,undefined8 param_2)

{
  FUN_001028ac(param_1,param_2);
  return;
}



