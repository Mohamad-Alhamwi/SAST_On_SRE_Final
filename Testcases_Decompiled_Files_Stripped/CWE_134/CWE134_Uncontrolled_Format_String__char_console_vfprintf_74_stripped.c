
void FUN_00104c46(void)

{
  return;
}




long FUN_00104b42(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00103c42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010587a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104802(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010568c(void)

{
  return;
}




void FUN_00104f05(undefined8 param_1)

{
  FUN_001047ab(param_1);
  return;
}




undefined8 FUN_00104d62(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010504c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102915(0x30,param_2);
  uVar1 = FUN_00104fee(param_3);
  uVar2 = FUN_00102dd2(param_2);
  uVar3 = FUN_00103b92(param_1);
  FUN_001050ba(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103796(undefined8 param_1)

{
  FUN_001032dd(param_1);
  return;
}




bool FUN_0010581f(pthread_t *param_1)

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




undefined8 FUN_001037f4(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103476(param_1);
  local_50 = FUN_0010348c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001032dd(local_58);
    local_59 = FUN_00102b20(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103a1c(local_58);
    }
    else {
      local_58 = FUN_00103b54(local_58);
    }
  }
  FUN_00103458(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103c54(param_1);
    cVar1 = FUN_00102ab2(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103ca4(local_38,&local_58,&local_50);
      goto LAB_00103976;
    }
    FUN_001039f0(&local_48);
  }
  uVar2 = FUN_00103796(local_48);
  cVar1 = FUN_00102b20(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103a5e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103ca4(local_38,&local_58,&local_50);
  }
LAB_00103976:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010357e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102df4(param_2);
  FUN_001035e6(param_1,uVar1);
  return;
}




void FUN_00102a6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d24(param_1,param_2);
  return;
}




void FUN_00103efa(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103f4c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035e6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102df4(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00102915(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103fad(undefined8 param_1)

{
  FUN_001035b6(param_1);
  return;
}




void FUN_00102549(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103610(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b92(param_1);
  FUN_00103ba4(uVar1,1);
  return;
}




void FUN_001051ca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001052a1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_0010553e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102df4(param_2);
  FUN_00102e06(param_1,uVar1);
  return param_1;
}




void FUN_00105681(void)

{
  return;
}




void FUN_001056ef(void)

{
  return;
}




undefined8 FUN_00103c54(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103458(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010376a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8
FUN_00103330(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010348c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103796(param_3);
      uVar5 = FUN_001032dd(param_4);
      cVar1 = FUN_00102b20(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001033b4;
      }
    }
  }
  bVar2 = true;
LAB_001033b4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103458(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102bbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010534e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00104f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f4c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103f8f(param_2);
  puVar2 = (undefined4 *)FUN_001035d4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010268e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001047d8(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104802(param_1);
  return;
}




void FUN_00102dc4(void)

{
  return;
}




void FUN_001051f6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104b58(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104c5a(local_18,param_1);
  FUN_00104c78(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104f9e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104948(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103476(param_1);
  FUN_00104a52(param_1,uVar1);
  FUN_00104842(param_1);
  return;
}




void FUN_00104d4e(void)

{
  return;
}




void FUN_0010261f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010293e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00102549(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104d20(undefined8 param_1,undefined8 param_2)

{
  FUN_00104c1c(param_1,param_2);
  return param_1;
}




void FUN_00104a12(undefined8 param_1)

{
  FUN_00104bbc(param_1);
  return;
}




undefined8 FUN_00103b7c(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00105000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103610(param_1);
  uVar2 = FUN_00104fee(param_2);
  FUN_0010504c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103560(undefined8 param_1)

{
  FUN_00103b6a(param_1);
  return;
}




void FUN_00103a5e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c42(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102764(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010293e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_0010268e(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104704(void)

{
  FUN_00104273();
  FUN_0010445c();
  return;
}




void FUN_00103eba(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010371a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010348c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103796(local_50);
    cVar2 = FUN_00102b20(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103796(local_50);
      cVar2 = FUN_00102b20(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103a5e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103780(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103780(local_60);
          local_48[1] = 0;
          FUN_001037b4(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103a32(local_48);
          uVar6 = FUN_00103796(*puVar5);
          cVar2 = FUN_00102b20(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001037f4(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103a1c(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001037b4(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001039a8(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103992(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103992(local_60);
        uVar6 = FUN_00103992(local_60);
        FUN_001039a8(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001039f0(local_48);
        uVar6 = FUN_00103796(*puVar5);
        cVar2 = FUN_00102b20(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001037f4(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103a1c(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001037b4(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001039a8(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001032c2;
  }
  lVar3 = FUN_0010376a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102fd6:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103780(local_60);
    uVar6 = FUN_00103796(*puVar5);
    cVar2 = FUN_00102b20(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102fd6;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103780(local_60);
    local_48[1] = 0;
    FUN_001037b4(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001037f4(local_60,param_3);
  }
LAB_001032c2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001035d4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e81(undefined8 param_1)

{
  return param_1;
}




void FUN_00104fb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104fee(param_2);
  FUN_00105000(uVar1,uVar2);
  return;
}




void FUN_00102e3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001035b6(param_2);
  uVar1 = FUN_001035d4(uVar1);
  FUN_001035e6(param_1,uVar1);
  return;
}




void FUN_001032dd(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103a9e(param_1);
  FUN_00103ac0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024e4) */
/* WARNING: Removing unreachable block (ram,0x001024f0) */

void FUN_001024c0(void)

{
  return;
}




void FUN_001037b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103c42(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001056a2(void)

{
  return;
}




void FUN_001059f0(void)

{
  return;
}




void FUN_00102d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010348c(param_1);
  uVar2 = FUN_00103476(param_1);
  FUN_001034a2(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103ca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103e81(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c42(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103610(param_1);
  uVar2 = FUN_00102ea2(param_4);
  uVar3 = FUN_00102e90(param_3);
  uVar4 = FUN_00102e7e(param_2);
  FUN_0010363c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001056fa(void)

{
  return;
}




void FUN_001056e4(void)

{
  return;
}




long FUN_0010293e(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102a6a(param_1,param_2);
  local_28 = FUN_00102a94(param_1);
  cVar2 = FUN_00102ab2(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102ad8(param_1);
    uVar3 = FUN_00102afe(&local_38);
    cVar2 = FUN_00102b20(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001029de;
    }
  }
  bVar1 = true;
LAB_001029de:
  if (bVar1) {
    uVar3 = FUN_00102b47(param_2);
    FUN_00102b84(local_30,uVar3);
    FUN_00102bbc(&local_28,&local_38);
    local_38 = FUN_00102bde(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102afe(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102afe(undefined8 *param_1)

{
  FUN_00102dd2(*param_1);
  return;
}




void FUN_00105705(void)

{
  return;
}




void FUN_00104a32(void)

{
  return;
}




undefined8
FUN_00102bde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102ea2(param_5);
  uVar2 = FUN_00102e90(param_4);
  uVar3 = FUN_00102e7e(param_3);
  local_40 = FUN_00102eb4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102c5a to 00102c9d has its CatchHandler @ 00102cdb */
  uVar1 = FUN_001032dd(local_40);
  local_38 = FUN_00102f34(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010341a(param_1,local_40);
    FUN_00103458(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103330(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104a52(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103a1c(local_28);
    FUN_00104a52(param_1,uVar1);
    lVar2 = FUN_00103b54(local_28);
    FUN_0010341a(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00104bcb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104d20(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00105935(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001039a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103c42(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103c42(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010589d(undefined8 *param_1)

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




void FUN_00104928(undefined8 param_1)

{
  FUN_00104a42(param_1);
  return;
}




int FUN_0010563b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010292b(void)

{
  return;
}




undefined8 FUN_00102e7e(undefined8 param_1)

{
  return param_1;
}




void FUN_001056b8(void)

{
  return;
}




void FUN_001051a2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103d0a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ea6(param_1,param_2);
  return;
}




void FUN_00103db6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e7e(param_3);
  uVar1 = FUN_00102e90(param_4);
  FUN_00102b5a(local_38,uVar1);
  FUN_00102ea2(param_5);
  uVar1 = FUN_00102915(0x10,param_2);
                    /* try { // try from 00103e3e to 00103e42 has its CatchHandler @ 00103e45 */
  FUN_00103efa(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001052cc(undefined4 param_1)

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




undefined8 FUN_00102ab2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105655(void)

{
  return;
}




void FUN_00103d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103eba(param_1,param_2,param_3);
  return;
}




void FUN_0010514a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b5a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e3e(param_1,param_2);
  return;
}




void FUN_00104273(void)

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
  FUN_00104882(local_e8);
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
                    /* try { // try from 00104353 to 001043d4 has its CatchHandler @ 0010442c */
  plVar1 = (long *)FUN_0010293e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_0010293e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_0010293e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_001048c2(local_b8,local_e8);
                    /* try { // try from 001043df to 001043e3 has its CatchHandler @ 00104414 */
  FUN_00102764(local_b8);
  FUN_001048a2(local_b8);
  FUN_001048a2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00103a32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00104fee(undefined8 param_1)

{
  return param_1;
}




void FUN_00105954(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104bbc(void)

{
  return;
}




undefined8 FUN_00105752(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010571b,local_18);
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




long FUN_00103992(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102ea2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104986(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104abc(param_1,param_2);
  lVar1 = FUN_00104b2c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104b42(param_1);
                    /* try { // try from 001049e1 to 001049e5 has its CatchHandler @ 001049eb */
    uVar3 = FUN_00104b58(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102e06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102df4(param_2);
  FUN_0010357e(param_1,uVar1);
  return;
}




void FUN_00103cec(undefined8 param_1)

{
  FUN_00103e94(param_1);
  return;
}




undefined8 FUN_00103ee2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010571b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_0010348c(long param_1)

{
  return param_1 + 8;
}




void FUN_001048ec(long param_1)

{
  FUN_00104a12(param_1);
  FUN_00104a32(param_1);
  FUN_001047d8(param_1 + 8);
  return;
}




undefined4 FUN_00102b20(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_001047ab(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001028a6(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010293e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_001027d3(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105710(void)

{
  return;
}




void FUN_00102a94(undefined8 param_1)

{
  FUN_00102d74(param_1);
  return;
}




undefined8 FUN_00103b6a(undefined8 param_1)

{
  return param_1;
}




void FUN_001048c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00104986(param_1,param_2);
  return;
}




undefined8 FUN_0010371a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103458(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104719(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010514a("Calling good()...");
  FUN_00104704();
  FUN_0010514a("Finished good()");
  FUN_0010514a("Calling bad()...");
  FUN_00103fcb();
  FUN_0010514a("Finished bad()");
  return 0;
}




undefined8 FUN_00103ac0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105276(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102df4(undefined8 param_1)

{
  return param_1;
}




void FUN_00105170(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001056ad(void)

{
  return;
}




void FUN_00105326(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00104abc(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104bcb(param_1,param_2);
  FUN_00104c46(param_1,param_2);
  FUN_001047d8(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105980(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010562c(void)

{
  return 0;
}




void FUN_00103ad6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd2(param_2);
  uVar2 = FUN_00103b92(param_1);
  FUN_00103d0a(uVar2,uVar1);
  return;
}




void FUN_00105379(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103b92(undefined8 param_1)

{
  return param_1;
}




void FUN_0010445c(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104882(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 00104558 to 0010467c has its CatchHandler @ 001046d4 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_0010514a("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_001048c2(local_b8,local_e8);
                    /* try { // try from 00104687 to 0010468b has its CatchHandler @ 001046bc */
  FUN_001028a6(local_b8);
  FUN_001048a2(local_b8);
  FUN_001048a2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104c1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104d4e(param_1,param_2);
  return;
}




undefined4 * FUN_00104f24(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103a9e(param_2);
  puVar2 = (undefined4 *)FUN_00104fb4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103a9e(long param_1)

{
  FUN_00103cec(param_1 + 0x20);
  return;
}




undefined4 FUN_00102ad8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102dc4(param_1);
  return unaff_EBX;
}




undefined8 * FUN_001039f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102d74(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103458(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103780(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001053da(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00105220(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001056ce(void)

{
  return;
}




void FUN_00104a42(void)

{
  return;
}




void FUN_00103458(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102b47(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f8f(undefined8 param_1)

{
  FUN_00103fad(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a038 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102490();
    DAT_0010a038 = 1;
    return;
  }
  return;
}




void FUN_0010363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102915(0x30,param_2);
  uVar1 = FUN_00102ea2(param_5);
  uVar2 = FUN_00102e90(param_4);
  uVar3 = FUN_00102e7e(param_3);
  uVar4 = FUN_00102dd2(param_2);
  uVar5 = FUN_00103b92(param_1);
                    /* try { // try from 001036cb to 001036cf has its CatchHandler @ 001036d2 */
  FUN_00103bd2(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001035b6(undefined8 param_1)

{
  FUN_00103b7c(param_1);
  return;
}




void FUN_00103ba4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d66(param_1,param_2,0);
  return;
}




void FUN_00103bd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102ea2(param_5);
  uVar2 = FUN_00102e90(param_4);
  uVar3 = FUN_00102e7e(param_3);
  FUN_00103db6(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00104b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010566b(void)

{
  return;
}




long FUN_0010477e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00103476(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001053a7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103ea6(void)

{
  return;
}




undefined8 FUN_00102e90(undefined8 param_1)

{
  return param_1;
}




void FUN_00105660(void)

{
  return;
}




long FUN_00104d78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104f24(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104f88(param_2);
                    /* try { // try from 00104de7 to 00104e79 has its CatchHandler @ 00104ea5 */
    uVar2 = FUN_00104d78(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104f9e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104f24(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104f88(local_38);
      uVar2 = FUN_00104d78(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104f9e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001050f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104fee(param_3);
  puVar3 = (undefined8 *)FUN_00102915(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00105676(void)

{
  return;
}




undefined8 FUN_00104c78(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010348c(param_1);
  uVar2 = FUN_00104d62(param_2);
  uVar1 = FUN_00104d78(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103992(param_1);
  uVar2 = FUN_00104ee7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103780(param_1);
  uVar2 = FUN_00104f05(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109ec8)();
  return;
}




undefined8 FUN_001034a2(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001032dd(local_38);
    cVar1 = FUN_00102b20(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103a1c(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103b54(local_38);
    }
  }
  FUN_00103458(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104c5a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001056d9(void)

{
  return;
}




void FUN_001050ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104fee(param_3);
  FUN_001050f8(param_1,param_2,uVar1);
  return;
}




void FUN_00104882(undefined8 param_1)

{
  FUN_00104862(param_1);
  return;
}




void FUN_001027d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010561d(void)

{
  return 1;
}




void FUN_00103d66(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103ee2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103fcb(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [11];
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104882(local_e8);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
                    /* try { // try from 001040c7 to 001041eb has its CatchHandler @ 00104243 */
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_0010514a("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  local_b8[0] = 0;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 1;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  local_b8[0] = 2;
  puVar3 = (undefined8 *)FUN_0010293e(local_e8,local_b8);
  *puVar3 = __s;
  FUN_001048c2(local_b8,local_e8);
                    /* try { // try from 001041f6 to 001041fa has its CatchHandler @ 0010422b */
  FUN_0010261f(local_b8);
  FUN_001048a2(local_b8);
  FUN_001048a2(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001056c3(void)

{
  return;
}




void FUN_00105697(void)

{
  return;
}




undefined8 FUN_00103e94(undefined8 param_1)

{
  return param_1;
}




void FUN_00104862(undefined8 param_1)

{
  FUN_001048ec(param_1);
  return;
}




void FUN_00103b1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b92(param_1);
  FUN_00103d34(uVar1,param_2,1);
  return;
}




undefined8 FUN_00103b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010341a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103ad6(param_1,param_2);
  FUN_00103b1a(param_1,param_2);
  return;
}




void FUN_00102dd2(long param_1)

{
  FUN_00103560(param_1 + 0x20);
  return;
}




ulong FUN_0010543a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001048a2(undefined8 param_1)

{
  FUN_00104948(param_1);
  return;
}




void FUN_00104842(undefined8 param_1)

{
  FUN_00104928(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001024a3) */
/* WARNING: Removing unreachable block (ram,0x001024af) */

void FUN_00102490(void)

{
  return;
}




void FUN_00104ee7(undefined8 param_1)

{
  FUN_0010477e(param_1);
  return;
}




void FUN_0010524b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105916(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



