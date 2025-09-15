
void FUN_00103502(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bf4(param_1);
  FUN_0010373d(uVar1);
  return;
}




void FUN_001036c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010386d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010417e(void)

{
  return 1;
}




void FUN_00103931(undefined8 param_1)

{
  FUN_0010397e(param_1);
  return;
}




void FUN_0010368c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010383c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102de0(undefined8 param_1)

{
  return param_1;
}




void FUN_001032b2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010337b(param_2);
  uVar2 = FUN_0010337b(param_1);
  FUN_001033c7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d2b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ac5(void)

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
  FUN_00102094(local_c8);
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
  local_d0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_d0);
                    /* try { // try from 00101bd6 to 00101c9b has its CatchHandler @ 00101cf3 */
  FUN_00102218(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_d0);
  FUN_00102218(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_d0);
  FUN_00102218(local_c8,local_a8[0],1,&local_d8);
  FUN_001022de(local_a8,local_c8);
                    /* try { // try from 00101ca6 to 00101caa has its CatchHandler @ 00101cdb */
  FUN_0010162d(local_a8);
  FUN_00102152(local_a8);
  FUN_00102152(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101fd9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103cab("Calling good()...");
  FUN_00101fc4();
  FUN_00103cab("Finished good()");
  FUN_00103cab("Calling bad()...");
  FUN_00101824();
  FUN_00103cab("Finished bad()");
  return 0;
}




