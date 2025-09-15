
void FUN_00102dd3(void)

{
  return;
}




void FUN_00101df6(undefined8 param_1)

{
  FUN_00101ea2(param_1);
  return;
}




void FUN_00102dde(void)

{
  return;
}




undefined8 FUN_00102103(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010241a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102326(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025e4(param_1);
  uVar2 = FUN_001022a8(param_1);
  FUN_00102608(local_38,uVar2,uVar1);
  uVar3 = FUN_00102313(param_2);
  uVar4 = FUN_00101638(uVar1);
  FUN_00102681(uVar2,uVar4,uVar3);
  FUN_001026be(local_38,0);
  FUN_00102642(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001026f4(long param_1)

{
  FUN_001027c2(param_1 + 0x10);
  return;
}




undefined8 FUN_0010276b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010219e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024c6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026e0(void)

{
  return;
}




void FUN_00102dbd(void)

{
  return;
}




void FUN_00102608(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010276b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001018f6(void)

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
  FUN_00101e36(local_c8);
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
                    /* try { // try from 001019cc to 00101a1b has its CatchHandler @ 00101a73 */
  FUN_00101eee(local_c8,&local_d0);
  FUN_00101eee(local_c8,&local_d0);
  FUN_00101eee(local_c8,&local_d0);
  FUN_00101f28(local_a8,local_c8);
                    /* try { // try from 00101a26 to 00101a2a has its CatchHandler @ 00101a5b */
  FUN_001014c0(local_a8);
  FUN_00101e56(local_a8);
  FUN_00101e56(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d2d(void)

{
  return 1;
}




undefined8 FUN_00102d3c(void)

{
  return 0;
}




int FUN_00102d4b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102014(void)

{
  return;
}




void FUN_00103090(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ec2(undefined8 param_1)

{
  FUN_00102024(param_1);
  FUN_00101df6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001022ba(undefined8 param_1,undefined8 param_2)

{
  FUN_0010259e(param_1,param_2);
  return;
}




void FUN_00101ff4(undefined8 param_1)

{
  FUN_00102298(param_1);
  return;
}




void FUN_00101da0(undefined8 param_1)

{
  FUN_00101dc0(param_1);
  return;
}




undefined8 FUN_00102472(undefined8 param_1)

{
  return param_1;
}




void FUN_0010168a(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e36(local_c8);
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
  local_d8 = local_88;
  local_d0 = strlen(local_d8);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101786 to 0010186e has its CatchHandler @ 001018c6 */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_0010285a("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101f28(local_a8,local_c8);
                    /* try { // try from 00101879 to 0010187d has its CatchHandler @ 001018ae */
  FUN_00101489(local_a8);
  FUN_00101e56(local_a8);
  FUN_00101e56(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aa3(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e36(local_c8);
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
  local_d8 = local_88;
  local_d0 = strlen(local_d8);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101b9f to 00101c87 has its CatchHandler @ 00101cdf */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_0010285a("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101eee(local_c8,&local_d8);
  FUN_00101f28(local_a8,local_c8);
                    /* try { // try from 00101c92 to 00101c96 has its CatchHandler @ 00101cc7 */
  FUN_001014f7(local_a8);
  FUN_00101e56(local_a8);
  FUN_00101e56(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001026be(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102716(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001024c6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010152a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101588(param_1);
  FUN_001015d4(&local_18);
  FUN_001015f8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_001015d4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101d24(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010285a("Calling good()...");
  FUN_00101d0f();
  FUN_0010285a("Finished good()");
  FUN_0010285a("Calling bad()...");
  FUN_0010168a();
  FUN_0010285a("Finished bad()");
  return 0;
}




void FUN_001029b1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d91(void)

{
  return;
}




void FUN_00102e2b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102930(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001024e4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_00102830(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001013d0();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_001027e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102842(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102024(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101638(local_20);
    uVar3 = FUN_001022a8(param_1);
    FUN_001022ba(uVar3,uVar2);
    FUN_001022e4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001029dc(undefined4 param_1)

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




void FUN_00102a5e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102716(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001021ee(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024c6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010259e(void)

{
  return;
}




void FUN_00103100(void)

{
  return;
}




void FUN_00102d7b(void)

{
  return;
}




void FUN_00102d70(void)

{
  return;
}




undefined8 FUN_00101d89(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010285a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102e62(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102e2b,local_18);
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




void FUN_001025e4(undefined8 param_1)

{
  FUN_0010273d(param_1,1);
  return;
}




void FUN_00102298(void)

{
  return;
}




void FUN_001014c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010152a(param_1);
  printf((char *)*puVar1);
  return;
}




void FUN_00101e16(undefined8 param_1)

{
  FUN_00101e76(param_1);
  return;
}




void FUN_00102e20(void)

{
  return;
}




void FUN_00103045(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102de9(void)

{
  return;
}




void FUN_0010165a(undefined8 param_1)

{
  FUN_00101678(param_1);
  return;
}




void FUN_00102642(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001025b1(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102e15(void)

{
  return;
}




undefined8 FUN_00102842(void)

{
  return 0x555555555555555;
}




void FUN_0010223a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001024e4(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010252e(&local_18);
    FUN_00102550(local_10,uVar2);
    FUN_0010250a(&local_18);
  }
  return;
}




void FUN_00102d86(void)

{
  return;
}




void FUN_00103026(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e76(undefined8 param_1)

{
  FUN_00101ff4(param_1);
  FUN_00101da0(param_1);
  return;
}




undefined8 FUN_001022a8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d0f(void)

{
  FUN_001018f6();
  FUN_00101aa3();
  return;
}




void FUN_00102da7(void)

{
  return;
}




void FUN_00102484(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102472(param_2);
  FUN_00102448(param_1,uVar1);
  FUN_00101da0(param_1);
  return;
}




ulong FUN_00102c4e(long param_1,ulong param_2,long param_3)

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




void FUN_00102d9c(void)

{
  return;
}




void FUN_00102166(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102472(param_2);
  FUN_00102484(param_1,uVar1);
  return;
}




undefined8 FUN_0010241a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102448(param_1,param_2);
  return param_1;
}




void FUN_0010277e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102313(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101d89(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001014f7(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010152a(param_1);
  puts((char *)*puVar1);
  return;
}




void FUN_001027c2(undefined8 param_1)

{
  FUN_00102830(param_1);
  return;
}




void FUN_00101ea2(undefined8 param_1)

{
  FUN_00102014(param_1);
  return;
}




void FUN_00102e0a(void)

{
  return;
}




bool FUN_00102f2f(pthread_t *param_1)

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




undefined8 FUN_00101678(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102313(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010250a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102313(param_2);
  uVar2 = FUN_00101588(param_1);
  FUN_001020a2(param_1,uVar2,uVar1);
  return;
}




void FUN_001022e4(undefined8 param_1,undefined8 param_2)

{
  FUN_001025b1(param_1,param_2,1);
  return;
}




void FUN_001023f0(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102986(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010161a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101dc0(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102681(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102313(param_3);
  FUN_0010277e(param_1,param_2,uVar1);
  return;
}




void FUN_00102ab7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102dff(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef8)();
  return;
}




void FUN_0010295b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102df4(void)

{
  return;
}




void FUN_00101e36(undefined8 param_1)

{
  FUN_00101e16(param_1);
  return;
}




void FUN_001015f8(undefined8 *param_1)

{
  FUN_00101638(*param_1);
  return;
}




void FUN_0010252e(undefined8 *param_1)

{
  FUN_001026f4(*param_1);
  return;
}




void FUN_00103064(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a89(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102906(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a36(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102aea(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102db2(void)

{
  return;
}




undefined8 FUN_00102f8a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102dc8(void)

{
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010152a(param_1);
  printf((char *)*puVar1);
  return;
}




undefined8 FUN_00102154(undefined8 param_1)

{
  return param_1;
}




void FUN_001028b2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00102b4a(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




undefined8 FUN_00101588(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010161a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e56(undefined8 param_1)

{
  FUN_00101ec2(param_1);
  return;
}




void FUN_001020a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102313(param_3);
  p_Var2 = (_List_node_base *)FUN_00102326(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001023f0(param_1,1);
  return;
}




void FUN_0010273d(undefined8 param_1,undefined8 param_2)

{
  FUN_001027e0(param_1,param_2,0);
  return;
}




void FUN_00102d65(void)

{
  return;
}




undefined8 FUN_00102fad(undefined8 *param_1)

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




void FUN_00101638(long param_1)

{
  FUN_0010165a(param_1 + 0x10);
  return;
}




void FUN_00102880(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001028da(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102154(param_2);
  FUN_00102103(&local_21,uVar1);
  FUN_00102166(param_1,&local_21);
  FUN_00101ea2(&local_21);
  uVar1 = FUN_001021ee(param_2);
  uVar2 = FUN_0010219e(param_2);
                    /* try { // try from 00101fb4 to 00101fb8 has its CatchHandler @ 00101fbb */
  FUN_0010223a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101eee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101588(param_1);
  FUN_001020a2(param_1,uVar1,param_2);
  return;
}




void FUN_00102448(undefined8 param_1,undefined8 param_2)

{
  FUN_001026e0(param_1,param_2);
  return;
}



