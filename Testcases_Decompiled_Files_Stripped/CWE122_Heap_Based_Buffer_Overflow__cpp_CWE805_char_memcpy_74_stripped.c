
void FUN_001024a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a22(param_1);
  FUN_00102a34(uVar1,1);
  return;
}




void FUN_001040bb(void)

{
  return;
}




undefined8 FUN_0010425c(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 * FUN_00102880(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103264(undefined8 param_1)

{
  FUN_00103244(param_1);
  return;
}




void FUN_00103d08(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029fa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102838(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102ad2(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102ad2(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined4 FUN_001019b0(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001025aa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010231c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102626(local_50);
    cVar2 = FUN_001019b0(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102626(local_50);
      cVar2 = FUN_001019b0(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001028ee(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102610(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102610(local_60);
          local_48[1] = 0;
          FUN_00102644(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001028c2(local_48);
          uVar6 = FUN_00102626(*puVar5);
          cVar2 = FUN_001019b0(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102684(local_60,param_3);
          }
          else {
            lVar3 = FUN_001028ac(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102644(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102838(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102822(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102822(local_60);
        uVar6 = FUN_00102822(local_60);
        FUN_00102838(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102880(local_48);
        uVar6 = FUN_00102626(*puVar5);
        cVar2 = FUN_001019b0(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102684(local_60,param_3);
        }
        else {
          lVar3 = FUN_001028ac(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102644(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102838(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102152;
  }
  lVar3 = FUN_001025fa(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e66:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102610(local_60);
    uVar6 = FUN_00102626(*puVar5);
    cVar2 = FUN_001019b0(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e66;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102610(local_60);
    local_48[1] = 0;
    FUN_00102644(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102684(local_60,param_3);
  }
LAB_00102152:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104037(void)

{
  return;
}




undefined8
FUN_00101a6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101d32(param_5);
  uVar2 = FUN_00101d20(param_4);
  uVar3 = FUN_00101d0e(param_3);
  local_40 = FUN_00101d44(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101aea to 00101b2d has its CatchHandler @ 00101b6b */
  uVar1 = FUN_0010216d(local_40);
  local_38 = FUN_00101dc4(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001022aa(param_1,local_40);
    FUN_001022e8(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001021c0(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102d8a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102ddc(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d32(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d20(undefined8 param_1)

{
  return param_1;
}




void FUN_00104058(void)

{
  return;
}




ulong FUN_00103f20(long param_1,ulong param_2,long param_3)

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




void FUN_0010404d(void)

{
  return;
}




void FUN_0010408f(void)

{
  return;
}




undefined4 * FUN_00103906(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010292e(param_2);
  puVar2 = (undefined4 *)FUN_00103996(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00101c84(undefined8 param_1)

{
  return param_1;
}




void FUN_001035fe(undefined8 param_1,undefined8 param_2)

{
  FUN_00103730(param_1,param_2);
  return;
}




void FUN_001040c6(void)

{
  return;
}




undefined8
FUN_001021c0(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010231c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102626(param_3);
      uVar5 = FUN_0010216d(param_4);
      cVar1 = FUN_001019b0(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102244;
      }
    }
  }
  bVar2 = true;
LAB_00102244:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001022e8(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104317(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103dbc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010292e(long param_1)

{
  FUN_00102b7c(param_1 + 0x20);
  return;
}




void FUN_00104042(void)

{
  return;
}




undefined8 FUN_00102ad2(undefined8 param_1)

{
  return param_1;
}




long FUN_001017ce(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018fa(param_1,param_2);
  local_28 = FUN_00101924(param_1);
  cVar2 = FUN_00101942(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101968(param_1);
    uVar3 = FUN_0010198e(&local_38);
    cVar2 = FUN_001019b0(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010186e;
    }
  }
  bVar1 = true;
LAB_0010186e:
  if (bVar1) {
    uVar3 = FUN_001019d7(param_2);
    FUN_00101a14(local_30,uVar3);
    FUN_00101a4c(&local_28,&local_38);
    local_38 = FUN_00101a6e(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010198e(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_001028ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101549(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_001017ce(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103b2c(local_90);
  if (local_90 != (undefined8 *)0x0) {
    operator_delete__(local_90);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b84(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00102d11(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010396a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101cce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102446(param_2);
  uVar1 = FUN_00102464(uVar1);
  FUN_00102476(param_1,uVar1);
  return;
}




undefined8 FUN_001030fb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b2c("Calling good()...");
  FUN_001030eb();
  FUN_00103b2c("Finished good()");
  FUN_00103b2c("Calling bad()...");
  FUN_00102e5b();
  FUN_00103b2c("Finished bad()");
  return 0;
}




void FUN_00103c58(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103368(param_1,param_2);
  return;
}




void FUN_001040d1(void)

{
  return;
}




void FUN_00102b9a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d36(param_1,param_2);
  return;
}




void FUN_00103c02(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102a0c(undefined8 *param_1)

{
  return *param_1;
}




long FUN_0010231c(long param_1)

{
  return param_1 + 8;
}




void FUN_001040f2(void)

{
  return;
}




void FUN_00102644(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102ad2(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001032ce(long param_1)

{
  FUN_001033f4(param_1);
  FUN_00103414(param_1);
  FUN_001031ba(param_1 + 8);
  return;
}




undefined8 FUN_00102684(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102306(param_1);
  local_50 = FUN_0010231c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010216d(local_58);
    local_59 = FUN_001019b0(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001028ac(local_58);
    }
    else {
      local_58 = FUN_001029e4(local_58);
    }
  }
  FUN_001022e8(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102ae4(param_1);
    cVar1 = FUN_00101942(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102b34(local_38,&local_58,&local_50);
      goto LAB_00102806;
    }
    FUN_00102880(&local_48);
  }
  uVar2 = FUN_00102626(local_48);
  cVar1 = FUN_001019b0(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001028ee(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102b34(local_38,&local_58,&local_50);
  }
LAB_00102806:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e3d(undefined8 param_1)

{
  FUN_00102446(param_1);
  return;
}




void FUN_001028ee(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102ad2(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001040e7(void)

{
  return;
}




void FUN_00101c96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c84(param_2);
  FUN_0010240e(param_1,uVar1);
  return;
}




undefined8 FUN_00101d0e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102464(undefined8 param_1)

{
  return param_1;
}




void FUN_00103730(void)

{
  return;
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




void FUN_001024cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001017a5(0x30,param_2);
  uVar1 = FUN_00101d32(param_5);
  uVar2 = FUN_00101d20(param_4);
  uVar3 = FUN_00101d0e(param_3);
  uVar4 = FUN_00101c62(param_2);
  uVar5 = FUN_00102a22(param_1);
                    /* try { // try from 0010255b to 0010255f has its CatchHandler @ 00102562 */
  FUN_00102a62(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102d72(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101a14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c84(param_2);
  FUN_00101c96(param_1,uVar1);
  return param_1;
}




undefined8 FUN_001035ad(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103702(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001040b0(void)

{
  return;
}




undefined8 FUN_00103fff(void)

{
  return 1;
}




void FUN_001040dc(void)

{
  return;
}




void FUN_00101a4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001018fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bb4(param_1,param_2);
  return;
}




void FUN_00103434(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001028ac(local_28);
    FUN_00103434(param_1,uVar1);
    lVar2 = FUN_001029e4(local_28);
    FUN_001022aa(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00101bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010231c(param_1);
  uVar2 = FUN_00102306(param_1);
  FUN_00102332(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103224(undefined8 param_1)

{
  FUN_0010330a(param_1);
  return;
}




undefined8 FUN_001029e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102a22(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c2d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102332(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010216d(local_38);
    cVar1 = FUN_001019b0(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001028ac(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001029e4(local_38);
    }
  }
  FUN_001022e8(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103414(void)

{
  return;
}




void FUN_00103c83(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_001042f8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 * FUN_001028c2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104084(void)

{
  return;
}




void FUN_00103bd8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001019d7(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00103160(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001039e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001024a0(param_1);
  uVar2 = FUN_001039d0(param_2);
  FUN_00103a2e(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00101d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001024a0(param_1);
  uVar2 = FUN_00101d32(param_4);
  uVar3 = FUN_00101d20(param_3);
  uVar4 = FUN_00101d0e(param_2);
  FUN_001024cc(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101924(undefined8 param_1)

{
  FUN_00101c04(param_1);
  return;
}




void FUN_0010330a(undefined8 param_1)

{
  FUN_00103424(param_1);
  return;
}




void FUN_001022aa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102966(param_1,param_2);
  FUN_001029aa(param_1,param_2);
  return;
}




void FUN_001040a5(void)

{
  return;
}




undefined8 FUN_00102950(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001025fa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102446(undefined8 param_1)

{
  FUN_00102a0c(param_1);
  return;
}




void FUN_001030eb(void)

{
  FUN_00102fa3();
  return;
}




ulong FUN_00103e1c(long param_1,ulong param_2,long param_3)

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




void FUN_00102bf6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d72(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010406e(void)

{
  return;
}




void FUN_00101c54(void)

{
  return;
}




void FUN_0010198e(undefined8 *param_1)

{
  FUN_00101c62(*param_1);
  return;
}




long FUN_0010318d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102626(undefined8 param_1)

{
  FUN_0010216d(param_1);
  return;
}




undefined8 FUN_001039d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00104079(void)

{
  return;
}




void FUN_001033f4(undefined8 param_1)

{
  FUN_0010359e(param_1);
  return;
}




void FUN_00102d36(void)

{
  return;
}




void FUN_0010353a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010363c(local_18,param_1);
  FUN_0010365a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a34(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf6(param_1,param_2,0);
  return;
}




void FUN_0010332a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102306(param_1);
  FUN_00103434(param_1,uVar1);
  FUN_00103224(param_1);
  return;
}




void FUN_001023f0(undefined8 param_1)

{
  FUN_001029fa(param_1);
  return;
}




void FUN_00101677(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_001017ce(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103b2c(local_90);
  if (local_90 != (undefined8 *)0x0) {
    operator_delete__(local_90);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c04(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022e8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102822(long param_1)

{
  return param_1 + 0x18;
}




long FUN_0010375a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103906(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010396a(param_2);
                    /* try { // try from 001037c9 to 0010385b has its CatchHandler @ 00103887 */
    uVar2 = FUN_0010375a(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103980(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103906(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010396a(local_38);
      uVar2 = FUN_0010375a(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103980(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00103702(undefined8 param_1,undefined8 param_2)

{
  FUN_001035fe(param_1,param_2);
  return param_1;
}




void FUN_001031ba(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031e4(param_1);
  return;
}




undefined8 FUN_0010400e(void)

{
  return 0;
}




void FUN_00103244(undefined8 param_1)

{
  FUN_001032ce(param_1);
  return;
}




void FUN_0010409a(void)

{
  return;
}




void FUN_00104336(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103368(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010349e(param_1,param_2);
  lVar1 = FUN_0010350e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103524(param_1);
                    /* try { // try from 001033c3 to 001033c7 has its CatchHandler @ 001033cd */
    uVar3 = FUN_0010353a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103d5b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b2c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102e5b(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103264(local_88);
                    /* try { // try from 00102e96 to 00102f2a has its CatchHandler @ 00102f76 */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001032a4(local_58,local_88);
                    /* try { // try from 00102f32 to 00102f36 has its CatchHandler @ 00102f61 */
  FUN_00101549(local_58);
  FUN_00103284(local_58);
  FUN_00103284(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010216d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010292e(param_1);
  FUN_00102950(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bac(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102b7c(undefined8 param_1)

{
  FUN_00102d24(param_1);
  return;
}




void FUN_0010349e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035ad(param_1,param_2);
  FUN_00103628(param_1,param_2);
  FUN_001031ba(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102d24(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001017a5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103cae(undefined4 param_1)

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




undefined8 FUN_0010365a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010231c(param_1);
  uVar2 = FUN_00103744(param_2);
  uVar1 = FUN_0010375a(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102822(param_1);
  uVar2 = FUN_001038c9(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102610(param_1);
  uVar2 = FUN_001038e7(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039d0(param_3);
  FUN_00103ada(param_1,param_2,uVar1);
  return;
}




void FUN_00102966(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c62(param_2);
  uVar2 = FUN_00102a22(param_1);
  FUN_00102b9a(uVar2,uVar1);
  return;
}




void FUN_0010240e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c84(param_2);
  FUN_00102476(param_1,uVar1);
  return;
}




void FUN_00102e1f(undefined8 param_1)

{
  FUN_00102e3d(param_1);
  return;
}




void FUN_00103d30(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102fa3(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103264(local_88);
                    /* try { // try from 00102fde to 00103072 has its CatchHandler @ 001030be */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001017ce(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001032a4(local_58,local_88);
                    /* try { // try from 0010307a to 0010307e has its CatchHandler @ 001030a9 */
  FUN_00101677(local_58);
  FUN_00103284(local_58);
  FUN_00103284(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101d32(param_5);
  uVar2 = FUN_00101d20(param_4);
  uVar3 = FUN_00101d0e(param_3);
  FUN_00102c46(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102d4a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001017bb(void)

{
  return;
}




void FUN_00101c62(long param_1)

{
  FUN_001023f0(param_1 + 0x20);
  return;
}




void FUN_00104063(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_00102306(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001038c9(undefined8 param_1)

{
  FUN_00103160(param_1);
  return;
}




void FUN_001040fd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103a2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001017a5(0x30,param_2);
  uVar1 = FUN_001039d0(param_3);
  uVar2 = FUN_00101c62(param_2);
  uVar3 = FUN_00102a22(param_1);
  FUN_00103a9c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102476(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c84(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001043e0(void)

{
  return;
}




void FUN_00103b52(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103d89(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_00102610(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00101942(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102c46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d0e(param_3);
  uVar1 = FUN_00101d20(param_4);
  FUN_001019ea(local_38,uVar1);
  FUN_00101d32(param_5);
  uVar1 = FUN_001017a5(0x10,param_2);
                    /* try { // try from 00102cce to 00102cd2 has its CatchHandler @ 00102cd5 */
  FUN_00102d8a(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010427f(undefined8 *param_1)

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




void FUN_001038e7(undefined8 param_1)

{
  FUN_0010318d(param_1);
  return;
}




void FUN_0010359e(void)

{
  return;
}




void FUN_00103424(void)

{
  return;
}




int FUN_0010401d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d4a(param_1,param_2,param_3);
  return;
}




long FUN_00103524(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102ddc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102e1f(param_2);
  puVar2 = (undefined4 *)FUN_00102464(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102b34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102d11(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102ad2(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001025aa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022e8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104370(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103284(undefined8 param_1)

{
  FUN_0010332a(param_1);
  return;
}




void FUN_00103996(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039d0(param_2);
  FUN_001039e2(uVar1,uVar2);
  return;
}




undefined8 FUN_0010350e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010363c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001022e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




bool FUN_00104201(pthread_t *param_1)

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




void FUN_00103ada(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039d0(param_3);
  puVar3 = (undefined8 *)FUN_001017a5(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103628(void)

{
  return;
}




void FUN_001029aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102a22(param_1);
  FUN_00102bc4(uVar1,param_2,1);
  return;
}




undefined4 FUN_00101968(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101c54(param_1);
  return unaff_EBX;
}




undefined8 FUN_00102ae4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022e8(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031e4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00104134(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040fd,local_18);
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




void FUN_001019ea(undefined8 param_1,undefined8 param_2)

{
  FUN_00101cce(param_1,param_2);
  return;
}



