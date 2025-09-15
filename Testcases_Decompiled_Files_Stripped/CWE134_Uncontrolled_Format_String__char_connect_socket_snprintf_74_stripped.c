
void FUN_001041f8(undefined8 param_1)

{
  FUN_001049ca(param_1);
  return;
}




long FUN_00104418(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102993(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
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
  FUN_0010308e(local_e8);
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
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 00102a73 to 00102af4 has its CatchHandler @ 00102b4c */
  plVar1 = (long *)FUN_00103192(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00103192(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00103192(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_001030ce(local_b8,local_e8);
                    /* try { // try from 00102aff to 00102b03 has its CatchHandler @ 00102b34 */
  FUN_001050d1(local_b8);
  FUN_001030ae(local_b8);
  FUN_001030ae(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038de(void)

{
  return;
}




void FUN_00103df7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00104720(param_1);
  FUN_00104742(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104786(void)

{
  return;
}




void FUN_001046e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104a8f(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00105865(void)

{
  return;
}




undefined8 FUN_001049dc(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103f52(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104758(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010479a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001039aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f34(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001040a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001038ec(param_2);
  uVar2 = FUN_0010495c(param_1);
  FUN_0010496e(uVar2,uVar1);
  return;
}




void FUN_00104720(long param_1)

{
  FUN_00104b3a(param_1 + 0x20);
  return;
}




undefined8 FUN_00103452(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001057d6(void)

{
  return;
}




undefined8 FUN_0010495c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103154(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033f4(param_1);
  FUN_0010338a(param_1,uVar1);
  FUN_0010304e(param_1);
  return;
}




void FUN_00104216(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390e(param_2);
  FUN_0010427e(param_1,uVar1);
  return;
}




undefined8 FUN_00104d9e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00104bd2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105545(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00104758(undefined8 param_1,undefined8 param_2)

{
  FUN_00103fa2(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010448c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001033f4(param_1);
  local_50 = FUN_00104124(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103df7(local_58);
    local_59 = FUN_001034c0(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001037d3(local_58);
    }
    else {
      local_58 = FUN_001037e9(local_58);
    }
  }
  FUN_00103f34(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00104aa2(param_1);
    cVar1 = FUN_00103452(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00104af2(local_38,&local_58,&local_50);
      goto LAB_0010460e;
    }
    FUN_00104688(&local_48);
  }
  uVar2 = FUN_0010442e(local_48);
  cVar1 = FUN_001034c0(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001046e0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00104af2(local_38,&local_58,&local_50);
  }
LAB_0010460e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010424e(param_2);
  uVar1 = FUN_0010426c(uVar1);
  FUN_0010427e(param_1,uVar1);
  return;
}




undefined8
FUN_00103e4a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00104124(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010442e(param_3);
      uVar5 = FUN_00103df7(param_4);
      cVar1 = FUN_001034c0(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103ece;
      }
    }
  }
  bVar2 = true;
LAB_00103ece:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103f34(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010587b(void)

{
  return;
}




long FUN_0010374a(long param_1)

{
  return param_1 + 0x10;
}




ulong FUN_001056a9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00103478(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001038de(param_1);
  return unaff_EBX;
}




void FUN_00103800(undefined8 param_1,undefined8 param_2)

{
  FUN_001040a6(param_1,param_2);
  FUN_001040ea(param_1,param_2);
  return;
}




void FUN_00102ee6(void)

{
  FUN_00102993();
  FUN_00102b7c();
  return;
}




undefined8 FUN_00104e1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001042a8(param_1);
  uVar2 = FUN_00104e07(param_2);
  FUN_00104eaa(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_0010424e(undefined8 param_1)

{
  FUN_001049dc(param_1);
  return;
}




undefined8 FUN_001037d3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001042a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010495c(param_1);
  FUN_001049f1(uVar1,1);
  return;
}




undefined8 FUN_00102efb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001052b5("Calling good()...");
  FUN_00102ee6();
  FUN_001052b5("Finished good()");
  FUN_001052b5("Calling bad()...");
  FUN_00102629();
  FUN_001052b5("Finished bad()");
  return 0;
}




void FUN_00105abf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010427e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00105b60(void)

{
  return;
}




void FUN_001052db(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010337a(void)

{
  return;
}




void FUN_001057cb(void)

{
  return;
}




void FUN_00104f73(undefined8 param_1)

{
  FUN_0010424e(param_1);
  return;
}




void FUN_0010491f(undefined8 param_1)

{
  FUN_00102f89(param_1);
  return;
}




void FUN_00103134(undefined8 param_1)

{
  FUN_0010337a(param_1);
  return;
}




undefined8 FUN_0010413a(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103df7(local_38);
    cVar1 = FUN_001034c0(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001037d3(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001037e9(local_38);
    }
  }
  FUN_00103f34(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001039bc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010426c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104f36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104e07(param_3);
  FUN_00104f92(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001058bd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105886,local_18);
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




void FUN_0010304e(undefined8 param_1)

{
  FUN_00103134(param_1);
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




void FUN_001054e4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104be8(void)

{
  return;
}




void FUN_00104a1f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001039bc(param_5);
  uVar2 = FUN_001039aa(param_4);
  uVar3 = FUN_00103998(param_3);
  FUN_00104c74(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00105870(void)

{
  return;
}




undefined8 FUN_00105788(void)

{
  return 1;
}




void FUN_00104f92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104e07(param_3);
  puVar3 = (undefined8 *)FUN_00102f60(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001053e1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010496e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104be8(param_1,param_2);
  return;
}




undefined8 FUN_001037e9(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001052b5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001049ca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105797(void)

{
  return 0;
}




void FUN_00105844(void)

{
  return;
}




void FUN_00102fe4(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010300e(param_1);
  return;
}




void FUN_0010383e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104124(param_1);
  uVar2 = FUN_001033f4(param_1);
  FUN_0010413a(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00104742(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010444c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00104a8f(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103ffe(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00104124(param_1);
  uVar2 = FUN_0010479a(param_2);
  uVar1 = FUN_001047b0(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010462a(param_1);
  uVar2 = FUN_0010491f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00104418(param_1);
  uVar2 = FUN_0010493d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001037c4(void)

{
  return;
}




undefined4 * FUN_00104b58(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104720(param_2);
  puVar2 = (undefined4 *)FUN_00104d64(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00104bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001054b9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010338a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001037d3(local_28);
    FUN_0010338a(param_1,uVar1);
    lVar2 = FUN_001037e9(local_28);
    FUN_00103800(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00105af0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00103958(param_1,param_2);
  return;
}




undefined8 FUN_00104e07(undefined8 param_1)

{
  return param_1;
}




int FUN_001057a6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00105a81(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104d64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104e07(param_2);
  FUN_00104e1a(uVar1,uVar2);
  return;
}




undefined8 FUN_00102f60(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00104124(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00105a08(undefined8 *param_1)

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




void FUN_00104b3a(undefined8 param_1)

{
  FUN_00104d52(param_1);
  return;
}




undefined8 FUN_00104d52(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103998(undefined8 param_1)

{
  return param_1;
}




void FUN_001057f7(void)

{
  return;
}




void FUN_0010493d(undefined8 param_1)

{
  FUN_00102fb6(param_1);
  return;
}




void FUN_00103fcc(void)

{
  return;
}




void FUN_00104eaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102f60(0x30,param_2);
  uVar1 = FUN_00104e07(param_3);
  uVar2 = FUN_001038ec(param_2);
  uVar3 = FUN_0010495c(param_1);
  FUN_00104f36(uVar3,uVar2,uVar1);
  return;
}




void FUN_00105802(void)

{
  return;
}




void FUN_00104998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104bfc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001034e7(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fe0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_001046b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00102fb6(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001030ce(undefined8 param_1,undefined8 param_2)

{
  FUN_001032be(param_1,param_2);
  return;
}




void FUN_00105886(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00105361(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102f76(void)

{
  return;
}




void FUN_001050d1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00103192(param_1,&local_84);
  local_80 = (char *)*puVar1;
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
  snprintf(local_78,99,local_80);
  FUN_001052b5(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001051be(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  undefined8 local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00103192(param_1,&local_84);
  local_80 = *puVar1;
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
  snprintf(local_78,99,"%s",local_80);
  FUN_001052b5(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001033f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010336a(void)

{
  return;
}




void FUN_00105491(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00105818(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




undefined8 FUN_001039ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001042a8(param_1);
  uVar2 = FUN_001039bc(param_4);
  uVar3 = FUN_001039aa(param_3);
  uVar4 = FUN_00103998(param_2);
  FUN_001042d4(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102629(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010308e(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 0010276c to 0010290b has its CatchHandler @ 00102963 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_001030ce(local_c8,local_f8);
                    /* try { // try from 00102916 to 0010291a has its CatchHandler @ 0010294b */
  FUN_00104fe4(local_c8);
  FUN_001030ae(local_c8);
  FUN_001030ae(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001040ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010495c(param_1);
  FUN_00104998(uVar1,param_2,1);
  return;
}




long FUN_0010462a(long param_1)

{
  return param_1 + 0x18;
}




void FUN_0010540c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00102f89(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010390e(undefined8 param_1)

{
  return param_1;
}




void FUN_00105aa0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001036c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103f52(param_1,param_2);
  FUN_00103fcc(param_1,param_2);
  FUN_00102fe4(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104f18(undefined8 param_1)

{
  FUN_00104f73(param_1);
  return;
}




void FUN_00103760(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103fe0(local_18,param_1);
  FUN_00103ffe(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010582e(void)

{
  return;
}




undefined8 FUN_00104aa2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103f34(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010306e(undefined8 param_1)

{
  FUN_001030f8(param_1);
  return;
}




void FUN_0010349e(undefined8 *param_1)

{
  FUN_001038ec(*param_1);
  return;
}




void FUN_0010530d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00105335(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010388e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103f34(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010334a(undefined8 param_1)

{
  FUN_001037c4(param_1);
  return;
}




void FUN_001053b6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010355c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001038ec(long param_1)

{
  FUN_001041f8(param_1 + 0x20);
  return;
}




void FUN_00104c24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104d9e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103fa2(undefined8 param_1,undefined8 param_2)

{
  FUN_00104786(param_1,param_2);
  return;
}




undefined8 FUN_001059e5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104af2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104d3f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104a8f(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010340a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010383e(param_1,param_2);
  return;
}




undefined8 FUN_00104d3f(undefined8 param_1)

{
  return param_1;
}




void FUN_001042d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102f60(0x30,param_2);
  uVar1 = FUN_001039bc(param_5);
  uVar2 = FUN_001039aa(param_4);
  uVar3 = FUN_00103998(param_3);
  uVar4 = FUN_001038ec(param_2);
  uVar5 = FUN_0010495c(param_1);
                    /* try { // try from 00104363 to 00104367 has its CatchHandler @ 0010436a */
  FUN_00104a1f(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103524(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390e(param_2);
  FUN_00103920(param_1,uVar1);
  return param_1;
}




undefined8 * FUN_00104688(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390e(param_2);
  FUN_00104216(param_1,uVar1);
  return;
}




void FUN_00104db6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104e66(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104a8f(undefined8 param_1)

{
  return param_1;
}




void FUN_00105839(void)

{
  return;
}




void FUN_0010442e(undefined8 param_1)

{
  FUN_00103df7(param_1);
  return;
}




void FUN_00103434(undefined8 param_1)

{
  FUN_0010388e(param_1);
  return;
}




void FUN_001057ec(void)

{
  return;
}




void FUN_001030f8(long param_1)

{
  FUN_0010334a(param_1);
  FUN_0010336a(param_1);
  FUN_00102fe4(param_1 + 8);
  return;
}




void FUN_0010300e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104bfc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00103a4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001043b2(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00104124(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010442e(local_50);
    cVar2 = FUN_001034c0(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010442e(local_50);
      cVar2 = FUN_001034c0(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001046e0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00104418(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00104418(local_60);
          local_48[1] = 0;
          FUN_0010444c(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001046b4(local_48);
          uVar6 = FUN_0010442e(*puVar5);
          cVar2 = FUN_001034c0(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010448c(local_60,param_3);
          }
          else {
            lVar3 = FUN_001037d3(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010444c(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00104640(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010462a(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010462a(local_60);
        uVar6 = FUN_0010462a(local_60);
        FUN_00104640(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00104688(local_48);
        uVar6 = FUN_0010442e(*puVar5);
        cVar2 = FUN_001034c0(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010448c(local_60,param_3);
        }
        else {
          lVar3 = FUN_001037d3(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010444c(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00104640(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103ddc;
  }
  lVar3 = FUN_00104402(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00103af0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00104418(local_60);
    uVar6 = FUN_0010442e(*puVar5);
    cVar2 = FUN_001034c0(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00103af0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00104418(local_60);
    local_48[1] = 0;
    FUN_0010444c(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010448c(local_60,param_3);
  }
LAB_00103ddc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001030ae(undefined8 param_1)

{
  FUN_00103154(param_1);
  return;
}




void FUN_001057c0(void)

{
  return;
}




bool FUN_0010598a(pthread_t *param_1)

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




void FUN_001049f1(undefined8 param_1,undefined8 param_2)

{
  FUN_00104c24(param_1,param_2,0);
  return;
}




void FUN_0010538b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001057e1(void)

{
  return;
}




void FUN_00105512(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010580d(void)

{
  return;
}




void FUN_00104640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104a8f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104a8f(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_001047b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104b58(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104bbc(param_2);
                    /* try { // try from 0010481f to 001048b1 has its CatchHandler @ 001048dd */
    uVar2 = FUN_001047b0(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104bd2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104b58(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104bbc(local_38);
      uVar2 = FUN_001047b0(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104bd2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010584f(void)

{
  return;
}




void FUN_00102b7c(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010308e(local_f8);
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
  sVar2 = strlen(local_88);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102cbf to 00102e5e has its CatchHandler @ 00102eb6 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00103192(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_001030ce(local_c8,local_f8);
                    /* try { // try from 00102e69 to 00102e6d has its CatchHandler @ 00102e9e */
  FUN_001051be(local_c8);
  FUN_001030ae(local_c8);
  FUN_001030ae(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_001034c0(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010308e(undefined8 param_1)

{
  FUN_0010306e(param_1);
  return;
}




void FUN_001032be(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001036c4(param_1,param_2);
  lVar1 = FUN_00103734(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010374a(param_1);
                    /* try { // try from 00103319 to 0010331d has its CatchHandler @ 00103323 */
    uVar3 = FUN_00103760(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104e66(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104f18(param_2);
  puVar2 = (undefined4 *)FUN_0010426c(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00104c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103998(param_3);
  uVar1 = FUN_001039aa(param_4);
  FUN_001034fa(local_38,uVar1);
  FUN_001039bc(param_5);
  uVar1 = FUN_00102f60(0x10,param_2);
                    /* try { // try from 00104cfc to 00104d00 has its CatchHandler @ 00104d03 */
  FUN_00104db6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105823(void)

{
  return;
}




undefined8 FUN_00104402(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8
FUN_0010357e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001039bc(param_5);
  uVar2 = FUN_001039aa(param_4);
  uVar3 = FUN_00103998(param_3);
  local_40 = FUN_001039ce(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001035fa to 0010363d has its CatchHandler @ 0010367b */
  uVar1 = FUN_00103df7(local_40);
  local_38 = FUN_00103a4e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103800(param_1,local_40);
    FUN_00103f34(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103e4a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




long FUN_00103192(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010340a(param_1,param_2);
  local_28 = FUN_00103434(param_1);
  cVar2 = FUN_00103452(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00103478(param_1);
    uVar3 = FUN_0010349e(&local_38);
    cVar2 = FUN_001034c0(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00103232;
    }
  }
  bVar1 = true;
LAB_00103232:
  if (bVar1) {
    uVar3 = FUN_001034e7(param_2);
    FUN_00103524(local_30,uVar3);
    FUN_0010355c(&local_28,&local_38);
    local_38 = FUN_0010357e(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_0010349e(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104fe4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00103192(param_1,&local_84);
  local_80 = (char *)*puVar1;
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
  snprintf(local_78,99,local_80);
  FUN_001052b5(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105437(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




ulong FUN_001055a5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001043b2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103f34(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010585a(void)

{
  return;
}



