
void FUN_00102998(void)

{
  return;
}




void FUN_001029ac(long param_1)

{
  FUN_00102a7a(param_1 + 0x10);
  return;
}




undefined8 FUN_00102ff4(void)

{
  return 0;
}




void FUN_00103028(void)

{
  return;
}




void FUN_00102da2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103075(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef0)();
  return;
}




void FUN_001017e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101840(param_1);
  FUN_0010188c(&local_18);
  FUN_001018b0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010210e(undefined8 param_1)

{
  FUN_0010217a(param_1);
  return;
}




void FUN_0010217a(undefined8 param_1)

{
  FUN_001022dc(param_1);
  FUN_001020ae(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001020ee(undefined8 param_1)

{
  FUN_001020ce(param_1);
  return;
}




void FUN_00102939(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025cb(param_3);
  FUN_00102a36(param_1,param_2,uVar1);
  return;
}




void FUN_00102058(undefined8 param_1)

{
  FUN_00102078(param_1);
  return;
}




void FUN_0010273c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010272a(param_2);
  FUN_00102700(param_1,uVar1);
  FUN_00102058(param_1);
  return;
}




void FUN_0010277e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010279c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00103096(void)

{
  return;
}




void FUN_00102c13(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010331c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010305f(void)

{
  return;
}




void FUN_00101693(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017e2(param_1);
  FUN_001015bd(*puVar1,*puVar1);
  return;
}




void FUN_001030ac(void)

{
  return;
}




void FUN_001018d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001020ce(undefined8 param_1)

{
  FUN_0010212e(param_1);
  return;
}




void FUN_0010212e(undefined8 param_1)

{
  FUN_001022ac(param_1);
  FUN_00102058(param_1);
  return;
}




void FUN_00101912(undefined8 param_1)

{
  FUN_00101930(param_1);
  return;
}




undefined8 FUN_00102560(undefined8 param_1)

{
  return param_1;
}




void FUN_00103049(void)

{
  return;
}




void FUN_00102869(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001029ce(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ae8(undefined8 param_1)

{
  return param_1;
}




void FUN_001033c0(void)

{
  return;
}




void FUN_00102cee(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001024a6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010277e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101930(undefined8 param_1)

{
  return param_1;
}




void FUN_001022cc(void)

{
  return;
}




void FUN_001022ac(undefined8 param_1)

{
  FUN_00102550(param_1);
  return;
}




undefined8 FUN_001025cb(undefined8 param_1)

{
  return param_1;
}




void FUN_00102572(undefined8 param_1,undefined8 param_2)

{
  FUN_00102856(param_1,param_2);
  return;
}




undefined8 FUN_00101fdc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102b12("Calling good()...");
  FUN_00101fc7();
  FUN_00102b12("Finished good()");
  FUN_00102b12("Calling bad()...");
  FUN_00101942();
  FUN_00102b12("Finished bad()");
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00107038 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001013f0();
    DAT_00107038 = 1;
    return;
  }
  return;
}




void FUN_00101fc7(void)

{
  FUN_00101bae();
  FUN_00101d5b();
  return;
}




void FUN_00102c3e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103242(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102808(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001025cb(param_2);
  uVar2 = FUN_00101840(param_1);
  FUN_0010235a(param_1,uVar2,uVar1);
  return;
}




void FUN_00103350(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001027e6(undefined8 *param_1)

{
  FUN_001029ac(*param_1);
  return;
}




void FUN_0010235a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001025cb(param_3);
  p_Var2 = (_List_node_base *)FUN_001025de(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001026a8(param_1,1);
  return;
}




undefined8 FUN_00102afa(void)

{
  return 0x555555555555555;
}




void FUN_00102d6f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102041(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010157f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017e2(param_1);
  FUN_001014a9(*puVar1,*puVar1);
  return;
}




void FUN_00102a98(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102afa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102bbe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029ce(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102078(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102d41(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010308b(void)

{
  return;
}




void FUN_00102a7a(undefined8 param_1)

{
  FUN_00102ae8(param_1);
  return;
}




void FUN_001022dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001018f0(local_20);
    uVar3 = FUN_00102560(param_1);
    FUN_00102572(uVar3,uVar2);
    FUN_0010259c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001014a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102856(void)

{
  return;
}




void FUN_00102b92(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102e02(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001015bd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_001028c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a23(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001018f0(long param_1)

{
  FUN_00101912(param_1 + 0x10);
  return;
}




undefined8 FUN_0010272a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c94(undefined4 param_1)

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




void FUN_001030c2(void)

{
  return;
}




void FUN_0010289c(undefined8 param_1)

{
  FUN_001029f5(param_1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




long * FUN_0010188c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001021a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101840(param_1);
  FUN_0010235a(param_1,uVar1,param_2);
  return;
}




void FUN_001030b7(void)

{
  return;
}




void FUN_001021e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010240c(param_2);
  FUN_001023bb(&local_21,uVar1);
  FUN_0010241e(param_1,&local_21);
  FUN_0010215a(&local_21);
  uVar1 = FUN_001024a6(param_2);
  uVar2 = FUN_00102456(param_2);
                    /* try { // try from 0010226c to 00102270 has its CatchHandler @ 00102273 */
  FUN_001024f2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001025cb(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00102041(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102b12(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001032fd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001017a4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001017e2(param_1);
  FUN_001016d1(*puVar1,*puVar1);
  return;
}




void FUN_00101942(void)

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
  FUN_001020ee(local_c8);
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
                    /* try { // try from 00101a3e to 00101b26 has its CatchHandler @ 00101b7e */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00102b12("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021e0(local_a8,local_c8);
                    /* try { // try from 00101b31 to 00101b35 has its CatchHandler @ 00101b66 */
  FUN_0010157f(local_a8);
  FUN_0010210e(local_a8);
  FUN_0010210e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d5b(void)

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
  FUN_001020ee(local_c8);
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
                    /* try { // try from 00101e57 to 00101f3f has its CatchHandler @ 00101f97 */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00102b12("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021a6(local_c8,&local_d8);
  FUN_001021e0(local_a8,local_c8);
                    /* try { // try from 00101f4a to 00101f4e has its CatchHandler @ 00101f7f */
  FUN_001017a4(local_a8);
  FUN_0010210e(local_a8);
  FUN_0010210e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_001030e3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101840(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102550(void)

{
  return;
}




undefined8 FUN_0010311a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001030e3,local_18);
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




void FUN_001020ae(undefined8 param_1)

{
  FUN_0010215a(param_1);
  return;
}




void FUN_001026a8(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102a23(undefined8 param_1)

{
  return param_1;
}




void FUN_001024f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010279c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001027e6(&local_18);
    FUN_00102808(local_10,uVar2);
    FUN_001027c2(&local_18);
  }
  return;
}




void FUN_001029f5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a98(param_1,param_2,0);
  return;
}




void FUN_001032de(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_001031e7(pthread_t *param_1)

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




void FUN_00101bae(void)

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
  FUN_001020ee(local_c8);
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
                    /* try { // try from 00101c84 to 00101cd3 has its CatchHandler @ 00101d2b */
  FUN_001021a6(local_c8,&local_d0);
  FUN_001021a6(local_c8,&local_d0);
  FUN_001021a6(local_c8,&local_d0);
  FUN_001021e0(local_a8,local_c8);
                    /* try { // try from 00101cde to 00101ce2 has its CatchHandler @ 00101d13 */
  FUN_00101693(local_a8);
  FUN_0010210e(local_a8);
  FUN_0010210e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102be8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001025de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010289c(param_1);
  uVar2 = FUN_00102560(param_1);
  FUN_001028c0(local_38,uVar2,uVar1);
  uVar3 = FUN_001025cb(param_2);
  uVar4 = FUN_001018f0(uVar1);
  FUN_00102939(uVar2,uVar4,uVar3);
  FUN_00102976(local_38,0);
  FUN_001028fa(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00102456(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010277e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010259c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102869(param_1,param_2,1);
  return;
}




undefined8 FUN_001026d2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102700(param_1,param_2);
  return param_1;
}




void FUN_001028fa(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102869(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102d16(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b38(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




long FUN_00102976(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102c69(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030d8(void)

{
  return;
}




void FUN_00103080(void)

{
  return;
}




void FUN_001030a1(void)

{
  return;
}




void FUN_001030cd(void)

{
  return;
}




undefined8 FUN_0010240c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102700(undefined8 param_1,undefined8 param_2)

{
  FUN_00102998(param_1,param_2);
  return;
}




void FUN_0010215a(undefined8 param_1)

{
  FUN_001022cc(param_1);
  return;
}




undefined8 * FUN_001027c2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102b6a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int FUN_00103003(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102fe5(void)

{
  return 1;
}




void FUN_00103054(void)

{
  return;
}




undefined8 FUN_001023bb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026d2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010303e(void)

{
  return;
}




ulong FUN_00102f06(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010241e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010272a(param_2);
  FUN_0010273c(param_1,uVar1);
  return;
}




void FUN_00103033(void)

{
  return;
}




undefined8 FUN_00103265(undefined8 *param_1)

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




void FUN_0010301d(void)

{
  return;
}




void FUN_0010306a(void)

{
  return;
}




void FUN_001018b0(undefined8 *param_1)

{
  FUN_001018f0(*param_1);
  return;
}



