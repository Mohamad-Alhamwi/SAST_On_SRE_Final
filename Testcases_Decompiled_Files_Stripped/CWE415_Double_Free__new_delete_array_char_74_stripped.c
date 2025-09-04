
void FUN_00102350(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d2(param_1);
  FUN_001028e4(uVar1,1);
  return;
}




void FUN_001040c2(void)

{
  return;
}




bool FUN_00104213(pthread_t *param_1)

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




undefined8 * FUN_00102730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103256(undefined8 param_1)

{
  FUN_001032e0(param_1);
  return;
}




void FUN_00103cc0(undefined4 param_1)

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




undefined8 FUN_001028aa(undefined8 param_1)

{
  return param_1;
}




void FUN_001026e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102982(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102982(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined4 FUN_00101860(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010245a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021cc(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024d6(local_50);
    cVar2 = FUN_00101860(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024d6(local_50);
      cVar2 = FUN_00101860(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010279e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024c0(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024c0(local_60);
          local_48[1] = 0;
          FUN_001024f4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102772(local_48);
          uVar6 = FUN_001024d6(*puVar5);
          cVar2 = FUN_00101860(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102534(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010275c(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024f4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026e8(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026d2(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026d2(local_60);
        uVar6 = FUN_001026d2(local_60);
        FUN_001026e8(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102730(local_48);
        uVar6 = FUN_001024d6(*puVar5);
        cVar2 = FUN_00101860(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102534(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010275c(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024f4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026e8(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102002;
  }
  lVar3 = FUN_001024aa(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d16:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024c0(local_60);
    uVar6 = FUN_001024d6(*puVar5);
    cVar2 = FUN_00101860(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d16;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024c0(local_60);
    local_48[1] = 0;
    FUN_001024f4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102534(local_60,param_3);
  }
LAB_00102002:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




int FUN_0010402f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8
FUN_0010191e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101be2(param_5);
  uVar2 = FUN_00101bd0(param_4);
  uVar3 = FUN_00101bbe(param_3);
  local_40 = FUN_00101bf4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010199a to 001019dd has its CatchHandler @ 00101a1b */
  uVar1 = FUN_0010201d(local_40);
  local_38 = FUN_00101c74(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010215a(param_1,local_40);
    FUN_00102198(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102070(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102c3a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c8c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101be2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101bd0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010405f(void)

{
  return;
}




ulong FUN_00103e2e(long param_1,ulong param_2,long param_3)

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




void FUN_00104054(void)

{
  return;
}




void FUN_00104096(void)

{
  return;
}




void FUN_001038f9(undefined8 param_1)

{
  FUN_0010319e(param_1);
  return;
}




undefined8 FUN_00101b34(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035bf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103714(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001040cd(void)

{
  return;
}




undefined8
FUN_00102070(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021cc(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024d6(param_3);
      uVar5 = FUN_0010201d(param_4);
      cVar1 = FUN_00101860(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020f4;
      }
    }
  }
  bVar2 = true;
LAB_001020f4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102198(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010430a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103d9b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001027de(long param_1)

{
  FUN_00102a2c(param_1 + 0x20);
  return;
}




void FUN_00104049(void)

{
  return;
}




undefined8 FUN_00102982(undefined8 param_1)

{
  return param_1;
}




long FUN_0010167e(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017aa(param_1,param_2);
  local_28 = FUN_001017d4(param_1);
  cVar2 = FUN_001017f2(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101818(param_1);
    uVar3 = FUN_0010183e(&local_38);
    cVar2 = FUN_00101860(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010171e;
    }
  }
  bVar1 = true;
LAB_0010171e:
  if (bVar1) {
    uVar3 = FUN_00101887(param_2);
    FUN_001018c4(local_30,uVar3);
    FUN_001018fc(&local_28,&local_38);
    local_38 = FUN_0010191e(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010183e(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_0010275c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101593(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010167e(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b64(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_00102bc1(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_00103918(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027de(param_2);
  puVar2 = (undefined4 *)FUN_001039a8(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101b7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022f6(param_2);
  uVar1 = FUN_00102314(uVar1);
  FUN_00102326(param_1,uVar1);
  return;
}




void FUN_001030f7(void)

{
  FUN_00102e62();
  FUN_00102fa0();
  return;
}




void FUN_00103c3f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103296(undefined8 param_1)

{
  FUN_0010333c(param_1);
  return;
}




void FUN_001040d8(void)

{
  return;
}




void FUN_00102a4a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be6(param_1,param_2);
  return;
}




void FUN_00103bea(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001028bc(undefined8 *param_1)

{
  return *param_1;
}




long FUN_001021cc(long param_1)

{
  return param_1 + 8;
}




void FUN_001040f9(void)

{
  return;
}




void FUN_001024f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102982(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001032b6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010337a(param_1,param_2);
  return;
}




undefined8 FUN_00102534(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021b6(param_1);
  local_50 = FUN_001021cc(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010201d(local_58);
    local_59 = FUN_00101860(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010275c(local_58);
    }
    else {
      local_58 = FUN_00102894(local_58);
    }
  }
  FUN_00102198(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102994(param_1);
    cVar1 = FUN_001017f2(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029e4(local_38,&local_58,&local_50);
      goto LAB_001026b6;
    }
    FUN_00102730(&local_48);
  }
  uVar2 = FUN_001024d6(local_48);
  cVar1 = FUN_00101860(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010279e(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029e4(local_38,&local_58,&local_50);
  }
LAB_001026b6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102ced(undefined8 param_1)

{
  FUN_001022f6(param_1);
  return;
}




void FUN_0010279e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102982(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001040ee(void)

{
  return;
}




void FUN_00101b46(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b34(param_2);
  FUN_001022be(param_1,uVar1);
  return;
}




undefined8 FUN_00101bbe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102314(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103714(undefined8 param_1,undefined8 param_2)

{
  FUN_00103610(param_1,param_2);
  return param_1;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010167e(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010237c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101654(0x30,param_2);
  uVar1 = FUN_00101be2(param_5);
  uVar2 = FUN_00101bd0(param_4);
  uVar3 = FUN_00101bbe(param_3);
  uVar4 = FUN_00101b12(param_2);
  uVar5 = FUN_001028d2(param_1);
                    /* try { // try from 0010240b to 0010240f has its CatchHandler @ 00102412 */
  FUN_00102912(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102c22(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001018c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b34(param_2);
  FUN_00101b46(param_1,uVar1);
  return param_1;
}




void FUN_001035b0(void)

{
  return;
}




void FUN_001040b7(void)

{
  return;
}




ulong FUN_00103f32(long param_1,ulong param_2,long param_3)

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




void FUN_001040e3(void)

{
  return;
}




void FUN_001018fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001017aa(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a64(param_1,param_2);
  return;
}




void FUN_00103436(void)

{
  return;
}




void FUN_00101a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021cc(param_1);
  uVar2 = FUN_001021b6(param_1);
  FUN_001021e2(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001031f6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001028d2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c14(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001021e2(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010201d(local_38);
    cVar1 = FUN_00101860(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010275c(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102894(local_38);
    }
  }
  FUN_00102198(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103406(undefined8 param_1)

{
  FUN_001035b0(param_1);
  return;
}




void FUN_00103c6a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00104291(undefined8 *param_1)

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




undefined8 * FUN_00102772(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010408b(void)

{
  return;
}




void FUN_00103bbe(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101887(undefined8 param_1)

{
  return param_1;
}




void FUN_00103742(void)

{
  return;
}




undefined8 FUN_0010310c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b3e("Calling good()...");
  FUN_001030f7();
  FUN_00103b3e("Finished good()");
  FUN_00103b3e("Calling bad()...");
  FUN_00102d0b();
  FUN_00103b3e("Finished bad()");
  return 0;
}




undefined8 FUN_001039e2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102350(param_1);
  uVar2 = FUN_00101be2(param_4);
  uVar3 = FUN_00101bd0(param_3);
  uVar4 = FUN_00101bbe(param_2);
  FUN_0010237c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001017d4(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




void FUN_001032e0(long param_1)

{
  FUN_00103406(param_1);
  FUN_00103426(param_1);
  FUN_001031cc(param_1 + 8);
  return;
}




void FUN_0010215a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102816(param_1,param_2);
  FUN_0010285a(param_1,param_2);
  return;
}




void FUN_001040ac(void)

{
  return;
}




undefined8 FUN_00102800(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001024aa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001022f6(undefined8 param_1)

{
  FUN_001028bc(param_1);
  return;
}




void FUN_00102fa0(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103276(local_88);
                    /* try { // try from 00102fdb to 0010307e has its CatchHandler @ 001030ca */
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001032b6(local_58,local_88);
                    /* try { // try from 00103086 to 0010308a has its CatchHandler @ 001030b5 */
  FUN_001015fd(local_58);
  FUN_00103296(local_58);
  FUN_00103296(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103dce(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102aa6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c22(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00104075(void)

{
  return;
}




void FUN_00101b04(void)

{
  return;
}




void FUN_0010183e(undefined8 *param_1)

{
  FUN_00101b12(*param_1);
  return;
}




long FUN_00103171(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001024d6(undefined8 param_1)

{
  FUN_0010201d(param_1);
  return;
}




void FUN_001039a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039e2(param_2);
  FUN_001039f4(uVar1,uVar2);
  return;
}




void FUN_00104080(void)

{
  return;
}




void FUN_001043f0(void)

{
  return;
}




void FUN_0010337a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001034b0(param_1,param_2);
  lVar1 = FUN_00103520(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103536(param_1);
                    /* try { // try from 001033d5 to 001033d9 has its CatchHandler @ 001033df */
    uVar3 = FUN_0010354c(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102be6(void)

{
  return;
}




long FUN_00103536(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001028e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aa6(param_1,param_2,0);
  return;
}




void FUN_0010331c(undefined8 param_1)

{
  FUN_00103436(param_1);
  return;
}




void FUN_001022a0(undefined8 param_1)

{
  FUN_001028aa(param_1);
  return;
}




void FUN_001015fd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010167e(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ab4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102198(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001026d2(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00103756(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010366c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021cc(param_1);
  uVar2 = FUN_00103756(param_2);
  uVar1 = FUN_0010376c(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026d2(param_1);
  uVar2 = FUN_001038db(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024c0(param_1);
  uVar2 = FUN_001038f9(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_0010319e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00104011(void)

{
  return 1;
}




void FUN_00103236(undefined8 param_1)

{
  FUN_0010331c(param_1);
  return;
}




void FUN_001040a1(void)

{
  return;
}




void FUN_00104329(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010333c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b6(param_1);
  FUN_00103446(param_1,uVar1);
  FUN_00103236(param_1);
  return;
}




void FUN_00103d42(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039e2(param_3);
  puVar3 = (undefined8 *)FUN_00101654(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102d0b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103276(local_88);
                    /* try { // try from 00102d46 to 00102de9 has its CatchHandler @ 00102e35 */
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001032b6(local_58,local_88);
                    /* try { // try from 00102df1 to 00102df5 has its CatchHandler @ 00102e20 */
  FUN_00101529(local_58);
  FUN_00103296(local_58);
  FUN_00103296(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010201d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027de(param_1);
  FUN_00102800(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b96(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102a2c(undefined8 param_1)

{
  FUN_00102bd4(param_1);
  return;
}




void FUN_00103446(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010275c(local_28);
    FUN_00103446(param_1,uVar1);
    lVar2 = FUN_00102894(local_28);
    FUN_0010215a(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010397c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102bd4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101654(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c95(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010364e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101654(0x30,param_2);
  uVar1 = FUN_001039e2(param_3);
  uVar2 = FUN_00101b12(param_2);
  uVar3 = FUN_001028d2(param_1);
  FUN_00103aae(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102816(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b12(param_2);
  uVar2 = FUN_001028d2(param_1);
  FUN_00102a4a(uVar2,uVar1);
  return;
}




void FUN_001022be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b34(param_2);
  FUN_00102326(param_1,uVar1);
  return;
}




void FUN_00102ccf(undefined8 param_1)

{
  FUN_00102ced(param_1);
  return;
}




void FUN_00103d1a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102e62(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103276(local_88);
                    /* try { // try from 00102e9d to 00102f27 has its CatchHandler @ 00102f73 */
  pvVar1 = operator_new__(100);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010167e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001032b6(local_58,local_88);
                    /* try { // try from 00102f2f to 00102f33 has its CatchHandler @ 00102f5e */
  FUN_00101593(local_58);
  FUN_00103296(local_58);
  FUN_00103296(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102912(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101be2(param_5);
  uVar2 = FUN_00101bd0(param_4);
  uVar3 = FUN_00101bbe(param_3);
  FUN_00102af6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102bfa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010166a(void)

{
  return;
}




void FUN_00101b12(long param_1)

{
  FUN_001022a0(param_1 + 0x20);
  return;
}




void FUN_0010406a(void)

{
  return;
}




undefined8 FUN_001021b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_0010376c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103918(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010397c(param_2);
                    /* try { // try from 001037db to 0010386d has its CatchHandler @ 00103899 */
    uVar2 = FUN_0010376c(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103992(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103918(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010397c(local_38);
      uVar2 = FUN_0010376c(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103992(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104104(void)

{
  return;
}




undefined8 FUN_001039f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102350(param_1);
  uVar2 = FUN_001039e2(param_2);
  FUN_00103a40(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102326(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b34(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104380(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103b3e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103d6d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001024c0(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001017f2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102af6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bbe(param_3);
  uVar1 = FUN_00101bd0(param_4);
  FUN_0010189a(local_38,uVar1);
  FUN_00101be2(param_5);
  uVar1 = FUN_00101654(0x10,param_2);
                    /* try { // try from 00102b7e to 00102b82 has its CatchHandler @ 00102b85 */
  FUN_00102c3a(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010426e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038db(undefined8 param_1)

{
  FUN_00103171(param_1);
  return;
}




void FUN_0010354c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010364e(local_18,param_1);
  FUN_0010366c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103426(void)

{
  return;
}




undefined8 FUN_00104020(void)

{
  return 0;
}




void FUN_00102a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bfa(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c8c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ccf(param_2);
  puVar2 = (undefined4 *)FUN_00102314(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001029e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102bc1(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102982(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010245a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102198(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104348(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103276(undefined8 param_1)

{
  FUN_00103256(param_1);
  return;
}




undefined8 FUN_00103992(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001034b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035bf(param_1,param_2);
  FUN_0010363a(param_1,param_2);
  FUN_001031cc(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010363a(void)

{
  return;
}




void FUN_00102198(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00104146(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010410f,local_18);
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




void FUN_00103aae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039e2(param_3);
  FUN_00103aec(param_1,param_2,uVar1);
  return;
}




void FUN_00103610(undefined8 param_1,undefined8 param_2)

{
  FUN_00103742(param_1,param_2);
  return;
}




void FUN_0010285a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d2(param_1);
  FUN_00102a74(uVar1,param_2,1);
  return;
}




undefined4 FUN_00101818(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b04(param_1);
  return unaff_EBX;
}




undefined8 FUN_00102994(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102198(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_001031cc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031f6(param_1);
  return;
}




void FUN_0010410f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010189a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b7e(param_1,param_2);
  return;
}



