
undefined8 FUN_001025be(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102240(param_1);
  local_50 = FUN_00102256(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020a7(local_58);
    local_59 = FUN_001018ea(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027e6(local_58);
    }
    else {
      local_58 = FUN_0010291e(local_58);
    }
  }
  FUN_00102222(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a1e(param_1);
    cVar1 = FUN_0010187c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a6e(local_38,&local_58,&local_50);
      goto LAB_00102740;
    }
    FUN_001027ba(&local_48);
  }
  uVar2 = FUN_00102560(local_48);
  cVar1 = FUN_001018ea(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102828(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a6e(local_38,&local_58,&local_50);
  }
LAB_00102740:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104082(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010404b,local_18);
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




void FUN_001028e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010295c(param_1);
  FUN_00102afe(uVar1,param_2,1);
  return;
}




void FUN_00103342(undefined8 param_1)

{
  FUN_001034ec(param_1);
  return;
}




undefined8 FUN_00103f4d(void)

{
  return 1;
}




void FUN_00102a6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c4b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a0c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001028a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b9c(param_2);
  uVar2 = FUN_0010295c(param_1);
  FUN_00102ad4(uVar2,uVar1);
  return;
}




undefined8 FUN_00101b3e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102222(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010226c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020a7(local_38);
    cVar1 = FUN_001018ea(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027e6(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010291e(local_38);
    }
  }
  FUN_00102222(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103fd2(void)

{
  return;
}




void FUN_00101c08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102380(param_2);
  uVar1 = FUN_0010239e(uVar1);
  FUN_001023b0(param_1,uVar1);
  return;
}




undefined8 FUN_00103049(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a7a("Calling good()...");
  FUN_00103039();
  FUN_00103a7a("Finished good()");
  FUN_00103a7a("Calling bad()...");
  FUN_00102d95();
  FUN_00103a7a("Finished bad()");
  return 0;
}




undefined8 FUN_00102240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102222(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103ff3(void)

{
  return;
}




void FUN_00103fa6(void)

{
  return;
}




void FUN_00103fe8(void)

{
  return;
}




void FUN_0010402a(void)

{
  return;
}




void FUN_001039ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010391e(param_3);
  FUN_00103a28(param_1,param_2,uVar1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024e4(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102256(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102560(local_50);
    cVar2 = FUN_001018ea(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102560(local_50);
      cVar2 = FUN_001018ea(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102828(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010254a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010254a(local_60);
          local_48[1] = 0;
          FUN_0010257e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027fc(local_48);
          uVar6 = FUN_00102560(*puVar5);
          cVar2 = FUN_001018ea(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025be(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027e6(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010257e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102772(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010275c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010275c(local_60);
        uVar6 = FUN_0010275c(local_60);
        FUN_00102772(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027ba(local_48);
        uVar6 = FUN_00102560(*puVar5);
        cVar2 = FUN_001018ea(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025be(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027e6(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010257e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102772(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010208c;
  }
  lVar3 = FUN_00102534(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101da0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010254a(local_60);
    uVar6 = FUN_00102560(*puVar5);
    cVar2 = FUN_001018ea(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101da0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010254a(local_60);
    local_48[1] = 0;
    FUN_0010257e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025be(local_60,param_3);
  }
LAB_0010208c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_001036a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103854(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038b8(param_2);
                    /* try { // try from 00103717 to 001037a9 has its CatchHandler @ 001037d5 */
    uVar2 = FUN_001036a8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038ce(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103854(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038b8(local_38);
      uVar2 = FUN_001036a8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038ce(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




bool FUN_0010414f(pthread_t *param_1)

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




void FUN_00102348(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bbe(param_2);
  FUN_001023b0(param_1,uVar1);
  return;
}




void FUN_00103f90(void)

{
  return;
}




undefined8 FUN_0010295c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fdd(void)

{
  return;
}




void FUN_00102b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c48(param_3);
  uVar1 = FUN_00101c5a(param_4);
  FUN_00101924(local_38,uVar1);
  FUN_00101c6c(param_5);
  uVar1 = FUN_001016df(0x10,param_2);
                    /* try { // try from 00102c08 to 00102c0c has its CatchHandler @ 00102c0f */
  FUN_00102cc4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101911(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010291e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010187c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103bfc(undefined4 param_1)

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




long FUN_00101708(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101834(param_1,param_2);
  local_28 = FUN_0010185e(param_1);
  cVar2 = FUN_0010187c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018a2(param_1);
    uVar3 = FUN_001018c8(&local_38);
    cVar2 = FUN_001018ea(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017a8;
    }
  }
  bVar1 = true;
LAB_001017a8:
  if (bVar1) {
    uVar3 = FUN_00101911(param_2);
    FUN_0010194e(local_30,uVar3);
    FUN_00101986(&local_28,&local_38);
    local_38 = FUN_001019a8(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018c8(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102d59(undefined8 param_1)

{
  FUN_00102d77(param_1);
  return;
}




void FUN_00103a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010391e(param_3);
  puVar3 = (undefined8 *)FUN_001016df(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8
FUN_001020fa(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102256(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102560(param_3);
      uVar5 = FUN_001020a7(param_4);
      cVar1 = FUN_001018ea(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010217e;
      }
    }
  }
  bVar2 = true;
LAB_0010217e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102222(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001031b2(undefined8 param_1)

{
  FUN_00103192(param_1);
  return;
}




void FUN_00103d0a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103372(void)

{
  return;
}




undefined8 FUN_001041aa(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102c84(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103ca9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ab6(undefined8 param_1)

{
  FUN_00102c5e(param_1);
  return;
}




void FUN_001023da(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010295c(param_1);
  FUN_0010296e(uVar1,1);
  return;
}




void FUN_00104265(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102828(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a0c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103382(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027e6(local_28);
    FUN_00103382(param_1,uVar1);
    lVar2 = FUN_0010291e(local_28);
    FUN_001021e4(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102868(long param_1)

{
  FUN_00102ab6(param_1 + 0x20);
  return;
}




void FUN_00103108(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103132(param_1);
  return;
}




undefined8 FUN_00102946(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104246(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001020a7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102868(param_1);
  FUN_0010288a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021e4(undefined8 param_1,undefined8 param_2)

{
  FUN_001028a0(param_1,param_2);
  FUN_001028e4(param_1,param_2);
  return;
}




void FUN_00102560(undefined8 param_1)

{
  FUN_001020a7(param_1);
  return;
}




undefined8 FUN_001038ce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010185e(undefined8 param_1)

{
  FUN_00101b3e(param_1);
  return;
}




long FUN_0010275c(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103039(void)

{
  FUN_00102ee7();
  return;
}




undefined8 FUN_00101bbe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103692(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010404b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103fb1(void)

{
  return;
}




undefined8 FUN_001041cd(undefined8 *param_1)

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




void FUN_00101bd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bbe(param_2);
  FUN_00102348(param_1,uVar1);
  return;
}




void FUN_00101924(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c08(param_1,param_2);
  return;
}




void FUN_0010354c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010367e(param_1,param_2);
  return;
}




undefined8 FUN_00101c48(undefined8 param_1)

{
  return param_1;
}




void FUN_00103278(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102240(param_1);
  FUN_00103382(param_1,uVar1);
  FUN_00103172(param_1);
  return;
}




undefined8 FUN_00102a1e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102222(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ad4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c70(param_1,param_2);
  return;
}




void FUN_00103cd7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_34c;
  ulong local_348;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  plVar1 = (long *)FUN_00101708(param_1,&local_34c);
  local_340 = (undefined8 *)*plVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_340[local_348] = local_338[local_348];
  }
  FUN_00103b7b(*local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102406(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016df(0x30,param_2);
  uVar1 = FUN_00101c6c(param_5);
  uVar2 = FUN_00101c5a(param_4);
  uVar3 = FUN_00101c48(param_3);
  uVar4 = FUN_00101b9c(param_2);
  uVar5 = FUN_0010295c(param_1);
                    /* try { // try from 00102495 to 00102499 has its CatchHandler @ 0010249c */
  FUN_0010299c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001034ec(void)

{
  return;
}




ulong FUN_00103d6a(long param_1,ulong param_2,long param_3)

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




void FUN_00101834(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aee(param_1,param_2);
  return;
}




undefined8 FUN_00102934(undefined8 param_1)

{
  return param_1;
}




void FUN_0010401f(void)

{
  return;
}




void FUN_00103c7e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b8e(void)

{
  return;
}




void FUN_001038e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010391e(param_2);
  FUN_00103930(uVar1,uVar2);
  return;
}




void FUN_001031d2(undefined8 param_1)

{
  FUN_00103278(param_1);
  return;
}




void FUN_00103afa(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00102256(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010194e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bbe(param_2);
  FUN_00101bd0(param_1,uVar1);
  return param_1;
}




void FUN_001033ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034fb(param_1,param_2);
  FUN_00103576(param_1,param_2);
  FUN_00103108(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102380(undefined8 param_1)

{
  FUN_00102946(param_1);
  return;
}




void FUN_00104040(void)

{
  return;
}




void FUN_0010296e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b30(param_1,param_2,0);
  return;
}




undefined8 * FUN_001027ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_0010254a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103192(undefined8 param_1)

{
  FUN_0010321c(param_1);
  return;
}




void FUN_00103f9b(void)

{
  return;
}




void FUN_00102cc4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d16(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104009(void)

{
  return;
}




undefined8 FUN_00101c6c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102256(param_1);
  uVar2 = FUN_00102240(param_1);
  FUN_0010226c(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001031f2(undefined8 param_1,undefined8 param_2)

{
  FUN_001032b6(param_1,param_2);
  return;
}




undefined8 * FUN_001027fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103ad2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104014(void)

{
  return;
}




void FUN_00103488(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010358a(local_18,param_1);
  FUN_001035a8(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d95(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031b2(local_88);
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102e05 to 00102e6e has its CatchHandler @ 00102eba */
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031f2(local_58,local_88);
                    /* try { // try from 00102e76 to 00102e7a has its CatchHandler @ 00102ea5 */
  FUN_00101509(local_58);
  FUN_001031d2(local_58);
  FUN_001031d2(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103650(undefined8 param_1,undefined8 param_2)

{
  FUN_0010354c(param_1,param_2);
  return param_1;
}




void FUN_00102afe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c84(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010345c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001024e4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102222(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_001018a2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b8e(param_1);
  return unaff_EBX;
}




undefined8 FUN_00101c5a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010288a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010391e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001038b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010321c(long param_1)

{
  FUN_00103342(param_1);
  FUN_00103362(param_1);
  FUN_00103108(param_1 + 8);
  return;
}




void FUN_00103fbc(void)

{
  return;
}




void FUN_001032b6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033ec(param_1,param_2);
  lVar1 = FUN_0010345c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103472(param_1);
                    /* try { // try from 00103311 to 00103315 has its CatchHandler @ 0010331b */
    uVar3 = FUN_00103488(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104035(void)

{
  return;
}




long FUN_00103472(long param_1)

{
  return param_1 + 0x10;
}




int FUN_00103f6b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ba6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103132(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010232a(undefined8 param_1)

{
  FUN_00102934(param_1);
  return;
}




void FUN_00103c56(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001016f5(void)

{
  return;
}




void FUN_00102c70(void)

{
  return;
}




void FUN_00103576(void)

{
  return;
}




void FUN_00103a7a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102d77(undefined8 param_1)

{
  FUN_00102380(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001018c8(undefined8 *param_1)

{
  FUN_00101b9c(*param_1);
  return;
}




ulong FUN_00103e6e(long param_1,ulong param_2,long param_3)

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




undefined4 * FUN_00103854(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102868(param_2);
  puVar2 = (undefined4 *)FUN_001038e4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103b50(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010299c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c6c(param_5);
  uVar2 = FUN_00101c5a(param_4);
  uVar3 = FUN_00101c48(param_3);
  FUN_00102b80(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




long FUN_001030db(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103f5c(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103172(undefined8 param_1)

{
  FUN_00103258(param_1);
  return;
}




void FUN_00102b30(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cac(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102ee7(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031b2(local_88);
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102f57 to 00102fc0 has its CatchHandler @ 0010300c */
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101708(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031f2(local_58,local_88);
                    /* try { // try from 00102fc8 to 00102fcc has its CatchHandler @ 00102ff7 */
  FUN_001015f4(local_58);
  FUN_001031d2(local_58);
  FUN_001031d2(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_001018ea(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101c7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023da(param_1);
  uVar2 = FUN_00101c6c(param_4);
  uVar3 = FUN_00101c5a(param_3);
  uVar4 = FUN_00101c48(param_2);
  FUN_00102406(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103ffe(void)

{
  return;
}




undefined8 FUN_001016df(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001023b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bbe(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023da(param_1);
  uVar2 = FUN_0010391e(param_2);
  FUN_0010397c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00104284(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103b26(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010257e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a0c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103bd1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
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




void FUN_00103f85(void)

{
  return;
}




undefined8 FUN_001027e6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101986(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102d16(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d59(param_2);
  puVar2 = (undefined4 *)FUN_0010239e(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010397c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016df(0x30,param_2);
  uVar1 = FUN_0010391e(param_3);
  uVar2 = FUN_00101b9c(param_2);
  uVar3 = FUN_0010295c(param_1);
  FUN_001039ea(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010367e(void)

{
  return;
}




undefined8 FUN_001034fb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103650(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103fc7(void)

{
  return;
}




undefined8 FUN_00102cac(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001035a8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102256(param_1);
  uVar2 = FUN_00103692(param_2);
  uVar1 = FUN_001036a8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010275c(param_1);
  uVar2 = FUN_00103817(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010254a(param_1);
  uVar2 = FUN_00103835(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_001030ae(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




undefined8 FUN_00102c5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102772(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a0c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a0c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103362(void)

{
  return;
}




void FUN_00103aa0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010358a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103835(undefined8 param_1)

{
  FUN_001030db(param_1);
  return;
}




undefined8 FUN_0010239e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104320(void)

{
  return;
}




void FUN_00103b7b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103817(undefined8 param_1)

{
  FUN_001030ae(param_1);
  return;
}




undefined8 FUN_00102a0c(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001019a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c6c(param_5);
  uVar2 = FUN_00101c5a(param_4);
  uVar3 = FUN_00101c48(param_3);
  local_40 = FUN_00101c7e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a24 to 00101a67 has its CatchHandler @ 00101aa5 */
  uVar1 = FUN_001020a7(local_40);
  local_38 = FUN_00101cfe(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021e4(param_1,local_40);
    FUN_00102222(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020fa(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00102c4b(undefined8 param_1)

{
  return param_1;
}




void FUN_001015f4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_34c;
  ulong local_348;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  plVar1 = (long *)FUN_00101708(param_1,&local_34c);
  local_340 = (undefined8 *)*plVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_340[local_348] = local_338[local_348];
  }
  FUN_00103b7b(*local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103258(undefined8 param_1)

{
  FUN_00103372(param_1);
  return;
}




void FUN_001042b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b9c(long param_1)

{
  FUN_0010232a(param_1 + 0x20);
  return;
}



