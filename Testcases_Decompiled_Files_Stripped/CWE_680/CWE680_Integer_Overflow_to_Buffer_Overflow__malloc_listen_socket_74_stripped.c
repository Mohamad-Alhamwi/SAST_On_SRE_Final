
void FUN_0010441e(long param_1)

{
  FUN_00104544(param_1);
  FUN_00104564(param_1);
  FUN_0010430a(param_1 + 8);
  return;
}




undefined8 FUN_0010465e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102d56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001034b2(param_1);
  uVar2 = FUN_00102d44(param_4);
  uVar3 = FUN_00102d32(param_3);
  uVar4 = FUN_00102d20(param_2);
  FUN_001034de(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00103d23(undefined8 param_1)

{
  return param_1;
}




void FUN_0010410a(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001043b4(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010415e to 001041c1 has its CatchHandler @ 0010420d */
  puVar1 = (undefined4 *)FUN_001027e0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001027e0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001027e0(local_88,local_58);
  *puVar1 = 0x14;
  FUN_001043f4(local_58,local_88);
                    /* try { // try from 001041c9 to 001041cd has its CatchHandler @ 001041f8 */
  FUN_001026f0(local_58);
  FUN_001043d4(local_58);
  FUN_001043d4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001048aa(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104a56(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104aba(param_2);
                    /* try { // try from 00104919 to 001049ab has its CatchHandler @ 001049d7 */
    uVar2 = FUN_001048aa(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104ad0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104a56(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104aba(local_38);
      uVar2 = FUN_001048aa(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104ad0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_001047aa(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010332e(param_1);
  uVar2 = FUN_00104894(param_2);
  uVar1 = FUN_001048aa(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103834(param_1);
  uVar2 = FUN_00104a19(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103622(param_1);
  uVar2 = FUN_00104a37(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001029fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ce0(param_1,param_2);
  return;
}




void FUN_00104b7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001027b7(0x28,param_2);
  uVar1 = FUN_00104b20(param_3);
  uVar2 = FUN_00102c74(param_2);
  uVar3 = FUN_00103a34(param_1);
  FUN_00104bec(uVar3,uVar2,uVar1);
  return;
}




long FUN_001042af(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00104a19(undefined8 param_1)

{
  FUN_001042af(param_1);
  return;
}




void FUN_00103dee(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103e30(param_2);
  puVar2 = (undefined4 *)FUN_00103476(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_0010424a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c71("Calling good()...");
  FUN_0010423a();
  FUN_00104c71("Finished good()");
  FUN_00104c71("Calling bad()...");
  FUN_00103e6c();
  FUN_00104c71("Finished bad()");
  return 0;
}




void FUN_00104394(undefined8 param_1)

{
  FUN_0010441e(param_1);
  return;
}




undefined8 FUN_00104852(undefined8 param_1,undefined8 param_2)

{
  FUN_0010474e(param_1,param_2);
  return param_1;
}




void FUN_00103900(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ae4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00104ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010360c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010445a(undefined8 param_1)

{
  FUN_00104574(param_1);
  return;
}




void FUN_00104f01(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104d72(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001053a1(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00104894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001046ee(void)

{
  return;
}




undefined8 FUN_00103d84(void)

{
  return 0x333333333333333;
}




void FUN_0010423a(void)

{
  FUN_0010410a();
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00103ae4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010543d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102954(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103940(long param_1)

{
  FUN_00103b8e(param_1 + 0x20);
  return;
}




void FUN_00102c74(long param_1)

{
  FUN_00103402(param_1 + 0x20);
  return;
}




void FUN_00103bd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d5c(param_1,param_2,param_3);
  return;
}




void FUN_0010317f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103940(param_1);
  FUN_00103962(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00105144(void)

{
  return 1;
}




void FUN_0010447a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103318(param_1);
  FUN_00104584(param_1,uVar1);
  FUN_00104374(param_1);
  return;
}




void FUN_001027cd(void)

{
  return;
}




void FUN_00103b8e(undefined8 param_1)

{
  FUN_00103d36(param_1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_00104564(void)

{
  return;
}




undefined8
FUN_001031d2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010332e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103638(param_3);
      uVar5 = FUN_0010317f(param_4);
      cVar1 = FUN_001029c2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103256;
      }
    }
  }
  bVar2 = true;
LAB_00103256:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001032fa(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_00102a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102d44(param_5);
  uVar2 = FUN_00102d32(param_4);
  uVar3 = FUN_00102d20(param_3);
  local_40 = FUN_00102d56(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102afc to 00102b3f has its CatchHandler @ 00102b7d */
  uVar1 = FUN_0010317f(local_40);
  local_38 = FUN_00102dd6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001032bc(param_1,local_40);
    FUN_001032fa(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001031d2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104544(undefined8 param_1)

{
  FUN_001046ee(param_1);
  return;
}




void FUN_001051d4(void)

{
  return;
}




long FUN_00103834(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00105192(void)

{
  return;
}




undefined8 FUN_001029e9(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_00104a56(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103940(param_2);
  puVar2 = (undefined4 *)FUN_00104ae6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_001035bc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032fa(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001043f4(undefined8 param_1,undefined8 param_2)

{
  FUN_001044b8(param_1,param_2);
  return;
}




void FUN_00103e30(undefined8 param_1)

{
  FUN_00103e4e(param_1);
  return;
}




void FUN_001044b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001045ee(param_1,param_2);
  lVar1 = FUN_0010465e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104674(param_1);
                    /* try { // try from 00104513 to 00104517 has its CatchHandler @ 0010451d */
    uVar3 = FUN_0010468a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00105187(void)

{
  return;
}




void FUN_00103420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c96(param_2);
  FUN_00103488(param_1,uVar1);
  return;
}




undefined8 FUN_00102d32(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105279(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105242,local_18);
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




void FUN_00104d9d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104b20(param_3);
  puVar2 = (undefined8 *)FUN_001027b7(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_0010545c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010519d(void)

{
  return;
}




void FUN_00105216(void)

{
  return;
}




void FUN_00104ae6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104b20(param_2);
  FUN_00104b32(uVar1,uVar2);
  return;
}




void FUN_00103bac(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d48(param_1,param_2);
  return;
}




void FUN_001051c9(void)

{
  return;
}




undefined8 FUN_00104b32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034b2(param_1);
  uVar2 = FUN_00104b20(param_2);
  FUN_00104b7e(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_0010547b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103344(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010317f(local_38);
    cVar1 = FUN_001029c2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001038be(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001039f6(local_38);
    }
  }
  FUN_001032fa(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103c08(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103d84(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00104880(void)

{
  return;
}




void FUN_0010468a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010478c(local_18,param_1);
  FUN_001047aa(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104374(undefined8 param_1)

{
  FUN_0010445a(param_1);
  return;
}




void FUN_00103b46(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d23(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103ae4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104d1d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104d47(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105242(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010384a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ae4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103ae4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102c96(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001039f6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_00105065(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010609c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001054b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104ece(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001032bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00103978(param_1,param_2);
  FUN_001039bc(param_1,param_2);
  return;
}




void FUN_001043d4(undefined8 param_1)

{
  FUN_0010447a(param_1);
  return;
}




void FUN_00104cf1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c66(void)

{
  return;
}




void FUN_00104ea0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103d9c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103dee(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104aba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010290c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc6(param_1,param_2);
  return;
}




void FUN_0010430a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104334(param_1);
  return;
}




int FUN_00105162(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00104b20(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c96(param_2);
  FUN_00103420(param_1,uVar1);
  return;
}




void FUN_001039bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a34(param_1);
  FUN_00103bd6(uVar1,param_2,1);
  return;
}




void FUN_00104334(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010478c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_0010332e(long param_1)

{
  return param_1 + 8;
}




void FUN_001029a0(undefined8 *param_1)

{
  FUN_00102c74(*param_1);
  return;
}




void FUN_001034b2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a34(param_1);
  FUN_00103a46(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




void FUN_001032fa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001051f5(void)

{
  return;
}




void FUN_001051b3(void)

{
  return;
}




void FUN_001051be(void)

{
  return;
}




undefined8 * FUN_00103892(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103696(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103318(param_1);
  local_50 = FUN_0010332e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010317f(local_58);
    local_59 = FUN_001029c2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001038be(local_58);
    }
    else {
      local_58 = FUN_001039f6(local_58);
    }
  }
  FUN_001032fa(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103af6(param_1);
    cVar1 = FUN_00102954(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103b46(local_38,&local_58,&local_50);
      goto LAB_00103818;
    }
    FUN_00103892(&local_48);
  }
  uVar2 = FUN_00103638(local_48);
  cVar1 = FUN_001029c2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103900(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103b46(local_38,&local_58,&local_50);
  }
LAB_00103818:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00105237(void)

{
  return;
}




void FUN_00102ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103458(param_2);
  uVar1 = FUN_00103476(uVar1);
  FUN_00103488(param_1,uVar1);
  return;
}




void FUN_00103e4e(undefined8 param_1)

{
  FUN_00103458(param_1);
  return;
}




undefined8 FUN_00102d44(undefined8 param_1)

{
  return param_1;
}




void FUN_001043b4(undefined8 param_1)

{
  FUN_00104394(param_1);
  return;
}




undefined8 FUN_001046fd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104852(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00105221(void)

{
  return;
}




undefined8 FUN_00103318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103d48(void)

{
  return;
}




void FUN_00103a46(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c08(param_1,param_2,0);
  return;
}




void FUN_0010517c(void)

{
  return;
}




void FUN_00102bc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010332e(param_1);
  uVar2 = FUN_00103318(param_1);
  FUN_00103344(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103af6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032fa(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027b7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104c97(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103458(undefined8 param_1)

{
  FUN_00103a1e(param_1);
  return;
}




undefined8 FUN_00103962(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_0010297a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102c66(param_1);
  return unaff_EBX;
}




void FUN_001051df(void)

{
  return;
}




void FUN_001051ea(void)

{
  return;
}




void FUN_00103c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d20(param_3);
  uVar1 = FUN_00102d32(param_4);
  FUN_001029fc(local_38,uVar1);
  FUN_00102d44(param_5);
  uVar1 = FUN_001027b7(8,param_2);
                    /* try { // try from 00103ce0 to 00103ce4 has its CatchHandler @ 00103ce7 */
  FUN_00103d9c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103656(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103ae4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010520b(void)

{
  return;
}




undefined8 FUN_00103a1e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102a5e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103d36(undefined8 param_1)

{
  return param_1;
}




void FUN_00104df3(undefined4 param_1)

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




undefined8 FUN_00102c16(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032fa(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




undefined4 FUN_001029c2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_001042dc(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104cc9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001038be(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104e75(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104574(void)

{
  return;
}




undefined8 FUN_00103a0c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104778(void)

{
  return;
}




void FUN_00103a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102d44(param_5);
  uVar2 = FUN_00102d32(param_4);
  uVar3 = FUN_00102d20(param_3);
  FUN_00103c58(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103d5c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




ulong FUN_00104f61(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102936(undefined8 param_1)

{
  FUN_00102c16(param_1);
  return;
}




void FUN_00104c71(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00104674(long param_1)

{
  return param_1 + 0x10;
}




undefined8 * FUN_001038d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001034de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001027b7(0x28,param_2);
  uVar1 = FUN_00102d44(param_5);
  uVar2 = FUN_00102d32(param_4);
  uVar3 = FUN_00102d20(param_3);
  uVar4 = FUN_00102c74(param_2);
  uVar5 = FUN_00103a34(param_1);
                    /* try { // try from 0010356d to 00103571 has its CatchHandler @ 00103574 */
  FUN_00103a74(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103402(undefined8 param_1)

{
  FUN_00103a0c(param_1);
  return;
}




void FUN_00104dc8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103e6c(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b8;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001043b4(local_a8);
  local_b8 = -1;
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_48,0x10);
                    /* try { // try from 00103f69 to 0010408b has its CatchHandler @ 001040da */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_b4 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_b4 != -1)) {
      sVar2 = recv(local_b4,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b8 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_b4 != -1) {
    close(local_b4);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_001027e0(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_001027e0(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_001027e0(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_001043f4(local_78,local_a8);
                    /* try { // try from 00104093 to 00104097 has its CatchHandler @ 001040c5 */
  FUN_00102629(local_78);
  FUN_001043d4(local_78);
  FUN_001043d4(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_001027e0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010290c(param_1,param_2);
  local_28 = FUN_00102936(param_1);
  cVar2 = FUN_00102954(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010297a(param_1);
    uVar3 = FUN_001029a0(&local_38);
    cVar2 = FUN_001029c2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102880;
    }
  }
  bVar1 = true;
LAB_00102880:
  if (bVar1) {
    uVar3 = FUN_001029e9(param_2);
    FUN_00102a26(local_30,uVar3);
    FUN_00102a5e(&local_28,&local_38);
    local_38 = FUN_00102a80(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_001029a0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c96(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00102a26(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c96(param_2);
  FUN_00102ca8(param_1,uVar1);
  return param_1;
}




void FUN_00105520(void)

{
  return;
}




void FUN_00104bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104b20(param_3);
  FUN_00104c2a(param_1,param_2,uVar1);
  return;
}




void FUN_00105200(void)

{
  return;
}




bool FUN_00105346(pthread_t *param_1)

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




void FUN_001026f0(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001027e0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00104cc9(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010474e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104880(param_1,param_2);
  return;
}




void FUN_00104a37(undefined8 param_1)

{
  FUN_001042dc(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102dd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001035bc(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010332e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103638(local_50);
    cVar2 = FUN_001029c2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103638(local_50);
      cVar2 = FUN_001029c2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103900(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103622(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103622(local_60);
          local_48[1] = 0;
          FUN_00103656(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001038d4(local_48);
          uVar6 = FUN_00103638(*puVar5);
          cVar2 = FUN_001029c2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103696(local_60,param_3);
          }
          else {
            lVar3 = FUN_001038be(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103656(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010384a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103834(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103834(local_60);
        uVar6 = FUN_00103834(local_60);
        FUN_0010384a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103892(local_48);
        uVar6 = FUN_00103638(*puVar5);
        cVar2 = FUN_001029c2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103696(local_60,param_3);
        }
        else {
          lVar3 = FUN_001038be(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103656(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010384a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103164;
  }
  lVar3 = FUN_0010360c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102e78:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103622(local_60);
    uVar6 = FUN_00103638(*puVar5);
    cVar2 = FUN_001029c2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102e78;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103622(local_60);
    local_48[1] = 0;
    FUN_00103656(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103696(local_60,param_3);
  }
LAB_00103164:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c74(param_2);
  uVar2 = FUN_00103a34(param_1);
  FUN_00103bac(uVar2,uVar1);
  return;
}




undefined8 FUN_00103476(undefined8 param_1)

{
  return param_1;
}




void FUN_00103638(undefined8 param_1)

{
  FUN_0010317f(param_1);
  return;
}




undefined8 FUN_00105153(void)

{
  return 0;
}




void FUN_00104e4d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001045ee(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046fd(param_1,param_2);
  FUN_00104778(param_1,param_2);
  FUN_0010430a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a34(undefined8 param_1)

{
  return param_1;
}




long FUN_00103622(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001051a8(void)

{
  return;
}




void FUN_0010522c(void)

{
  return;
}




void FUN_00102629(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001027e0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00104cc9(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d20(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001053c4(undefined8 *param_1)

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




void FUN_00104584(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001038be(local_28);
    FUN_00104584(param_1,uVar1);
    lVar2 = FUN_001039f6(local_28);
    FUN_001032bc(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}



