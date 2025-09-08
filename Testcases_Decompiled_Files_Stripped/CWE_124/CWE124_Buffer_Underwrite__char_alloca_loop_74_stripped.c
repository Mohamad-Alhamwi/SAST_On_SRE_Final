
void FUN_00101509(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  ulong local_88;
  long local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 2;
  plVar1 = (long *)FUN_001016c2(param_1,&local_8c);
  local_80 = *plVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(local_80 + local_88) = local_78[local_88];
  }
  *(undefined *)(local_80 + 99) = 0;
  FUN_00103b4a(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016af(void)

{
  return;
}




void FUN_001039b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039ee(param_2);
  FUN_00103a00(uVar1,uVar2);
  return;
}




void FUN_001038e7(undefined8 param_1)

{
  FUN_0010317e(param_1);
  return;
}




void FUN_00102c3e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001040b8(void)

{
  return;
}




void FUN_00103442(void)

{
  return;
}




void FUN_001040ef(void)

{
  return;
}




void FUN_00103ba2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039ee(param_3);
  puVar3 = (undefined8 *)FUN_00101699(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103ccc(undefined4 param_1)

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




void FUN_0010285a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b56(param_2);
  uVar2 = FUN_00102916(param_1);
  FUN_00102a8e(uVar2,uVar1);
  return;
}




void FUN_001043f0(void)

{
  return;
}




