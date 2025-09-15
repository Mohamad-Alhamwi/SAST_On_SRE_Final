
void FUN_00103aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103b99(param_2);
  uVar2 = FUN_00103b99(param_1);
  FUN_00103bbf(uVar2,uVar1,param_3);
  return;
}




void * FUN_00103cda(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010263c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001030a8(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102b5c(local_80);
      local_60 = FUN_00102f36(&local_88,&local_78);
      local_70 = FUN_00103198(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010252c(local_80);
                    /* try { // try from 00102946 to 001029d1 has its CatchHandler @ 00102a89 */
      FUN_00103073(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010252c(local_80);
      puVar2 = (undefined8 *)FUN_0010258e(&local_88);
      local_70 = FUN_001031cf(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_0010252c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010258e(&local_88);
      local_70 = FUN_001031cf(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010252c(local_80);
      FUN_0010253e(*local_80,local_80[1],uVar1);
      FUN_001024f2(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102e84(local_38,param_1,param_4);
                    /* try { // try from 001026c6 to 00102899 has its CatchHandler @ 00102a6b */
      local_50 = FUN_00102f18(local_38);
      local_78 = FUN_0010222c(local_80);
      local_48 = FUN_00102f36(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010252c(local_80);
        FUN_00102f7a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010258e(&local_88);
        FUN_00102fd2(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010258e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010258e(&local_88);
        FUN_00103022(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_0010252c(local_80);
        lVar4 = FUN_00103073(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010252c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010258e(&local_88);
        FUN_00102f7a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010258e(&local_88);
        FUN_00103022(*puVar2,local_40,local_50);
      }
      FUN_00102ee4(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035e9(undefined8 param_1,undefined8 param_2)

{
  FUN_00103838(param_1,param_2,0);
  return;
}




void FUN_00101662(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_0010379e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103975(param_1,param_2,param_3);
  return;
}




void FUN_00103f41(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103e69(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010222c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010256c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104248(void)

{
  return;
}




void FUN_0010387e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103a28(param_2);
  uVar2 = FUN_00103a28(param_1);
  FUN_00103a3a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f6c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103700(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103838(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103a10(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




ulong * FUN_001039e1(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103e94(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103254(undefined8 param_1,undefined8 param_2)

{
  FUN_00103664(param_1,param_2);
  return;
}




ulong FUN_00104131(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f18(undefined8 param_1)

{
  FUN_0010337e(param_1);
  return;
}




undefined8 * FUN_00103af8(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00104303(void)

{
  return;
}




void FUN_001042ab(void)

{
  return;
}




void FUN_00103f19(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103d95(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001036a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103394(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001020d0(8,param_2);
  *puVar2 = uVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_001037cf(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001039c3(param_1);
  puVar1 = (undefined8 *)FUN_001039e1(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001018b6(void)

{
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102126(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e8 + local_d8,local_d0,99 - local_d8);
  }
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
                    /* try { // try from 00101a0a to 00101acf has its CatchHandler @ 00101b27 */
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  FUN_00102370(local_a8,local_c8);
                    /* try { // try from 00101ada to 00101ade has its CatchHandler @ 00101b0f */
  FUN_0010161f(local_a8);
  FUN_001021e4(local_a8);
  FUN_001021e4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103459(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010371e(param_1,param_2,param_3);
  return;
}




void FUN_00102126(undefined8 param_1)

{
  FUN_00102106(param_1);
  return;
}




void FUN_0010327e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103254(param_1,param_2);
  FUN_001024b0(param_1);
  return;
}




void FUN_001024f2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102df3(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010355e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010379e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ba8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010256c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00104412(pthread_t *param_1)

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




undefined8 FUN_00103b43(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102e72(&local_10);
  return *puVar1;
}




undefined8 FUN_0010206b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103d3d("Calling good()...");
  FUN_00102056();
  FUN_00103d3d("Finished good()");
  FUN_00103d3d("Calling bad()...");
  FUN_001018b6();
  FUN_00103d3d("Finished bad()");
  return 0;
}




undefined8 FUN_0010350e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101738(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101892(param_1,2);
  FUN_00101662(*puVar1,*puVar1);
  return;
}




void FUN_00103bbf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010350e(param_3);
  uVar2 = FUN_0010350e(local_28);
  uVar3 = FUN_0010350e(local_20);
  uVar1 = FUN_00103ca5(uVar3,uVar2,uVar1);
  FUN_00103788(&local_30,uVar1);
  return;
}




long FUN_00102c0e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102370(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102c86(param_2);
  FUN_00102c35(&local_31,uVar1);
  uVar1 = FUN_00102c0e(param_2);
                    /* try { // try from 001023d6 to 001023da has its CatchHandler @ 00102443 */
  FUN_00102c98(param_1,uVar1,&local_31);
  FUN_00102172(&local_31);
  uVar2 = FUN_0010252c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102d56(param_2);
  uVar4 = FUN_00102cfe(param_2);
                    /* try { // try from 00102424 to 00102428 has its CatchHandler @ 00102461 */
  uVar1 = FUN_00102dae(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b99(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103c90(&local_10);
  FUN_0010348e(uVar1);
  return;
}




void FUN_00103073(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010355e(param_1,param_2,param_3);
  return;
}




void FUN_00104547(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001021e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010252c(param_1);
  FUN_0010253e(*param_1,param_1[1],uVar1);
  FUN_00102192(param_1);
  return;
}




void FUN_00103fcd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010337e(param_1);
  FUN_001033e3(*param_1,uVar1);
  return;
}




void FUN_00103a3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010350e(param_3);
  uVar2 = FUN_00103b43(local_28);
  uVar3 = FUN_00103b43(local_20);
  uVar1 = FUN_00103b64(uVar3,uVar2,uVar1);
  FUN_00103788(&local_30,uVar1);
  return;
}




void FUN_0010371e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038ce(param_1,param_2,param_3);
  return;
}




void FUN_00103b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103c2d(param_1,param_2,param_3);
  return;
}




void FUN_00104528(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102de4(void)

{
  return;
}




undefined8 FUN_001025a0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e50(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001042b6(void)

{
  return;
}




void FUN_0010161f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101892(param_1,2);
  FUN_00101549(*puVar1,*puVar1);
  return;
}




void FUN_0010425e(void)

{
  return;
}




void FUN_00104580(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010177b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




undefined8 FUN_00104210(void)

{
  return 1;
}




void FUN_00103520(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




int FUN_0010422e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102d56(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102e50(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103594(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c86(param_1);
  FUN_001037cf(uVar1);
  return;
}




void FUN_00103ebf(undefined4 param_1)

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




void FUN_00103d63(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




void FUN_001039c3(undefined8 param_1)

{
  FUN_00103a10(param_1);
  return;
}




void FUN_001034a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010350e(param_3);
  uVar2 = FUN_0010350e(local_28);
  uVar3 = FUN_0010350e(local_20);
  uVar1 = FUN_00103753(uVar3,uVar2,uVar1);
  FUN_00103788(&local_30,uVar1);
  return;
}




void FUN_00104295(void)

{
  return;
}




void FUN_001042a0(void)

{
  return;
}




ulong FUN_001030a8(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103594(param_1);
  lVar2 = FUN_00102c0e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102c0e(local_40);
  local_30 = FUN_00102c0e(local_40);
  plVar3 = (long *)FUN_001035ba(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102c0e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103594(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103594(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010252c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010336b(void)

{
  return;
}




undefined8 FUN_00104345(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010430e,local_18);
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




void FUN_001042f8(void)

{
  return;
}




undefined8 FUN_00102c35(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103227(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103a28(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_0010428a(void)

{
  return;
}




void FUN_001024e2(void)

{
  return;
}




void FUN_001042ed(void)

{
  return;
}




void FUN_001036ec(void)

{
  return;
}




ulong FUN_0010402d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020e6(undefined8 param_1)

{
  FUN_00102172(param_1);
  return;
}




long FUN_001038ff(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00104490(undefined8 *param_1)

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




undefined8 FUN_0010421f(void)

{
  return 0;
}




void FUN_0010253e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e25(param_1,param_2);
  return;
}




void FUN_00103344(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103975(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010350e(param_1);
  uVar1 = FUN_00103af8(uVar1,param_2,param_3);
  FUN_00103788(&local_10,uVar1);
  return;
}




void FUN_00103e3e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102cfe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e50(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102172(undefined8 param_1)

{
  FUN_001024e2(param_1);
  return;
}




undefined8 FUN_00102e72(undefined8 param_1)

{
  return param_1;
}




void FUN_0010184e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101892(param_1,2);
  FUN_0010177b(*puVar1,*puVar1);
  return;
}




undefined8 FUN_00102c86(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103198(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001035e9(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103022(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010350e(param_2);
  uVar2 = FUN_0010350e(param_1);
  FUN_00103520(uVar2,uVar1,param_3);
  return;
}




void FUN_0010256c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103753(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038ff(param_1,param_2,param_3);
  return;
}




long FUN_001025f7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102e72(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102e72(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103a10(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103dbd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010327e(param_1,param_3);
                    /* try { // try from 00102cd2 to 00102cd6 has its CatchHandler @ 00102cd9 */
  FUN_001032b4(param_1,param_2);
  return;
}




void FUN_00103664(void)

{
  return;
}




void FUN_001033e3(undefined8 param_1,undefined8 param_2)

{
  FUN_001036ec(param_1,param_2);
  return;
}




void FUN_00104509(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102490(undefined8 param_1)

{
  FUN_00102de4(param_1);
  return;
}




undefined8 FUN_0010348e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102056(void)

{
  FUN_00101b57();
  FUN_00101db5();
  return;
}




void FUN_00104274(void)

{
  return;
}




void FUN_00102df3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103344(param_1,param_2,param_3);
  return;
}




void FUN_001032b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103198(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102146(undefined8 param_1)

{
  FUN_00102490(param_1);
  FUN_001024b0(param_1);
  return;
}




ulong * FUN_001035ba(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010348e(param_2);
  uVar2 = FUN_0010348e(param_1);
  FUN_001034a0(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103394(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101490();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_001022aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001025a0(param_1);
  local_18 = FUN_001025f7(&local_38,&local_20);
  local_20 = FUN_00102b5c(local_30);
  uVar1 = FUN_00102ba8(&local_20,local_18);
  FUN_0010263c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102b5c(local_30);
  FUN_00102ba8(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103617(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103700(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001042cc(void)

{
  return;
}




void FUN_001024b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00101892(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102192(long *param_1)

{
  FUN_001024f2(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001020e6(param_1);
  return;
}




void FUN_001038ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103aa8(param_1,param_2,param_3);
  return;
}




void FUN_0010427f(void)

{
  return;
}




void FUN_001031cf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103617(param_2);
  uVar2 = FUN_00103617(param_1);
  FUN_00103459(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001042e2(void)

{
  return;
}




void * FUN_00103c2d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_0010337e(long param_1)

{
  return param_1 + 8;
}




void FUN_00103e13(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010340d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103700(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103677(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010387e(param_1,param_2,param_3);
  return;
}




void FUN_0010430e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102106(undefined8 param_1)

{
  FUN_00102146(param_1);
  return;
}




void FUN_00104269(void)

{
  return;
}




void FUN_00103d3d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103227(undefined8 param_1,undefined8 param_2)

{
  FUN_00103254(param_1,param_2);
  return param_1;
}




void FUN_00102e84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103394(param_3);
  uVar2 = FUN_0010337e(param_1);
  FUN_001033a6(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102dae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010330e(param_1,param_2,param_3);
  return;
}




void FUN_001042c1(void)

{
  return;
}




undefined8 FUN_00103788(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001020d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e50(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010227c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010258e(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00104253(void)

{
  return;
}




void FUN_00101db5(void)

{
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  char *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102126(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  local_d0 = getenv("ADD");
  if (local_d0 != (char *)0x0) {
    strncat(local_e8 + local_d8,local_d0,99 - local_d8);
  }
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
                    /* try { // try from 00101f09 to 00101fce has its CatchHandler @ 00102026 */
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_e0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_e8);
  FUN_00102370(local_a8,local_c8);
                    /* try { // try from 00101fd9 to 00101fdd has its CatchHandler @ 0010200e */
  FUN_0010184e(local_a8);
  FUN_001021e4(local_a8);
  FUN_001021e4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103de9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f9a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102b5c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010256c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010330e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103677(param_1,param_2,param_3);
  return;
}




void FUN_00102e25(undefined8 param_1,undefined8 param_2)

{
  FUN_0010336b(param_1,param_2);
  return;
}




void FUN_00102f7a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010340d(param_2);
  uVar2 = FUN_0010340d(param_1);
  FUN_00103459(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_0010446d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001042d7(void)

{
  return;
}




void FUN_00103ca5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103cda(param_1,param_2,param_3);
  return;
}




void FUN_001033a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103394(param_3);
  FUN_001036a8(param_1,param_2,uVar1);
  return;
}




long FUN_00102f36(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010258e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010258e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001045f0(void)

{
  return;
}




void FUN_00101549(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00101b57(void)

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
  FUN_00102126(local_c8);
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
  local_d0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_d0);
                    /* try { // try from 00101c68 to 00101d2d has its CatchHandler @ 00101d85 */
  FUN_001022aa(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_d0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010222c(local_c8);
  FUN_0010227c(local_a8,&local_d0);
  FUN_001022aa(local_c8,local_a8[0],1,&local_d8);
  FUN_00102370(local_a8,local_c8);
                    /* try { // try from 00101d38 to 00101d3c has its CatchHandler @ 00101d6d */
  FUN_00101738(local_a8);
  FUN_001021e4(local_a8);
  FUN_001021e4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010258e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c90(undefined8 *param_1)

{
  return *param_1;
}



