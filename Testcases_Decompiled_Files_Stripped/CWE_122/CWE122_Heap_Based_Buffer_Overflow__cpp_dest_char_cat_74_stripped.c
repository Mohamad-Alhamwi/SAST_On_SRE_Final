
undefined8
FUN_001020dc(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102238(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102542(param_3);
      uVar5 = FUN_00102089(param_4);
      cVar1 = FUN_001018cc(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102160;
      }
    }
  }
  bVar2 = true;
LAB_00102160:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102204(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103f5e(void)

{
  return;
}




void FUN_00103fc1(void)

{
  return;
}




void FUN_00102392(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba0(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102d59(undefined8 param_1)

{
  FUN_00102362(param_1);
  return;
}




void FUN_001039f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038ec(param_3);
  puVar3 = (undefined8 *)FUN_001016c1(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




long FUN_0010273e(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102380(undefined8 param_1)

{
  return param_1;
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




void FUN_00101ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102238(param_1);
  uVar2 = FUN_00102222(param_1);
  FUN_0010224e(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103bca(undefined4 param_1)

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




long FUN_001016ea(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101816(param_1,param_2);
  local_28 = FUN_00101840(param_1);
  cVar2 = FUN_0010185e(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101884(param_1);
    uVar3 = FUN_001018aa(&local_38);
    cVar2 = FUN_001018cc(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010178a;
    }
  }
  bVar1 = true;
LAB_0010178a:
  if (bVar1) {
    uVar3 = FUN_001018f3(param_2);
    FUN_00101930(local_30,uVar3);
    FUN_00101968(&local_28,&local_38);
    local_38 = FUN_0010198a(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018aa(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c2d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029ee(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010400e(void)

{
  return;
}




void FUN_00101968(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba0(param_2);
  FUN_00101bb2(param_1,uVar1);
  return param_1;
}




void FUN_00103c77(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b1e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c4c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103f1b(void)

{
  return 1;
}




undefined8 FUN_001034c9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010361e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001018aa(undefined8 *param_1)

{
  FUN_00101b7e(*param_1);
  return;
}




void FUN_00103284(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033ba(param_1,param_2);
  lVar1 = FUN_0010342a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103440(param_1);
                    /* try { // try from 001032df to 001032e3 has its CatchHandler @ 001032e9 */
    uVar3 = FUN_00103456(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103f69(void)

{
  return;
}




void FUN_00101b70(void)

{
  return;
}




void FUN_00104280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104003(void)

{
  return;
}




void FUN_00103ac8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102516(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103c24(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010280a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029ee(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001023bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010293e(param_1);
  FUN_00102950(uVar1,1);
  return;
}




undefined4 * FUN_00103822(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010284a(param_2);
  puVar2 = (undefined4 *)FUN_001038b2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_0010293e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010351a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010364c(param_1,param_2);
  return;
}




undefined8 FUN_001018f3(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c40(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001038fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023bc(param_1);
  uVar2 = FUN_001038ec(param_2);
  FUN_0010394a(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102ebf(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103180(local_88);
                    /* try { // try from 00102efa to 00102f8e has its CatchHandler @ 00102fda */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031c0(local_58,local_88);
                    /* try { // try from 00102f96 to 00102f9a has its CatchHandler @ 00102fc5 */
  FUN_00101615(local_58);
  FUN_001031a0(local_58);
  FUN_001031a0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f74(void)

{
  return;
}




void FUN_001028c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010293e(param_1);
  FUN_00102ae0(uVar1,param_2,1);
  return;
}




void FUN_001038b2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038ec(param_2);
  FUN_001038fe(uVar1,uVar2);
  return;
}




void FUN_00102754(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029ee(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029ee(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101bea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102362(param_2);
  uVar1 = FUN_00102380(uVar1);
  FUN_00102392(param_1,uVar1);
  return;
}




void FUN_00103f95(void)

{
  return;
}




void FUN_0010230c(undefined8 param_1)

{
  FUN_00102916(param_1);
  return;
}




void FUN_00103007(void)

{
  FUN_00102ebf();
  return;
}




void FUN_0010232a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba0(param_2);
  FUN_00102392(param_1,uVar1);
  return;
}




void FUN_00102ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c66(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001024c6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102204(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f8a(void)

{
  return;
}




undefined4 FUN_001018cc(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101906(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bea(param_1,param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024c6(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102238(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102542(local_50);
    cVar2 = FUN_001018cc(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102542(local_50);
      cVar2 = FUN_001018cc(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010280a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010252c(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010252c(local_60);
          local_48[1] = 0;
          FUN_00102560(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027de(local_48);
          uVar6 = FUN_00102542(*puVar5);
          cVar2 = FUN_001018cc(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025a0(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027c8(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102560(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102754(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010273e(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010273e(local_60);
        uVar6 = FUN_0010273e(local_60);
        FUN_00102754(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010279c(local_48);
        uVar6 = FUN_00102542(*puVar5);
        cVar2 = FUN_001018cc(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025a0(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027c8(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102560(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102754(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010206e;
  }
  lVar3 = FUN_00102516(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d82:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010252c(local_60);
    uVar6 = FUN_00102542(*puVar5);
    cVar2 = FUN_001018cc(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d82;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010252c(local_60);
    local_48[1] = 0;
    FUN_00102560(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025a0(local_60,param_3);
  }
LAB_0010206e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001033ba(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c9(param_1,param_2);
  FUN_00103544(param_1,param_2);
  FUN_001030d6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021c6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102882(param_1,param_2);
  FUN_001028c6(param_1,param_2);
  return;
}




undefined8 FUN_00102a00(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102204(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001016c1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103246(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102222(param_1);
  FUN_00103350(param_1,uVar1);
  FUN_00103140(param_1);
  return;
}




void FUN_00103f53(void)

{
  return;
}




void FUN_00103b49(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103f7f(void)

{
  return;
}




void FUN_001016d7(void)

{
  return;
}




void FUN_00103160(undefined8 param_1)

{
  FUN_001031ea(param_1);
  return;
}




undefined8 FUN_00104050(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104019,local_18);
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




void FUN_00101816(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ad0(param_1,param_2);
  return;
}




void FUN_00102cf8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d3b(param_2);
  puVar2 = (undefined4 *)FUN_00102380(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001025a0(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102222(param_1);
  local_50 = FUN_00102238(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102089(local_58);
    local_59 = FUN_001018cc(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027c8(local_58);
    }
    else {
      local_58 = FUN_00102900(local_58);
    }
  }
  FUN_00102204(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a00(param_1);
    cVar1 = FUN_0010185e(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a50(local_38,&local_58,&local_50);
      goto LAB_00102722;
    }
    FUN_0010279c(&local_48);
  }
  uVar2 = FUN_00102542(local_48);
  cVar1 = FUN_001018cc(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010280a(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a50(local_38,&local_58,&local_50);
  }
LAB_00102722:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001042f0(void)

{
  return;
}




void FUN_00104252(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 * FUN_0010279c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001038ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c2a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103100(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010394a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016c1(0x30,param_2);
  uVar1 = FUN_001038ec(param_3);
  uVar2 = FUN_00101b7e(param_2);
  uVar3 = FUN_0010293e(param_1);
  FUN_001039b8(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00104178(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103fd7(void)

{
  return;
}




void FUN_001023e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016c1(0x30,param_2);
  uVar1 = FUN_00101c4e(param_5);
  uVar2 = FUN_00101c3c(param_4);
  uVar3 = FUN_00101c2a(param_3);
  uVar4 = FUN_00101b7e(param_2);
  uVar5 = FUN_0010293e(param_1);
                    /* try { // try from 00102477 to 0010247b has its CatchHandler @ 0010247e */
  FUN_0010297e(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




ulong FUN_00103e3c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010389c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016ea(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_00103a48(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010342a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c52(void)

{
  return;
}




undefined8 FUN_0010361e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351a(param_1,param_2);
  return param_1;
}




undefined8
FUN_0010198a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c4e(param_5);
  uVar2 = FUN_00101c3c(param_4);
  uVar3 = FUN_00101c2a(param_3);
  local_40 = FUN_00101c60(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a06 to 00101a49 has its CatchHandler @ 00101a87 */
  uVar1 = FUN_00102089(local_40);
  local_38 = FUN_00101ce0(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021c6(param_1,local_40);
    FUN_00102204(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020dc(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined8 FUN_00103017(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a48("Calling good()...");
  FUN_00103007();
  FUN_00103a48("Finished good()");
  FUN_00103a48("Calling bad()...");
  FUN_00102d77();
  FUN_00103a48("Finished bad()");
  return 0;
}




void FUN_00101b7e(long param_1)

{
  FUN_0010230c(param_1 + 0x20);
  return;
}




int FUN_00103f39(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_0010252c(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102222(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023bc(param_1);
  uVar2 = FUN_00101c4e(param_4);
  uVar3 = FUN_00101c3c(param_3);
  uVar4 = FUN_00101c2a(param_2);
  FUN_001023e8(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102c2d(undefined8 param_1)

{
  return param_1;
}




void FUN_00103af4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102916(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cd8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010185e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102c66(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010224e(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102089(local_38);
    cVar1 = FUN_001018cc(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027c8(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102900(local_38);
    }
  }
  FUN_00102204(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00103576(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102238(param_1);
  uVar2 = FUN_00103660(param_2);
  uVar1 = FUN_00103676(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010273e(param_1);
  uVar2 = FUN_001037e5(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010252c(param_1);
  uVar2 = FUN_00103803(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




ulong FUN_00103d38(long param_1,ulong param_2,long param_3)

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




void FUN_001030d6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103100(param_1);
  return;
}




void FUN_0010297e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c4e(param_5);
  uVar2 = FUN_00101c3c(param_4);
  uVar3 = FUN_00101c2a(param_3);
  FUN_00102b62(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001031ea(long param_1)

{
  FUN_00103310(param_1);
  FUN_00103330(param_1);
  FUN_001030d6(param_1 + 8);
  return;
}




undefined8 FUN_001027c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_0010307c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




bool FUN_0010411d(pthread_t *param_1)

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




undefined8 FUN_00101c3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101840(undefined8 param_1)

{
  FUN_00101b20(param_1);
  return;
}




void FUN_00102362(undefined8 param_1)

{
  FUN_00102928(param_1);
  return;
}




long FUN_00103440(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103350(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027c8(local_28);
    FUN_00103350(param_1,uVar1);
    lVar2 = FUN_00102900(local_28);
    FUN_001021c6(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102c8e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103b74(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d3b(undefined8 param_1)

{
  FUN_00102d59(param_1);
  return;
}




undefined8 FUN_00103f2a(void)

{
  return 0;
}




long FUN_001030a9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103a6e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001037e5(undefined8 param_1)

{
  FUN_0010307c(param_1);
  return;
}




void FUN_00102b12(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c8e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00101b20(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102204(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103886(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102882(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b7e(param_2);
  uVar2 = FUN_0010293e(param_1);
  FUN_00102ab6(uVar2,uVar1);
  return;
}




void FUN_00103180(undefined8 param_1)

{
  FUN_00103160(param_1);
  return;
}




void FUN_00103544(void)

{
  return;
}




void FUN_00102950(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b12(param_1,param_2,0);
  return;
}




void FUN_00104214(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001039b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038ec(param_3);
  FUN_001039f6(param_1,param_2,uVar1);
  return;
}




void FUN_00103340(void)

{
  return;
}




undefined8 FUN_00103660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102542(undefined8 param_1)

{
  FUN_00102089(param_1);
  return;
}




undefined8 FUN_00101c4e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ab6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c52(param_1,param_2);
  return;
}




void FUN_00103a48(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103fed(void)

{
  return;
}




void FUN_00102b62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c2a(param_3);
  uVar1 = FUN_00101c3c(param_4);
  FUN_00101906(local_38,uVar1);
  FUN_00101c4e(param_5);
  uVar1 = FUN_001016c1(0x10,param_2);
                    /* try { // try from 00102bea to 00102bee has its CatchHandler @ 00102bf1 */
  FUN_00102ca6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_001027de(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001029ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ca5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined4 FUN_00101884(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b70(param_1);
  return unaff_EBX;
}




void FUN_00101bb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba0(param_2);
  FUN_0010232a(param_1,uVar1);
  return;
}




void FUN_00103456(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103558(local_18,param_1);
  FUN_00103576(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fa0(void)

{
  return;
}




void FUN_0010364c(void)

{
  return;
}




void FUN_00102089(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010284a(param_1);
  FUN_0010286c(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103803(undefined8 param_1)

{
  FUN_001030a9(param_1);
  return;
}




void FUN_00103aa0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_00102238(long param_1)

{
  return param_1 + 8;
}




void FUN_00103fe2(void)

{
  return;
}




undefined8 FUN_00102928(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103fcc(void)

{
  return;
}




void FUN_001034ba(void)

{
  return;
}




void FUN_00103226(undefined8 param_1)

{
  FUN_00103340(param_1);
  return;
}




void FUN_00103140(undefined8 param_1)

{
  FUN_00103226(param_1);
  return;
}




void FUN_00103ff8(void)

{
  return;
}




void FUN_00103b9f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001031c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103284(param_1,param_2);
  return;
}




void FUN_00102a98(undefined8 param_1)

{
  FUN_00102c40(param_1);
  return;
}




void FUN_00104233(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010286c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102204(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102d77(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103180(local_88);
                    /* try { // try from 00102db2 to 00102e46 has its CatchHandler @ 00102e92 */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016ea(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031c0(local_58,local_88);
                    /* try { // try from 00102e4e to 00102e52 has its CatchHandler @ 00102e7d */
  FUN_00101569(local_58);
  FUN_001031a0(local_58);
  FUN_001031a0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103558(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010419b(undefined8 *param_1)

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




void FUN_00104019(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001031a0(undefined8 param_1)

{
  FUN_00103246(param_1);
  return;
}




void FUN_00103330(void)

{
  return;
}




undefined8 FUN_00101ba0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fb6(void)

{
  return;
}




long FUN_00103676(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103822(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103886(param_2);
                    /* try { // try from 001036e5 to 00103777 has its CatchHandler @ 001037a3 */
    uVar2 = FUN_00103676(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010389c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103822(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103886(local_38);
      uVar2 = FUN_00103676(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010389c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103310(undefined8 param_1)

{
  FUN_001034ba(param_1);
  return;
}




void FUN_00102560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029ee(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_0010284a(long param_1)

{
  FUN_00102a98(param_1 + 0x20);
  return;
}




void FUN_00102ca6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cf8(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fab(void)

{
  return;
}




void FUN_00101615(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016ea(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_00103a48(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