void FUN_00103222(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103106(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_0010162d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101800(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_00103cab(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102100(long *param_1)

{
  FUN_00102460(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00102054(param_1);
  return;
}




void FUN_001031ec(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c2(param_1,param_2);
  FUN_0010241e(param_1);
  return;
}




void FUN_00104496(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103106(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103557(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104250(void)

{
  return;
}




long FUN_001032ec(long param_1)

{
  return param_1 + 8;
}




void FUN_001037a6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010397e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103a16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103b07(param_2);
  uVar2 = FUN_00103b07(param_1);
  FUN_00103b2d(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102cc4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102dbe(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001021ea(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001024fc(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_001036f6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102ba3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103195(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102aca(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024da(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020b4(undefined8 param_1)

{
  FUN_001023fe(param_1);
  FUN_0010241e(param_1);
  return;
}




void FUN_00103c13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103c48(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103195(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c2(param_1,param_2);
  return param_1;
}




void FUN_00103e87(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001044b5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




int FUN_0010419c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001022de(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102bf4(param_2);
  FUN_00102ba3(&local_31,uVar1);
  uVar1 = FUN_00102b7c(param_2);
                    /* try { // try from 00102344 to 00102348 has its CatchHandler @ 001023b1 */
  FUN_00102c06(param_1,uVar1,&local_31);
  FUN_001020e0(&local_31);
  uVar2 = FUN_0010249a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102cc4(param_2);
  uVar4 = FUN_00102c6c(param_2);
                    /* try { // try from 00102392 to 00102396 has its CatchHandler @ 001023cf */
  uVar1 = FUN_00102d1c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b07(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103bfe(&local_10);
  FUN_001033fc(uVar1);
  return;
}




ulong * FUN_0010394f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010337b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010366e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103616(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103302(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010203e(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001041b6(void)

{
  return;
}




void FUN_0010365a(void)

{
  return;
}




void FUN_00103dac(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010373d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103931(param_1);
  puVar1 = (undefined8 *)FUN_0010394f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010313d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103585(param_2);
  uVar2 = FUN_00103585(param_1);
  FUN_001033c7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001031c2(undefined8 param_1,undefined8 param_2)

{
  FUN_001035d2(param_1,param_2);
  return;
}




void FUN_00102074(undefined8 param_1)

{
  FUN_001020b4(param_1);
  return;
}




void FUN_0010348e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_001042b3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010427c,local_18);
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




long FUN_00102b7c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




ulong * FUN_00103528(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103d03(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102e86(undefined8 param_1)

{
  FUN_001032ec(param_1);
  return;
}




void FUN_00104245(void)

{
  return;
}




long FUN_00102ea4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001024fc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001024fc(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010327c(param_1,param_2,param_3);
  return;
}




void FUN_00104203(void)

{
  return;
}




void FUN_00102f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033fc(param_2);
  uVar2 = FUN_001033fc(param_1);
  FUN_0010340e(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00103f9b(long param_1,ulong param_2,long param_3)

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




void FUN_001038e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010347c(param_1);
  uVar1 = FUN_00103a66(uVar1,param_2,param_3);
  FUN_001036f6(&local_10,uVar1);
  return;
}




undefined8 FUN_0010397e(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_001024fc(undefined8 param_1)

{
  return param_1;
}




void FUN_001033c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368c(param_1,param_2,param_3);
  return;
}




void FUN_001041ed(void)

{
  return;
}




undefined8 FUN_00102b16(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001024da(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010370c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038e3(param_1,param_2,param_3);
  return;
}




void FUN_00102df2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103302(param_3);
  uVar2 = FUN_001032ec(param_1);
  FUN_00103314(*param_1,uVar2,uVar1);
  return;
}




bool FUN_00104380(pthread_t *param_1)

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




void FUN_00103eaf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035e5(param_1,param_2,param_3);
  return;
}




void FUN_00102d52(void)

{
  return;
}




void FUN_001041c1(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101800(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,(char *)*puVar1);
  FUN_00103cab(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103302(undefined8 param_1)

{
  return param_1;
}




void FUN_001037ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103996(param_2);
  uVar2 = FUN_00103996(param_1);
  FUN_001039a8(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103585(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010366e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010347c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e2d(undefined4 param_1)

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




void * FUN_00103b9b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
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




void FUN_00102fe1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034cc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010219a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024da(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dbe(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103eda(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001035e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001037ec(param_1,param_2,param_3);
  return;
}




void FUN_00101711(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101800(param_1,2);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  snprintf(local_78,99,"%s",*puVar1);
  FUN_00103cab(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001041e2(void)

{
  return;
}




void FUN_00103cab(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010422f(void)

{
  return;
}




undefined8 FUN_00103996(undefined8 param_1)

{
  return param_1;
}




void FUN_001041cc(void)

{
  return;
}




undefined8 FUN_001033fc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102bf4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010347c(param_2);
  uVar2 = FUN_0010347c(param_1);
  FUN_0010348e(uVar2,uVar1,param_3);
  return;
}




void FUN_0010366e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001043db(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010427c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010241e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103f08(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_0010409f(long param_1,ulong param_2,long param_3)

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




void FUN_001041d7(void)

{
  return;
}




void FUN_001023fe(undefined8 param_1)

{
  FUN_00102d52(param_1);
  return;
}




void FUN_00103dd7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001032d9(void)

{
  return;
}




void FUN_001025aa(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103016(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102aca(local_80);
      local_60 = FUN_00102ea4(&local_88,&local_78);
      local_70 = FUN_00103106(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010249a(local_80);
                    /* try { // try from 001028b4 to 0010293f has its CatchHandler @ 001029f7 */
      FUN_00102fe1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010249a(local_80);
      puVar2 = (undefined8 *)FUN_001024fc(&local_88);
      local_70 = FUN_0010313d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_0010249a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001024fc(&local_88);
      local_70 = FUN_0010313d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010249a(local_80);
      FUN_001024ac(*local_80,local_80[1],uVar1);
      FUN_00102460(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102df2(local_38,param_1,param_4);
                    /* try { // try from 00102634 to 00102807 has its CatchHandler @ 001029d9 */
      local_50 = FUN_00102e86(local_38);
      local_78 = FUN_0010219a(local_80);
      local_48 = FUN_00102ea4(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010249a(local_80);
        FUN_00102ee8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001024fc(&local_88);
        FUN_00102f40(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001024fc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001024fc(&local_88);
        FUN_00102f90(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_0010249a(local_80);
        lVar4 = FUN_00102fe1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010249a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001024fc(&local_88);
        FUN_00102ee8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001024fc(&local_88);
        FUN_00102f90(*puVar2,local_40,local_50);
      }
      FUN_00102e52(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ad2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103b9b(param_1,param_2,param_3);
  return;
}




void FUN_0010420e(void)

{
  return;
}




void FUN_001044e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void * FUN_00103c48(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_0010249a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ec(param_1,param_3);
                    /* try { // try from 00102c40 to 00102c44 has its CatchHandler @ 00102c47 */
  FUN_00103222(param_1,param_2);
  return;
}




void FUN_00104271(void)

{
  return;
}




void FUN_0010383c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a16(param_1,param_2,param_3);
  return;
}




void FUN_0010340e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010347c(param_3);
  uVar2 = FUN_0010347c(local_28);
  uVar3 = FUN_0010347c(local_20);
  uVar1 = FUN_001036c1(uVar3,uVar2,uVar1);
  FUN_001036f6(&local_30,uVar1);
  return;
}




void FUN_00103d81(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d93(param_1,param_2);
  return;
}




void FUN_00103e02(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001039a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010347c(param_3);
  uVar2 = FUN_00103ab1(local_28);
  uVar3 = FUN_00103ab1(local_20);
  uVar1 = FUN_00103ad2(uVar3,uVar2,uVar1);
  FUN_001036f6(&local_30,uVar1);
  return;
}




void FUN_00103cd1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102c6c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102dbe(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103016(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103502(param_1);
  lVar2 = FUN_00102b7c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102b7c(local_40);
  local_30 = FUN_00102b7c(local_40);
  plVar3 = (long *)FUN_00103528(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102b7c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103502(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103502(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00102565(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102de0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102de0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103351(undefined8 param_1,undefined8 param_2)

{
  FUN_0010365a(param_1,param_2);
  return;
}




undefined8 FUN_001043fe(undefined8 *param_1)

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




void FUN_001034cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010370c(param_1,param_2,param_3);
  return;
}




void FUN_001024da(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001035d2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102d61(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103bfe(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102460(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102d61(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




void FUN_00104477(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010423a(void)

{
  return;
}




void FUN_001041f8(void)

{
  return;
}




void FUN_00103b2d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010347c(param_3);
  uVar2 = FUN_0010347c(local_28);
  uVar3 = FUN_0010347c(local_20);
  uVar1 = FUN_00103c13(uVar3,uVar2,uVar1);
  FUN_001036f6(&local_30,uVar1);
  return;
}




void FUN_00104224(void)

{
  return;
}




void FUN_00103d57(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102152(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010249a(param_1);
  FUN_001024ac(*param_1,param_1[1],uVar1);
  FUN_00102100(param_1);
  return;
}




void FUN_00102218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010250e(param_1);
  local_18 = FUN_00102565(&local_38,&local_20);
  local_20 = FUN_00102aca(local_30);
  uVar1 = FUN_00102b16(&local_20,local_18);
  FUN_001025aa(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102aca(local_30);
  FUN_00102b16(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102450(void)

{
  return;
}




undefined8 FUN_00103ab1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102de0(&local_10);
  return *puVar1;
}




void FUN_00103557(undefined8 param_1,undefined8 param_2)

{
  FUN_001037a6(param_1,param_2,0);
  return;
}




void FUN_00101d23(void)

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
  FUN_00102094(local_c8);
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
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
                    /* try { // try from 00101e77 to 00101f3c has its CatchHandler @ 00101f94 */
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  FUN_001022de(local_a8,local_c8);
                    /* try { // try from 00101f47 to 00101f4b has its CatchHandler @ 00101f7c */
  FUN_00101711(local_a8);
  FUN_00102152(local_a8);
  FUN_00102152(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010418d(void)

{
  return 0;
}




void FUN_00104550(void)

{
  return;
}




void FUN_00101824(void)

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
  FUN_00102094(local_c8);
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
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
                    /* try { // try from 00101978 to 00101a3d has its CatchHandler @ 00101a95 */
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_0010219a(local_c8);
  FUN_001021ea(local_a8,&local_e0);
  FUN_00102218(local_c8,local_a8[0],1,&local_e8);
  FUN_001022de(local_a8,local_c8);
                    /* try { // try from 00101a48 to 00101a4c has its CatchHandler @ 00101a7d */
  FUN_00101549(local_a8);
  FUN_00102152(local_a8);
  FUN_00102152(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102094(undefined8 param_1)

{
  FUN_00102074(param_1);
  return;
}




void FUN_00104219(void)

{
  return;
}




void FUN_00104266(void)

{
  return;
}




void FUN_00103314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103302(param_3);
  FUN_00103616(param_1,param_2,uVar1);
  return;
}




void FUN_00102054(undefined8 param_1)

{
  FUN_001020e0(param_1);
  return;
}




void FUN_0010425b(void)

{
  return;
}




long FUN_00101800(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




long FUN_0010386d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010203e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d93(undefined8 param_1,undefined8 param_2)

{
  FUN_001032d9(param_1,param_2);
  return;
}




undefined8 FUN_0010250e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102dbe(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fc4(void)

{
  FUN_00101ac5();
  FUN_00101d23();
  return;
}




undefined8 * FUN_00103a66(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103f3b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001020e0(undefined8 param_1)

{
  FUN_00102450(param_1);
  return;
}




void FUN_00102e52(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032ec(param_1);
  FUN_00103351(*param_1,uVar1);
  return;
}



