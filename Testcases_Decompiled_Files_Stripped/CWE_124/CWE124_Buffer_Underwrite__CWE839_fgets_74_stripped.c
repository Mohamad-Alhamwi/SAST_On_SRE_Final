
void FUN_00101785(void)

{
  return;
}




void FUN_001041d4(void)

{
  return;
}




void FUN_001018ee(undefined8 param_1)

{
  FUN_00101bce(param_1);
  return;
}




undefined8 FUN_00103b74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010246a(param_1);
  uVar2 = FUN_00103b62(param_2);
  FUN_00103bc0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00104237(void)

{
  return;
}




undefined4 * FUN_00103a98(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028f8(param_2);
  puVar2 = (undefined4 *)FUN_00103b28(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001041c9(void)

{
  return;
}




void FUN_00102da6(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102de8(param_2);
  puVar2 = (undefined4 *)FUN_0010242e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103630(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010373f(param_1,param_2);
  FUN_001037ba(param_1,param_2);
  FUN_0010334c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001042bb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104284,local_18);
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




void FUN_00103d5f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103cd9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103eb7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029c4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029ec(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010284a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101c2c(long param_1)

{
  FUN_001023ba(param_1 + 0x20);
  return;
}




void FUN_001033d6(undefined8 param_1)

{
  FUN_00103460(param_1);
  return;
}




void FUN_001028b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a9c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101b7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022e6(param_1);
  uVar2 = FUN_001022d0(param_1);
  FUN_001022fc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103436(undefined8 param_1,undefined8 param_2)

{
  FUN_001034fa(param_1,param_2);
  return;
}




undefined4 FUN_0010197a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001028f8(long param_1)

{
  FUN_00102b46(param_1 + 0x20);
  return;
}




void FUN_00104284(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102574(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022e6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025f0(local_50);
    cVar2 = FUN_0010197a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025f0(local_50);
      cVar2 = FUN_0010197a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001028b8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001025da(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001025da(local_60);
          local_48[1] = 0;
          FUN_0010260e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010288c(local_48);
          uVar6 = FUN_001025f0(*puVar5);
          cVar2 = FUN_0010197a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010264e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102876(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010260e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102802(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ec(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ec(local_60);
        uVar6 = FUN_001027ec(local_60);
        FUN_00102802(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010284a(local_48);
        uVar6 = FUN_001025f0(*puVar5);
        cVar2 = FUN_0010197a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010264e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102876(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010260e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102802(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010211c;
  }
  lVar3 = FUN_001025c4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e30:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001025da(local_60);
    uVar6 = FUN_001025f0(*puVar5);
    cVar2 = FUN_0010197a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e30;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001025da(local_60);
    local_48[1] = 0;
    FUN_0010260e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010264e(local_60,param_3);
  }
LAB_0010211c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104200(void)

{
  return;
}




void FUN_00102de8(undefined8 param_1)

{
  FUN_00102e06(param_1);
  return;
}




void FUN_00102974(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ec(param_1);
  FUN_00102b8e(uVar1,param_2,1);
  return;
}




undefined8 FUN_001025c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102137(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028f8(param_1);
  FUN_0010291a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102aae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b2(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010426e(void)

{
  return;
}




void FUN_001016a7(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101798(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00103cb3("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103d0b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103db4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001041df(void)

{
  return;
}




void FUN_001033f6(undefined8 param_1)

{
  FUN_001033d6(param_1);
  return;
}




void FUN_001019b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c98(param_1,param_2);
  return;
}




void FUN_001035c6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102876(local_28);
    FUN_001035c6(param_1,uVar1);
    lVar2 = FUN_001029ae(local_28);
    FUN_00102274(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001022d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103ddf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001037ce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103cb3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00101798(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018c4(param_1,param_2);
  local_28 = FUN_001018ee(param_1);
  cVar2 = FUN_0010190c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101932(param_1);
    uVar3 = FUN_00101958(&local_38);
    cVar2 = FUN_0010197a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101838;
    }
  }
  bVar1 = true;
LAB_00101838:
  if (bVar1) {
    uVar3 = FUN_001019a1(param_2);
    FUN_001019de(local_30,uVar3);
    FUN_00101a16(&local_28,&local_38);
    local_38 = FUN_00101a38(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101958(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_001019a1(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103b62(param_3);
  puVar2 = (undefined8 *)FUN_0010176f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_00103894(undefined8 param_1,undefined8 param_2)

{
  FUN_00103790(param_1,param_2);
  return param_1;
}




void FUN_00102d00(void)

{
  return;
}




void FUN_00104242(void)

{
  return;
}




undefined8 FUN_0010176f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00104195(void)

{
  return 0;
}




void FUN_00103e8f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




int FUN_001041a4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102802(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a9c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102b46(undefined8 param_1)

{
  FUN_00102cee(param_1);
  return;
}




void FUN_001041f5(void)

{
  return;
}




undefined8 FUN_001019de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c4e(param_2);
  FUN_00101c60(param_1,uVar1);
  return param_1;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103630(param_1,param_2);
  lVar1 = FUN_001036a0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001036b6(param_1);
                    /* try { // try from 00103555 to 00103559 has its CatchHandler @ 0010355f */
    uVar3 = FUN_001036cc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103376(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101958(undefined8 *param_1)

{
  FUN_00101c2c(*param_1);
  return;
}




void FUN_00102496(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010176f(0x28,param_2);
  uVar1 = FUN_00101cfc(param_5);
  uVar2 = FUN_00101cea(param_4);
  uVar3 = FUN_00101cd8(param_3);
  uVar4 = FUN_00101c2c(param_2);
  uVar5 = FUN_001029ec(param_1);
                    /* try { // try from 00102525 to 00102529 has its CatchHandler @ 0010252c */
  FUN_00102a2c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 * FUN_0010288c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_001032f2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103e0a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001023d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c4e(param_2);
  FUN_00102440(param_1,uVar1);
  return;
}




undefined8 FUN_00102574(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010190c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001029d6(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001043e3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102274(undefined8 param_1,undefined8 param_2)

{
  FUN_00102930(param_1,param_2);
  FUN_00102974(param_1,param_2);
  return;
}




void FUN_00102e06(undefined8 param_1)

{
  FUN_00102410(param_1);
  return;
}




void FUN_0010246a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ec(param_1);
  FUN_001029fe(uVar1,1);
  return;
}




void FUN_0010422c(void)

{
  return;
}




void FUN_00101c1e(void)

{
  return;
}




undefined8 FUN_00101cd8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010424d(void)

{
  return;
}




void FUN_001038c2(void)

{
  return;
}




undefined8
FUN_0010218a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022e6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025f0(param_3);
      uVar5 = FUN_00102137(param_4);
      cVar1 = FUN_0010197a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010220e;
      }
    }
  }
  bVar2 = true;
LAB_0010220e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001022b2(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001038ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103a98(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103afc(param_2);
                    /* try { // try from 0010395b to 001039ed has its CatchHandler @ 00103a19 */
    uVar2 = FUN_001038ec(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103b12(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103a98(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103afc(local_38);
      uVar2 = FUN_001038ec(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103b12(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103b28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103b62(param_2);
  FUN_00103b74(uVar1,uVar2);
  return;
}




void FUN_00102a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cfc(param_5);
  uVar2 = FUN_00101cea(param_4);
  uVar3 = FUN_00101cd8(param_3);
  FUN_00102c10(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001037ba(void)

{
  return;
}




undefined8 FUN_00101bce(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102410(undefined8 param_1)

{
  FUN_001029d6(param_1);
  return;
}




void FUN_001041ea(void)

{
  return;
}




void FUN_0010447f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_001040a7(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fb6(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f6(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010300a to 0010306d has its CatchHandler @ 001030b9 */
  puVar1 = (undefined4 *)FUN_00101798(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101798(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101798(local_88,local_58);
  *puVar1 = 7;
  FUN_00103436(local_58,local_88);
                    /* try { // try from 00103075 to 00103079 has its CatchHandler @ 001030a4 */
  FUN_001015e8(local_58);
  FUN_00103416(local_58);
  FUN_00103416(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010328d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103cb3("Calling good()...");
  FUN_00103278();
  FUN_00103cb3("Finished good()");
  FUN_00103cb3("Calling bad()...");
  FUN_00102e24();
  FUN_00103cb3("Finished bad()");
  return 0;
}




void FUN_00101c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c4e(param_2);
  FUN_001023d8(param_1,uVar1);
  return;
}




void FUN_001030e6(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined local_98 [48];
  undefined4 local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f6(local_98);
  local_9c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00103146 to 001031f9 has its CatchHandler @ 00103248 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103cb3("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103436(local_68,local_98);
                    /* try { // try from 00103201 to 00103205 has its CatchHandler @ 00103233 */
  FUN_001016a7(local_68);
  FUN_00103416(local_68);
  FUN_00103416(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010420b(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_00103f43(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101d0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010246a(param_1);
  uVar2 = FUN_00101cfc(param_4);
  uVar3 = FUN_00101cea(param_3);
  uVar4 = FUN_00101cd8(param_2);
  FUN_00102496(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_0010349c(undefined8 param_1)

{
  FUN_001035b6(param_1);
  return;
}




void FUN_00102afe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102cdb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e35(undefined4 param_1)

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




undefined8 FUN_00103b12(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001029fe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc0(param_1,param_2,0);
  return;
}




void FUN_00102440(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c4e(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001037ec(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022e6(param_1);
  uVar2 = FUN_001038d6(param_2);
  uVar1 = FUN_001038ec(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ec(param_1);
  uVar2 = FUN_00103a5b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001025da(param_1);
  uVar2 = FUN_00103a79(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001023ba(undefined8 param_1)

{
  FUN_001029c4(param_1);
  return;
}




void FUN_00102e24(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined local_98 [48];
  undefined4 local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033f6(local_98);
  local_9c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00102e84 to 00102f37 has its CatchHandler @ 00102f86 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103cb3("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101798(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103436(local_68,local_98);
                    /* try { // try from 00102f3f to 00102f43 has its CatchHandler @ 00102f71 */
  FUN_00101529(local_68);
  FUN_00103416(local_68);
  FUN_00103416(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033b6(undefined8 param_1)

{
  FUN_0010349c(param_1);
  return;
}




undefined8 FUN_0010264e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001022d0(param_1);
  local_50 = FUN_001022e6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102137(local_58);
    local_59 = FUN_0010197a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102876(local_58);
    }
    else {
      local_58 = FUN_001029ae(local_58);
    }
  }
  FUN_001022b2(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102aae(param_1);
    cVar1 = FUN_0010190c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102afe(local_38,&local_58,&local_50);
      goto LAB_001027d0;
    }
    FUN_0010284a(&local_48);
  }
  uVar2 = FUN_001025f0(local_48);
  cVar1 = FUN_0010197a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001028b8(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102afe(local_38,&local_58,&local_50);
  }
LAB_001027d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103790(undefined8 param_1,undefined8 param_2)

{
  FUN_001038c2(param_1,param_2);
  return;
}




undefined8 FUN_00104186(void)

{
  return 1;
}




undefined8 FUN_00101cea(undefined8 param_1)

{
  return param_1;
}




void FUN_001035b6(void)

{
  return;
}




undefined8
FUN_00101a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cfc(param_5);
  uVar2 = FUN_00101cea(param_4);
  uVar3 = FUN_00101cd8(param_3);
  local_40 = FUN_00101d0e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ab4 to 00101af7 has its CatchHandler @ 00101b35 */
  uVar1 = FUN_00102137(local_40);
  local_38 = FUN_00101d8e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102274(param_1,local_40);
    FUN_001022b2(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010218a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00101c4e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102cee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010373f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103894(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c2c(param_2);
  uVar2 = FUN_001029ec(param_1);
  FUN_00102b64(uVar2,uVar1);
  return;
}




void FUN_00103586(undefined8 param_1)

{
  FUN_00103730(param_1);
  return;
}




void FUN_00102b8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d14(param_1,param_2,param_3);
  return;
}




void FUN_00104258(void)

{
  return;
}




undefined8 FUN_001022fc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102137(local_38);
    cVar1 = FUN_0010197a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102876(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001029ae(local_38);
    }
  }
  FUN_001022b2(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




ulong FUN_00103fa3(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104406(undefined8 *param_1)

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




void FUN_001041be(void)

{
  return;
}




void FUN_00103a5b(undefined8 param_1)

{
  FUN_001032f2(param_1);
  return;
}




void FUN_00102bc0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d3c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00102d14(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001034bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d0(param_1);
  FUN_001035c6(param_1,uVar1);
  FUN_001033b6(param_1);
  return;
}




undefined8 FUN_00103b62(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d89(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102b64(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d00(param_1,param_2);
  return;
}




void FUN_00101c98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102410(param_2);
  uVar1 = FUN_0010242e(uVar1);
  FUN_00102440(param_1,uVar1);
  return;
}




undefined8 FUN_00102a9c(undefined8 param_1)

{
  return param_1;
}




void FUN_001022b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001029ae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104560(void)

{
  return;
}




void FUN_001018c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b7e(param_1,param_2);
  return;
}




void FUN_001044bd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001038d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001025f0(undefined8 param_1)

{
  FUN_00102137(param_1);
  return;
}




undefined8 FUN_00101cfc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103416(undefined8 param_1)

{
  FUN_001034bc(param_1);
  return;
}




void FUN_00104216(void)

{
  return;
}




undefined4 FUN_00101932(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101c1e(param_1);
  return unaff_EBX;
}




undefined8 FUN_0010291a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102876(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102d3c(void)

{
  return 0x333333333333333;
}




void FUN_00102d54(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102da6(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a79(undefined8 param_1)

{
  FUN_0010331f(param_1);
  return;
}




void FUN_001035a6(void)

{
  return;
}




void FUN_00104263(void)

{
  return;
}




void FUN_0010260e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_0010334c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103376(param_1);
  return;
}




undefined8 FUN_0010242e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103278(void)

{
  FUN_00102fb6();
  FUN_001030e6();
  return;
}




void FUN_00103d0b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101798(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103d0b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103cb3("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f10(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103c2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103b62(param_3);
  FUN_00103c6c(param_1,param_2,uVar1);
  return;
}




long FUN_001027ec(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010176f(0x28,param_2);
  uVar1 = FUN_00103b62(param_3);
  uVar2 = FUN_00101c2c(param_2);
  uVar3 = FUN_001029ec(param_1);
  FUN_00103c2e(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ee2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001036cc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037ce(local_18,param_1);
  FUN_001037ec(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001044f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a16(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103460(long param_1)

{
  FUN_00103586(param_1);
  FUN_001035a6(param_1);
  FUN_0010334c(param_1 + 8);
  return;
}




void FUN_0010449e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




bool FUN_00104388(pthread_t *param_1)

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




long FUN_0010331f(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




long FUN_001036b6(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cd8(param_3);
  uVar1 = FUN_00101cea(param_4);
  FUN_001019b4(local_38,uVar1);
  FUN_00101cfc(param_5);
  uVar1 = FUN_0010176f(8,param_2);
                    /* try { // try from 00102c98 to 00102c9c has its CatchHandler @ 00102c9f */
  FUN_00102d54(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015e8(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101798(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103d0b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103cb3("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001025da(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102cdb(undefined8 param_1)

{
  return param_1;
}




long FUN_001022e6(long param_1)

{
  return param_1 + 8;
}




void FUN_00103730(void)

{
  return;
}




void FUN_00104221(void)

{
  return;
}




undefined8 FUN_001036a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104279(void)

{
  return;
}




void FUN_00103d33(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



