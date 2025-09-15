
void FUN_00102b81(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102c00(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c22(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




void FUN_0010402e(void)

{
  return;
}




void FUN_00101de4(void)

{
  FUN_001018e5();
  FUN_00101b43();
  return;
}




void FUN_00101644(void)

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
  FUN_00101eb4(local_c8);
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
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
                    /* try { // try from 00101798 to 0010185d has its CatchHandler @ 001018b5 */
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  FUN_001020fe(local_a8,local_c8);
                    /* try { // try from 00101868 to 0010186c has its CatchHandler @ 0010189d */
  FUN_00101549(local_a8);
  FUN_00101f72(local_a8);
  FUN_00101f72(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104018(void)

{
  return;
}




void FUN_0010400d(void)

{
  return;
}




void FUN_001037c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010329c(param_3);
  uVar2 = FUN_001038d1(local_28);
  uVar3 = FUN_001038d1(local_20);
  uVar1 = FUN_001038f2(uVar3,uVar2,uVar1);
  FUN_00103516(&local_30,uVar1);
  return;
}




void FUN_00103fe1(void)

{
  return;
}




undefined8 * FUN_00103886(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001035c6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010379e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102fe2(undefined8 param_1,undefined8 param_2)

{
  FUN_001033f2(param_1,param_2);
  return;
}




void FUN_00104044(void)

{
  return;
}




long FUN_0010368d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010232e(param_1);
  local_18 = FUN_00102385(&local_38,&local_20);
  local_20 = FUN_001028ea(local_30);
  uVar1 = FUN_00102936(&local_20,local_18);
  FUN_001023ca(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001028ea(local_30);
  FUN_00102936(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102f26(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103377(param_1,param_2);
  }
  return uVar1;
}




long FUN_00102cc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010231c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010231c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103703(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010329c(param_1);
  uVar1 = FUN_00103886(uVar1,param_2,param_3);
  FUN_00103516(&local_10,uVar1);
  return;
}




undefined8 FUN_0010231c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103122(param_3);
  FUN_00103436(param_1,param_2,uVar1);
  return;
}




void FUN_00103c4d(undefined4 param_1)

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




undefined8 FUN_0010379e(void)

{
  return 0xfffffffffffffff;
}




void FUN_0010347a(void)

{
  return;
}




void FUN_00103171(undefined8 param_1,undefined8 param_2)

{
  FUN_0010347a(param_1,param_2);
  return;
}




void FUN_0010394d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010329c(param_3);
  uVar2 = FUN_0010329c(local_28);
  uVar3 = FUN_0010329c(local_20);
  uVar1 = FUN_00103a33(uVar3,uVar2,uVar1);
  FUN_00103516(&local_30,uVar1);
  return;
}




void FUN_00102b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010309c(param_1,param_2,param_3);
  return;
}




void FUN_00101e94(undefined8 param_1)

{
  FUN_00101ed4(param_1);
  return;
}




void FUN_00102d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010321c(param_2);
  uVar2 = FUN_0010321c(param_1);
  FUN_0010322e(uVar2,uVar1,param_3);
  return;
}




void FUN_0010322e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010329c(param_3);
  uVar2 = FUN_0010329c(local_28);
  uVar3 = FUN_0010329c(local_20);
  uVar1 = FUN_001034e1(uVar3,uVar2,uVar1);
  FUN_00103516(&local_30,uVar1);
  return;
}




void FUN_00103ff7(void)

{
  return;
}




undefined8 FUN_001041fb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102bb3(undefined8 param_1,undefined8 param_2)

{
  FUN_001030f9(param_1,param_2);
  return;
}




