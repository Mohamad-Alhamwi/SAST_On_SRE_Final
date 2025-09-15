
void FUN_0010514b(undefined8 param_1)

{
  FUN_001049e2(param_1);
  return;
}




void FUN_001026ff(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a1e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00102629(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b74(undefined8 param_1)

{
  FUN_00102e54(param_1);
  return;
}




undefined8 FUN_00105890(void)

{
  return 0;
}




void FUN_00102ea4(void)

{
  return;
}




void FUN_00104ae6(undefined8 param_1)

{
  FUN_00104ac6(param_1);
  return;
}




void FUN_00102c9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010542e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010560b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00104e2f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104f84(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00103014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001037fa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010356c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103876(local_50);
    cVar2 = FUN_00102c00(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103876(local_50);
      cVar2 = FUN_00102c00(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103b3e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103860(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103860(local_60);
          local_48[1] = 0;
          FUN_00103894(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103b12(local_48);
          uVar6 = FUN_00103876(*puVar5);
          cVar2 = FUN_00102c00(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001038d4(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103afc(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103894(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103a88(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103a72(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103a72(local_60);
        uVar6 = FUN_00103a72(local_60);
        FUN_00103a88(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103ad0(local_48);
        uVar6 = FUN_00103876(*puVar5);
        cVar2 = FUN_00102c00(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001038d4(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103afc(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103894(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103a88(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001033a2;
  }
  lVar3 = FUN_0010384a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001030b6:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103860(local_60);
    uVar6 = FUN_00103876(*puVar5);
    cVar2 = FUN_00102c00(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001030b6;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103860(local_60);
    local_48[1] = 0;
    FUN_00103894(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001038d4(local_60,param_3);
  }
LAB_001033a2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




bool FUN_00105a83(pthread_t *param_1)

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




void FUN_00102eb2(long param_1)

{
  FUN_00103640(param_1 + 0x20);
  return;
}




void FUN_0010406f(undefined8 param_1)

{
  FUN_0010408d(param_1);
  return;
}




undefined8 FUN_001051ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




undefined8
FUN_00102cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102f82(param_5);
  uVar2 = FUN_00102f70(param_4);
  uVar3 = FUN_00102f5e(param_3);
  local_40 = FUN_00102f94(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102d3a to 00102d7d has its CatchHandler @ 00102dbb */
  uVar1 = FUN_001033bd(local_40);
  local_38 = FUN_00103014(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001034fa(param_1,local_40);
    FUN_00103538(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103410(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010591c(void)

{
  return;
}




undefined8 FUN_00102f5e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010535c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00105252(param_3);
  puVar3 = (undefined8 *)FUN_001029f5(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00105218(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00105252(param_2);
  FUN_00105264(uVar1,uVar2);
  return;
}




void FUN_0010276e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




long FUN_00103860(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00105530(undefined4 param_1)

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




void FUN_0010365e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ed4(param_2);
  FUN_001036c6(param_1,uVar1);
  return;
}




void FUN_00103e96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f5e(param_3);
  uVar1 = FUN_00102f70(param_4);
  FUN_00102c3a(local_38,uVar1);
  FUN_00102f82(param_5);
  uVar1 = FUN_001029f5(0x10,param_2);
                    /* try { // try from 00103f1e to 00103f22 has its CatchHandler @ 00103f25 */
  FUN_00103fda(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102e54(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001059b6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010597f,local_18);
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




void FUN_00102bde(undefined8 *param_1)

{
  FUN_00102eb2(*param_1);
  return;
}




void FUN_00105927(void)

{
  return;
}




void FUN_00105b7a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104b26(undefined8 param_1,undefined8 param_2)

{
  FUN_00104bea(param_1,param_2);
  return;
}




undefined8 FUN_00103f74(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001038d4(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103556(param_1);
  local_50 = FUN_0010356c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001033bd(local_58);
    local_59 = FUN_00102c00(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103afc(local_58);
    }
    else {
      local_58 = FUN_00103c34(local_58);
    }
  }
  FUN_00103538(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103d34(param_1);
    cVar1 = FUN_00102b92(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103d84(local_38,&local_58,&local_50);
      goto LAB_00103a56;
    }
    FUN_00103ad0(&local_48);
  }
  uVar2 = FUN_00103876(local_48);
  cVar1 = FUN_00102c00(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103b3e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103d84(local_38,&local_58,&local_50);
  }
LAB_00103a56:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104eaa(void)

{
  return;
}




undefined8 FUN_00105264(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036f0(param_1);
  uVar2 = FUN_00105252(param_2);
  FUN_001052b0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102844(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a1e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_0010276e(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001058f0(void)

{
  return;
}




void FUN_00105974(void)

{
  return;
}




undefined8 FUN_001029f5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104dbc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104ebe(local_18,param_1);
  FUN_00104edc(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104cb6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103afc(local_28);
    FUN_00104cb6(param_1,uVar1);
    lVar2 = FUN_00103c34(local_28);
    FUN_001034fa(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00105202(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102986(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00102a1e(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_001028b3(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105906(void)

{
  return;
}




void FUN_00104fb2(void)

{
  return;
}




undefined8 FUN_00104d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010402c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010406f(param_2);
  puVar2 = (undefined4 *)FUN_001036b4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 * FUN_00103b12(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102ee6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ed4(param_2);
  FUN_0010365e(param_1,uVar1);
  return;
}




void FUN_001053d4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001028b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00102629(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_00104ebe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104b8c(undefined8 param_1)

{
  FUN_00104ca6(param_1);
  return;
}




void FUN_00103e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103f9a(param_1,param_2,param_3);
  return;
}




void FUN_00103696(undefined8 param_1)

{
  FUN_00103c5c(param_1);
  return;
}




void FUN_00105bb8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8
FUN_00103410(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010356c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103876(param_3);
      uVar5 = FUN_001033bd(param_4);
      cVar1 = FUN_00102c00(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103494;
      }
    }
  }
  bVar2 = true;
LAB_00103494:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103538(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00105b01(undefined8 *param_1)

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




void FUN_00104b06(undefined8 param_1)

{
  FUN_00104bac(param_1);
  return;
}




void FUN_00103f86(void)

{
  return;
}




void FUN_00103b3e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d22(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00103d22(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f70(undefined8 param_1)

{
  return param_1;
}




void FUN_001058cf(void)

{
  return;
}




void FUN_00103bfa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c72(param_1);
  FUN_00103e14(uVar1,param_2,1);
  return;
}




undefined8 FUN_00102f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001036f0(param_1);
  uVar2 = FUN_00102f82(param_4);
  uVar3 = FUN_00102f70(param_3);
  uVar4 = FUN_00102f5e(param_2);
  FUN_0010371c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103f9a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104a66(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102e04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010356c(param_1);
  uVar2 = FUN_00103556(param_1);
  FUN_00103582(param_1,uVar2,uVar1,param_2);
  return;
}




undefined4 FUN_00102bb8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102ea4(param_1);
  return unaff_EBX;
}




undefined8 FUN_00103582(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001033bd(local_38);
    cVar1 = FUN_00102c00(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103afc(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103c34(local_38);
    }
  }
  FUN_00103538(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00105406(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103640(undefined8 param_1)

{
  FUN_00103c4a(param_1);
  return;
}




void FUN_00103dea(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f86(param_1,param_2);
  return;
}




void FUN_00104d20(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104e2f(param_1,param_2);
  FUN_00104eaa(param_1,param_2);
  FUN_00104a3c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104edc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010356c(param_1);
  uVar2 = FUN_00104fc6(param_2);
  uVar1 = FUN_00104fdc(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103a72(param_1);
  uVar2 = FUN_0010514b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103860(param_1);
  uVar2 = FUN_00105169(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103894(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103d22(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103fc2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104c96(void)

{
  return;
}




ulong FUN_001057a2(long param_1,ulong param_2,long param_3)

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




void FUN_001058da(void)

{
  return;
}




undefined8 FUN_0010384a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void _FINI_0(void)

{
  if (DAT_0010a028 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a028 = 1;
    return;
  }
  return;
}




void FUN_00104c76(undefined8 param_1)

{
  FUN_00104e20(param_1);
  return;
}




long FUN_0010356c(long param_1)

{
  return param_1 + 8;
}




void FUN_00105b99(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001037fa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104fc6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104415(void)

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
  FUN_00104ae6(local_e8);
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
                    /* try { // try from 001044f5 to 00104576 has its CatchHandler @ 001045ce */
  plVar1 = (long *)FUN_00102a1e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00102a1e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00102a1e(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00104b26(local_b8,local_e8);
                    /* try { // try from 00104581 to 00104585 has its CatchHandler @ 001045b6 */
  FUN_00102844(local_b8);
  FUN_00104b06(local_b8);
  FUN_00104b06(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103696(param_2);
  uVar1 = FUN_001036b4(uVar1);
  FUN_001036c6(param_1,uVar1);
  return;
}




void FUN_00103a88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d22(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d22(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001045fe(void)

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
  FUN_00104ae6(local_f8);
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
                    /* try { // try from 00104741 to 001048e0 has its CatchHandler @ 00104938 */
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
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b26(local_c8,local_f8);
                    /* try { // try from 001048eb to 001048ef has its CatchHandler @ 00104920 */
  FUN_00102986(local_c8);
  FUN_00104b06(local_c8);
  FUN_00104b06(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001054da(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102f82(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_00105188(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103b7e(param_2);
  puVar2 = (undefined4 *)FUN_00105218(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




undefined8 FUN_00102c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ed4(param_2);
  FUN_00102ee6(param_1,uVar1);
  return param_1;
}




void FUN_00104b50(long param_1)

{
  FUN_00104c76(param_1);
  FUN_00104c96(param_1);
  FUN_00104a3c(param_1 + 8);
  return;
}




undefined8 FUN_00103c72(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103ba0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105969(void)

{
  return;
}




void FUN_00103bb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eb2(param_2);
  uVar2 = FUN_00103c72(param_1);
  FUN_00103dea(uVar2,uVar1);
  return;
}




void FUN_001058fb(void)

{
  return;
}




int FUN_0010589f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103dcc(undefined8 param_1)

{
  FUN_00103f74(param_1);
  return;
}




undefined8 FUN_0010497d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001053ae("Calling good()...");
  FUN_00104968();
  FUN_001053ae("Finished good()");
  FUN_001053ae("Calling bad()...");
  FUN_001040ab();
  FUN_001053ae("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




undefined4 FUN_00102c00(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00105ade(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103d34(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103538(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104ca6(void)

{
  return;
}




void FUN_0010531e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00105252(param_3);
  FUN_0010535c(param_1,param_2,uVar1);
  return;
}




void FUN_001052b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001029f5(0x30,param_2);
  uVar1 = FUN_00105252(param_3);
  uVar2 = FUN_00102eb2(param_2);
  uVar3 = FUN_00103c72(param_1);
  FUN_0010531e(uVar3,uVar2,uVar1);
  return;
}




undefined8 * FUN_00103ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00105505(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00105c60(void)

{
  return;
}




void FUN_00105911(void)

{
  return;
}




long FUN_00104a0f(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103538(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001054af(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010593d(void)

{
  return;
}




undefined8 FUN_00103c4a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103c5c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103cb2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102f82(param_5);
  uVar2 = FUN_00102f70(param_4);
  uVar3 = FUN_00102f5e(param_3);
  FUN_00103e96(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00105169(undefined8 param_1)

{
  FUN_00104a0f(param_1);
  return;
}




void FUN_0010597f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001036c6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ed4(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104bea(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104d20(param_1,param_2);
  lVar1 = FUN_00104d90(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00104da6(param_1);
                    /* try { // try from 00104c45 to 00104c49 has its CatchHandler @ 00104c4f */
    uVar3 = FUN_00104dbc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103556(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105948(void)

{
  return;
}




void FUN_0010371c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001029f5(0x30,param_2);
  uVar1 = FUN_00102f82(param_5);
  uVar2 = FUN_00102f70(param_4);
  uVar3 = FUN_00102f5e(param_3);
  uVar4 = FUN_00102eb2(param_2);
  uVar5 = FUN_00103c72(param_1);
                    /* try { // try from 001037ab to 001037af has its CatchHandler @ 001037b2 */
  FUN_00103cb2(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




ulong FUN_0010569e(long param_1,ulong param_2,long param_3)

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




void FUN_00102a0b(void)

{
  return;
}




void FUN_001055dd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c3a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f1e(param_1,param_2);
  return;
}




undefined8 FUN_00105881(void)

{
  return 1;
}




void FUN_00103876(undefined8 param_1)

{
  FUN_001033bd(param_1);
  return;
}




void FUN_0010545a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00105252(undefined8 param_1)

{
  return param_1;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00103bb6(param_1,param_2);
  FUN_00103bfa(param_1,param_2);
  return;
}




void FUN_00104a3c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104a66(param_1);
  return;
}




undefined8 FUN_00102b92(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001040ab(void)

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
  FUN_00104ae6(local_f8);
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
                    /* try { // try from 001041ee to 0010438d has its CatchHandler @ 001043e5 */
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
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00102a1e(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_00104b26(local_c8,local_f8);
                    /* try { // try from 00104398 to 0010439c has its CatchHandler @ 001043cd */
  FUN_001026ff(local_c8);
  FUN_00104b06(local_c8);
  FUN_00104b06(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104e80(undefined8 param_1,undefined8 param_2)

{
  FUN_00104fb2(param_1,param_2);
  return;
}




void FUN_001053ae(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001058b9(void)

{
  return;
}




undefined8 FUN_001036b4(undefined8 param_1)

{
  return param_1;
}




long FUN_00104fdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00105188(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001051ec(param_2);
                    /* try { // try from 0010504b to 001050dd has its CatchHandler @ 00105109 */
    uVar2 = FUN_00104fdc(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00105202(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00105188(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001051ec(local_38);
      uVar2 = FUN_00104fdc(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00105202(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




long FUN_00104da6(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103fda(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010402c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104bac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103556(param_1);
  FUN_00104cb6(param_1,uVar1);
  FUN_00104aa6(param_1);
  return;
}




void FUN_001033bd(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103b7e(param_1);
  FUN_00103ba0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105bf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103c84(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e46(param_1,param_2,0);
  return;
}




void FUN_0010408d(undefined8 param_1)

{
  FUN_00103696(param_1);
  return;
}




void FUN_00103e46(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103fc2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010558a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010563e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001058e5(void)

{
  return;
}




void FUN_00104968(void)

{
  FUN_00104415();
  FUN_001045fe();
  return;
}




undefined8 FUN_00102c27(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ed4(undefined8 param_1)

{
  return param_1;
}




void FUN_00104aa6(undefined8 param_1)

{
  FUN_00104b8c(param_1);
  return;
}




void FUN_001058c4(void)

{
  return;
}




void FUN_0010595e(void)

{
  return;
}




void FUN_00105932(void)

{
  return;
}




void FUN_00105953(void)

{
  return;
}




long FUN_00103a72(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001036f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c72(param_1);
  FUN_00103c84(uVar1,1);
  return;
}




long FUN_001049e2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102b4a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e04(param_1,param_2);
  return;
}




void FUN_00104e20(void)

{
  return;
}




void FUN_00105484(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001055b2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103b7e(long param_1)

{
  FUN_00103dcc(param_1 + 0x20);
  return;
}




void FUN_00103d84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103f61(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103d22(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103f61(undefined8 param_1)

{
  return param_1;
}




long FUN_00102a1e(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102b4a(param_1,param_2);
  local_28 = FUN_00102b74(param_1);
  cVar2 = FUN_00102b92(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102bb8(param_1);
    uVar3 = FUN_00102bde(&local_38);
    cVar2 = FUN_00102c00(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102abe;
    }
  }
  bVar1 = true;
LAB_00102abe:
  if (bVar1) {
    uVar3 = FUN_00102c27(param_2);
    FUN_00102c64(local_30,uVar3);
    FUN_00102c9c(&local_28,&local_38);
    local_38 = FUN_00102cbe(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102bde(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00104f84(undefined8 param_1,undefined8 param_2)

{
  FUN_00104e80(param_1,param_2);
  return param_1;
}




void FUN_00104ac6(undefined8 param_1)

{
  FUN_00104b50(param_1);
  return;
}



