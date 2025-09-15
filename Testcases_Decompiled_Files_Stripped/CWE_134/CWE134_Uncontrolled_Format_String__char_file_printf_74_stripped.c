
void FUN_001033b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103807(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103807(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00103528(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038d0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103934(param_2);
                    /* try { // try from 00103597 to 00103629 has its CatchHandler @ 00103655 */
    uVar2 = FUN_00103528(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010394a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038d0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103934(local_38);
      uVar2 = FUN_00103528(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010394a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00101e46(undefined8 param_1,undefined8 param_2)

{
  FUN_00102036(param_1,param_2);
  return;
}




void FUN_00102d1a(undefined8 param_1,undefined8 param_2)

{
  FUN_001034fe(param_1,param_2);
  return;
}




void FUN_00102fc6(undefined8 param_1)

{
  FUN_00103754(param_1);
  return;
}




void FUN_0010386a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103ab7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103807(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103769(undefined8 param_1,undefined8 param_2)

{
  FUN_0010399c(param_1,param_2,0);
  return;
}




void FUN_001017ef(void)

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
  FUN_00101e06(local_e8);
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
                    /* try { // try from 001018cf to 00101950 has its CatchHandler @ 001019a8 */
  plVar1 = (long *)FUN_00101f0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101f0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101f0a(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00101e46(local_b8,local_e8);
                    /* try { // try from 0010195b to 0010195f has its CatchHandler @ 00101990 */
  FUN_00103dc4(local_b8);
  FUN_00101e26(local_b8);
  FUN_00101e26(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ab7(undefined8 param_1)

{
  return param_1;
}




void FUN_00103020(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036d4(param_1);
  FUN_00103769(uVar1,1);
  return;
}




void FUN_001038b2(undefined8 param_1)

{
  FUN_00103aca(param_1);
  return;
}




long FUN_00102e9c(long param_1)

{
  return param_1 + 8;
}




void FUN_00102ff6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102686(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001031a6(undefined8 param_1)

{
  FUN_00102b6f(param_1);
  return;
}




void FUN_00103797(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102734(param_5);
  uVar2 = FUN_00102722(param_4);
  uVar3 = FUN_00102710(param_3);
  FUN_001039ec(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010254b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010444a(void)

{
  return;
}




void FUN_00103960(void)

{
  return;
}




undefined8 FUN_0010225f(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00103400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103eb5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103c90(undefined8 param_1)

{
  FUN_00103ceb(param_1);
  return;
}




void FUN_001043f2(void)

{
  return;
}




undefined8 FUN_0010381a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cac(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001036d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102664(param_2);
  uVar2 = FUN_001036d4(param_1);
  FUN_001036e6(uVar2,uVar1);
  return;
}




undefined8 FUN_00102fe4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102722(undefined8 param_1)

{
  return param_1;
}




void FUN_00104408(void)

{
  return;
}




undefined8 FUN_00102561(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00101d2e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8
FUN_00102bc2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102e9c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001031a6(param_3);
      uVar5 = FUN_00102b6f(param_4);
      cVar1 = FUN_00102238(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102c46;
      }
    }
  }
  bVar2 = true;
LAB_00102c46:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102cac(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101eac(undefined8 param_1)

{
  FUN_001020f2(param_1);
  return;
}




void FUN_00103f3b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 * FUN_0010342c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001027c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010312a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102e9c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001031a6(local_50);
    cVar2 = FUN_00102238(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001031a6(local_50);
      cVar2 = FUN_00102238(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103458(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103190(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103190(local_60);
          local_48[1] = 0;
          FUN_001031c4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010342c(local_48);
          uVar6 = FUN_001031a6(*puVar5);
          cVar2 = FUN_00102238(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103204(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010254b(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001031c4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001033b8(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001033a2(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001033a2(local_60);
        uVar6 = FUN_001033a2(local_60);
        FUN_001033b8(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103400(local_48);
        uVar6 = FUN_001031a6(*puVar5);
        cVar2 = FUN_00102238(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103204(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010254b(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001031c4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001033b8(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102b54;
  }
  lVar3 = FUN_0010317a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102868:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103190(local_60);
    uVar6 = FUN_001031a6(*puVar5);
    cVar2 = FUN_00102238(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102868;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103190(local_60);
    local_48[1] = 0;
    FUN_001031c4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103204(local_60,param_3);
  }
LAB_00102b54:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001034ba(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010216c(param_1);
  FUN_00102102(param_1,uVar1);
  FUN_00101dc6(param_1);
  return;
}




undefined8 FUN_00101c73(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103e8f("Calling good()...");
  FUN_00101c5e();
  FUN_00103e8f("Finished good()");
  FUN_00103e8f("Calling bad()...");
  FUN_00101569();
  FUN_00103e8f("Finished bad()");
  return 0;
}




void FUN_00103498(long param_1)

{
  FUN_001038b2(param_1 + 0x20);
  return;
}




ulong FUN_0010417f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010243c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cca(param_1,param_2);
  FUN_00102d44(param_1,param_2);
  FUN_00101d5c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010443f(void)

{
  return;
}




void FUN_00104011(undefined4 param_1)

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




void FUN_00101569(void)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e06(local_e8);
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
  sVar1 = strlen(local_88);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101643 to 00101767 has its CatchHandler @ 001017bf */
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(local_88 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00103e8f("fgets() failed");
        local_88[sVar1] = '\0';
      }
      fclose(__stream);
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  FUN_00101e46(local_b8,local_e8);
                    /* try { // try from 00101772 to 00101776 has its CatchHandler @ 001017a7 */
  FUN_00103d5c(local_b8);
  FUN_00101e26(local_b8);
  FUN_00101e26(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined4 FUN_00102238(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_001033a2(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102eb2(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102b6f(local_38);
    cVar1 = FUN_00102238(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010254b(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102561(local_38);
    }
  }
  FUN_00102cac(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103458(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103807(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103fe6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010216c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101e06(undefined8 param_1)

{
  FUN_00101de6(param_1);
  return;
}




void FUN_001043dc(void)

{
  return;
}




void FUN_00103cae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b7f(param_3);
  FUN_00103d0a(param_1,param_2,uVar1);
  return;
}




void FUN_00103adc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103b7f(param_2);
  FUN_00103b92(uVar1,uVar2);
  return;
}




void FUN_00104413(void)

{
  return;
}




void FUN_0010406b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001043a5(void)

{
  return;
}




void FUN_00103974(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102b6f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103498(param_1);
  FUN_001034ba(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010411f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001039ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102710(param_3);
  uVar1 = FUN_00102722(param_4);
  FUN_00102272(local_38,uVar1);
  FUN_00102734(param_5);
  uVar1 = FUN_00101cd8(0x10,param_2);
                    /* try { // try from 00103a74 to 00103a78 has its CatchHandler @ 00103a7b */
  FUN_00103b2e(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010441e(void)

{
  return;
}




void FUN_001046d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001020f2(void)

{
  return;
}




void FUN_00102cac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103807(undefined8 param_1)

{
  return param_1;
}




void FUN_001036b5(undefined8 param_1)

{
  FUN_00101d2e(param_1);
  return;
}




long FUN_00103190(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102746(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103020(param_1);
  uVar2 = FUN_00102734(param_4);
  uVar3 = FUN_00102722(param_3);
  uVar4 = FUN_00102710(param_2);
  FUN_0010304c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103bde(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103c90(param_2);
  puVar2 = (undefined4 *)FUN_00102fe4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101cd8(0x30,param_2);
  uVar1 = FUN_00103b7f(param_3);
  uVar2 = FUN_00102664(param_2);
  uVar3 = FUN_001036d4(param_1);
  FUN_00103cae(uVar3,uVar2,uVar1);
  return;
}




void FUN_001043d1(void)

{
  return;
}




undefined8 FUN_001024ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101d5c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101d86(param_1);
  return;
}




void FUN_00102656(void)

{
  return;
}




void FUN_00103f0f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104429(void)

{
  return;
}




void FUN_00103e8f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00101f0a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102182(param_1,param_2);
  local_28 = FUN_001021ac(param_1);
  cVar2 = FUN_001021ca(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001021f0(param_1);
    uVar3 = FUN_00102216(&local_38);
    cVar2 = FUN_00102238(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101faa;
    }
  }
  bVar1 = true;
LAB_00101faa:
  if (bVar1) {
    uVar3 = FUN_0010225f(param_2);
    FUN_0010229c(local_30,uVar3);
    FUN_001022d4(&local_28,&local_38);
    local_38 = FUN_001022f6(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00102216(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103204(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010216c(param_1);
  local_50 = FUN_00102e9c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102b6f(local_58);
    local_59 = FUN_00102238(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010254b(local_58);
    }
    else {
      local_58 = FUN_00102561(local_58);
    }
  }
  FUN_00102cac(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010381a(param_1);
    cVar1 = FUN_001021ca(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010386a(local_38,&local_58,&local_50);
      goto LAB_00103386;
    }
    FUN_00103400(&local_48);
  }
  uVar2 = FUN_001031a6(local_48);
  cVar1 = FUN_00102238(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103458(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010386a(local_38,&local_58,&local_50);
  }
LAB_00103386:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103b92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103020(param_1);
  uVar2 = FUN_00103b7f(param_2);
  FUN_00103c22(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_00101d01(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103e2c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f0a(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  puts(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e62(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036d4(param_1);
  FUN_00103710(uVar1,param_2,1);
  return;
}




undefined8 FUN_00104497(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104460,local_18);
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




undefined8 FUN_0010394a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010312a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cac(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f90(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00104564(pthread_t *param_1)

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




void FUN_0010399c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103b16(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00101d86(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102606(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102cac(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010317a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103754(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001020e2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




undefined4 FUN_001021f0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102656(param_1);
  return unaff_EBX;
}




undefined8 FUN_00104371(void)

{
  return 0;
}




void FUN_00102036(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010243c(param_1,param_2);
  lVar1 = FUN_001024ac(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001024c2(param_1);
                    /* try { // try from 00102091 to 00102095 has its CatchHandler @ 0010209b */
    uVar3 = FUN_001024d8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001040be(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001040ec(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_001024c2(long param_1)

{
  return param_1 + 0x10;
}




undefined8
FUN_001022f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102734(param_5);
  uVar2 = FUN_00102722(param_4);
  uVar3 = FUN_00102710(param_3);
  local_40 = FUN_00102746(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102372 to 001023b5 has its CatchHandler @ 001023f3 */
  uVar1 = FUN_00102b6f(local_40);
  local_38 = FUN_001027c6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102578(param_1,local_40);
    FUN_00102cac(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102bc2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001043c6(void)

{
  return;
}




undefined8 FUN_001045e2(undefined8 *param_1)

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




void FUN_00101dc6(undefined8 param_1)

{
  FUN_00101eac(param_1);
  return;
}




void FUN_00102f70(undefined8 param_1)

{
  FUN_00103742(param_1);
  return;
}




void FUN_00101e26(undefined8 param_1)

{
  FUN_00101ecc(param_1);
  return;
}




void FUN_001031c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103807(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001036e6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103960(param_1,param_2);
  return;
}




void FUN_001043b0(void)

{
  return;
}




void FUN_001020c2(undefined8 param_1)

{
  FUN_0010253c(param_1);
  return;
}




void FUN_00102d58(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001026d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fc6(param_2);
  uVar1 = FUN_00102fe4(uVar1);
  FUN_00102ff6(param_1,uVar1);
  return;
}




void FUN_00103fbb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101cd8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102734(undefined8 param_1)

{
  return param_1;
}




void FUN_0010467a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103b2e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103bde(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102182(undefined8 param_1,undefined8 param_2)

{
  FUN_001025b6(param_1,param_2);
  return;
}




void FUN_00102578(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e1e(param_1,param_2);
  FUN_00102e62(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




ulong FUN_00104283(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104362(void)

{
  return 1;
}




undefined8 FUN_00102cca(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034d0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001022d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010439a(void)

{
  return;
}




undefined8 FUN_00102686(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c5e(void)

{
  FUN_001017ef();
  FUN_001019d8();
  return;
}




void FUN_00102d44(void)

{
  return;
}




void FUN_00103d0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103b7f(param_3);
  puVar3 = (undefined8 *)FUN_00101cd8(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00101cee(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_0010304c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101cd8(0x30,param_2);
  uVar1 = FUN_00102734(param_5);
  uVar2 = FUN_00102722(param_4);
  uVar3 = FUN_00102710(param_3);
  uVar4 = FUN_00102664(param_2);
  uVar5 = FUN_001036d4(param_1);
                    /* try { // try from 001030db to 001030df has its CatchHandler @ 001030e2 */
  FUN_00103797(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103b7f(undefined8 param_1)

{
  return param_1;
}




void FUN_001024d8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d58(local_18,param_1);
  FUN_00102d76(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103dc4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f0a(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d1a(param_1,param_2);
  return param_1;
}




void FUN_00102664(long param_1)

{
  FUN_00102f70(param_1 + 0x20);
  return;
}




undefined8 FUN_00103742(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102710(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d76(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102e9c(param_1);
  uVar2 = FUN_00103512(param_2);
  uVar1 = FUN_00103528(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001033a2(param_1);
  uVar2 = FUN_00103697(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103190(param_1);
  uVar2 = FUN_001036b5(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103ee7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined8 FUN_00103b16(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104699(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103697(undefined8 param_1)

{
  FUN_00101d01(param_1);
  return;
}




void FUN_0010253c(void)

{
  return;
}




void FUN_00104460(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102216(undefined8 *param_1)

{
  FUN_00102664(*param_1);
  return;
}




void FUN_00102102(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010254b(local_28);
    FUN_00102102(param_1,uVar1);
    lVar2 = FUN_00102561(local_28);
    FUN_00102578(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103ceb(undefined8 param_1)

{
  FUN_00102fc6(param_1);
  return;
}




void FUN_00102f8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102686(param_2);
  FUN_00102ff6(param_1,uVar1);
  return;
}




undefined8 FUN_001021ca(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001019d8(void)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e06(local_e8);
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
  sVar1 = strlen(local_88);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00101ab2 to 00101bd6 has its CatchHandler @ 00101c2e */
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(local_88 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00103e8f("fgets() failed");
        local_88[sVar1] = '\0';
      }
      fclose(__stream);
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_00101f0a(local_e8,local_b8);
  *puVar3 = local_88;
  FUN_00101e46(local_b8,local_e8);
                    /* try { // try from 00101be1 to 00101be5 has its CatchHandler @ 00101c16 */
  FUN_00103e2c(local_b8);
  FUN_00101e26(local_b8);
  FUN_00101e26(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104434(void)

{
  return;
}




undefined8 FUN_00103aca(undefined8 param_1)

{
  return param_1;
}




int FUN_00104380(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104455(void)

{
  return;
}




void FUN_001043e7(void)

{
  return;
}




undefined8 FUN_001045bf(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103974(param_1,param_2,param_3);
  return;
}




undefined4 * FUN_001038d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103498(param_2);
  puVar2 = (undefined4 *)FUN_00103adc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104740(void)

{
  return;
}




void FUN_00101e70(long param_1)

{
  FUN_001020c2(param_1);
  FUN_001020e2(param_1);
  FUN_00101d5c(param_1 + 8);
  return;
}




void FUN_001025b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e9c(param_1);
  uVar2 = FUN_0010216c(param_1);
  FUN_00102eb2(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001021ac(undefined8 param_1)

{
  FUN_00102606(param_1);
  return;
}




undefined8 FUN_0010229c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102686(param_2);
  FUN_00102698(param_1,uVar1);
  return param_1;
}




void FUN_00103f65(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103d5c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101f0a(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  printf(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010465b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00103512(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102698(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102686(param_2);
  FUN_00102f8e(param_1,uVar1);
  return;
}




void FUN_00102272(undefined8 param_1,undefined8 param_2)

{
  FUN_001026d0(param_1,param_2);
  return;
}




void FUN_00104093(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001043bb(void)

{
  return;
}




void FUN_00101de6(undefined8 param_1)

{
  FUN_00101e70(param_1);
  return;
}




void FUN_001043fd(void)

{
  return;
}




void FUN_001034fe(void)

{
  return;
}



