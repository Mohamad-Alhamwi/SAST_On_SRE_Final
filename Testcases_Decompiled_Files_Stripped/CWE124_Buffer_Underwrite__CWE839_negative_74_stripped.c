
void FUN_00102b80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cfc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_001018cc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102dc6(undefined8 param_1)

{
  FUN_001023d0(param_1);
  return;
}




undefined8 FUN_00103a0e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 FUN_0010193a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103272(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001041b7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104180,local_18);
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




void FUN_00102da8(undefined8 param_1)

{
  FUN_00102dc6(param_1);
  return;
}




void FUN_0010242a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ac(param_1);
  FUN_001029be(uVar1,1);
  return;
}




void FUN_00102934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ac(param_1);
  FUN_00102b4e(uVar1,param_2,1);
  return;
}




void FUN_001025b0(undefined8 param_1)

{
  FUN_001020f7(param_1);
  return;
}




void FUN_0010362c(void)

{
  return;
}




undefined8 FUN_001028da(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001028b8(long param_1)

{
  FUN_00102b06(param_1 + 0x20);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_001043b9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001040ba(void)

{
  return;
}




undefined8 * FUN_0010280a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103d8b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102984(undefined8 param_1)

{
  return param_1;
}




void FUN_001019d6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010437b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103174(void)

{
  FUN_00102f14();
  FUN_00103044();
  return;
}




void FUN_00103332(undefined8 param_1,undefined8 param_2)

{
  FUN_001033f6(param_1,param_2);
  return;
}




undefined8 FUN_001022bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020f7(local_38);
    cVar1 = FUN_0010193a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102836(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010296e(local_38);
    }
  }
  FUN_00102272(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101884(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b3e(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00102de4(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102e38 to 00102e9b has its CatchHandler @ 00102ee7 */
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  FUN_00103332(local_58,local_88);
                    /* try { // try from 00102ea3 to 00102ea7 has its CatchHandler @ 00102ed2 */
  FUN_001014e9(local_58);
  FUN_00103312(local_58);
  FUN_00103312(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102234(undefined8 param_1,undefined8 param_2)

{
  FUN_001028f0(param_1,param_2);
  FUN_00102934(param_1,param_2);
  return;
}




void FUN_00104133(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102534(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022a6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025b0(local_50);
    cVar2 = FUN_0010193a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025b0(local_50);
      cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102878(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010259a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010259a(local_60);
          local_48[1] = 0;
          FUN_001025ce(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010284c(local_48);
          uVar6 = FUN_001025b0(*puVar5);
          cVar2 = FUN_0010193a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010260e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102836(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025ce(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027c2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ac(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ac(local_60);
        uVar6 = FUN_001027ac(local_60);
        FUN_001027c2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010280a(local_48);
        uVar6 = FUN_001025b0(*puVar5);
        cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010260e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102836(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025ce(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027c2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020dc;
  }
  lVar3 = FUN_00102584(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101df0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010259a(local_60);
    uVar6 = FUN_001025b0(*puVar5);
    cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101df0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010259a(local_60);
    local_48[1] = 0;
    FUN_001025ce(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010260e(local_60,param_3);
  }
LAB_001020dc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001034c2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102836(local_28);
    FUN_001034c2(param_1,uVar1);
    lVar2 = FUN_0010296e(local_28);
    FUN_00102234(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001040c5(void)

{
  return;
}




undefined8 * FUN_0010284c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001037be(void)

{
  return;
}




void FUN_0010416a(void)

{
  return;
}




undefined8 FUN_00103a5e(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018f2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bde(param_1);
  return unaff_EBX;
}




void FUN_001015a8(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101758(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c07(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103baf("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_001019f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  local_40 = FUN_00101cce(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a74 to 00101ab7 has its CatchHandler @ 00101af5 */
  uVar1 = FUN_001020f7(local_40);
  local_38 = FUN_00101d4e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102234(param_1,local_40);
    FUN_00102272(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010214a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001033f6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010352c(param_1,param_2);
  lVar1 = FUN_0010359c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001035b2(param_1);
                    /* try { // try from 00103451 to 00103455 has its CatchHandler @ 0010345b */
    uVar3 = FUN_001035c8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104154(void)

{
  return;
}




void FUN_001032b2(undefined8 param_1)

{
  FUN_00103398(param_1);
  return;
}




void FUN_001029ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  FUN_00102bd0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001018ae(undefined8 param_1)

{
  FUN_00101b8e(param_1);
  return;
}




undefined8 FUN_00102cfc(void)

{
  return 0x333333333333333;
}




undefined8 FUN_00103a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010242a(param_1);
  uVar2 = FUN_00103a5e(param_2);
  FUN_00103abc(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102d14(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d66(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036b6(void)

{
  return;
}




void FUN_00103044(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00103098 to 001030fb has its CatchHandler @ 00103147 */
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 0xfffffffb;
  FUN_00103332(local_58,local_88);
                    /* try { // try from 00103103 to 00103107 has its CatchHandler @ 00103132 */
  FUN_00101667(local_58);
  FUN_00103312(local_58);
  FUN_00103312(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102836(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102878(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102b24(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc0(param_1,param_2);
  return;
}




ulong FUN_00103e9f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010199e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00101c20(param_1,uVar1);
  return param_1;
}




undefined8
FUN_0010214a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022a6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025b0(param_3);
      uVar5 = FUN_001020f7(param_4);
      cVar1 = FUN_0010193a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021ce;
      }
    }
  }
  bVar2 = true;
LAB_001021ce:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102272(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c98(param_3);
  uVar1 = FUN_00101caa(param_4);
  FUN_00101974(local_38,uVar1);
  FUN_00101cbc(param_5);
  uVar1 = FUN_0010172f(8,param_2);
                    /* try { // try from 00102c58 to 00102c5c has its CatchHandler @ 00102c5f */
  FUN_00102d14(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035c8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036ca(local_18,param_1);
  FUN_001036e8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103d31(undefined4 param_1)

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




void FUN_001043f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_0010259a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010237a(undefined8 param_1)

{
  FUN_00102984(param_1);
  return;
}




undefined8 FUN_00101961(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c2f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined4 * FUN_00103994(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028b8(param_2);
  puVar2 = (undefined4 *)FUN_00103a24(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103248(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103272(param_1);
  return;
}




void FUN_001032d2(undefined8 param_1)

{
  FUN_0010335c(param_1);
  return;
}




void FUN_0010415f(void)

{
  return;
}




undefined8 FUN_00101c98(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a5c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bd5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104175(void)

{
  return;
}




void FUN_001020f7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028b8(param_1);
  FUN_001028da(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f14(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032f2(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f68 to 00102fcb has its CatchHandler @ 00103017 */
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101758(local_88,local_58);
  *puVar1 = 7;
  FUN_00103332(local_58,local_88);
                    /* try { // try from 00102fd3 to 00102fd7 has its CatchHandler @ 00103002 */
  FUN_001015a8(local_58);
  FUN_00103312(local_58);
  FUN_00103312(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104149(void)

{
  return;
}




void FUN_00102456(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010172f(0x28,param_2);
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  uVar4 = FUN_00101bec(param_2);
  uVar5 = FUN_001029ac(param_1);
                    /* try { // try from 001024e5 to 001024e9 has its CatchHandler @ 001024ec */
  FUN_001029ec(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




ulong FUN_00103fa3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001037d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001040f1(void)

{
  return;
}




void FUN_001028f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bec(param_2);
  uVar2 = FUN_001029ac(param_1);
  FUN_00102b24(uVar2,uVar1);
  return;
}




void FUN_00102398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00102400(param_1,uVar1);
  return;
}




void FUN_00103abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010172f(0x28,param_2);
  uVar1 = FUN_00103a5e(param_3);
  uVar2 = FUN_00101bec(param_2);
  uVar3 = FUN_001029ac(param_1);
  FUN_00103b2a(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102996(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103189(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103baf("Calling good()...");
  FUN_00103174();
  FUN_00103baf("Finished good()");
  FUN_00103baf("Calling bad()...");
  FUN_00102de4();
  FUN_00103baf("Finished bad()");
  return 0;
}




undefined8 FUN_00102cae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b06(undefined8 param_1)

{
  FUN_00102cae(param_1);
  return;
}




undefined8 FUN_00103790(undefined8 param_1,undefined8 param_2)

{
  FUN_0010368c(param_1,param_2);
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101758(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c07(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103baf("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010439a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001034a2(void)

{
  return;
}




long FUN_001027ac(long param_1)

{
  return param_1 + 0x18;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00102400(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_001037e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103994(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001039f8(param_2);
                    /* try { // try from 00103857 to 001038e9 has its CatchHandler @ 00103915 */
    uVar2 = FUN_001037e8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103a0e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103994(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001039f8(local_38);
      uVar2 = FUN_001037e8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103a0e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102cd4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001040e6(void)

{
  return;
}




void FUN_00103baf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010359c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103cdb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001032f2(undefined8 param_1)

{
  FUN_001032d2(param_1);
  return;
}




void FUN_00103b2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a5e(param_3);
  FUN_00103b68(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102a6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102272(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010260e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102290(param_1);
  local_50 = FUN_001022a6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020f7(local_58);
    local_59 = FUN_0010193a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102836(local_58);
    }
    else {
      local_58 = FUN_0010296e(local_58);
    }
  }
  FUN_00102272(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a6e(param_1);
    cVar1 = FUN_001018cc(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102abe(local_38,&local_58,&local_50);
      goto LAB_00102790;
    }
    FUN_0010280a(&local_48);
  }
  uVar2 = FUN_001025b0(local_48);
  cVar1 = FUN_0010193a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102878(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102abe(local_38,&local_58,&local_50);
  }
LAB_00102790:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102d66(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102da8(param_2);
  puVar2 = (undefined4 *)FUN_001023ee(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_0010172f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00104082(void)

{
  return 1;
}




void FUN_00103e3f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101b8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103957(undefined8 param_1)

{
  FUN_001031ee(param_1);
  return;
}




void FUN_00104460(void)

{
  return;
}




undefined8 FUN_001039f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103a5e(param_3);
  puVar2 = (undefined8 *)FUN_0010172f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_001042df(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022a6(param_1);
  uVar2 = FUN_00102290(param_1);
  FUN_001022bc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010411d(void)

{
  return;
}




void FUN_001036ca(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010296e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010413e(void)

{
  return;
}




undefined8 FUN_00101cce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010242a(param_1);
  uVar2 = FUN_00101cbc(param_4);
  uVar3 = FUN_00101caa(param_3);
  uVar4 = FUN_00101c98(param_2);
  FUN_00102456(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001033b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102290(param_1);
  FUN_001034c2(param_1,uVar1);
  FUN_001032b2(param_1);
  return;
}




void FUN_00101918(undefined8 *param_1)

{
  FUN_00101bec(*param_1);
  return;
}




void FUN_00103c5b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001040d0(void)

{
  return;
}




void FUN_0010352c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010363b(param_1,param_2);
  FUN_001036b6(param_1,param_2);
  FUN_00103248(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c0e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104180(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103e0c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104107(void)

{
  return;
}




long FUN_001031ee(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102abe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c9b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101974(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c58(param_1,param_2);
  return;
}




void FUN_0010368c(undefined8 param_1,undefined8 param_2)

{
  FUN_001037be(param_1,param_2);
  return;
}




bool FUN_00104284(pthread_t *param_1)

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




void FUN_00101c20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00102398(param_1,uVar1);
  return;
}




undefined8 FUN_001036e8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022a6(param_1);
  uVar2 = FUN_001037d2(param_2);
  uVar1 = FUN_001037e8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ac(param_1);
  uVar2 = FUN_00103957(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010259a(param_1);
  uVar2 = FUN_00103975(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103312(undefined8 param_1)

{
  FUN_001033b8(param_1);
  return;
}




long FUN_001035b2(long param_1)

{
  return param_1 + 0x10;
}




long FUN_001022a6(long param_1)

{
  return param_1 + 8;
}




void FUN_001027c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101cbc(undefined8 param_1)

{
  return param_1;
}




void FUN_001029be(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b80(param_1,param_2,0);
  return;
}




undefined8 FUN_00104091(void)

{
  return 0;
}




void FUN_001040fc(void)

{
  return;
}




void FUN_00102b4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd4(param_1,param_2,param_3);
  return;
}




void FUN_00104128(void)

{
  return;
}




void FUN_00101c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d0(param_2);
  uVar1 = FUN_001023ee(uVar1);
  FUN_00102400(param_1,uVar1);
  return;
}




undefined8 FUN_00104302(undefined8 *param_1)

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




void FUN_00102cc0(void)

{
  return;
}




void FUN_001023d0(undefined8 param_1)

{
  FUN_00102996(param_1);
  return;
}




void FUN_001034b2(void)

{
  return;
}




void FUN_00101bec(long param_1)

{
  FUN_0010237a(param_1 + 0x20);
  return;
}




void FUN_00101745(void)

{
  return;
}




int FUN_001040a0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103d06(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103c07(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103482(undefined8 param_1)

{
  FUN_0010362c(param_1);
  return;
}




void FUN_00103cb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010363b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103790(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101430();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00101bde(void)

{
  return;
}




void FUN_00103398(undefined8 param_1)

{
  FUN_001034b2(param_1);
  return;
}




undefined8 FUN_00102c9b(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103a5e(param_2);
  FUN_00103a70(uVar1,uVar2);
  return;
}




void FUN_001040db(void)

{
  return;
}




void FUN_00103c85(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103dde(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_00101758(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101884(param_1,param_2);
  local_28 = FUN_001018ae(param_1);
  cVar2 = FUN_001018cc(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018f2(param_1);
    uVar3 = FUN_00101918(&local_38);
    cVar2 = FUN_0010193a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017f8;
    }
  }
  bVar1 = true;
LAB_001017f8:
  if (bVar1) {
    uVar3 = FUN_00101961(param_2);
    FUN_0010199e(local_30,uVar3);
    FUN_001019d6(&local_28,&local_38);
    local_38 = FUN_001019f8(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101918(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_001029ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00104112(void)

{
  return;
}




void FUN_00103db3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_0010321b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001023ee(undefined8 param_1)

{
  return param_1;
}




void FUN_0010335c(long param_1)

{
  FUN_00103482(param_1);
  FUN_001034a2(param_1);
  FUN_00103248(param_1 + 8);
  return;
}




undefined8 FUN_00101caa(undefined8 param_1)

{
  return param_1;
}




void FUN_00103975(undefined8 param_1)

{
  FUN_0010321b(param_1);
  return;
}




void FUN_00101667(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101758(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00103baf("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c07(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102534(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



