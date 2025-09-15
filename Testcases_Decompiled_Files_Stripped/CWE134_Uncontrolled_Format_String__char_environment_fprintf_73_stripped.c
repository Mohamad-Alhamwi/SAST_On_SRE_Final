
void FUN_00102d2b(void)

{
  return;
}




void FUN_00101d0e(undefined8 param_1)

{
  FUN_00101d2e(param_1);
  return;
}




void FUN_00102d36(void)

{
  return;
}




void FUN_00101f92(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010169e(local_20);
    uVar3 = FUN_00102216(param_1);
    FUN_00102228(uVar3,uVar2);
    FUN_00102252(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102252(undefined8 param_1,undefined8 param_2)

{
  FUN_0010251f(param_1,param_2,1);
  return;
}




long FUN_0010262c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102684(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001020c2(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102281(param_3);
  FUN_001026ec(param_1,param_2,uVar1);
  return;
}




void FUN_00102d15(void)

{
  return;
}




void FUN_0010251f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102684(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001016de(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102ab8(long param_1,ulong param_2,long param_3)

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




ulong FUN_00102bbc(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102c9b(void)

{
  return 1;
}




void FUN_00101e96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001020c2(param_2);
  FUN_00102071(&local_21,uVar1);
  FUN_001020d4(param_1,&local_21);
  FUN_00101e10(&local_21);
  uVar1 = FUN_0010215c(param_2);
  uVar2 = FUN_0010210c(param_2);
                    /* try { // try from 00101f22 to 00101f26 has its CatchHandler @ 00101f29 */
  FUN_001021a8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fb3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101de4(undefined8 param_1)

{
  FUN_00101f62(param_1);
  FUN_00101d0e(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_00102206(void)

{
  return;
}




void FUN_00101e5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001015ee(param_1);
  FUN_00102010(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101c92(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001027c8("Calling good()...");
  FUN_00101c7d();
  FUN_001027c8("Finished good()");
  FUN_001027c8("Calling bad()...");
  FUN_001016f0();
  FUN_001027c8("Finished bad()");
  return 0;
}




undefined8 FUN_00102388(undefined8 param_1,undefined8 param_2)

{
  FUN_001023b6(param_1,param_2);
  return param_1;
}




void FUN_001016c0(undefined8 param_1)

{
  FUN_001016de(param_1);
  return;
}




void FUN_001016f0(void)

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
  FUN_00101da4(local_c8);
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
                    /* try { // try from 00101809 to 00101858 has its CatchHandler @ 001018b0 */
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e96(local_a8,local_c8);
                    /* try { // try from 00101863 to 00101867 has its CatchHandler @ 00101898 */
  FUN_001014c9(local_a8);
  FUN_00101dc4(local_a8);
  FUN_00101dc4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025b0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010251f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010264e(void)

{
  return;
}




undefined8 FUN_001023e0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010150a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101590(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_00101590(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001015ee(param_1);
  FUN_0010163a(&local_18);
  FUN_0010165e(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a8d(void)

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
  FUN_00101da4(local_c8);
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
                    /* try { // try from 00101ba6 to 00101bf5 has its CatchHandler @ 00101c4d */
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e5c(local_c8,&local_e0);
  FUN_00101e96(local_a8,local_c8);
                    /* try { // try from 00101c00 to 00101c04 has its CatchHandler @ 00101c35 */
  FUN_0010154b(local_a8);
  FUN_00101dc4(local_a8);
  FUN_00101dc4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028c9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ce9(void)

{
  return;
}




void FUN_00102d83(void)

{
  return;
}




void FUN_00102848(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001023f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e0(param_2);
  FUN_001023b6(param_1,uVar1);
  FUN_00101d0e(param_1);
  return;
}




void FUN_00102730(undefined8 param_1)

{
  FUN_0010279e(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_001026ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102281(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101cf7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101f62(undefined8 param_1)

{
  FUN_00102206(param_1);
  return;
}




void FUN_001028f4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010294a(undefined4 param_1)

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




void FUN_001024be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102281(param_2);
  uVar2 = FUN_001015ee(param_1);
  FUN_00102010(param_1,uVar2,uVar1);
  return;
}




void FUN_001020d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e0(param_2);
  FUN_001023f2(param_1,uVar1);
  return;
}




void FUN_0010249c(undefined8 *param_1)

{
  FUN_00102662(*param_1);
  return;
}




void FUN_00102fd2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102cd3(void)

{
  return;
}




int FUN_00102cb9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c7d(void)

{
  FUN_001018e0();
  FUN_00101a8d();
  return;
}




undefined8 FUN_0010279e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d8e(void)

{
  return;
}




void FUN_0010250c(void)

{
  return;
}




undefined8 FUN_0010215c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102434(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




void FUN_00101d2e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102d78(void)

{
  return;
}




undefined8 FUN_00102f1b(undefined8 *param_1)

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




void FUN_00102d41(void)

{
  return;
}




void FUN_00101680(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102552(undefined8 param_1)

{
  FUN_001026ab(param_1,1);
  return;
}




void FUN_00102d6d(void)

{
  return;
}




void FUN_0010274e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001027b0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_0010210c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102434(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cde(void)

{
  return;
}




undefined8 FUN_00102ef8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101da4(undefined8 param_1)

{
  FUN_00101d84(param_1);
  return;
}




void FUN_001021a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102452(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010249c(&local_18);
    FUN_001024be(local_10,uVar2);
    FUN_00102478(&local_18);
  }
  return;
}




void FUN_001018e0(void)

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
  FUN_00101da4(local_c8);
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
                    /* try { // try from 001019b6 to 00101a05 has its CatchHandler @ 00101a5d */
  FUN_00101e5c(local_c8,&local_d0);
  FUN_00101e5c(local_c8,&local_d0);
  FUN_00101e5c(local_c8,&local_d0);
  FUN_00101e96(local_a8,local_c8);
                    /* try { // try from 00101a10 to 00101a14 has its CatchHandler @ 00101a45 */
  FUN_0010150a(local_a8);
  FUN_00101dc4(local_a8);
  FUN_00101dc4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cff(void)

{
  return;
}




void FUN_001023b6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010264e(param_1,param_2);
  return;
}




void FUN_00102a58(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103070(void)

{
  return;
}




void FUN_00102cf4(void)

{
  return;
}




undefined8 FUN_00102071(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102388(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102552(param_1);
  uVar2 = FUN_00102216(param_1);
  FUN_00102576(local_38,uVar2,uVar1);
  uVar3 = FUN_00102281(param_2);
  uVar4 = FUN_0010169e(uVar1);
  FUN_001025ef(uVar2,uVar4,uVar3);
  FUN_0010262c(local_38,0);
  FUN_001025b0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001026ab(undefined8 param_1,undefined8 param_2)

{
  FUN_0010274e(param_1,param_2,0);
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101590(param_1);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_001026d9(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dc4(undefined8 param_1)

{
  FUN_00101e30(param_1);
  return;
}




void FUN_00102d62(void)

{
  return;
}




void FUN_00102d99(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010169e(long param_1)

{
  FUN_001016c0(param_1 + 0x10);
  return;
}




void FUN_00102228(undefined8 param_1,undefined8 param_2)

{
  FUN_0010250c(param_1,param_2);
  return;
}




void FUN_00102434(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_00102478(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102216(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102281(undefined8 param_1)

{
  return param_1;
}




void FUN_0010289e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long * FUN_0010163a(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101cf7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102576(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026d9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001029cc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102d57(void)

{
  return;
}




void FUN_00102874(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102d4c(void)

{
  return;
}




void FUN_00101d64(undefined8 param_1)

{
  FUN_00101e10(param_1);
  return;
}




undefined8 FUN_001015ee(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101680(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102452(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102f94(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001029a4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102820(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010291f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029f7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102d0a(void)

{
  return;
}




undefined8 FUN_00102dd0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102d99,local_18);
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




void FUN_00102d20(void)

{
  return;
}




void FUN_00103000(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102281(param_3);
  p_Var2 = (_List_node_base *)FUN_00102294(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010235e(param_1,1);
  return;
}




void FUN_001027c8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a25(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102662(long param_1)

{
  FUN_00102730(param_1 + 0x10);
  return;
}




void FUN_0010154b(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101590(param_1);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_00101d84(undefined8 param_1)

{
  FUN_00101de4(param_1);
  return;
}




void FUN_00101f82(void)

{
  return;
}




undefined8 FUN_00102caa(void)

{
  return 0;
}




bool FUN_00102e9d(pthread_t *param_1)

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




void FUN_0010165e(undefined8 *param_1)

{
  FUN_0010169e(*param_1);
  return;
}




undefined8 FUN_001027b0(void)

{
  return 0x555555555555555;
}




void FUN_001027ee(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e30(undefined8 param_1)

{
  FUN_00101f92(param_1);
  FUN_00101d64(param_1);
  return;
}




void FUN_00101e10(undefined8 param_1)

{
  FUN_00101f82(param_1);
  return;
}




void FUN_0010235e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}



