
long FUN_001045ec(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001047f8(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e98)();
  return;
}




void FUN_00103400(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c76(param_2);
  FUN_00103468(param_1,uVar1);
  return;
}




void FUN_00104082(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010432c(local_88);
  local_58[0] = 0;
                    /* try { // try from 001040d6 to 00104139 has its CatchHandler @ 00104185 */
  puVar1 = (undefined4 *)FUN_001027c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001027c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001027c0(local_88,local_58);
  *puVar1 = 0x14;
  FUN_0010436c(local_58,local_88);
                    /* try { // try from 00104141 to 00104145 has its CatchHandler @ 00104170 */
  FUN_001026d0(local_58);
  FUN_0010434c(local_58);
  FUN_0010434c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001027c0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001028ec(param_1,param_2);
  local_28 = FUN_00102916(param_1);
  cVar2 = FUN_00102934(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010295a(param_1);
    uVar3 = FUN_00102980(&local_38);
    cVar2 = FUN_001029a2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102860;
    }
  }
  bVar1 = true;
LAB_00102860:
  if (bVar1) {
    uVar3 = FUN_001029c9(param_2);
    FUN_00102a06(local_30,uVar3);
    FUN_00102a3e(&local_28,&local_38);
    local_38 = FUN_00102a60(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102980(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_0010434c(undefined8 param_1)

{
  FUN_001043f2(param_1);
  return;
}




void FUN_00104b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104a98(param_3);
  FUN_00104ba2(param_1,param_2,uVar1);
  return;
}




void FUN_00104a5e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104a98(param_2);
  FUN_00104aaa(uVar1,uVar2);
  return;
}




void FUN_00102cc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103438(param_2);
  uVar1 = FUN_00103456(uVar1);
  FUN_00103468(param_1,uVar1);
  return;
}




