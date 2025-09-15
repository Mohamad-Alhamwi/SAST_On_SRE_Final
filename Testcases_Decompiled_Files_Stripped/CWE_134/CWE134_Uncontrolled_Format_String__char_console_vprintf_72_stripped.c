
void FUN_0010170a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010185c(param_1,2);
  FUN_0010163b(*puVar1,*puVar1);
  return;
}




void FUN_00103fdb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




int FUN_001042f0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021a8(undefined8 param_1)

{
  FUN_00102234(param_1);
  return;
}




void FUN_00103094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103550(param_2);
  uVar2 = FUN_00103550(param_1);
  FUN_00103562(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103aea(undefined8 param_1)

{
  return param_1;
}




void FUN_0010236c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00102662(param_1);
  local_18 = FUN_001026b9(&local_38,&local_20);
  local_20 = FUN_00102c1e(local_30);
  uVar1 = FUN_00102c6a(&local_20,local_18);
  FUN_001026fe(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102c1e(local_30);
  FUN_00102c6a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102192(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103d67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d9c(param_1,param_2,param_3);
  return;
}




void FUN_00104383(void)

{
  return;
}




void FUN_00104357(void)

{
  return;
}




void FUN_00102d5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103340(param_1,param_3);
                    /* try { // try from 00102d94 to 00102d98 has its CatchHandler @ 00102d9b */
  FUN_00103376(param_1,param_2);
  return;
}




bool FUN_001044d4(pthread_t *param_1)

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




void FUN_00103e25(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010438e(void)

{
  return;
}




void FUN_00103c5b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103d52(&local_10);
  FUN_00103550(uVar1);
  return;
}




void FUN_00103dff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103f00(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104362(void)

{
  return;
}




undefined8 FUN_001036d9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001043ba(void)

{
  return;
}




undefined8 FUN_001034cf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104003(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104378(void)

{
  return;
}




void FUN_00104320(void)

{
  return;
}




undefined8 FUN_00103c05(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102f34(&local_10);
  return *puVar1;
}




void FUN_00102234(undefined8 param_1)

{
  FUN_001025a4(param_1);
  return;
}




void * FUN_00103d9c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001025b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102eb5(param_1,param_2,param_3);
  }
  return;
}




void FUN_001021c8(undefined8 param_1)

{
  FUN_00102208(param_1);
  return;
}




void FUN_001038fa(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103ad2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102c1e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010262e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103726(void)

{
  return;
}




void FUN_00102f12(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103a85(undefined8 param_1)

{
  FUN_00103ad2(param_1);
  return;
}




void FUN_00103135(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103620(param_1,param_2,param_3);
  return;
}




void FUN_0010402e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102650(undefined8 param_1)

{
  return param_1;
}




long FUN_001039c1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102432(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102d48(param_2);
  FUN_00102cf7(&local_31,uVar1);
  uVar1 = FUN_00102cd0(param_2);
                    /* try { // try from 00102498 to 0010249c has its CatchHandler @ 00102505 */
  FUN_00102d5a(param_1,uVar1,&local_31);
  FUN_00102234(&local_31);
  uVar2 = FUN_001025ee(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102e18(param_2);
  uVar4 = FUN_00102dc0(param_2);
                    /* try { // try from 001024e6 to 001024ea has its CatchHandler @ 00102523 */
  uVar1 = FUN_00102e70(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001040ef(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dfb(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e8(local_c8);
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
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101ef7 to 00102090 has its CatchHandler @ 001020e8 */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103dff("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  FUN_00102432(local_a8,local_c8);
                    /* try { // try from 0010209b to 0010209f has its CatchHandler @ 001020d0 */
  FUN_00101819(local_a8);
  FUN_001022a6(local_a8);
  FUN_001022a6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010316a(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00103656(param_1);
  lVar2 = FUN_00102cd0(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102cd0(local_40);
  local_30 = FUN_00102cd0(local_40);
  plVar3 = (long *)FUN_0010367c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102cd0(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103656(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103656(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102118(void)

{
  FUN_00101b9d();
  FUN_00101dfb();
  return;
}




void FUN_00102e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033d0(param_1,param_2,param_3);
  return;
}




void FUN_00102208(undefined8 param_1)

{
  FUN_00102552(param_1);
  FUN_00102572(param_1);
  return;
}




void FUN_0010408f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001015f8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010185c(param_1,2);
  FUN_00101529(*puVar1,*puVar1);
  return;
}




void FUN_001035e2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010174d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




undefined8 FUN_00102d48(undefined8 param_1)

{
  return param_1;
}




void FUN_001043a4(void)

{
  return;
}




void FUN_001034a5(undefined8 param_1,undefined8 param_2)

{
  FUN_001037ae(param_1,param_2);
  return;
}




void FUN_00103f81(undefined4 param_1)

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




void FUN_00103c81(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035d0(param_3);
  uVar2 = FUN_001035d0(local_28);
  uVar3 = FUN_001035d0(local_20);
  uVar1 = FUN_00103d67(uVar3,uVar2,uVar1);
  FUN_0010384a(&local_30,uVar1);
  return;
}




void FUN_0010405c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001033d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103739(param_1,param_2,param_3);
  return;
}




long FUN_00102ff8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102650(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102650(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010233e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102650(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00104552(undefined8 *param_1)

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




void FUN_00102552(undefined8 param_1)

{
  FUN_00102ea6(param_1);
  return;
}




void FUN_001043c5(void)

{
  return;
}




void FUN_00103a37(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035d0(param_1);
  uVar1 = FUN_00103bba(uVar1,param_2,param_3);
  FUN_0010384a(&local_10,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_00104407(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001043d0,local_18);
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




void FUN_00103340(undefined8 param_1,undefined8 param_2)

{
  FUN_00103316(param_1,param_2);
  FUN_00102572(param_1);
  return;
}




ulong * FUN_00103aa3(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010436d(void)

{
  return;
}




void FUN_00104315(void)

{
  return;
}




void FUN_001021e8(undefined8 param_1)

{
  FUN_001021c8(param_1);
  return;
}




void FUN_00103ed5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103b6a(param_1,param_2,param_3);
  return;
}




void FUN_001046b0(void)

{
  return;
}




void FUN_00103620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103860(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102f34(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010325a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001036ab(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103f56(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102254(long *param_1)

{
  FUN_001025b4(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001021a8(param_1);
  return;
}




long FUN_0010185c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00104640(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101529(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102ee7(undefined8 param_1,undefined8 param_2)

{
  FUN_0010342d(param_1,param_2);
  return;
}




void FUN_00103c26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103cef(param_1,param_2,param_3);
  return;
}




void FUN_001043af(void)

{
  return;
}




long FUN_001026b9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102f34(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102f34(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103e7f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001043d0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102f46(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103456(param_3);
  uVar2 = FUN_00103440(param_1);
  FUN_00103468(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101b9d(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
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
  FUN_001021e8(local_c8);
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
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d0);
                    /* try { // try from 00101cae to 00101d73 has its CatchHandler @ 00101dcb */
  FUN_0010236c(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d0);
  FUN_0010236c(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d0);
  FUN_0010236c(local_c8,local_a8[0],1,&local_d8);
  FUN_00102432(local_a8,local_c8);
                    /* try { // try from 00101d7e to 00101d82 has its CatchHandler @ 00101db3 */
  FUN_0010170a(local_a8);
  FUN_001022a6(local_a8);
  FUN_001022a6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037ae(void)

{
  return;
}




void FUN_00103eab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010434c(void)

{
  return;
}




void FUN_00103316(undefined8 param_1,undefined8 param_2)

{
  FUN_00103726(param_1,param_2);
  return;
}




long FUN_00102cd0(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103456(undefined8 param_1)

{
  return param_1;
}




void FUN_00102572(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103291(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036d9(param_2);
  uVar2 = FUN_001036d9(param_1);
  FUN_0010351b(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_0010212d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103dff("Calling good()...");
  FUN_00102118();
  FUN_00103dff("Finished good()");
  FUN_00103dff("Calling bad()...");
  FUN_00101880();
  FUN_00103dff("Finished bad()");
  return 0;
}




void FUN_00103656(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d48(param_1);
  FUN_00103891(uVar1);
  return;
}




undefined8 FUN_001035d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fa6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103440(param_1);
  FUN_001034a5(*param_1,uVar1);
  return;
}




void * FUN_00103cef(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010303c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034cf(param_2);
  uVar2 = FUN_001034cf(param_1);
  FUN_0010351b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103f2b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010432b(void)

{
  return;
}




undefined8 FUN_001032e9(undefined8 param_1,undefined8 param_2)

{
  FUN_00103316(param_1,param_2);
  return param_1;
}




void FUN_00103b6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103c5b(param_2);
  uVar2 = FUN_00103c5b(param_1);
  FUN_00103c81(uVar2,uVar1,param_3);
  return;
}




void FUN_00103860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a37(param_1,param_2,param_3);
  return;
}




void FUN_00102ea6(void)

{
  return;
}




void FUN_00103940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103aea(param_2);
  uVar2 = FUN_00103aea(param_1);
  FUN_00103afc(uVar2,uVar1,param_3);
  return;
}




void FUN_0010262e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001045ea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103406(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103739(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103940(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c6a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010262e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103ad2(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103562(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035d0(param_3);
  uVar2 = FUN_001035d0(local_28);
  uVar3 = FUN_001035d0(local_20);
  uVar1 = FUN_00103815(uVar3,uVar2,uVar1);
  FUN_0010384a(&local_30,uVar1);
  return;
}




void FUN_00103815(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001039c1(param_1,param_2,param_3);
  return;
}




void FUN_001022a6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ee(param_1);
  FUN_00102600(*param_1,param_1[1],uVar1);
  FUN_00102254(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102e18(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102f12(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001035d0(param_3);
  uVar2 = FUN_00103c05(local_28);
  uVar3 = FUN_00103c05(local_20);
  uVar1 = FUN_00103c26(uVar3,uVar2,uVar1);
  FUN_0010384a(&local_30,uVar1);
  return;
}




void FUN_00102eb5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103406(param_1,param_2,param_3);
  return;
}




void FUN_001025a4(void)

{
  return;
}




undefined8 FUN_00102cf7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032e9(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103e57(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104609(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




ulong * FUN_0010367c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




ulong FUN_001041f3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050c4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103990(param_1,param_2,param_3);
  return;
}




void FUN_0010163b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00104341(void)

{
  return;
}




undefined8 FUN_00103891(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103a85(param_1);
  puVar1 = (undefined8 *)FUN_00103aa3(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 * FUN_00103bba(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00101880(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e8(local_c8);
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
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 0010197c to 00101b15 has its CatchHandler @ 00101b6d */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103dff("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_001022ee(local_c8);
  FUN_0010233e(local_a8,&local_d8);
  FUN_0010236c(local_c8,local_a8[0],1,&local_e0);
  FUN_00102432(local_a8,local_c8);
                    /* try { // try from 00101b20 to 00101b24 has its CatchHandler @ 00101b55 */
  FUN_001015f8(local_a8);
  FUN_001022a6(local_a8);
  FUN_001022a6(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026fe(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010316a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102c1e(local_80);
      local_60 = FUN_00102ff8(&local_88,&local_78);
      local_70 = FUN_0010325a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001025ee(local_80);
                    /* try { // try from 00102a08 to 00102a93 has its CatchHandler @ 00102b4b */
      FUN_00103135(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001025ee(local_80);
      puVar2 = (undefined8 *)FUN_00102650(&local_88);
      local_70 = FUN_00103291(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001025ee(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102650(&local_88);
      local_70 = FUN_00103291(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001025ee(local_80);
      FUN_00102600(*local_80,local_80[1],uVar1);
      FUN_001025b4(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102f46(local_38,param_1,param_4);
                    /* try { // try from 00102788 to 0010295b has its CatchHandler @ 00102b2d */
      local_50 = FUN_00102fda(local_38);
      local_78 = FUN_001022ee(local_80);
      local_48 = FUN_00102ff8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001025ee(local_80);
        FUN_0010303c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102650(&local_88);
        FUN_00103094(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102650(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102650(&local_88);
        FUN_001030e4(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001025ee(local_80);
        lVar4 = FUN_00103135(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001025ee(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102650(&local_88);
        FUN_0010303c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102650(&local_88);
        FUN_001030e4(*puVar2,local_40,local_50);
      }
      FUN_00102fa6(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001045cb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010430a(void)

{
  return;
}




void FUN_001036ab(undefined8 param_1,undefined8 param_2)

{
  FUN_001038fa(param_1,param_2,0);
  return;
}




void FUN_00103468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103456(param_3);
  FUN_0010376a(param_1,param_2,uVar1);
  return;
}




void FUN_00103376(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010325a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103d52(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102662(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102f12(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103440(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102dc0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102f12(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010452f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102600(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ee7(param_1,param_2);
  return;
}




void FUN_00101819(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010185c(param_1,2);
  FUN_0010174d(*puVar1,*puVar1);
  return;
}




void FUN_00104336(void)

{
  return;
}




void FUN_00104399(void)

{
  return;
}




void FUN_001030e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035d0(param_2);
  uVar2 = FUN_001035d0(param_1);
  FUN_001035e2(uVar2,uVar1,param_3);
  return;
}




void FUN_0010376a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103456(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00102192(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010342d(void)

{
  return;
}




undefined8 FUN_00103550(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001042e1(void)

{
  return 0;
}




undefined8 FUN_0010384a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010351b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037e0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001022ee(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010262e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001025ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fda(undefined8 param_1)

{
  FUN_00103440(param_1);
  return;
}




undefined8 FUN_001042d2(void)

{
  return 1;
}



