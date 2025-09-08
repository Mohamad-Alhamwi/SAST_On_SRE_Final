
undefined8 * FUN_00104416(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001046ad(undefined8 param_1)

{
  FUN_00102d18(param_1);
  return;
}




void FUN_00102e86(long param_1)

{
  FUN_001030d8(param_1);
  FUN_001030f8(param_1);
  FUN_00102d72(param_1 + 8);
  return;
}




void FUN_00103d5a(void)

{
  return;
}




undefined8 FUN_00103ffa(undefined8 param_1)

{
  return param_1;
}




void FUN_001048c8(undefined8 param_1)

{
  FUN_00104ae0(param_1);
  return;
}




void FUN_001047ad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010374a(param_5);
  uVar2 = FUN_00103738(param_4);
  uVar3 = FUN_00103726(param_3);
  FUN_00104a02(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001029d7(void)

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
  FUN_00102e1c(local_a8);
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
                    /* try { // try from 00102ad4 to 00102bf6 has its CatchHandler @ 00102c45 */
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
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_00102e5c(local_78,local_a8);
                    /* try { // try from 00102bfe to 00102c02 has its CatchHandler @ 00102c30 */
  FUN_00104ee3(local_78);
  FUN_00102e3c(local_78);
  FUN_00102e3c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104ae0(undefined8 param_1)

{
  return param_1;
}




void FUN_00104062(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102cef(0x28,param_2);
  uVar1 = FUN_0010374a(param_5);
  uVar2 = FUN_00103738(param_4);
  uVar3 = FUN_00103726(param_3);
  uVar4 = FUN_0010367a(param_2);
  uVar5 = FUN_001046ea(param_1);
                    /* try { // try from 001040f1 to 001040f5 has its CatchHandler @ 001040f8 */
  FUN_001047ad(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 * FUN_001048e6(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001044ae(param_2);
  puVar2 = (undefined4 *)FUN_00104af2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00103ec8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103b85(local_38);
    cVar1 = FUN_0010324e(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103561(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103577(local_38);
    }
  }
  FUN_00103cc2(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104036(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001046ea(param_1);
  FUN_0010477f(uVar1,1);
  return;
}




void FUN_001041da(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010481d(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010481d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103577(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105571(void)

{
  return;
}




void FUN_0010498a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103288(undefined8 param_1,undefined8 param_2)

{
  FUN_001036e6(param_1,param_2);
  return;
}




undefined8 * FUN_00104442(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00105003(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104cc2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104b95(param_3);
  FUN_00104d1e(param_1,param_2,uVar1);
  return;
}




void FUN_00105519(void)

{
  return;
}




void FUN_00104880(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104acd(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010481d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001046fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00104976(param_1,param_2);
  return;
}




void FUN_00103e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001046ea(param_1);
  FUN_00104726(uVar1,param_2,1);
  return;
}




void FUN_0010400c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010369c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_0010374a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010552f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_0010358e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e34(param_1,param_2);
  FUN_00103e78(param_1,param_2);
  return;
}




void FUN_00102d72(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00102d9c(param_1);
  return;
}




void FUN_00103cc2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102ee2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103182(param_1);
  FUN_00103118(param_1,uVar1);
  FUN_00102ddc(param_1);
  return;
}




void FUN_00105081(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010446e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010481d(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103b85(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001044ae(param_1);
  FUN_001044d0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001044e6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d30(param_1,param_2);
  return param_1;
}




long FUN_00102f20(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00103198(param_1,param_2);
  local_28 = FUN_001031c2(param_1);
  cVar2 = FUN_001031e0(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00103206(param_1);
    uVar3 = FUN_0010322c(&local_38);
    cVar2 = FUN_0010324e(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102fc0;
    }
  }
  bVar1 = true;
LAB_00102fc0:
  if (bVar1) {
    uVar3 = FUN_00103275(param_2);
    FUN_001032b2(local_30,uVar3);
    FUN_001032ea(&local_28,&local_38);
    local_38 = FUN_0010330c(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_0010322c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_00102cef(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001044d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_0010539f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001034c2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105566(void)

{
  return;
}




void FUN_00105187(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001028a7(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e1c(local_88);
  local_58[0] = 0;
                    /* try { // try from 001028fb to 0010295e has its CatchHandler @ 001029aa */
  puVar1 = (undefined4 *)FUN_00102f20(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102f20(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102f20(local_88,local_58);
  *puVar1 = 7;
  FUN_00102e5c(local_58,local_88);
                    /* try { // try from 00102966 to 0010296a has its CatchHandler @ 00102995 */
  FUN_00104e24(local_58);
  FUN_00102e3c(local_58);
  FUN_00102e3c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103275(undefined8 param_1)

{
  return param_1;
}




void FUN_001043ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010481d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010481d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f86(undefined8 param_1)

{
  FUN_00104758(param_1);
  return;
}




void FUN_001044ae(long param_1)

{
  FUN_001048c8(param_1 + 0x20);
  return;
}




void FUN_0010512d(undefined4 param_1)

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




void FUN_00103198(undefined8 param_1,undefined8 param_2)

{
  FUN_001035cc(param_1,param_2);
  return;
}




void FUN_00102e3c(undefined8 param_1)

{
  FUN_00102ee2(param_1);
  return;
}




void FUN_00105503(void)

{
  return;
}




void FUN_00104cff(undefined8 param_1)

{
  FUN_00103fdc(param_1);
  return;
}




undefined8 FUN_00104b2c(void)

{
  return 0x333333333333333;
}




void FUN_0010553a(void)

{
  return;
}




void FUN_001051af(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001054cc(void)

{
  return;
}




void FUN_001049b2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104b2c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8
FUN_00103bd8(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103eb2(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001041bc(param_3);
      uVar5 = FUN_00103b85(param_4);
      cVar1 = FUN_0010324e(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103c5c;
      }
    }
  }
  bVar2 = true;
LAB_00103c5c:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103cc2(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




ulong FUN_0010529b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104acd(undefined8 param_1)

{
  return param_1;
}




void FUN_00105545(void)

{
  return;
}




void FUN_00105850(void)

{
  return;
}




void FUN_00103118(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103561(local_28);
    FUN_00103118(param_1,uVar1);
    lVar2 = FUN_00103577(local_28);
    FUN_0010358e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001044e6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00104830(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cc2(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001046ea(undefined8 param_1)

{
  return param_1;
}




void FUN_001041bc(undefined8 param_1)

{
  FUN_00103b85(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001037dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00104140(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103eb2(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001041bc(local_50);
    cVar2 = FUN_0010324e(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001041bc(local_50);
      cVar2 = FUN_0010324e(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010446e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001041a6(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001041a6(local_60);
          local_48[1] = 0;
          FUN_001041da(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00104442(local_48);
          uVar6 = FUN_001041bc(*puVar5);
          cVar2 = FUN_0010324e(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010421a(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103561(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001041da(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001043ce(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001043b8(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001043b8(local_60);
        uVar6 = FUN_001043b8(local_60);
        FUN_001043ce(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00104416(local_48);
        uVar6 = FUN_001041bc(*puVar5);
        cVar2 = FUN_0010324e(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010421a(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103561(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001041da(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001043ce(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103b6a;
  }
  lVar3 = FUN_00104190(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_0010387e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001041a6(local_60);
    uVar6 = FUN_001041bc(*puVar5);
    cVar2 = FUN_0010324e(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_0010387e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001041a6(local_60);
    local_48[1] = 0;
    FUN_001041da(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010421a(local_60,param_3);
  }
LAB_00103b6a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104c36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102cef(0x28,param_2);
  uVar1 = FUN_00104b95(param_3);
  uVar2 = FUN_0010367a(param_2);
  uVar3 = FUN_001046ea(param_1);
  FUN_00104cc2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104ca4(undefined8 param_1)

{
  FUN_00104cff(param_1);
  return;
}




void FUN_001054f8(void)

{
  return;
}




long FUN_001034d8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102d9c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010367a(long param_1)

{
  FUN_00103f86(param_1 + 0x20);
  return;
}




void FUN_00105057(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105550(void)

{
  return;
}




void FUN_00104fd1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010304c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103452(param_1,param_2);
  lVar1 = FUN_001034c2(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034d8(param_1);
                    /* try { // try from 001030a7 to 001030ab has its CatchHandler @ 001030b1 */
    uVar3 = FUN_001034ee(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_001043b8(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104bf4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104ca4(param_2);
  puVar2 = (undefined4 *)FUN_00103ffa(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




long FUN_00102d45(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104fab(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00103eb2(long param_1)

{
  return param_1 + 8;
}




bool FUN_00105680(pthread_t *param_1)

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




void FUN_00104976(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e98)();
  return;
}




undefined8 FUN_00104190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001050d7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001056db(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104a02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103726(param_3);
  uVar1 = FUN_00103738(param_4);
  FUN_00103288(local_38,uVar1);
  FUN_0010374a(param_5);
  uVar1 = FUN_00102cef(8,param_2);
                    /* try { // try from 00104a8a to 00104a8e has its CatchHandler @ 00104a91 */
  FUN_00104b44(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ddc(undefined8 param_1)

{
  FUN_00102ec2(param_1);
  return;
}




void FUN_0010366c(void)

{
  return;
}




long FUN_001041a6(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010477f(undefined8 param_1,undefined8 param_2)

{
  FUN_001049b2(param_1,param_2,0);
  return;
}




void FUN_00103108(void)

{
  return;
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




void FUN_0010322c(undefined8 *param_1)

{
  FUN_0010367a(*param_1);
  return;
}




int FUN_0010549c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001030d8(undefined8 param_1)

{
  FUN_00103552(param_1);
  return;
}




void FUN_00105208(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010523b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001034ee(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103d6e(local_18,param_1);
  FUN_00103d8c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103452(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103ce0(param_1,param_2);
  FUN_00103d5a(param_1,param_2);
  FUN_00102d72(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001054ed(void)

{
  return;
}




void FUN_00105777(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102dfc(undefined8 param_1)

{
  FUN_00102e86(param_1);
  return;
}




void FUN_00103fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010369c(param_2);
  FUN_0010400c(param_1,uVar1);
  return;
}




void FUN_00102e5c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010304c(param_1,param_2);
  return;
}




undefined8 FUN_0010421a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103182(param_1);
  local_50 = FUN_00103eb2(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103b85(local_58);
    local_59 = FUN_0010324e(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103561(local_58);
    }
    else {
      local_58 = FUN_00103577(local_58);
    }
  }
  FUN_00103cc2(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00104830(param_1);
    cVar1 = FUN_001031e0(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00104880(local_38,&local_58,&local_50);
      goto LAB_0010439c;
    }
    FUN_00104416(&local_48);
  }
  uVar2 = FUN_001041bc(local_48);
  cVar1 = FUN_0010324e(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010446e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00104880(local_38,&local_58,&local_50);
  }
LAB_0010439c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104726(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010498a(param_1,param_2,param_3);
  return;
}




void FUN_001054d7(void)

{
  return;
}




void FUN_001030f8(void)

{
  return;
}




undefined8 FUN_00103d8c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103eb2(param_1);
  uVar2 = FUN_00104528(param_2);
  uVar1 = FUN_0010453e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001043b8(param_1);
  uVar2 = FUN_001046ad(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001041a6(param_1);
  uVar2 = FUN_001046cb(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00103726(undefined8 param_1)

{
  return param_1;
}




void FUN_00105102(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102d05(void)

{
  return;
}




undefined8 FUN_0010375c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00104036(param_1);
  uVar2 = FUN_0010374a(param_4);
  uVar3 = FUN_00103738(param_3);
  uVar4 = FUN_00103726(param_2);
  FUN_00104062(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001057b5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00104b95(undefined8 param_1)

{
  return param_1;
}




void FUN_001031c2(undefined8 param_1)

{
  FUN_0010361c(param_1);
  return;
}




void FUN_001035cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103eb2(param_1);
  uVar2 = FUN_00103182(param_1);
  FUN_00103ec8(param_1,uVar2,uVar1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




undefined8 FUN_0010547e(void)

{
  return 1;
}




undefined8 FUN_0010548d(void)

{
  return 0;
}




void FUN_00103d30(undefined8 param_1,undefined8 param_2)

{
  FUN_00104514(param_1,param_2);
  return;
}




undefined8
FUN_0010330c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010374a(param_5);
  uVar2 = FUN_00103738(param_4);
  uVar3 = FUN_00103726(param_3);
  local_40 = FUN_0010375c(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00103388 to 001033cb has its CatchHandler @ 00103409 */
  uVar1 = FUN_00103b85(local_40);
  local_38 = FUN_001037dc(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010358e(param_1,local_40);
    FUN_00103cc2(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103bd8(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001054c1(void)

{
  return;
}




void FUN_001036ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010369c(param_2);
  FUN_00103fa4(param_1,uVar1);
  return;
}




undefined8 FUN_00102c8a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104fab("Calling good()...");
  FUN_00102c75();
  FUN_00104fab("Finished good()");
  FUN_00104fab("Calling bad()...");
  FUN_00102609();
  FUN_00104fab("Finished bad()");
  return 0;
}




void FUN_00103d6e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104d65(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102f20(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00105003(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104fab("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102d18(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102609(void)

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
  FUN_00102e1c(local_a8);
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
                    /* try { // try from 00102706 to 00102828 has its CatchHandler @ 00102877 */
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
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102f20(local_a8,local_78);
  *piVar3 = local_b8;
  FUN_00102e5c(local_78,local_a8);
                    /* try { // try from 00102830 to 00102834 has its CatchHandler @ 00102862 */
  FUN_00104d65(local_78);
  FUN_00102e3c(local_78);
  FUN_00102e3c(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104140(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cc2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104036(param_1);
  uVar2 = FUN_00104b95(param_2);
  FUN_00104c36(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103552(void)

{
  return;
}




void FUN_00104ee3(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102f20(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00104fab("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00105003(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104514(void)

{
  return;
}




undefined8 FUN_0010369c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010476a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103738(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010367a(param_2);
  uVar2 = FUN_001046ea(param_1);
  FUN_001046fc(uVar2,uVar1);
  return;
}




void FUN_0010502b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104b44(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104bf4(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001057e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001046cb(undefined8 param_1)

{
  FUN_00102d45(param_1);
  return;
}




undefined8 FUN_00103561(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001055b3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010557c,local_18);
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




undefined4 FUN_0010324e(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00103182(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104b95(param_3);
  puVar2 = (undefined8 *)FUN_00102cef(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103fdc(undefined8 param_1)

{
  FUN_0010476a(param_1);
  return;
}




undefined4 FUN_00103206(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_0010366c(param_1);
  return unaff_EBX;
}




void FUN_00102c75(void)

{
  FUN_001028a7();
  FUN_001029d7();
  return;
}




void FUN_0010555b(void)

{
  return;
}




void FUN_00104af2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104b95(param_2);
  FUN_00104ba8(uVar1,uVar2);
  return;
}




void FUN_001054b6(void)

{
  return;
}




void FUN_0010557c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010550e(void)

{
  return;
}




undefined8 FUN_001056fe(undefined8 *param_1)

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




undefined8 FUN_00104758(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010494a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102ec2(undefined8 param_1)

{
  FUN_00103108(param_1);
  return;
}




undefined8 FUN_0010361c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103cc2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001031e0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001032ea(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001050ac(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104e24(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102f20(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00105003(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104fab("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105796(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_0010453e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001048e6(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010494a(param_2);
                    /* try { // try from 001045ad to 0010463f has its CatchHandler @ 0010466b */
    uVar2 = FUN_0010453e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104960(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001048e6(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010494a(local_38);
      uVar2 = FUN_0010453e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104960(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001036e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103fdc(param_2);
  uVar1 = FUN_00103ffa(uVar1);
  FUN_0010400c(param_1,uVar1);
  return;
}




undefined8 FUN_001032b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010369c(param_2);
  FUN_001036ae(param_1,uVar1);
  return param_1;
}




void FUN_001051da(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001054e2(void)

{
  return;
}




void FUN_00102e1c(undefined8 param_1)

{
  FUN_00102dfc(param_1);
  return;
}




void FUN_00105524(void)

{
  return;
}




undefined8 FUN_00104528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



