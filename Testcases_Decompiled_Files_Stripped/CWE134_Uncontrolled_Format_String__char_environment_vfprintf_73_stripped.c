
void FUN_00102861(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f3(param_3);
  FUN_0010295e(param_1,param_2,uVar1);
  return;
}




long FUN_0010289e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




ulong FUN_00102e2e(long param_1,ulong param_2,long param_3)

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




int FUN_00102f2b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c69(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102f87(void)

{
  return;
}




void FUN_001016f1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00101ff6(undefined8 param_1)

{
  FUN_00102056(param_1);
  return;
}




void FUN_00102056(undefined8 param_1)

{
  FUN_001021d4(param_1);
  FUN_00101f80(param_1);
  return;
}




void FUN_00101fd6(undefined8 param_1)

{
  FUN_00102082(param_1);
  return;
}




void FUN_001027e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010294b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00101f04(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102a3a("Calling good()...");
  FUN_00101eef();
  FUN_00102a3a("Finished good()");
  FUN_00102a3a("Calling bad()...");
  FUN_00101962();
  FUN_00102a3a("Finished bad()");
  return 0;
}




void FUN_00102628(undefined8 param_1,undefined8 param_2)

{
  FUN_001028c0(param_1,param_2);
  return;
}




undefined8 FUN_00102652(undefined8 param_1)

{
  return param_1;
}




void FUN_00102664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102652(param_2);
  FUN_00102628(param_1,uVar1);
  FUN_00101f80(param_1);
  return;
}




void FUN_00102fa8(void)

{
  return;
}