undefined8 FUN_001028d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102578(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021fa(param_1);
  local_50 = FUN_00102210(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102061(local_58);
    local_59 = FUN_001018a4(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027a0(local_58);
    }
    else {
      local_58 = FUN_001028d8(local_58);
    }
  }
  FUN_001021dc(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029d8(param_1);
    cVar1 = FUN_00101836(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a28(local_38,&local_58,&local_50);
      goto LAB_001026fa;
    }
    FUN_00102774(&local_48);
  }
  uVar2 = FUN_0010251a(local_48);
  cVar1 = FUN_001018a4(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e2(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a28(local_38,&local_58,&local_50);
  }
LAB_001026fa:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101aa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102210(param_1);
  uVar2 = FUN_001021fa(param_1);
  FUN_00102226(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103202(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 * FUN_00102774(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b78(param_2);
  FUN_00101b8a(param_1,uVar1);
  return param_1;
}




void FUN_00103282(undefined8 param_1)

{
  FUN_00103262(param_1);
  return;
}




undefined8 FUN_00101836(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001027a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




ulong FUN_00103e3a(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101c14(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c66(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102822(long param_1)

{
  FUN_00102a70(param_1 + 0x20);
  return;
}




void FUN_00102394(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102916(param_1);
  FUN_00102928(uVar1,1);
  return;
}




undefined8 FUN_00101c26(undefined8 param_1)

{
  return param_1;
}




void FUN_00102928(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aea(param_1,param_2,0);
  return;
}




void FUN_00104076(void)

{
  return;
}




void FUN_00103bf6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103242(undefined8 param_1)

{
  FUN_00103328(param_1);
  return;
}




void FUN_00101882(undefined8 *param_1)

{
  FUN_00101b56(*param_1);
  return;
}




void FUN_00103432(void)

{
  return;
}




int FUN_0010403b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103109(void)

{
  FUN_00102f2e();
  return;
}




undefined8
FUN_001020b4(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102210(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010251a(param_3);
      uVar5 = FUN_00102061(param_4);
      cVar1 = FUN_001018a4(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102138;
      }
    }
  }
  bVar2 = true;
LAB_00102138:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021dc(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




ulong FUN_00103f3e(long param_1,ulong param_2,long param_3)

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




void FUN_00103905(undefined8 param_1)

{
  FUN_001031ab(param_1);
  return;
}




void FUN_00103c20(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010361c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010374e(param_1,param_2);
  return;
}




void FUN_00103aba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039ee(param_3);
  FUN_00103af8(param_1,param_2,uVar1);
  return;
}




void FUN_001015d1(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  ulong local_88;
  long local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 2;
  plVar1 = (long *)FUN_001016c2(param_1,&local_8c);
  local_80 = *plVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(local_80 + local_88) = local_78[local_88];
  }
  *(undefined *)(local_80 + 99) = 0;
  FUN_00103b4a(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_0010185c(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b48(param_1);
  return unaff_EBX;
}




void FUN_00103a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101699(0x30,param_2);
  uVar1 = FUN_001039ee(param_3);
  uVar2 = FUN_00101b56(param_2);
  uVar3 = FUN_00102916(param_1);
  FUN_00103aba(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010365a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102b3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c02(param_3);
  uVar1 = FUN_00101c14(param_4);
  FUN_001018de(local_38,uVar1);
  FUN_00101c26(param_5);
  uVar1 = FUN_00101699(0x10,param_2);
                    /* try { // try from 00102bc2 to 00102bc6 has its CatchHandler @ 00102bc9 */
  FUN_00102c7e(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ca1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102538(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029c6(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001029c6(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018a4(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103328(undefined8 param_1)

{
  FUN_00103442(param_1);
  return;
}




long FUN_001031ab(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101818(undefined8 param_1)

{
  FUN_00101af8(param_1);
  return;
}




undefined8 FUN_0010402c(void)

{
  return 0;
}




undefined8 FUN_00102358(undefined8 param_1)

{
  return param_1;
}




void FUN_001040d9(void)

{
  return;
}




void FUN_0010272c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c6(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c6(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103c4b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001040e4(void)

{
  return;
}




long FUN_00102210(long param_1)

{
  return param_1 + 8;
}




void FUN_0010236a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b78(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_001016c2(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017ee(param_1,param_2);
  local_28 = FUN_00101818(param_1);
  cVar2 = FUN_00101836(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010185c(param_1);
    uVar3 = FUN_00101882(&local_38);
    cVar2 = FUN_001018a4(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101762;
    }
  }
  bVar1 = true;
LAB_00101762:
  if (bVar1) {
    uVar3 = FUN_001018cb(param_2);
    FUN_00101908(local_30,uVar3);
    FUN_00101940(&local_28,&local_38);
    local_38 = FUN_00101962(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101882(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104081(void)

{
  return;
}




void FUN_0010289e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102916(param_1);
  FUN_00102ab8(uVar1,param_2,1);
  return;
}




undefined8 FUN_00104152(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010411b,local_18);
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




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010249e(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102210(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010251a(local_50);
    cVar2 = FUN_001018a4(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010251a(local_50);
      cVar2 = FUN_001018a4(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e2(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102504(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102504(local_60);
          local_48[1] = 0;
          FUN_00102538(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027b6(local_48);
          uVar6 = FUN_0010251a(*puVar5);
          cVar2 = FUN_001018a4(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102578(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027a0(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102538(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010272c(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102716(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102716(local_60);
        uVar6 = FUN_00102716(local_60);
        FUN_0010272c(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102774(local_48);
        uVar6 = FUN_0010251a(*puVar5);
        cVar2 = FUN_001018a4(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102578(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027a0(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102538(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010272c(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102046;
  }
  lVar3 = FUN_001024ee(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d5a:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102504(local_60);
    uVar6 = FUN_0010251a(*puVar5);
    cVar2 = FUN_001018a4(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d5a;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102504(local_60);
    local_48[1] = 0;
    FUN_00102538(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102578(local_60,param_3);
  }
LAB_00102046:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102c7e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cd0(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040fa(void)

{
  return;
}




void FUN_0010233a(undefined8 param_1)

{
  FUN_00102900(param_1);
  return;
}




void FUN_00104354(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8
FUN_00101962(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c26(param_5);
  uVar2 = FUN_00101c14(param_4);
  uVar3 = FUN_00101c02(param_3);
  local_40 = FUN_00101c38(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019de to 00101a21 has its CatchHandler @ 00101a5f */
  uVar1 = FUN_00102061(local_40);
  local_38 = FUN_00101cb8(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010219e(param_1,local_40);
    FUN_001021dc(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020b4(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00101b78(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103678(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102210(param_1);
  uVar2 = FUN_00103762(param_2);
  uVar1 = FUN_00103778(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102716(param_1);
  uVar2 = FUN_001038e7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102504(param_1);
  uVar2 = FUN_00103905(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00101c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102394(param_1);
  uVar2 = FUN_00101c26(param_4);
  uVar3 = FUN_00101c14(param_3);
  uVar4 = FUN_00101c02(param_2);
  FUN_001023c0(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_0010374e(void)

{
  return;
}




undefined8 FUN_00103988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102900(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001035cb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103720(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010401d(void)

{
  return 1;
}




void FUN_00101940(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102226(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102061(local_38);
    cVar1 = FUN_001018a4(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027a0(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028d8(local_38);
    }
  }
  FUN_001021dc(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010427a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103dda(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102d13(undefined8 param_1)

{
  FUN_00102d31(param_1);
  return;
}




void FUN_001040c3(void)

{
  return;
}




void FUN_00102f2e(void)

{
  undefined8 *puVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  void *local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103282(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102ffa;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = local_98;
  local_58[0] = 0;
                    /* try { // try from 0010302b to 00103094 has its CatchHandler @ 001030e0 */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103030;
  puVar1 = (undefined8 *)FUN_001016c2(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103054;
  puVar1 = (undefined8 *)FUN_001016c2(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103078;
  puVar1 = (undefined8 *)FUN_001016c2(local_88,local_58);
  *puVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103095;
  FUN_001032c2(local_58,local_88);
                    /* try { // try from 0010309c to 001030a0 has its CatchHandler @ 001030cb */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1030a1;
  FUN_001015d1(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1030ad;
  FUN_001032a2(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1030b9;
  FUN_001032a2(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103103;
  __stack_chk_fail();
}




void FUN_00101b48(void)

{
  return;
}




void FUN_0010408c(void)

{
  return;
}




void FUN_00102d31(undefined8 param_1)

{
  FUN_0010233a(param_1);
  return;
}




void FUN_00103d79(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101c02(undefined8 param_1)

{
  return param_1;
}




void FUN_001032c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103386(param_1,param_2);
  return;
}




void FUN_00102956(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c26(param_5);
  uVar2 = FUN_00101c14(param_4);
  uVar3 = FUN_00101c02(param_3);
  FUN_00102b3a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c76(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined4 * FUN_00103924(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102822(param_2);
  puVar2 = (undefined4 *)FUN_001039b4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_001028ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102302(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b78(param_2);
  FUN_0010236a(param_1,uVar1);
  return;
}




void FUN_00103646(void)

{
  return;
}




void FUN_00104110(void)

{
  return;
}




undefined8 FUN_001021fa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cd0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d13(param_2);
  puVar2 = (undefined4 *)FUN_00102358(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001031d8(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103202(param_1);
  return;
}




long FUN_00102504(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001040ad(void)

{
  return;
}




void FUN_001035bc(void)

{
  return;
}




void FUN_00101b8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b78(param_2);
  FUN_00102302(param_1,uVar1);
  return;
}




void FUN_00103412(undefined8 param_1)

{
  FUN_001035bc(param_1);
  return;
}




void FUN_001018de(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc2(param_1,param_2);
  return;
}




undefined8 FUN_00101af8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021dc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102aea(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c66(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103558(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010365a(local_18,param_1);
  FUN_00103678(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027e2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c6(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103348(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fa(param_1);
  FUN_00103452(param_1,uVar1);
  FUN_00103242(param_1);
  return;
}




void FUN_00102a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c05(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c6(param_3);
  param_1[1] = *puVar1;
  return;
}




bool FUN_0010421f(pthread_t *param_1)

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




void FUN_001021dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103da7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104055(void)

{
  return;
}




void FUN_00104105(void)

{
  return;
}




undefined8 FUN_00103762(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102a70(undefined8 param_1)

{
  FUN_00102c18(param_1);
  return;
}




undefined8 FUN_00102c05(undefined8 param_1)

{
  return param_1;
}




void FUN_001032ec(long param_1)

{
  FUN_00103412(param_1);
  FUN_00103432(param_1);
  FUN_001031d8(param_1 + 8);
  return;
}




undefined8 FUN_0010399e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103bca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029d8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021dc(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b56(long param_1)

{
  FUN_001022e4(param_1 + 0x20);
  return;
}




undefined8 FUN_00102916(undefined8 param_1)

{
  return param_1;
}




void FUN_00102061(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102822(param_1);
  FUN_00102844(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102844(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101699(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104316(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104060(void)

{
  return;
}




undefined8 FUN_00103720(undefined8 param_1,undefined8 param_2)

{
  FUN_0010361c(param_1,param_2);
  return param_1;
}




undefined8 FUN_0010249e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021dc(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101bc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233a(param_2);
  uVar1 = FUN_00102358(uVar1);
  FUN_0010236a(param_1,uVar1);
  return;
}




void FUN_00103262(undefined8 param_1)

{
  FUN_001032ec(param_1);
  return;
}




void FUN_001017ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aa8(param_1,param_2);
  return;
}




undefined8 * FUN_001027b6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00102716(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102c18(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c2a(void)

{
  return;
}




long FUN_00103778(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103924(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103988(param_2);
                    /* try { // try from 001037e7 to 00103879 has its CatchHandler @ 001038a5 */
    uVar2 = FUN_00103778(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010399e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103924(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103988(local_38);
      uVar2 = FUN_00103778(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010399e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103386(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001034bc(param_1,param_2);
  lVar1 = FUN_0010352c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103542(param_1);
                    /* try { // try from 001033e1 to 001033e5 has its CatchHandler @ 001033eb */
    uVar3 = FUN_00103558(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_001024ee(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010406b(void)

{
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




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




long FUN_0010317e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001022e4(undefined8 param_1)

{
  FUN_001028ee(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00104097(void)

{
  return;
}




void FUN_00103b4a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103d4e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102394(param_1);
  uVar2 = FUN_001039ee(param_2);
  FUN_00103a4c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_0010251a(undefined8 param_1)

{
  FUN_00102061(param_1);
  return;
}




undefined8 FUN_001039ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00104335(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103d26(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010352c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001018cb(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d4f(void)

{
  long *plVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  long local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103282(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102e1b;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = (long)local_98 + -8;
  local_58[0] = 0;
                    /* try { // try from 00102e50 to 00102eb9 has its CatchHandler @ 00102f05 */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102e55;
  plVar1 = (long *)FUN_001016c2(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102e79;
  plVar1 = (long *)FUN_001016c2(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102e9d;
  plVar1 = (long *)FUN_001016c2(local_88,local_58);
  *plVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102eba;
  FUN_001032c2(local_58,local_88);
                    /* try { // try from 00102ec1 to 00102ec5 has its CatchHandler @ 00102ef0 */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102ec6;
  FUN_00101509(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102ed2;
  FUN_001032a2(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102ede;
  FUN_001032a2(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f28;
  __stack_chk_fail();
}




void FUN_001032a2(undefined8 param_1)

{
  FUN_00103348(param_1);
  return;
}




undefined8 FUN_0010429d(undefined8 *param_1)

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




void FUN_0010411b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103119(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b4a("Calling good()...");
  FUN_00103109();
  FUN_00103b4a("Finished good()");
  FUN_00103b4a("Calling bad()...");
  FUN_00102d4f();
  FUN_00103b4a("Finished bad()");
  return 0;
}




void FUN_001034bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035cb(param_1,param_2);
  FUN_00103646(param_1,param_2);
  FUN_001031d8(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a8e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2a(param_1,param_2);
  return;
}




void FUN_00102ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c3e(param_1,param_2,param_3);
  return;
}




void FUN_001023c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101699(0x30,param_2);
  uVar1 = FUN_00101c26(param_5);
  uVar2 = FUN_00101c14(param_4);
  uVar3 = FUN_00101c02(param_3);
  uVar4 = FUN_00101b56(param_2);
  uVar5 = FUN_00102916(param_1);
                    /* try { // try from 0010244f to 00102453 has its CatchHandler @ 00102456 */
  FUN_00102956(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010219e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010285a(param_1,param_2);
  FUN_0010289e(param_1,param_2);
  return;
}




long FUN_00103542(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103452(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027a0(local_28);
    FUN_00103452(param_1,uVar1);
    lVar2 = FUN_001028d8(local_28);
    FUN_0010219e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001040a2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103b70(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001040ce(void)

{
  return;
}



