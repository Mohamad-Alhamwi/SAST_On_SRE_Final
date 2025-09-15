
void FUN_00103305(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010250a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102479(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102549(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021be(param_3);
  FUN_00102658(param_1,param_2,uVar1);
  return;
}




void FUN_00102bd1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c52(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b21(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00102deb(long param_1,ulong param_2,long param_3)

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




void FUN_00101c94(undefined8 param_1)

{
  FUN_00101e12(param_1);
  FUN_00101bbe(param_1);
  return;
}




void FUN_00101d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec0(param_1);
  FUN_00101f0c(param_1,uVar1,param_2);
  return;
}




void FUN_00101c74(undefined8 param_1)

{
  FUN_00101ce0(param_1);
  return;
}




void FUN_001024ac(undefined8 param_1)

{
  FUN_00102617(param_1,1);
  return;
}




void FUN_00101bde(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001022f2(undefined8 param_1,undefined8 param_2)

{
  FUN_001025a8(param_1,param_2);
  return;
}




undefined8 FUN_0010231c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010232e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  FUN_001022f2(param_1,uVar1);
  FUN_00101bbe(param_1);
  return;
}




undefined8 FUN_00103103(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001030cc,local_18);
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




undefined8 FUN_00102fdd(void)

{
  return 0;
}




void FUN_00102841(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_001030ab(void)

{
  return;
}




void FUN_0010308a(void)

{
  return;
}




void FUN_00102d58(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103006(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101c54(undefined8 param_1)

{
  FUN_00101c34(param_1);
  return;
}




void FUN_00101cc0(undefined8 param_1)

{
  FUN_00101e32(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001013f0();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_00102112(long param_1)

{
  FUN_00102448(param_1 + 0x10);
  return;
}




void FUN_00102cff(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001023fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021be(param_2);
  uVar2 = FUN_00101ec0(param_1);
  FUN_00101f0c(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102645(undefined8 param_1)

{
  return param_1;
}




void FUN_001030a0(void)

{
  return;
}




void FUN_00102a58(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101ec0(param_1);
  FUN_00102ab6(&local_18);
  FUN_00102ada(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102058(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102370(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014a9(void)

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
  FUN_00101c54(local_c8);
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
                    /* try { // try from 001015a5 to 0010168d has its CatchHandler @ 001016e5 */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00102afb("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d46(local_a8,local_c8);
                    /* try { // try from 00101698 to 0010169c has its CatchHandler @ 001016cd */
  FUN_00102803(local_a8);
  FUN_00101c74(local_a8);
  FUN_00101c74(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e42(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00102112(local_20);
    uVar3 = FUN_00102134(param_1);
    FUN_00102146(uVar3,uVar2);
    FUN_00102170(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101e32(void)

{
  return;
}




bool FUN_001031d0(pthread_t *param_1)

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




void FUN_00102170(undefined8 param_1,undefined8 param_2)

{
  FUN_00102479(param_1,param_2,1);
  return;
}




undefined8 FUN_00102134(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101ba8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101b43(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102afb("Calling good()...");
  FUN_00101b2e();
  FUN_00102afb("Finished good()");
  FUN_00102afb("Calling bad()...");
  FUN_001014a9();
  FUN_00102afb("Finished bad()");
  return 0;
}




void FUN_00102910(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a58(param_1);
  FUN_00102841(*puVar1,*puVar1);
  return;
}




void FUN_0010305e(void)

{
  return;
}




undefined8 * FUN_001023b4(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00103095(void)

{
  return;
}




undefined8 FUN_0010238e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
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




void FUN_00101f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001021be(param_3);
  p_Var2 = (_List_node_base *)FUN_001021d0(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010229a(param_1,1);
  return;
}




undefined8 FUN_0010322b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001021be(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ba8(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102afb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101bbe(undefined8 param_1)

{
  FUN_00101bde(param_1);
  return;
}




void FUN_00102617(undefined8 param_1,undefined8 param_2)

{
  FUN_001026ba(param_1,param_2,0);
  return;
}




void FUN_00102734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




long FUN_00102586(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c14(undefined8 param_1)

{
  FUN_00101cc0(param_1);
  return;
}




void FUN_00102ada(undefined8 *param_1)

{
  FUN_00102112(*param_1);
  return;
}




undefined8 FUN_00102fce(void)

{
  return 1;
}




void FUN_001025f0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001032e6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101ec0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010271c(void)

{
  return 0x555555555555555;
}




void FUN_001023d8(undefined8 *param_1)

{
  FUN_001025bc(*param_1);
  return;
}




void FUN_00102b53(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102466(void)

{
  return;
}




void FUN_001030b6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_001022c4(undefined8 param_1,undefined8 param_2)

{
  FUN_001022f2(param_1,param_2);
  return param_1;
}




void FUN_00102a1a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a58(param_1);
  FUN_0010294e(*puVar1,*puVar1);
  return;
}




void FUN_0010301c(void)

{
  return;
}




void FUN_00102448(undefined8 param_1)

{
  FUN_001025de(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef0)();
  return;
}




void FUN_00101d46(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fbe(param_2);
  FUN_00101f6d(&local_21,uVar1);
  FUN_00101fd0(param_1,&local_21);
  FUN_00101cc0(&local_21);
  uVar1 = FUN_00102058(param_2);
  uVar2 = FUN_00102008(param_2);
                    /* try { // try from 00101dd2 to 00101dd6 has its CatchHandler @ 00101dd9 */
  FUN_001020a4(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103011(void)

{
  return;
}




void FUN_00101e12(undefined8 param_1)

{
  FUN_00102102(param_1);
  return;
}




undefined8 FUN_001025de(undefined8 param_1)

{
  return param_1;
}




void FUN_0010269c(undefined8 param_1)

{
  FUN_0010270a(param_1);
  return;
}




void FUN_0010307f(void)

{
  return;
}




void FUN_00101715(void)

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
  FUN_00101c54(local_c8);
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
                    /* try { // try from 001017eb to 0010183a has its CatchHandler @ 00101892 */
  FUN_00101d0c(local_c8,&local_d0);
  FUN_00101d0c(local_c8,&local_d0);
  FUN_00101d0c(local_c8,&local_d0);
  FUN_00101d46(local_a8,local_c8);
                    /* try { // try from 00101845 to 00101849 has its CatchHandler @ 0010187a */
  FUN_00102910(local_a8);
  FUN_00101c74(local_a8);
  FUN_00101c74(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b2e(void)

{
  FUN_00101715();
  FUN_001018c2();
  return;
}




void FUN_0010303d(void)

{
  return;
}




void FUN_001030c1(void)

{
  return;
}




void FUN_00102102(void)

{
  return;
}




void FUN_00103048(void)

{
  return;
}




void FUN_00101c34(undefined8 param_1)

{
  FUN_00101c94(param_1);
  return;
}




undefined8 FUN_001021be(undefined8 param_1)

{
  return param_1;
}




void FUN_001025bc(long param_1)

{
  FUN_0010269c(param_1 + 0x10);
  return;
}




void FUN_001030cc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001020a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010238e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001023d8(&local_18);
    FUN_001023fa(local_10,uVar2);
    FUN_001023b4(&local_18);
  }
  return;
}




void FUN_001025a8(void)

{
  return;
}




void FUN_00103074(void)

{
  return;
}




void FUN_00103053(void)

{
  return;
}




void FUN_001018c2(void)

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
  FUN_00101c54(local_c8);
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
                    /* try { // try from 001019be to 00101aa6 has its CatchHandler @ 00101afe */
    pcVar1 = fgets(local_d8 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00102afb("fgets() failed");
      local_d8[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_d8);
      if ((local_d0 != 0) && (local_d8[local_d0 - 1] == '\n')) {
        local_d8[local_d0 - 1] = '\0';
      }
    }
  }
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d0c(local_c8,&local_d8);
  FUN_00101d46(local_a8,local_c8);
                    /* try { // try from 00101ab1 to 00101ab5 has its CatchHandler @ 00101ae6 */
  FUN_00102a1a(local_a8);
  FUN_00101c74(local_a8);
  FUN_00101c74(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102803(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a58(param_1);
  FUN_00102734(*puVar1,*puVar1);
  return;
}




void FUN_001021a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102008(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102370(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102146(undefined8 param_1,undefined8 param_2)

{
  FUN_00102466(param_1,param_2);
  return;
}




undefined8 FUN_001021d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024ac(param_1);
  uVar2 = FUN_00102134(param_1);
  FUN_001024d0(local_38,uVar2,uVar1);
  uVar3 = FUN_001021be(param_2);
  uVar4 = FUN_00102112(uVar1);
  FUN_00102549(uVar2,uVar4,uVar3);
  FUN_00102586(local_38,0);
  FUN_0010250a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102479(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001025f0(param_1,param_2,param_3);
  return;
}




long * FUN_00102ab6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_0010324e(undefined8 *param_1)

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




void FUN_001026ba(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010271c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001024d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102645(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_0010294e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00103032(void)

{
  return;
}




ulong FUN_00102eef(long param_1,ulong param_2,long param_3)

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




int FUN_00102fec(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103027(void)

{
  return;
}




undefined8 FUN_00101fbe(undefined8 param_1)

{
  return param_1;
}




void FUN_0010229a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101ce0(undefined8 param_1)

{
  FUN_00101e42(param_1);
  FUN_00101c14(param_1);
  return;
}




void FUN_00102370(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010270a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bfc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ba7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102d2a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f6d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022c4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102cd7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102b7b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  FUN_0010232e(param_1,uVar1);
  return;
}




void FUN_00102c7d(undefined4 param_1)

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




void FUN_001032c7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103069(void)

{
  return;
}




void FUN_00102c27(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d8b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001033a0(void)

{
  return;
}



