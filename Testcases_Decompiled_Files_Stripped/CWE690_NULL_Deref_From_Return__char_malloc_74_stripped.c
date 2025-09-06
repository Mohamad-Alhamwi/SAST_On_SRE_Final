
void FUN_00102a56(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bd2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102c9d(undefined8 param_1)

{
  FUN_001022a6(param_1);
  return;
}




void FUN_001037e2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010381c(param_2);
  FUN_0010382e(uVar1,uVar2);
  return;
}




bool FUN_0010404d(pthread_t *param_1)

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




void FUN_00103070(undefined8 param_1)

{
  FUN_00103156(param_1);
  return;
}




void FUN_00102c7f(undefined8 param_1)

{
  FUN_00102c9d(param_1);
  return;
}




void FUN_00102300(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102882(param_1);
  FUN_00102894(uVar1,1);
  return;
}




void FUN_0010280a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102882(param_1);
  FUN_00102a24(uVar1,param_2,1);
  return;
}




void FUN_00102486(undefined8 param_1)

{
  FUN_00101fcd(param_1);
  return;
}




undefined8 FUN_001033f9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010354e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101573(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_0010162e(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x696c616974696e49;
    *(undefined2 *)(local_18 + 1) = 0x657a;
    *(undefined *)((long)local_18 + 10) = 0;
    FUN_00103978(local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001027b0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010278e(long param_1)

{
  FUN_001029dc(param_1 + 0x20);
  return;
}




undefined4 FUN_00101810(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001041b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103e8e(void)

{
  return;
}




undefined8 * FUN_001026e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103b7c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010285a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104163(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010161a(void)

{
  return;
}




undefined8 FUN_00102f47(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103978("Calling good()...");
  FUN_00102f37();
  FUN_00103978("Finished good()");
  FUN_00103978("Calling bad()...");
  FUN_00102cbb();
  FUN_00103978("Finished bad()");
  return 0;
}




void FUN_0010311a(long param_1)

{
  FUN_00103240(param_1);
  FUN_00103260(param_1);
  FUN_00103006(param_1 + 8);
  return;
}




undefined8 FUN_00102192(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fcd(local_38);
    cVar1 = FUN_00101810(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010270c(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102844(local_38);
    }
  }
  FUN_00102148(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_00101af6(param_1,uVar1);
  return param_1;
}




void FUN_00102cbb(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b0(local_88);
  pvVar1 = malloc(0x14);
  local_58[0] = 0;
                    /* try { // try from 00102d17 to 00102d80 has its CatchHandler @ 00102dcc */
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030f0(local_58,local_88);
                    /* try { // try from 00102d88 to 00102d8c has its CatchHandler @ 00102db7 */
  FUN_001014e9(local_58);
  FUN_001030d0(local_58);
  FUN_001030d0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010210a(undefined8 param_1,undefined8 param_2)

{
  FUN_001027c6(param_1,param_2);
  FUN_0010280a(param_1,param_2);
  return;
}




void FUN_00103f07(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010240a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010217c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102486(local_50);
    cVar2 = FUN_00101810(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102486(local_50);
      cVar2 = FUN_00101810(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010274e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102470(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102470(local_60);
          local_48[1] = 0;
          FUN_001024a4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102722(local_48);
          uVar6 = FUN_00102486(*puVar5);
          cVar2 = FUN_00101810(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024e4(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010270c(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024a4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102698(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102682(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102682(local_60);
        uVar6 = FUN_00102682(local_60);
        FUN_00102698(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026e0(local_48);
        uVar6 = FUN_00102486(*puVar5);
        cVar2 = FUN_00101810(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024e4(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010270c(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024a4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102698(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fb2;
  }
  lVar3 = FUN_0010245a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cc6:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102470(local_60);
    uVar6 = FUN_00102486(*puVar5);
    cVar2 = FUN_00101810(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cc6;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102470(local_60);
    local_48[1] = 0;
    FUN_001024a4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024e4(local_60,param_3);
  }
LAB_00101fb2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined4 FUN_001017c8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ab4(param_1);
  return unaff_EBX;
}




void FUN_001032ea(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f9(param_1,param_2);
  FUN_00103474(param_1,param_2);
  FUN_00103006(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00102722(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103e99(void)

{
  return;
}




void FUN_00103f3e(void)

{
  return;
}




undefined8 FUN_0010382e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102300(param_1);
  uVar2 = FUN_0010381c(param_2);
  FUN_0010387a(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8
FUN_001018ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101b92(param_5);
  uVar2 = FUN_00101b80(param_4);
  uVar3 = FUN_00101b6e(param_3);
  local_40 = FUN_00101ba4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010194a to 0010198d has its CatchHandler @ 001019cb */
  uVar1 = FUN_00101fcd(local_40);
  local_38 = FUN_00101c24(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010210a(param_1,local_40);
    FUN_00102148(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102020(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103240(undefined8 param_1)

{
  FUN_001033ea(param_1);
  return;
}




void FUN_00103f28(void)

{
  return;
}




void FUN_00103090(undefined8 param_1)

{
  FUN_0010311a(param_1);
  return;
}




void FUN_001028c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101b92(param_5);
  uVar2 = FUN_00101b80(param_4);
  uVar3 = FUN_00101b6e(param_3);
  FUN_00102aa6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102bd2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010387a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101604(0x30,param_2);
  uVar1 = FUN_0010381c(param_3);
  uVar2 = FUN_00101ac2(param_2);
  uVar3 = FUN_00102882(param_1);
  FUN_001038e8(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102bea(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c3c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103488(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102f37(void)

{
  FUN_00102df9();
  return;
}




undefined8 FUN_0010270c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010274e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102932(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101784(undefined8 param_1)

{
  FUN_00101a64(param_1);
  return;
}




void FUN_001029fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b96(param_1,param_2);
  return;
}




ulong FUN_00103d6c(long param_1,ulong param_2,long param_3)

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




undefined8
FUN_00102020(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010217c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102486(param_3);
      uVar5 = FUN_00101fcd(param_4);
      cVar1 = FUN_00101810(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020a4;
      }
    }
  }
  bVar2 = true;
LAB_001020a4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102148(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102aa6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b6e(param_3);
  uVar1 = FUN_00101b80(param_4);
  FUN_0010184a(local_38,uVar1);
  FUN_00101b92(param_5);
  uVar1 = FUN_00101604(0x10,param_2);
                    /* try { // try from 00102b2e to 00102b32 has its CatchHandler @ 00102b35 */
  FUN_00102bea(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033ea(void)

{
  return;
}




undefined8 FUN_0010245a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103b54(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00104220(void)

{
  return;
}




long FUN_00102470(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102250(undefined8 param_1)

{
  FUN_0010285a(param_1);
  return;
}




void FUN_00103a24(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001024a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102932(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001037b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103030(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001030b0(undefined8 param_1)

{
  FUN_00103090(param_1);
  return;
}




void FUN_00103f33(void)

{
  return;
}




undefined8 FUN_00101b6e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102932(undefined8 param_1)

{
  return param_1;
}




void FUN_001039d0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f49(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101fcd(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010278e(param_1);
  FUN_001027b0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102df9(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030b0(local_88);
  pvVar1 = malloc(0x14);
  local_58[0] = 0;
                    /* try { // try from 00102e55 to 00102ebe has its CatchHandler @ 00102f0a */
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030f0(local_58,local_88);
                    /* try { // try from 00102ec6 to 00102eca has its CatchHandler @ 00102ef5 */
  FUN_00101573(local_58);
  FUN_001030d0(local_58);
  FUN_001030d0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f1d(void)

{
  return;
}




void FUN_0010232c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101604(0x30,param_2);
  uVar1 = FUN_00101b92(param_5);
  uVar2 = FUN_00101b80(param_4);
  uVar3 = FUN_00101b6e(param_3);
  uVar4 = FUN_00101ac2(param_2);
  uVar5 = FUN_00102882(param_1);
                    /* try { // try from 001023bb to 001023bf has its CatchHandler @ 001023c2 */
  FUN_001028c2(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103e4b(void)

{
  return 1;
}




long FUN_001035a6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103752(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037b6(param_2);
                    /* try { // try from 00103615 to 001036a7 has its CatchHandler @ 001036d3 */
    uVar2 = FUN_001035a6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037cc(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103752(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037b6(local_38);
      uVar2 = FUN_001035a6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037cc(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103ec5(void)

{
  return;
}




undefined8 FUN_00101604(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_001027c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ac2(param_2);
  uVar2 = FUN_00102882(param_1);
  FUN_001029fa(uVar2,uVar1);
  return;
}




void FUN_0010226e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_001022d6(param_1,uVar1);
  return;
}




void FUN_001038e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010381c(param_3);
  FUN_00103926(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010286c(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00102fac(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102b84(undefined8 param_1)

{
  return param_1;
}




void FUN_001029dc(undefined8 param_1)

{
  FUN_00102b84(param_1);
  return;
}




void FUN_0010357c(void)

{
  return;
}




void FUN_00104182(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103270(void)

{
  return;
}




long FUN_00102682(long param_1)

{
  return param_1 + 0x18;
}




void FUN_0010184a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b2e(param_1,param_2);
  return;
}




void FUN_001022d6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103715(undefined8 param_1)

{
  FUN_00102fac(param_1);
  return;
}




void FUN_00102baa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103eba(void)

{
  return;
}




void FUN_0010399e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




long FUN_00103370(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103acf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030d0(undefined8 param_1)

{
  FUN_00103176(param_1);
  return;
}




void FUN_00103926(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010381c(param_3);
  puVar3 = (undefined8 *)FUN_00101604(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00102944(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102148(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102148(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001024e4(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102166(param_1);
  local_50 = FUN_0010217c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fcd(local_58);
    local_59 = FUN_00101810(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010270c(local_58);
    }
    else {
      local_58 = FUN_00102844(local_58);
    }
  }
  FUN_00102148(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102944(param_1);
    cVar1 = FUN_001017a2(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102994(local_38,&local_58,&local_50);
      goto LAB_00102666;
    }
    FUN_001026e0(&local_48);
  }
  uVar2 = FUN_00102486(local_48);
  cVar1 = FUN_00101810(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010274e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102994(local_38,&local_58,&local_50);
  }
LAB_00102666:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102c3c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c7f(param_2);
  puVar2 = (undefined4 *)FUN_001022c4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103e5a(void)

{
  return 0;
}




ulong FUN_00103c68(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101a64(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102148(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103733(undefined8 param_1)

{
  FUN_00102fd9(param_1);
  return;
}




undefined8 FUN_001037cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103978(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001040cb(undefined8 *param_1)

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




void FUN_00101a14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010217c(param_1);
  uVar2 = FUN_00102166(param_1);
  FUN_00102192(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103ef1(void)

{
  return;
}




undefined8 FUN_001034a6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010217c(param_1);
  uVar2 = FUN_00103590(param_2);
  uVar1 = FUN_001035a6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102682(param_1);
  uVar2 = FUN_00103715(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102470(param_1);
  uVar2 = FUN_00103733(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f12(void)

{
  return;
}




undefined8 FUN_00101ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102300(param_1);
  uVar2 = FUN_00101b92(param_4);
  uVar3 = FUN_00101b80(param_3);
  uVar4 = FUN_00101b6e(param_2);
  FUN_0010232c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001031b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032ea(param_1,param_2);
  lVar1 = FUN_0010335a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103370(param_1);
                    /* try { // try from 0010320f to 00103213 has its CatchHandler @ 00103219 */
    uVar3 = FUN_00103386(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103a4e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ea4(void)

{
  return;
}




undefined8 FUN_0010335a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101ae4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102166(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103f80(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f49,local_18);
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




void FUN_00103c08(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103edb(void)

{
  return;
}




long FUN_00102fd9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b71(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102932(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103474(void)

{
  return;
}




undefined8 FUN_001040a8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101af6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_0010226e(param_1,uVar1);
  return;
}




undefined8 FUN_0010354e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010344a(param_1,param_2);
  return param_1;
}




void FUN_001030f0(undefined8 param_1,undefined8 param_2)

{
  FUN_001031b4(param_1,param_2);
  return;
}




void FUN_00103386(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103488(local_18,param_1);
  FUN_001034a6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010217c(long param_1)

{
  return param_1 + 8;
}




void FUN_00102698(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102932(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102932(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101b92(undefined8 param_1)

{
  return param_1;
}




void FUN_00102894(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a56(param_1,param_2,0);
  return;
}




int FUN_00103e69(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ed0(void)

{
  return;
}




void FUN_00102a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102baa(param_1,param_2,param_3);
  return;
}




void FUN_00103efc(void)

{
  return;
}




void FUN_00101b2e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022a6(param_2);
  uVar1 = FUN_001022c4(uVar1);
  FUN_001022d6(param_1,uVar1);
  return;
}




void FUN_00104144(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102b96(void)

{
  return;
}




void FUN_001022a6(undefined8 param_1)

{
  FUN_0010286c(param_1);
  return;
}




void FUN_00103280(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010270c(local_28);
    FUN_00103280(param_1,uVar1);
    lVar2 = FUN_00102844(local_28);
    FUN_0010210a(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101ac2(long param_1)

{
  FUN_00102250(param_1 + 0x20);
  return;
}




void FUN_00103e83(void)

{
  return;
}




void FUN_00103afa(undefined4 param_1)

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




void FUN_001039f8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103260(void)

{
  return;
}




void FUN_00103aa4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010344a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010357c(param_1,param_2);
  return;
}




undefined8 FUN_00101837(undefined8 param_1)

{
  return param_1;
}




void FUN_001018ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101ab4(void)

{
  return;
}




void FUN_00103176(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102166(param_1);
  FUN_00103280(param_1,uVar1);
  FUN_00103070(param_1);
  return;
}




undefined8 FUN_00102b71(undefined8 param_1)

{
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




undefined8 FUN_0010381c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103eaf(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_001017a2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103a79(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103bd5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102882(undefined8 param_1)

{
  return param_1;
}




void FUN_0010175a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a14(param_1,param_2);
  return;
}




void FUN_00103ee6(void)

{
  return;
}




void FUN_00103ba7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103006(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103030(param_1);
  return;
}




long FUN_0010162e(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010175a(param_1,param_2);
  local_28 = FUN_00101784(param_1);
  cVar2 = FUN_001017a2(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017c8(param_1);
    uVar3 = FUN_001017ee(&local_38);
    cVar2 = FUN_00101810(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016ce;
    }
  }
  bVar1 = true;
LAB_001016ce:
  if (bVar1) {
    uVar3 = FUN_00101837(param_2);
    FUN_00101874(local_30,uVar3);
    FUN_001018ac(&local_28,&local_38);
    local_38 = FUN_001018ce(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001017ee(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_001022c4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101b80(undefined8 param_1)

{
  return param_1;
}




void FUN_001014e9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_0010162e(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  *local_18 = 0x696c616974696e49;
  *(undefined2 *)(local_18 + 1) = 0x657a;
  *(undefined *)((long)local_18 + 10) = 0;
  FUN_00103978(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103156(undefined8 param_1)

{
  FUN_00103270(param_1);
  return;
}




undefined4 * FUN_00103752(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010278e(param_2);
  puVar2 = (undefined4 *)FUN_001037e2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001017ee(undefined8 *param_1)

{
  FUN_00101ac2(*param_1);
  return;
}




undefined8 FUN_0010240a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102148(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



