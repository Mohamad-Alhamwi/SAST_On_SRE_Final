
undefined8 FUN_00102d40(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102e3a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102f20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102578(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102578(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103a12(param_2);
  uVar2 = FUN_00103a12(param_1);
  FUN_00103a24(uVar2,uVar1,param_3);
  return;
}




void FUN_0010427f(void)

{
  return;
}




void FUN_0010323e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010364e(param_1,param_2);
  return;
}




void FUN_00102f02(undefined8 param_1)

{
  FUN_00103368(param_1);
  return;
}




undefined8 FUN_001020ba(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102528(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e0f(param_1,param_2);
  return;
}




void FUN_001042ed(void)

{
  return;
}




void FUN_0010215c(undefined8 param_1)

{
  FUN_001024cc(param_1);
  return;
}




ulong * FUN_001035a4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001024dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102ddd(param_1,param_2,param_3);
  }
  return;
}




void FUN_001024cc(void)

{
  return;
}




bool FUN_001043fc(pthread_t *param_1)

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




void FUN_001042c1(void)

{
  return;
}




undefined8 FUN_0010432f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001042f8,local_18);
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




void FUN_00104531(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103e7e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010258a(param_1);
  local_18 = FUN_001025e1(&local_38,&local_20);
  local_20 = FUN_00102b46(local_30);
  uVar1 = FUN_00102b92(&local_20,local_18);
  FUN_00102626(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102b46(local_30);
  FUN_00102b92(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c8f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103cc4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102578(undefined8 param_1)

{
  return param_1;
}




void FUN_001042ab(void)

{
  return;
}




void FUN_0010305d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103548(param_1,param_2,param_3);
  return;
}




void FUN_001042f8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103355(void)

{
  return;
}




long FUN_0010187c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033f7(param_2);
  uVar2 = FUN_001033f7(param_1);
  FUN_00103443(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010165b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




int FUN_00104218(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101490();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_0010348a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001034f8(param_3);
  uVar2 = FUN_001034f8(local_28);
  uVar3 = FUN_001034f8(local_20);
  uVar1 = FUN_0010373d(uVar3,uVar2,uVar1);
  FUN_00103772(&local_30,uVar1);
  return;
}




void FUN_00103ea9(undefined4 param_1)

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




void FUN_0010247a(undefined8 param_1)

{
  FUN_00102dce(param_1);
  return;
}




void FUN_001036ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010425e(void)

{
  return;
}




long FUN_001038e9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001033cd(undefined8 param_1,undefined8 param_2)

{
  FUN_001036d6(param_1,param_2);
  return;
}




void FUN_00104248(void)

{
  return;
}




void FUN_00103268(undefined8 param_1,undefined8 param_2)

{
  FUN_0010323e(param_1,param_2);
  FUN_0010249a(param_1);
  return;
}




undefined8 FUN_00102b46(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102556(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e5c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010395f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034f8(param_1);
  uVar1 = FUN_00103ae2(uVar1,param_2,param_3);
  FUN_00103772(&local_10,uVar1);
  return;
}




void FUN_00102e6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_0010337e(param_3);
  uVar2 = FUN_00103368(param_1);
  FUN_00103390(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010364e(void)

{
  return;
}




void FUN_0010300c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034f8(param_2);
  uVar2 = FUN_001034f8(param_1);
  FUN_0010350a(uVar2,uVar1,param_3);
  return;
}




void FUN_0010235a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102c70(param_2);
  FUN_00102c1f(&local_31,uVar1);
  uVar1 = FUN_00102bf8(param_2);
                    /* try { // try from 001023c0 to 001023c4 has its CatchHandler @ 0010242d */
  FUN_00102c82(param_1,uVar1,&local_31);
  FUN_0010215c(&local_31);
  uVar2 = FUN_00102516(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102d40(param_2);
  uVar4 = FUN_00102ce8(param_2);
                    /* try { // try from 0010240e to 00102412 has its CatchHandler @ 0010244b */
  uVar1 = FUN_00102d98(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010249a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102c82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103268(param_1,param_3);
                    /* try { // try from 00102cbc to 00102cc0 has its CatchHandler @ 00102cc3 */
  FUN_0010329e(param_1,param_2);
  return;
}




void FUN_00103da7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101618(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010187c(param_1,2);
  FUN_00101549(*puVar1,*puVar1);
  return;
}




void FUN_00102d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f8(param_1,param_2,param_3);
  return;
}




void FUN_0010357e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c70(param_1);
  FUN_001037b9(uVar1);
  return;
}




void FUN_00102110(undefined8 param_1)

{
  FUN_001020f0(param_1);
  return;
}




undefined8 FUN_00103c7a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001042cc(void)

{
  return;
}




void FUN_00102130(undefined8 param_1)

{
  FUN_0010247a(param_1);
  FUN_0010249a(param_1);
  return;
}




void FUN_001018a0(void)

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
  FUN_00102110(local_c8);
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
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
                    /* try { // try from 001019f4 to 00101ab9 has its CatchHandler @ 00101b11 */
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  FUN_0010235a(local_a8,local_c8);
                    /* try { // try from 00101ac4 to 00101ac8 has its CatchHandler @ 00101af9 */
  FUN_00101618(local_a8);
  FUN_001021ce(local_a8);
  FUN_001021ce(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00103ae2(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010217c(long *param_1)

{
  FUN_001024dc(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001020d0(param_1);
  return;
}




undefined8 FUN_001037b9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001039ad(param_1);
  puVar1 = (undefined8 *)FUN_001039cb(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103211(undefined8 param_1,undefined8 param_2)

{
  FUN_0010323e(param_1,param_2);
  return param_1;
}




void FUN_0010329e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103182(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00104253(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




undefined8 FUN_00102b92(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00102556(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001034f8(param_3);
  uVar2 = FUN_00103b2d(local_28);
  uVar3 = FUN_00103b2d(local_20);
  uVar1 = FUN_00103b4e(uVar3,uVar2,uVar1);
  FUN_00103772(&local_30,uVar1);
  return;
}




void FUN_00104269(void)

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
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103478(param_2);
  uVar2 = FUN_00103478(param_1);
  FUN_0010348a(uVar2,uVar1,param_3);
  return;
}




void FUN_00104512(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010423d(void)

{
  return;
}




void FUN_001020d0(undefined8 param_1)

{
  FUN_0010215c(param_1);
  return;
}




void FUN_00103dd3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038b8(param_1,param_2,param_3);
  return;
}




void FUN_00103f84(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102516(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b41(void)

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
  FUN_00102110(local_c8);
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
  local_d0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_d0);
                    /* try { // try from 00101c52 to 00101d17 has its CatchHandler @ 00101d6f */
  FUN_00102294(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_d0);
  FUN_00102294(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_d0);
  FUN_00102294(local_c8,local_a8[0],1,&local_d8);
  FUN_0010235a(local_a8,local_c8);
                    /* try { // try from 00101d22 to 00101d26 has its CatchHandler @ 00101d57 */
  FUN_0010172a(local_a8);
  FUN_001021ce(local_a8);
  FUN_001021ce(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039ad(undefined8 param_1)

{
  FUN_001039fa(param_1);
  return;
}




undefined8 FUN_0010258a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e3a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001045d0(void)

{
  return;
}




ulong FUN_00103092(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010357e(param_1);
  lVar2 = FUN_00102bf8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102bf8(local_40);
  local_30 = FUN_00102bf8(local_40);
  plVar3 = (long *)FUN_001035a4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102bf8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010357e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010357e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102ddd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c70(undefined8 param_1)

{
  return param_1;
}




void FUN_001036d6(void)

{
  return;
}




void FUN_001042b6(void)

{
  return;
}




void FUN_00103443(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103708(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010447a(undefined8 *param_1)

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




undefined8 FUN_00102216(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102556(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102055(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103d27("Calling good()...");
  FUN_00102040();
  FUN_00103d27("Finished good()");
  FUN_00103d27("Calling bad()...");
  FUN_001018a0();
  FUN_00103d27("Finished bad()");
  return 0;
}




void FUN_0010373d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038e9(param_1,param_2,param_3);
  return;
}




void FUN_00102e3a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103f56(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001044f3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00103a12(undefined8 param_1)

{
  return param_1;
}




void FUN_0010350a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103ba9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001034f8(param_3);
  uVar2 = FUN_001034f8(local_28);
  uVar3 = FUN_001034f8(local_20);
  uVar1 = FUN_00103c8f(uVar3,uVar2,uVar1);
  FUN_00103772(&local_30,uVar1);
  return;
}




void FUN_001032f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103661(param_1,param_2,param_3);
  return;
}




ulong * FUN_001039cb(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_00102bf8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010172a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010187c(param_1,2);
  FUN_0010165b(*puVar1,*puVar1);
  return;
}




void FUN_001021ce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102516(param_1);
  FUN_00102528(*param_1,param_1[1],uVar1);
  FUN_0010217c(param_1);
  return;
}




void FUN_00102ece(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103368(param_1);
  FUN_001033cd(*param_1,uVar1);
  return;
}




void FUN_00103dfd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103d7f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103772(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001042d7(void)

{
  return;
}




void FUN_00103822(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001039fa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00104560(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001039fa(void)

{
  return 0xfffffffffffffff;
}




void FUN_00104295(void)

{
  return;
}




undefined8 FUN_001041fa(void)

{
  return 1;
}




void FUN_00103661(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103868(param_1,param_2,param_3);
  return;
}




void FUN_00102556(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104232(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00103390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010337e(param_3);
  FUN_00103692(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103b2d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102e5c(&local_10);
  return *puVar1;
}




void FUN_00103f03(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001034f8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010176d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00104274(void)

{
  return;
}




void FUN_00103d4d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00104017(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103182(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001035d3(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00102c1f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103211(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103601(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010428a(void)

{
  return;
}




void FUN_00103692(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010337e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001020ba(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010332e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103788(param_1,param_2,param_3);
  return;
}




void FUN_00101839(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010187c(param_1,2);
  FUN_0010176d(*puVar1,*puVar1);
  return;
}




void FUN_00102266(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102578(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00104457(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00102626(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103092(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102b46(local_80);
      local_60 = FUN_00102f20(&local_88,&local_78);
      local_70 = FUN_00103182(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102516(local_80);
                    /* try { // try from 00102930 to 001029bb has its CatchHandler @ 00102a73 */
      FUN_0010305d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102516(local_80);
      puVar2 = (undefined8 *)FUN_00102578(&local_88);
      local_70 = FUN_001031b9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102516(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102578(&local_88);
      local_70 = FUN_001031b9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102516(local_80);
      FUN_00102528(*local_80,local_80[1],uVar1);
      FUN_001024dc(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102e6e(local_38,param_1,param_4);
                    /* try { // try from 001026b0 to 00102883 has its CatchHandler @ 00102a55 */
      local_50 = FUN_00102f02(local_38);
      local_78 = FUN_00102216(local_80);
      local_48 = FUN_00102f20(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102516(local_80);
        FUN_00102f64(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00102578(&local_88);
        FUN_00102fbc(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102578(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102578(&local_88);
        FUN_0010300c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102516(local_80);
        lVar4 = FUN_0010305d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102516(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102578(&local_88);
        FUN_00102f64(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102578(&local_88);
        FUN_0010300c(*puVar2,local_40,local_50);
      }
      FUN_00102ece(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e28(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fb7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102ce8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102e3a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104209(void)

{
  return 0;
}




void FUN_001042a0(void)

{
  return;
}




void FUN_00102e0f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103355(param_1,param_2);
  return;
}




void FUN_00101d9f(void)

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
  FUN_00102110(local_c8);
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
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
                    /* try { // try from 00101ef3 to 00101fb8 has its CatchHandler @ 00102010 */
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00102216(local_c8);
  FUN_00102266(local_a8,&local_e0);
  FUN_00102294(local_c8,local_a8[0],1,&local_e8);
  FUN_0010235a(local_a8,local_c8);
                    /* try { // try from 00101fc3 to 00101fc7 has its CatchHandler @ 00101ff8 */
  FUN_00101839(local_a8);
  FUN_001021ce(local_a8);
  FUN_001021ce(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103478(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e53(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void * FUN_00103c17(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103a92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103b83(param_2);
  uVar2 = FUN_00103b83(param_1);
  FUN_00103ba9(uVar2,uVar1,param_3);
  return;
}




void FUN_001042e2(void)

{
  return;
}




undefined8 FUN_001033f7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b83(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103c7a(&local_10);
  FUN_00103478(uVar1);
  return;
}




void FUN_001035d3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103822(param_1,param_2,0);
  return;
}




undefined8 FUN_0010337e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102dce(void)

{
  return;
}




void FUN_001038b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a92(param_1,param_2,param_3);
  return;
}




void FUN_00103f2b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103b4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103c17(param_1,param_2,param_3);
  return;
}




void FUN_00103d27(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001025e1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102e5c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102e5c(param_2);
  return lVar1 - *plVar2 >> 3;
}




ulong FUN_0010411b(long param_1,ulong param_2,long param_3)

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




void * FUN_00103cc4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001031b9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103601(param_2);
  uVar2 = FUN_00103601(param_1);
  FUN_00103443(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102040(void)

{
  FUN_00101b41();
  FUN_00101d9f();
  return;
}




long FUN_00103368(long param_1)

{
  return param_1 + 8;
}




void FUN_00103788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010395f(param_1,param_2,param_3);
  return;
}




void FUN_001020f0(undefined8 param_1)

{
  FUN_00102130(param_1);
  return;
}



