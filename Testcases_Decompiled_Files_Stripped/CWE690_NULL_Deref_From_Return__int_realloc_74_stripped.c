
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




undefined8 FUN_00103f94(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f5d,local_18);
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




void FUN_0010280a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102882(param_1);
  FUN_00102a24(uVar1,param_2,1);
  return;
}




void FUN_00103254(undefined8 param_1)

{
  FUN_001033fe(param_1);
  return;
}




undefined8 FUN_00103e5f(void)

{
  return 1;
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




void FUN_001027c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ac2(param_2);
  uVar2 = FUN_00102882(param_1);
  FUN_001029fa(uVar2,uVar1);
  return;
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




void FUN_00103ee4(void)

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




undefined8 FUN_00102f5b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010398c("Calling good()...");
  FUN_00102f4b();
  FUN_0010398c("Finished good()");
  FUN_0010398c("Calling bad()...");
  FUN_00102cbb();
  FUN_0010398c("Finished bad()");
  return 0;
}




undefined8 FUN_00102166(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102148(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f05(void)

{
  return;
}




void FUN_00103eb8(void)

{
  return;
}




void FUN_00103efa(void)

{
  return;
}




void FUN_00103f3c(void)

{
  return;
}




void FUN_001038fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103830(param_3);
  FUN_0010393a(param_1,param_2,uVar1);
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




long FUN_001035ba(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103766(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037ca(param_2);
                    /* try { // try from 00103629 to 001036bb has its CatchHandler @ 001036e7 */
    uVar2 = FUN_001035ba(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037e0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103766(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037ca(local_38);
      uVar2 = FUN_001035ba(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037e0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




bool FUN_00104061(pthread_t *param_1)

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




void FUN_0010226e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_001022d6(param_1,uVar1);
  return;
}




void FUN_00103ea2(void)

{
  return;
}




undefined8 FUN_00102882(undefined8 param_1)

{
  return param_1;
}




void FUN_00103eef(void)

{
  return;
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




undefined8 FUN_00101837(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001017a2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103b0e(undefined4 param_1)

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




void FUN_00102c7f(undefined8 param_1)

{
  FUN_00102c9d(param_1);
  return;
}




void FUN_0010393a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103830(param_3);
  puVar3 = (undefined8 *)FUN_00101604(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
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




void FUN_001030c4(undefined8 param_1)

{
  FUN_001030a4(param_1);
  return;
}




void FUN_00103c1c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103284(void)

{
  return;
}




undefined8 FUN_001040bc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102baa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103bbb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029dc(undefined8 param_1)

{
  FUN_00102b84(param_1);
  return;
}




void FUN_00102300(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102882(param_1);
  FUN_00102894(uVar1,1);
  return;
}




void FUN_00104177(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010274e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102932(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103294(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010270c(local_28);
    FUN_00103294(param_1,uVar1);
    lVar2 = FUN_00102844(local_28);
    FUN_0010210a(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010278e(long param_1)

{
  FUN_001029dc(param_1 + 0x20);
  return;
}




void FUN_0010301a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103044(param_1);
  return;
}




undefined8 FUN_0010286c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104158(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
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




void FUN_0010210a(undefined8 param_1,undefined8 param_2)

{
  FUN_001027c6(param_1,param_2);
  FUN_0010280a(param_1,param_2);
  return;
}




void FUN_00102486(undefined8 param_1)

{
  FUN_00101fcd(param_1);
  return;
}




undefined8 FUN_001037e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101784(undefined8 param_1)

{
  FUN_00101a64(param_1);
  return;
}




long FUN_00102682(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102f4b(void)

{
  FUN_00102e03();
  return;
}




undefined8 FUN_00101ae4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f5d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ec3(void)

{
  return;
}




undefined8 FUN_001040df(undefined8 *param_1)

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




void FUN_00101af6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_0010226e(param_1,uVar1);
  return;
}




void FUN_0010184a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b2e(param_1,param_2);
  return;
}




void FUN_0010345e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103590(param_1,param_2);
  return;
}




undefined8 FUN_00101b6e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010318a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102166(param_1);
  FUN_00103294(param_1,uVar1);
  FUN_00103084(param_1);
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




void FUN_001029fa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b96(param_1,param_2);
  return;
}




void FUN_00103be9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010162e(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  *local_18 = 5;
  FUN_001039e4(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




void FUN_001033fe(void)

{
  return;
}




ulong FUN_00103c7c(long param_1,ulong param_2,long param_3)

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




void FUN_0010175a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a14(param_1,param_2);
  return;
}




undefined8 FUN_0010285a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f31(void)

{
  return;
}




void FUN_00103b90(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ab4(void)

{
  return;
}




void FUN_001037f6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103830(param_2);
  FUN_00103842(uVar1,uVar2);
  return;
}




void FUN_001030e4(undefined8 param_1)

{
  FUN_0010318a(param_1);
  return;
}




void FUN_00103a0c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_0010217c(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  FUN_00101af6(param_1,uVar1);
  return param_1;
}




void FUN_001032fe(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010340d(param_1,param_2);
  FUN_00103488(param_1,param_2);
  FUN_0010301a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022a6(undefined8 param_1)

{
  FUN_0010286c(param_1);
  return;
}




void FUN_00103f52(void)

{
  return;
}




void FUN_00102894(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a56(param_1,param_2,0);
  return;
}




undefined8 * FUN_001026e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00102470(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001030a4(undefined8 param_1)

{
  FUN_0010312e(param_1);
  return;
}




void FUN_00103ead(void)

{
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




void FUN_00103f1b(void)

{
  return;
}




undefined8 FUN_00101b92(undefined8 param_1)

{
  return param_1;
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




void FUN_00103104(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c8(param_1,param_2);
  return;
}




undefined8 * FUN_00102722(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001039e4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f26(void)

{
  return;
}




void FUN_0010339a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010349c(local_18,param_1);
  FUN_001034ba(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  FUN_001030c4(local_88);
  pvVar1 = realloc((void *)0x0,4);
  local_58[0] = 0;
                    /* try { // try from 00102d21 to 00102d8a has its CatchHandler @ 00102dd6 */
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103104(local_58,local_88);
                    /* try { // try from 00102d92 to 00102d96 has its CatchHandler @ 00102dc1 */
  FUN_00101509(local_58);
  FUN_001030e4(local_58);
  FUN_001030e4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103562(undefined8 param_1,undefined8 param_2)

{
  FUN_0010345e(param_1,param_2);
  return param_1;
}




void FUN_00102a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102baa(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010336e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
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




undefined4 FUN_001017c8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ab4(param_1);
  return unaff_EBX;
}




undefined8 FUN_00101b80(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001027b0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103830(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001037ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010312e(long param_1)

{
  FUN_00103254(param_1);
  FUN_00103274(param_1);
  FUN_0010301a(param_1 + 8);
  return;
}




void FUN_00103ece(void)

{
  return;
}




void FUN_001031c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032fe(param_1,param_2);
  lVar1 = FUN_0010336e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103384(param_1);
                    /* try { // try from 00103223 to 00103227 has its CatchHandler @ 0010322d */
    uVar3 = FUN_0010339a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103f47(void)

{
  return;
}




long FUN_00103384(long param_1)

{
  return param_1 + 0x10;
}




int FUN_00103e7d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ab8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103044(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102250(undefined8 param_1)

{
  FUN_0010285a(param_1);
  return;
}




void FUN_00103b68(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010161a(void)

{
  return;
}




void FUN_00102b96(void)

{
  return;
}




void FUN_00103488(void)

{
  return;
}




void FUN_0010398c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c9d(undefined8 param_1)

{
  FUN_001022a6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001017ee(undefined8 *param_1)

{
  FUN_00101ac2(*param_1);
  return;
}




ulong FUN_00103d80(long param_1,ulong param_2,long param_3)

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




undefined4 * FUN_00103766(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010278e(param_2);
  puVar2 = (undefined4 *)FUN_001037f6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103a62(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




undefined8 FUN_0010245a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




long FUN_00102fed(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103e6e(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103084(undefined8 param_1)

{
  FUN_0010316a(param_1);
  return;
}




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




void FUN_00102e03(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030c4(local_88);
  pvVar1 = realloc((void *)0x0,4);
  local_58[0] = 0;
                    /* try { // try from 00102e69 to 00102ed2 has its CatchHandler @ 00102f1e */
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010162e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103104(local_58,local_88);
                    /* try { // try from 00102eda to 00102ede has its CatchHandler @ 00102f09 */
  FUN_00101583(local_58);
  FUN_001030e4(local_58);
  FUN_001030e4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00101810(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
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




void FUN_00103f10(void)

{
  return;
}




undefined8 FUN_00101604(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022d6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ae4(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103842(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102300(param_1);
  uVar2 = FUN_00103830(param_2);
  FUN_0010388e(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00104196(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103a38(float param_1)

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




void FUN_00103ae3(char param_1)

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




void FUN_00103e97(void)

{
  return;
}




undefined8 FUN_0010270c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001018ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
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




void FUN_0010388e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101604(0x30,param_2);
  uVar1 = FUN_00103830(param_3);
  uVar2 = FUN_00101ac2(param_2);
  uVar3 = FUN_00102882(param_1);
  FUN_001038fc(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103590(void)

{
  return;
}




undefined8 FUN_0010340d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103562(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103ed9(void)

{
  return;
}




undefined8 FUN_00102bd2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001034ba(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010217c(param_1);
  uVar2 = FUN_001035a4(param_2);
  uVar1 = FUN_001035ba(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102682(param_1);
  uVar2 = FUN_00103729(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102470(param_1);
  uVar2 = FUN_00103747(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_00102fc0(long param_1)

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




undefined8 FUN_00102b84(undefined8 param_1)

{
  return param_1;
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




void FUN_00103274(void)

{
  return;
}




void FUN_001039b2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010349c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103747(undefined8 param_1)

{
  FUN_00102fed(param_1);
  return;
}




undefined8 FUN_001022c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00104240(void)

{
  return;
}




void FUN_00103a8d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103729(undefined8 param_1)

{
  FUN_00102fc0(param_1);
  return;
}




undefined8 FUN_00102932(undefined8 param_1)

{
  return param_1;
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




undefined8 FUN_00102b71(undefined8 param_1)

{
  return param_1;
}




void FUN_00101583(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_0010162e(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = 5;
    FUN_001039e4(*local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010316a(undefined8 param_1)

{
  FUN_00103284(param_1);
  return;
}




void FUN_001041d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ac2(long param_1)

{
  FUN_00102250(param_1 + 0x20);
  return;
}



