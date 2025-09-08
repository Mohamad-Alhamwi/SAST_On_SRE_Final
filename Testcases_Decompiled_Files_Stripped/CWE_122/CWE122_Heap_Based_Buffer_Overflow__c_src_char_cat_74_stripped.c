
void FUN_00102304(undefined8 param_1)

{
  FUN_0010290e(param_1);
  return;
}




void FUN_00103fe4(void)

{
  return;
}




void FUN_00104047(void)

{
  return;
}




void FUN_0010253a(undefined8 param_1)

{
  FUN_00102081(param_1);
  return;
}




long FUN_001030ed(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103b62(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102842(long param_1)

{
  FUN_00102a90(param_1 + 0x20);
  return;
}




long FUN_00102524(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010180e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ac8(param_1,param_2);
  return;
}




void FUN_00101be2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010235a(param_2);
  uVar1 = FUN_00102378(uVar1);
  FUN_0010238a(param_1,uVar1);
  return;
}




ulong FUN_00103d7c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104277(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102c25(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018c4(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101b98(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b76(long param_1)

{
  FUN_00102304(param_1 + 0x20);
  return;
}




undefined8 FUN_00103f6e(void)

{
  return 0;
}




void FUN_00103c90(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103f5f(void)

{
  return 1;
}




void FUN_00103fb8(void)

{
  return;
}




void FUN_00104296(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103690(void)

{
  return;
}




undefined8
FUN_00101982(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c46(param_5);
  uVar2 = FUN_00101c34(param_4);
  uVar3 = FUN_00101c22(param_3);
  local_40 = FUN_00101c58(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019fe to 00101a41 has its CatchHandler @ 00101a7f */
  uVar1 = FUN_00102081(local_40);
  local_38 = FUN_00101cd8(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021be(param_1,local_40);
    FUN_001021fc(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020d4(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_0010346e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fef(void)

{
  return;
}




undefined8 FUN_00101c34(undefined8 param_1)

{
  return param_1;
}




void FUN_00104340(void)

{
  return;
}




undefined8 FUN_00104094(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010405d,local_18);
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




void FUN_00103c0e(undefined4 param_1)

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




void FUN_0010274c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e6(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e6(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103e80(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010290e(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102558(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029e6(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_0010398e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016b9(0x30,param_2);
  uVar1 = FUN_00103930(param_3);
  uVar2 = FUN_00101b76(param_2);
  uVar3 = FUN_00102936(param_1);
  FUN_001039fc(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102a90(undefined8 param_1)

{
  FUN_00102c38(param_1);
  return;
}




undefined8 FUN_001036a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101b18(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d33(undefined8 param_1)

{
  FUN_00102d51(param_1);
  return;
}




void FUN_00103ae4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103144(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103ffa(void)

{
  return;
}




void FUN_00102976(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c46(param_5);
  uVar2 = FUN_00101c34(param_4);
  uVar3 = FUN_00101c22(param_3);
  FUN_00102b5a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103a8c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102864(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102081(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102842(param_1);
  FUN_00102864(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010401b(void)

{
  return;
}




void FUN_001023e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016b9(0x30,param_2);
  uVar1 = FUN_00101c46(param_5);
  uVar2 = FUN_00101c34(param_4);
  uVar3 = FUN_00101c22(param_3);
  uVar4 = FUN_00101b76(param_2);
  uVar5 = FUN_00102936(param_1);
                    /* try { // try from 0010246f to 00102473 has its CatchHandler @ 00102476 */
  FUN_00102976(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103184(undefined8 param_1)

{
  FUN_0010326a(param_1);
  return;
}




undefined8 FUN_001024be(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fc(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c5e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00102736(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104010(void)

{
  return;
}




void FUN_00101ac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102230(param_1);
  uVar2 = FUN_0010221a(param_1);
  FUN_00102246(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101b68(void)

{
  return;
}




long FUN_00102230(long param_1)

{
  return param_1 + 8;
}




void FUN_0010355e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103690(param_1,param_2);
  return;
}




void FUN_00102322(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b98(param_2);
  FUN_0010238a(param_1,uVar1);
  return;
}




void FUN_00102b5a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c22(param_3);
  uVar1 = FUN_00101c34(param_4);
  FUN_001018fe(local_38,uVar1);
  FUN_00101c46(param_5);
  uVar1 = FUN_001016b9(0x10,param_2);
                    /* try { // try from 00102be2 to 00102be6 has its CatchHandler @ 00102be9 */
  FUN_00102c9e(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_0010187c(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b68(param_1);
  return unaff_EBX;
}




void FUN_001033fe(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010350d(param_1,param_2);
  FUN_00103588(param_1,param_2);
  FUN_0010311a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fd9(void)

{
  return;
}




void FUN_00103cbb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104005(void)

{
  return;
}




void FUN_001018a2(undefined8 *param_1)

{
  FUN_00101b76(*param_1);
  return;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_001016e2(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcat(local_48,local_50);
  FUN_00103a8c(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010328a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221a(param_1);
  FUN_00103394(param_1,uVar1);
  FUN_00103184(param_1);
  return;
}




undefined8 FUN_001018eb(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010305b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a8c("Calling good()...");
  FUN_0010304b();
  FUN_00103a8c("Finished good()");
  FUN_00103a8c("Calling bad()...");
  FUN_00102d6f();
  FUN_00103a8c("Finished bad()");
  return 0;
}




void FUN_00102802(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e6(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010287a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b76(param_2);
  uVar2 = FUN_00102936(param_1);
  FUN_00102aae(uVar2,uVar1);
  return;
}




void FUN_00103ab2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8
FUN_001020d4(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102230(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010253a(param_3);
      uVar5 = FUN_00102081(param_4);
      cVar1 = FUN_001018c4(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102158;
      }
    }
  }
  bVar2 = true;
LAB_00102158:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021fc(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010322e(long param_1)

{
  FUN_00103354(param_1);
  FUN_00103374(param_1);
  FUN_0010311a(param_1 + 8);
  return;
}




void FUN_00103b0c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001042d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010405d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102598(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_0010221a(param_1);
  local_50 = FUN_00102230(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102081(local_58);
    local_59 = FUN_001018c4(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027c0(local_58);
    }
    else {
      local_58 = FUN_001028f8(local_58);
    }
  }
  FUN_001021fc(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029f8(param_1);
    cVar1 = FUN_00101856(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a48(local_38,&local_58,&local_50);
      goto LAB_0010271a;
    }
    FUN_00102794(&local_48);
  }
  uVar2 = FUN_0010253a(local_48);
  cVar1 = FUN_001018c4(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102802(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a48(local_38,&local_58,&local_50);
  }
LAB_0010271a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103fad(void)

{
  return;
}




void FUN_00103a3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103930(param_3);
  puVar3 = (undefined8 *)FUN_001016b9(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00101838(undefined8 param_1)

{
  FUN_00101b18(param_1);
  return;
}




void FUN_00103588(void)

{
  return;
}




void FUN_00102d51(undefined8 param_1)

{
  FUN_0010235a(param_1);
  return;
}




undefined4 * FUN_00103866(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102842(param_2);
  puVar2 = (undefined4 *)FUN_001038f6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101baa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b98(param_2);
  FUN_00102322(param_1,uVar1);
  return;
}




void FUN_00101601(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_001016e2(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcat(local_48,local_50);
  FUN_00103a8c(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031a4(undefined8 param_1)

{
  FUN_0010322e(param_1);
  return;
}




undefined8 FUN_00101c46(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fce(void)

{
  return;
}




undefined8 * FUN_00102794(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102378(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010221a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cf0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d33(param_2);
  puVar2 = (undefined4 *)FUN_00102378(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c68(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029f8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fc(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f97(void)

{
  return;
}




undefined8 FUN_00101928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b98(param_2);
  FUN_00101baa(param_1,uVar1);
  return param_1;
}




long FUN_001016e2(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_0010180e(param_1,param_2);
  local_28 = FUN_00101838(param_1);
  cVar2 = FUN_00101856(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010187c(param_1);
    uVar3 = FUN_001018a2(&local_38);
    cVar2 = FUN_001018c4(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101782;
    }
  }
  bVar1 = true;
LAB_00101782:
  if (bVar1) {
    uVar3 = FUN_001018eb(param_2);
    FUN_00101928(local_30,uVar3);
    FUN_00101960(&local_28,&local_38);
    local_38 = FUN_00101982(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018a2(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102d6f(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031c4(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102dfb to 00102e64 has its CatchHandler @ 00102eb0 */
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  FUN_00103204(local_58,local_88);
                    /* try { // try from 00102e6c to 00102e70 has its CatchHandler @ 00102e9b */
  FUN_00101549(local_58);
  FUN_001031e4(local_58);
  FUN_001031e4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001023b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102936(param_1);
  FUN_00102948(uVar1,1);
  return;
}




void FUN_00103847(undefined8 param_1)

{
  FUN_001030ed(param_1);
  return;
}




void FUN_00103fa2(void)

{
  return;
}




void FUN_00104258(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103204(undefined8 param_1,undefined8 param_2)

{
  FUN_001032c8(param_1,param_2);
  return;
}




void FUN_00102ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c5e(param_1,param_2,param_3);
  return;
}




void FUN_00103384(void)

{
  return;
}




void FUN_001028be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102936(param_1);
  FUN_00102ad8(uVar1,param_2,1);
  return;
}




void FUN_001031c4(undefined8 param_1)

{
  FUN_001031a4(param_1);
  return;
}




void FUN_001021be(undefined8 param_1,undefined8 param_2)

{
  FUN_0010287a(param_1,param_2);
  FUN_001028be(param_1,param_2);
  return;
}




void FUN_001018fe(undefined8 param_1,undefined8 param_2)

{
  FUN_00101be2(param_1,param_2);
  return;
}




undefined8 FUN_0010250e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010359c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010350d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103662(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102edd(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031c4(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f69 to 00102fd2 has its CatchHandler @ 0010301e */
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_001016e2(local_88,local_58);
  *puVar1 = __s;
  FUN_00103204(local_58,local_88);
                    /* try { // try from 00102fda to 00102fde has its CatchHandler @ 00103009 */
  FUN_00101601(local_58);
  FUN_001031e4(local_58);
  FUN_001031e4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_001030c0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103fc3(void)

{
  return;
}




bool FUN_00104161(pthread_t *param_1)

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




void FUN_001031e4(undefined8 param_1)

{
  FUN_0010328a(param_1);
  return;
}




void FUN_00103bb8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103930(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c86(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101c22(undefined8 param_1)

{
  return param_1;
}




void FUN_001039fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103930(param_3);
  FUN_00103a3a(param_1,param_2,uVar1);
  return;
}




void FUN_00102948(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b0a(param_1,param_2,0);
  return;
}




void FUN_001032c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033fe(param_1,param_2);
  lVar1 = FUN_0010346e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103484(param_1);
                    /* try { // try from 00103323 to 00103327 has its CatchHandler @ 0010332d */
    uVar3 = FUN_0010349a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_001036ba(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103866(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038ca(param_2);
                    /* try { // try from 00103729 to 001037bb has its CatchHandler @ 001037e7 */
    uVar2 = FUN_001036ba(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038e0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103866(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038ca(local_38);
      uVar2 = FUN_001036ba(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038e0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102aae(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4a(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103b38(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001034fe(void)

{
  return;
}




undefined8 FUN_001038e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001027c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001021fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c4a(void)

{
  return;
}




void FUN_00103b8d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c9e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cf0(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001028f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b0a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c86(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101960(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




int FUN_00103f7d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_001024be(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102230(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010253a(local_50);
    cVar2 = FUN_001018c4(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010253a(local_50);
      cVar2 = FUN_001018c4(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102802(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102524(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102524(local_60);
          local_48[1] = 0;
          FUN_00102558(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027d6(local_48);
          uVar6 = FUN_0010253a(*puVar5);
          cVar2 = FUN_001018c4(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102598(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027c0(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102558(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010274c(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102736(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102736(local_60);
        uVar6 = FUN_00102736(local_60);
        FUN_0010274c(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102794(local_48);
        uVar6 = FUN_0010253a(*puVar5);
        cVar2 = FUN_001018c4(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102598(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027c0(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102558(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010274c(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102066;
  }
  lVar3 = FUN_0010250e(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d7a:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102524(local_60);
    uVar6 = FUN_0010253a(*puVar5);
    cVar2 = FUN_001018c4(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d7a;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102524(local_60);
    local_48[1] = 0;
    FUN_00102558(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102598(local_60,param_3);
  }
LAB_00102066:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001035ba(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102230(param_1);
  uVar2 = FUN_001036a4(param_2);
  uVar1 = FUN_001036ba(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102736(param_1);
  uVar2 = FUN_00103829(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102524(param_1);
  uVar2 = FUN_00103847(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104026(void)

{
  return;
}




undefined8 FUN_001038ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102246(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00102081(local_38);
    cVar1 = FUN_001018c4(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027c0(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028f8(local_38);
    }
  }
  FUN_001021fc(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001041df(undefined8 *param_1)

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




undefined8 FUN_00103942(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023b4(param_1);
  uVar2 = FUN_00103930(param_2);
  FUN_0010398e(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103be3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010238a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b98(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001016b9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c25(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e6(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104052(void)

{
  return;
}




undefined8 FUN_00103662(undefined8 param_1,undefined8 param_2)

{
  FUN_0010355e(param_1,param_2);
  return param_1;
}




void FUN_00103394(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027c0(local_28);
    FUN_00103394(param_1,uVar1);
    lVar2 = FUN_001028f8(local_28);
    FUN_001021be(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010326a(undefined8 param_1)

{
  FUN_00103384(param_1);
  return;
}




void FUN_00103d1c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001029e6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103374(void)

{
  return;
}




undefined8 FUN_00102c38(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102936(undefined8 param_1)

{
  return param_1;
}




void FUN_0010235a(undefined8 param_1)

{
  FUN_00102920(param_1);
  return;
}




undefined8 FUN_001041bc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010311a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103144(param_1);
  return;
}




void FUN_00103829(undefined8 param_1)

{
  FUN_001030c0(param_1);
  return;
}




void FUN_00103354(undefined8 param_1)

{
  FUN_001034fe(param_1);
  return;
}




void FUN_0010349a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010359c(local_18,param_1);
  FUN_001035ba(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023b4(param_1);
  uVar2 = FUN_00101c46(param_4);
  uVar3 = FUN_00101c34(param_3);
  uVar4 = FUN_00101c22(param_2);
  FUN_001023e0(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_0010403c(void)

{
  return;
}




void FUN_001038f6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103930(param_2);
  FUN_00103942(uVar1,uVar2);
  return;
}




long FUN_00103484(long param_1)

{
  return param_1 + 0x10;
}




undefined8 * FUN_001027d6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001016cf(void)

{
  return;
}




undefined8 FUN_00102920(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010304b(void)

{
  FUN_00102edd();
  return;
}




void FUN_00104031(void)

{
  return;
}




undefined8 FUN_00101856(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