void FUN_00104d15(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001043d2(undefined8 param_1)

{
  FUN_001044ec(param_1);
  return;
}




void FUN_00104ba2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104a98(param_3);
  puVar2 = (undefined8 *)FUN_00102797(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_001042ac(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104396(long param_1)

{
  FUN_001044bc(param_1);
  FUN_001044dc(param_1);
  FUN_00104282(param_1 + 8);
  return;
}




void FUN_001044ec(void)

{
  return;
}




undefined8 FUN_00104a98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102d24(param_5);
  uVar2 = FUN_00102d12(param_4);
  uVar3 = FUN_00102d00(param_3);
  FUN_00103c38(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104c69(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001038e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ac4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00104602(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104704(local_18,param_1);
  FUN_00104722(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105120(void)

{
  return;
}




ulong FUN_00104fdd(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104af6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102797(0x28,param_2);
  uVar1 = FUN_00104a98(param_3);
  uVar2 = FUN_00102c54(param_2);
  uVar3 = FUN_00103a14(param_1);
  FUN_00104b64(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104991(undefined8 param_1)

{
  FUN_00104227(param_1);
  return;
}




long FUN_00104254(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102550();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_0010436c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104430(param_1,param_2);
  return;
}




void FUN_00102980(undefined8 *param_1)

{
  FUN_00102c54(*param_1);
  return;
}




void FUN_00103d28(void)

{
  return;
}




undefined8 FUN_00102bf6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032da(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103ac4(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001031b2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010330e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103618(param_3);
      uVar5 = FUN_0010315f(param_4);
      cVar1 = FUN_001029a2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103236;
      }
    }
  }
  bVar2 = true;
LAB_00103236:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001032da(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103e10(undefined8 param_1)

{
  FUN_00103e2e(param_1);
  return;
}




undefined8 FUN_00103456(undefined8 param_1)

{
  return param_1;
}




void FUN_00105141(void)

{
  return;
}




void FUN_00104666(void)

{
  return;
}




undefined8 FUN_00102a06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c76(param_2);
  FUN_00102c88(param_1,uVar1);
  return param_1;
}




void FUN_00103d7c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103dce(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ba6(param_1,param_2);
  return;
}




void FUN_001046f0(void)

{
  return;
}




void FUN_00103468(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c76(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00102d24(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_001046c6(undefined8 param_1,undefined8 param_2)

{
  FUN_001047f8(param_1,param_2);
  return;
}




void FUN_001051ba(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001039d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105178(void)

{
  return;
}




void FUN_00102c88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c76(param_2);
  FUN_00103400(param_1,uVar1);
  return;
}




void FUN_00104c0f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 * FUN_001038b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001045d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001042ec(undefined8 param_1)

{
  FUN_001043d2(param_1);
  return;
}




undefined8 FUN_00104675(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001047ca(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010516d(void)

{
  return;
}




void FUN_00103636(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103ac4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103324(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010315f(local_38);
    cVar1 = FUN_001029a2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010389e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001039d6(local_38);
    }
  }
  FUN_001032da(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001050bc(void)

{
  return 1;
}




void FUN_001027ad(void)

{
  return;
}




void FUN_00104d6b(undefined4 param_1)

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




void FUN_00105183(void)

{
  return;
}




void FUN_001053d4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102916(undefined8 param_1)

{
  FUN_00102bf6(param_1);
  return;
}




void FUN_00104c95(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103dce(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103e10(param_2);
  puVar2 = (undefined4 *)FUN_00103456(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_001051af(void)

{
  return;
}




void FUN_00104cea(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103602(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103e2e(undefined8 param_1)

{
  FUN_00103438(param_1);
  return;
}




undefined8 FUN_00104aaa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103492(param_1);
  uVar2 = FUN_00104a98(param_2);
  FUN_00104af6(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_00104822(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001049ce(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104a32(param_2);
                    /* try { // try from 00104891 to 00104923 has its CatchHandler @ 0010494f */
    uVar2 = FUN_00104822(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104a48(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001049ce(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104a32(local_38);
      uVar2 = FUN_00104822(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104a48(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_001044dc(void)

{
  return;
}




undefined8 FUN_00103d64(void)

{
  return 0x333333333333333;
}




void FUN_00104e79(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00104ed9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001039ec(undefined8 param_1)

{
  return param_1;
}




void FUN_0010329c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103958(param_1,param_2);
  FUN_0010399c(param_1,param_2);
  return;
}




void FUN_00103b8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d28(param_1,param_2);
  return;
}




void FUN_00105136(void)

{
  return;
}




void FUN_00105115(void)

{
  return;
}




void FUN_00103492(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a14(param_1);
  FUN_00103a26(uVar1,1);
  return;
}




void FUN_00104566(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104675(param_1,param_2);
  FUN_001046f0(param_1,param_2);
  FUN_00104282(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102609(undefined8 param_1)

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
  piVar1 = (int *)FUN_001027c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00104c41(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104e46(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010315f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103920(param_1);
  FUN_00103942(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010510a(void)

{
  return;
}




void FUN_00104282(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001042ac(param_1);
  return;
}




void FUN_00104c41(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8
FUN_00102a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102d24(param_5);
  uVar2 = FUN_00102d12(param_4);
  uVar3 = FUN_00102d00(param_3);
  local_40 = FUN_00102d36(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102adc to 00102b1f has its CatchHandler @ 00102b5d */
  uVar1 = FUN_0010315f(local_40);
  local_38 = FUN_00102db6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010329c(param_1,local_40);
    FUN_001032da(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001031b2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104430(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104566(param_1,param_2);
  lVar1 = FUN_001045d6(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001045ec(param_1);
                    /* try { // try from 0010448b to 0010448f has its CatchHandler @ 00104495 */
    uVar3 = FUN_00104602(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00105157(void)

{
  return;
}




void FUN_00104cbf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001032da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b6e(undefined8 param_1)

{
  FUN_00103d16(param_1);
  return;
}




void FUN_001044bc(undefined8 param_1)

{
  FUN_00104666(param_1);
  return;
}




undefined8 FUN_00104a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001035ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102c54(long param_1)

{
  FUN_001033e2(param_1 + 0x20);
  return;
}




undefined8 * FUN_00103872(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102934(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001034be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102797(0x28,param_2);
  uVar1 = FUN_00102d24(param_5);
  uVar2 = FUN_00102d12(param_4);
  uVar3 = FUN_00102d00(param_3);
  uVar4 = FUN_00102c54(param_2);
  uVar5 = FUN_00103a14(param_1);
                    /* try { // try from 0010354d to 00103551 has its CatchHandler @ 00103554 */
  FUN_00103a54(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00105319(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00105199(void)

{
  return;
}




void FUN_001051a4(void)

{
  return;
}




undefined8 FUN_001039fe(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010399c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a14(param_1);
  FUN_00103bb6(uVar1,param_2,1);
  return;
}




void FUN_00105490(void)

{
  return;
}




undefined8 FUN_001032f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010430c(undefined8 param_1)

{
  FUN_00104396(param_1);
  return;
}




void FUN_001033e2(undefined8 param_1)

{
  FUN_001039ec(param_1);
  return;
}




void FUN_001044fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010389e(local_28);
    FUN_001044fc(param_1,uVar1);
    lVar2 = FUN_001039d6(local_28);
    FUN_0010329c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001049af(undefined8 param_1)

{
  FUN_00104254(param_1);
  return;
}




void FUN_001053f3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010359c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032da(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001041c2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104be9("Calling good()...");
  FUN_001041b2();
  FUN_00104be9("Finished good()");
  FUN_00104be9("Calling bad()...");
  FUN_00103e4c();
  FUN_00104be9("Finished bad()");
  return 0;
}




undefined8 FUN_00103d03(undefined8 param_1)

{
  return param_1;
}




void FUN_00105162(void)

{
  return;
}




undefined8 FUN_00102d36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103492(param_1);
  uVar2 = FUN_00102d24(param_4);
  uVar3 = FUN_00102d12(param_3);
  uVar4 = FUN_00102d00(param_2);
  FUN_001034be(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103d3c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029dc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc0(param_1,param_2);
  return;
}




void FUN_00104ded(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103676(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001032f8(param_1);
  local_50 = FUN_0010330e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010315f(local_58);
    local_59 = FUN_001029a2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010389e(local_58);
    }
    else {
      local_58 = FUN_001039d6(local_58);
    }
  }
  FUN_001032da(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103ad6(param_1);
    cVar1 = FUN_00102934(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103b26(local_38,&local_58,&local_50);
      goto LAB_001037f8;
    }
    FUN_00103872(&local_48);
  }
  uVar2 = FUN_00103618(local_48);
  cVar1 = FUN_001029a2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001038e0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103b26(local_38,&local_58,&local_50);
  }
LAB_001037f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103ad6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032da(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c46(void)

{
  return;
}




undefined8 FUN_001051f1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001051ba,local_18);
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




bool FUN_001052be(pthread_t *param_1)

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




void FUN_00103e4c(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010432c(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00103f02 to 00104003 has its CatchHandler @ 00104052 */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_001027c0(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_001027c0(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_001027c0(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_0010436c(local_78,local_a8);
                    /* try { // try from 0010400b to 0010400f has its CatchHandler @ 0010403d */
  FUN_00102609(local_78);
  FUN_0010434c(local_78);
  FUN_0010434c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c54(param_2);
  uVar2 = FUN_00103a14(param_1);
  FUN_00103b8c(uVar2,uVar1);
  return;
}




void FUN_001053b5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103be8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103d64(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_001026d0(undefined8 param_1)

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
  piVar1 = (int *)FUN_001027c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00104c41(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d12(undefined8 param_1)

{
  return param_1;
}




void FUN_001041b2(void)

{
  FUN_00104082();
  return;
}




int FUN_001050da(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102db6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010359c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010330e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103618(local_50);
    cVar2 = FUN_001029a2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103618(local_50);
      cVar2 = FUN_001029a2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001038e0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103602(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103602(local_60);
          local_48[1] = 0;
          FUN_00103636(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001038b4(local_48);
          uVar6 = FUN_00103618(*puVar5);
          cVar2 = FUN_001029a2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103676(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010389e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103636(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010382a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103814(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103814(local_60);
        uVar6 = FUN_00103814(local_60);
        FUN_0010382a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103872(local_48);
        uVar6 = FUN_00103618(*puVar5);
        cVar2 = FUN_001029a2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103676(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010389e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103636(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010382a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103144;
  }
  lVar3 = FUN_001035ec(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102e58:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103602(local_60);
    uVar6 = FUN_00103618(*puVar5);
    cVar2 = FUN_001029a2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102e58;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103602(local_60);
    local_48[1] = 0;
    FUN_00103636(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103676(local_60,param_3);
  }
LAB_00103144:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined4 FUN_0010295a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102c46(param_1);
  return unaff_EBX;
}




undefined8 FUN_00102c76(undefined8 param_1)

{
  return param_1;
}




void FUN_001043f2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032f8(param_1);
  FUN_001044fc(param_1,uVar1);
  FUN_001042ec(param_1);
  return;
}




void FUN_00104e18(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103a14(undefined8 param_1)

{
  return param_1;
}




void FUN_001050ff(void)

{
  return;
}




void FUN_00104704(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103bb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d3c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104a32(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103d16(undefined8 param_1)

{
  return param_1;
}




long FUN_00104227(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010512b(void)

{
  return;
}




void FUN_00102ba6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010330e(param_1);
  uVar2 = FUN_001032f8(param_1);
  FUN_00103324(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00104dc5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010480c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103a26(undefined8 param_1,undefined8 param_2)

{
  FUN_00103be8(param_1,param_2,0);
  return;
}




undefined8 FUN_0010389e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103618(undefined8 param_1)

{
  FUN_0010315f(param_1);
  return;
}




undefined8 FUN_001050cb(void)

{
  return 0;
}




void FUN_0010432c(undefined8 param_1)

{
  FUN_0010430c(param_1);
  return;
}




void FUN_00102a3e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010382a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ac4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103ac4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102d00(undefined8 param_1)

{
  return param_1;
}




void FUN_00104d40(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010533c(undefined8 *param_1)

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




undefined8 FUN_001029c9(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_001049ce(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103920(param_2);
  puVar2 = (undefined4 *)FUN_00104a5e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104be9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103438(undefined8 param_1)

{
  FUN_001039fe(param_1);
  return;
}




void FUN_00103b26(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d03(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103ac4(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00103814(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00103942(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010514c(void)

{
  return;
}




void FUN_001050f4(void)

{
  return;
}




undefined8 FUN_001047ca(undefined8 param_1,undefined8 param_2)

{
  FUN_001046c6(param_1,param_2);
  return param_1;
}




void FUN_00103c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d00(param_3);
  uVar1 = FUN_00102d12(param_4);
  FUN_001029dc(local_38,uVar1);
  FUN_00102d24(param_5);
  uVar1 = FUN_00102797(8,param_2);
                    /* try { // try from 00103cc0 to 00103cc4 has its CatchHandler @ 00103cc7 */
  FUN_00103d7c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103920(long param_1)

{
  FUN_00103b6e(param_1 + 0x20);
  return;
}




void FUN_0010518e(void)

{
  return;
}




void FUN_00105420(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102797(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_001029a2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_0010330e(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00104722(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010330e(param_1);
  uVar2 = FUN_0010480c(param_2);
  uVar1 = FUN_00104822(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103814(param_1);
  uVar2 = FUN_00104991(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103602(param_1);
  uVar2 = FUN_001049af(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}