void FUN_00102d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010319b(param_2);
  uVar2 = FUN_0010319b(param_1);
  FUN_001031e7(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_001029c3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102fb5(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001015d5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101620(param_1,2);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_00104297(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103b77(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104070(void)

{
  return;
}




void FUN_00102b72(void)

{
  return;
}




undefined8 FUN_0010355d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103751(param_1);
  puVar1 = (undefined8 *)FUN_0010376f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




long FUN_00101620(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00103a1e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103fec(void)

{
  return;
}




void FUN_00102db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010329c(param_2);
  uVar2 = FUN_0010329c(param_1);
  FUN_001032ae(uVar2,uVar1,param_3);
  return;
}




void FUN_00104002(void)

{
  return;
}




void FUN_0010221e(undefined8 param_1)

{
  FUN_00102b72(param_1);
  return;
}




void FUN_00104370(void)

{
  return;
}




void FUN_00102ca6(undefined8 param_1)

{
  FUN_0010310c(param_1);
  return;
}




void FUN_00103405(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010360c(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_0010365c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103836(param_1,param_2,param_3);
  return;
}




ulong FUN_00103ebf(long param_1,ulong param_2,long param_3)

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




void FUN_00103322(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a14(param_1);
  FUN_0010355d(uVar1);
  return;
}




void FUN_00103436(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103122(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101e5e(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102c12(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103122(param_3);
  uVar2 = FUN_0010310c(param_1);
  FUN_00103134(*param_1,uVar2,uVar1);
  return;
}




void FUN_001022cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb3(param_1,param_2);
  return;
}




void FUN_00103836(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103927(param_2);
  uVar2 = FUN_00103927(param_1);
  FUN_0010394d(uVar2,uVar1,param_3);
  return;
}




void FUN_001031e7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034ac(param_1,param_2,param_3);
  return;
}




void FUN_00103ca7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103f9e(void)

{
  return 1;
}




void FUN_00101eb4(undefined8 param_1)

{
  FUN_00101e94(param_1);
  return;
}




void FUN_001033f2(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101620(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_00102fb5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fe2(param_1,param_2);
  return param_1;
}




void FUN_001030d2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001042b6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010319b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010348e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010407b(void)

{
  return;
}




void FUN_001038f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001039bb(param_1,param_2,param_3);
  return;
}




void FUN_0010158f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101620(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




bool FUN_001041a0(pthread_t *param_1)

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




void FUN_00102f5d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033a5(param_2);
  uVar2 = FUN_001033a5(param_1);
  FUN_001031e7(uVar2,uVar1,param_3,param_4);
  return;
}




ulong * FUN_00103348(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101f72(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022ba(param_1);
  FUN_001022cc(*param_1,param_1[1],uVar1);
  FUN_00101f20(param_1);
  return;
}




void FUN_00102270(void)

{
  return;
}




void FUN_00103cfa(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00103dbb(long param_1,ulong param_2,long param_3)

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




void FUN_001018e5(void)

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
  FUN_00101eb4(local_c8);
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
  local_d0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_d0);
                    /* try { // try from 001019f6 to 00101abb has its CatchHandler @ 00101b13 */
  FUN_00102038(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_d0);
  FUN_00102038(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_d0);
  FUN_00102038(local_c8,local_a8[0],1,&local_d8);
  FUN_001020fe(local_a8,local_c8);
                    /* try { // try from 00101ac6 to 00101aca has its CatchHandler @ 00101afb */
  FUN_0010158f(local_a8);
  FUN_00101f72(local_a8);
  FUN_00101f72(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022fa(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103042(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102f26(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00104023(void)

{
  return;
}




void FUN_00103d28(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010404f(void)

{
  return;
}




void FUN_00104300(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00103122(undefined8 param_1)

{
  return param_1;
}




void * FUN_001039bb(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_0010299c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001038d1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102c00(&local_10);
  return *puVar1;
}




undefined8 FUN_001033a5(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010348e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010421e(undefined8 *param_1)

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




int FUN_00103fbc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001032ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010352c(param_1,param_2,param_3);
  return;
}




void FUN_00103ccf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103516(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001040d3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010409c,local_18);
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




void FUN_001030f9(void)

{
  return;
}




ulong FUN_00102e36(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103322(param_1);
  lVar2 = FUN_0010299c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010299c(local_40);
  local_30 = FUN_0010299c(local_40);
  plVar3 = (long *)FUN_00103348(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010299c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103322(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103322(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010300c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fe2(param_1,param_2);
  FUN_0010223e(param_1);
  return;
}




void FUN_00103b4b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010409c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong * FUN_0010376f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void * FUN_00103a68(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00104086(void)

{
  return;
}




void FUN_001032ae(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103fad(void)

{
  return 0;
}




undefined8 FUN_0010232e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102bde(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010300c(param_1,param_3);
                    /* try { // try from 00102a60 to 00102a64 has its CatchHandler @ 00102a67 */
  FUN_00103042(param_1,param_2);
  return;
}




void FUN_00103acb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103ba1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101df9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103acb("Calling good()...");
  FUN_00101de4();
  FUN_00103acb("Finished good()");
  FUN_00103acb("Calling bad()...");
  FUN_00101644();
  FUN_00103acb("Finished bad()");
  return 0;
}




void FUN_00103a33(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a68(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102936(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001022fa(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010309c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103405(param_1,param_2,param_3);
  return;
}




void FUN_00103927(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103a1e(&local_10);
  FUN_0010321c(uVar1);
  return;
}




undefined8 FUN_0010321c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001037b6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101fba(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022fa(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104039(void)

{
  return;
}




void FUN_00102bde(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101f00(undefined8 param_1)

{
  FUN_00102270(param_1);
  return;
}




long FUN_00102385(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102c00(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102c00(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101b43(void)

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
  FUN_00101eb4(local_c8);
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
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
                    /* try { // try from 00101c97 to 00101d5c has its CatchHandler @ 00101db4 */
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101fba(local_c8);
  FUN_0010200a(local_a8,&local_e0);
  FUN_00102038(local_c8,local_a8[0],1,&local_e8);
  FUN_001020fe(local_a8,local_c8);
                    /* try { // try from 00101d67 to 00101d6b has its CatchHandler @ 00101d9c */
  FUN_001015d5(local_a8);
  FUN_00101f72(local_a8);
  FUN_00101f72(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042d5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001034ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010365c(param_1,param_2,param_3);
  return;
}




long FUN_0010310c(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001022ba(undefined8 param_1)

{
  return param_1;
}




void FUN_00104091(void)

{
  return;
}




void FUN_00102c72(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010310c(param_1);
  FUN_00103171(*param_1,uVar1);
  return;
}




void FUN_00103751(undefined8 param_1)

{
  FUN_0010379e(param_1);
  return;
}




void FUN_0010360c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001037b6(param_2);
  uVar2 = FUN_001037b6(param_1);
  FUN_001037c8(uVar2,uVar1,param_3);
  return;
}




void FUN_00103bcc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103bf7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001028ea(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022fa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368d(param_1,param_2,param_3);
  return;
}




void FUN_00103fd6(void)

{
  return;
}




void FUN_00104065(void)

{
  return;
}




void FUN_00103377(undefined8 param_1,undefined8 param_2)

{
  FUN_001035c6(param_1,param_2,0);
  return;
}




void FUN_0010223e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101ed4(undefined8 param_1)

{
  FUN_0010221e(param_1);
  FUN_0010223e(param_1);
  return;
}




undefined8 FUN_00102a8c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102bde(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020fe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102a14(param_2);
  FUN_001029c3(&local_31,uVar1);
  uVar1 = FUN_0010299c(param_2);
                    /* try { // try from 00102164 to 00102168 has its CatchHandler @ 001021d1 */
  FUN_00102a26(param_1,uVar1,&local_31);
  FUN_00101f00(&local_31);
  uVar2 = FUN_001022ba(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102ae4(param_2);
  uVar4 = FUN_00102a8c(param_2);
                    /* try { // try from 001021b2 to 001021b6 has its CatchHandler @ 001021ef */
  uVar1 = FUN_00102b3c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e5e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101e74(undefined8 param_1)

{
  FUN_00101f00(param_1);
  return;
}




void FUN_0010352c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103703(param_1,param_2,param_3);
  return;
}




void FUN_00102e01(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ec(param_1,param_2,param_3);
  return;
}




void FUN_00102280(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102b81(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101f20(long *param_1)

{
  FUN_00102280(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101e74(param_1);
  return;
}




void FUN_00103d5b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001023ca(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102e36(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001028ea(local_80);
      local_60 = FUN_00102cc4(&local_88,&local_78);
      local_70 = FUN_00102f26(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001022ba(local_80);
                    /* try { // try from 001026d4 to 0010275f has its CatchHandler @ 00102817 */
      FUN_00102e01(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001022ba(local_80);
      puVar2 = (undefined8 *)FUN_0010231c(&local_88);
      local_70 = FUN_00102f5d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001022ba(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010231c(&local_88);
      local_70 = FUN_00102f5d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001022ba(local_80);
      FUN_001022cc(*local_80,local_80[1],uVar1);
      FUN_00102280(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102c12(local_38,param_1,param_4);
                    /* try { // try from 00102454 to 00102627 has its CatchHandler @ 001027f9 */
      local_50 = FUN_00102ca6(local_38);
      local_78 = FUN_00101fba(local_80);
      local_48 = FUN_00102cc4(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001022ba(local_80);
        FUN_00102d08(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010231c(&local_88);
        FUN_00102d60(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010231c(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010231c(&local_88);
        FUN_00102db0(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001022ba(local_80);
        lVar4 = FUN_00102e01(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001022ba(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010231c(&local_88);
        FUN_00102d08(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010231c(&local_88);
        FUN_00102db0(*puVar2,local_40,local_50);
      }
      FUN_00102c72(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103af1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102ae4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102bde(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010348e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b23(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010405a(void)

{
  return;
}




undefined8 FUN_0010329c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010200a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010231c(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102a14(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}