void FUN_00102ae6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103270(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103206(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102f71(void)

{
  return;
}




void FUN_0010159f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101802(param_1);
  FUN_001014c9(*puVar1,*puVar1);
  return;
}




void FUN_00102fbe(void)

{
  return;
}




long * FUN_001018ac(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101fa0(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102016(undefined8 param_1)

{
  FUN_00101ff6(param_1);
  return;
}




void FUN_001018f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010241a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001026c4(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010270e(&local_18);
    FUN_00102730(local_10,uVar2);
    FUN_001026ea(&local_18);
  }
  return;
}




void FUN_00102f5b(void)

{
  return;
}




void FUN_00102730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001024f3(param_2);
  uVar2 = FUN_00101860(param_1);
  FUN_00102282(param_1,uVar2,uVar1);
  return;
}




void FUN_001029a2(undefined8 param_1)

{
  FUN_00102a10(param_1);
  return;
}




void FUN_00103244(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102b91(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102346(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102652(param_2);
  FUN_00102664(param_1,uVar1);
  return;
}




void FUN_00101910(long param_1)

{
  FUN_00101932(param_1 + 0x10);
  return;
}




void FUN_00102108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102334(param_2);
  FUN_001022e3(&local_21,uVar1);
  FUN_00102346(param_1,&local_21);
  FUN_00102082(&local_21);
  uVar1 = FUN_001023ce(param_2);
  uVar2 = FUN_0010237e(param_2);
                    /* try { // try from 00102194 to 00102198 has its CatchHandler @ 0010219b */
  FUN_0010241a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101860(param_1);
  FUN_00102282(param_1,uVar1,param_2);
  return;
}




void FUN_0010249a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010277e(param_1,param_2);
  return;
}




void FUN_00102478(void)

{
  return;
}




void FUN_00101cff(void)

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
  FUN_00102016(local_c8);
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
                    /* try { // try from 00101e18 to 00101e67 has its CatchHandler @ 00101ebf */
  FUN_001020ce(local_c8,&local_e0);
  FUN_001020ce(local_c8,&local_e0);
  FUN_001020ce(local_c8,&local_e0);
  FUN_00102108(local_a8,local_c8);
                    /* try { // try from 00101e72 to 00101e76 has its CatchHandler @ 00101ea7 */
  FUN_001017c4(local_a8);
  FUN_00102036(local_a8);
  FUN_00102036(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101b52(void)

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
  FUN_00102016(local_c8);
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
                    /* try { // try from 00101c28 to 00101c77 has its CatchHandler @ 00101ccf */
  FUN_001020ce(local_c8,&local_d0);
  FUN_001020ce(local_c8,&local_d0);
  FUN_001020ce(local_c8,&local_d0);
  FUN_00102108(local_a8,local_c8);
                    /* try { // try from 00101c82 to 00101c86 has its CatchHandler @ 00101cb7 */
  FUN_001016b3(local_a8);
  FUN_00102036(local_a8);
  FUN_00102036(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b10(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103042(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010300b,local_18);
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




undefined8 * FUN_001026ea(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00103225(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001026c4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001021f4(void)

{
  return;
}




void FUN_001029c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102a22(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102c3e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101eef(void)

{
  FUN_00101b52();
  FUN_00101cff();
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_0010295e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001024f3(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101f69(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a92(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001028c0(void)

{
  return;
}




undefined8 FUN_00101f69(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c16(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102f9d(void)

{
  return;
}




undefined8 FUN_0010294b(undefined8 param_1)

{
  return param_1;
}




void FUN_001021d4(undefined8 param_1)

{
  FUN_00102478(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_0010270e(undefined8 *param_1)

{
  FUN_001028d4(*param_1);
  return;
}




void FUN_00102a60(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c97(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102791(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001028f6(param_1,param_2,param_3);
  return;
}




void FUN_001032e0(void)

{
  return;
}




void FUN_001018d0(undefined8 *param_1)

{
  FUN_00101910(*param_1);
  return;
}




undefined8 FUN_001025fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102628(param_1,param_2);
  return param_1;
}




void FUN_00102b66(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102fd4(void)

{
  return;
}




void FUN_0010277e(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_00101802(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101860(param_1);
  FUN_001018ac(&local_18);
  FUN_001018d0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102082(undefined8 param_1)

{
  FUN_001021f4(param_1);
  return;
}




void FUN_00102fc9(void)

{
  return;
}




void FUN_001020a2(undefined8 param_1)

{
  FUN_00102204(param_1);
  FUN_00101fd6(param_1);
  return;
}




void FUN_0010291d(undefined8 param_1,undefined8 param_2)

{
  FUN_001029c0(param_1,param_2,0);
  return;
}




undefined8 FUN_00102a10(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010318d(undefined8 *param_1)

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




void FUN_001016b3(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101802(param_1);
  FUN_001015dd(*puVar1,*puVar1);
  return;
}




void FUN_00101932(undefined8 param_1)

{
  FUN_00101950(param_1);
  return;
}




void FUN_00101962(void)

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
  FUN_00102016(local_c8);
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
                    /* try { // try from 00101a7b to 00101aca has its CatchHandler @ 00101b22 */
  FUN_001020ce(local_c8,&local_e0);
  FUN_001020ce(local_c8,&local_e0);
  FUN_001020ce(local_c8,&local_e0);
  FUN_00102108(local_a8,local_c8);
                    /* try { // try from 00101ad5 to 00101ad9 has its CatchHandler @ 00101b0a */
  FUN_0010159f(local_a8);
  FUN_00102036(local_a8);
  FUN_00102036(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015dd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102ff5(void)

{
  return;
}




void FUN_001017c4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101802(param_1);
  FUN_001016f1(*puVar1,*puVar1);
  return;
}




undefined8 FUN_001023ce(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026a6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103000(void)

{
  return;
}




void FUN_00101f80(undefined8 param_1)

{
  FUN_00101fa0(param_1);
  return;
}




undefined8 FUN_001024f3(undefined8 param_1)

{
  return param_1;
}




void FUN_001028f6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010237e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001026a6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028d4(long param_1)

{
  FUN_001029a2(param_1 + 0x10);
  return;
}




undefined8 FUN_0010316a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010300b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101950(undefined8 param_1)

{
  return param_1;
}




void FUN_00102aba(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001024c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102791(param_1,param_2,1);
  return;
}




undefined8 FUN_00102334(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102488(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102506(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027c4(param_1);
  uVar2 = FUN_00102488(param_1);
  FUN_001027e8(local_38,uVar2,uVar1);
  uVar3 = FUN_001024f3(param_2);
  uVar4 = FUN_00101910(uVar1);
  FUN_00102861(uVar2,uVar4,uVar3);
  FUN_0010289e(local_38,0);
  FUN_00102822(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001027c4(undefined8 param_1)

{
  FUN_0010291d(param_1,1);
  return;
}




void FUN_00102bbc(undefined4 param_1)

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




undefined8 FUN_00102a22(void)

{
  return 0x555555555555555;
}




void FUN_00102822(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102791(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102b3b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fea(void)

{
  return;
}




void FUN_00102f92(void)

{
  return;
}




void FUN_00102fb3(void)

{
  return;
}




void FUN_00102fdf(void)

{
  return;
}




void FUN_00102282(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001024f3(param_3);
  p_Var2 = (_List_node_base *)FUN_00102506(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001025d0(param_1,1);
  return;
}




void FUN_001025d0(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102036(undefined8 param_1)

{
  FUN_001020a2(param_1);
  return;
}




void FUN_001026a6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a3a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102f0d(void)

{
  return 1;
}




ulong FUN_00102d2a(long param_1,ulong param_2,long param_3)

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




void FUN_00102f66(void)

{
  return;
}




void FUN_00102204(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101910(local_20);
    uVar3 = FUN_00102488(param_1);
    FUN_0010249a(uVar3,uVar2);
    FUN_001024c4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102f50(void)

{
  return;
}




void FUN_00102cca(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001022e3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001025fa(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102f45(void)

{
  return;
}




bool FUN_0010310f(pthread_t *param_1)

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




undefined8 FUN_00102f1c(void)

{
  return 0;
}




void FUN_00102f7c(void)

{
  return;
}




undefined8 FUN_00101860(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018f2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



