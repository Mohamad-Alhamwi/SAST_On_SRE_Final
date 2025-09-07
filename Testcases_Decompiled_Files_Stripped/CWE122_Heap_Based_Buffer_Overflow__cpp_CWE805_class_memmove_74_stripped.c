
undefined8 FUN_00102584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102878(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010339a(void)

{
  return;
}




void FUN_0010403c(void)

{
  return;
}




undefined8 FUN_00102a5c(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010284c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001018cc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102534(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022a6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025b0(local_50);
    cVar2 = FUN_0010193a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025b0(local_50);
      cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102878(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010259a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010259a(local_60);
          local_48[1] = 0;
          FUN_001025ce(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010284c(local_48);
          uVar6 = FUN_001025b0(*puVar5);
          cVar2 = FUN_0010193a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010260e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102836(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025ce(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027c2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ac(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ac(local_60);
        uVar6 = FUN_001027ac(local_60);
        FUN_001027c2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010280a(local_48);
        uVar6 = FUN_001025b0(*puVar5);
        cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010260e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102836(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025ce(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027c2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020dc;
  }
  lVar3 = FUN_00102584(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101df0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010259a(local_60);
    uVar6 = FUN_001025b0(*puVar5);
    cVar2 = FUN_0010193a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101df0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010259a(local_60);
    local_48[1] = 0;
    FUN_001025ce(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010260e(local_60,param_3);
  }
LAB_001020dc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010426e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103414(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103523(param_1,param_2);
  FUN_0010359e(param_1,param_2);
  FUN_00103130(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010199e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00101c20(param_1,uVar1);
  return param_1;
}




long FUN_001030d6(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00101cbc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101caa(undefined8 param_1)

{
  return param_1;
}




void FUN_001042e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001040aa(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104073,local_18);
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




void FUN_001042ac(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103c7e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101c0e(undefined8 param_1)

{
  return param_1;
}




void FUN_001039a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010172f(0x30,param_2);
  uVar1 = FUN_00103946(param_3);
  uVar2 = FUN_00101bec(param_2);
  uVar3 = FUN_001029ac(param_1);
  FUN_00103a12(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102234(undefined8 param_1,undefined8 param_2)

{
  FUN_001028f0(param_1,param_2);
  FUN_00102934(param_1,param_2);
  return;
}




undefined8
FUN_001019f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  local_40 = FUN_00101cce(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a74 to 00101ab7 has its CatchHandler @ 00101af5 */
  uVar1 = FUN_001020f7(local_40);
  local_38 = FUN_00101d4e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102234(param_1,local_40);
    FUN_00102272(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010214a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104068(void)

{
  return;
}




undefined8 FUN_0010296e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001028f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bec(param_2);
  uVar2 = FUN_001029ac(param_1);
  FUN_00102b24(uVar2,uVar1);
  return;
}




void FUN_0010428d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd4(param_1,param_2,param_3);
  return;
}




void FUN_0010163c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_34c;
  ulong local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  puVar1 = (undefined8 *)FUN_00101758(param_1,&local_34c);
  local_340 = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(local_340,local_338,800);
  FUN_00103afa(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028b8(long param_1)

{
  FUN_00102b06(param_1 + 0x20);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103fe4(void)

{
  return;
}




void FUN_00102da9(undefined8 param_1)

{
  FUN_00102dc7(param_1);
  return;
}




void FUN_00103ca6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d0(param_2);
  uVar1 = FUN_001023ee(uVar1);
  FUN_00102400(param_1,uVar1);
  return;
}




void FUN_0010321a(undefined8 param_1,undefined8 param_2)

{
  FUN_001032de(param_1,param_2);
  return;
}




undefined8 FUN_001038e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010401b(void)

{
  return;
}




undefined8 FUN_00103484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cc0(void)

{
  return;
}




void FUN_00104005(void)

{
  return;
}




undefined8 FUN_00102a6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001022bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020f7(local_38);
    cVar1 = FUN_0010193a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102836(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010296e(local_38);
    }
  }
  FUN_00102272(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001027c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a5c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_0010349a(long param_1)

{
  return param_1 + 0x10;
}




undefined8 * FUN_0010280a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010315a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ac(param_1);
  FUN_00102b4e(uVar1,param_2,1);
  return;
}




void FUN_00101c20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00102398(param_1,uVar1);
  return;
}




undefined8 FUN_00101c98(undefined8 param_1)

{
  return param_1;
}




void FUN_00102456(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010172f(0x30,param_2);
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  uVar4 = FUN_00101bec(param_2);
  uVar5 = FUN_001029ac(param_1);
                    /* try { // try from 001024e5 to 001024e9 has its CatchHandler @ 001024ec */
  FUN_001029ec(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103b22(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 FUN_001018f2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bde(param_1);
  return unaff_EBX;
}




long FUN_0010259a(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103071(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103aa2("Calling good()...");
  FUN_00103061();
  FUN_00103aa2("Finished good()");
  FUN_00103aa2("Calling bad()...");
  FUN_00102de5();
  FUN_00103aa2("Finished bad()");
  return 0;
}




undefined8 FUN_00101961(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010242a(param_1);
  uVar2 = FUN_00103946(param_2);
  FUN_001039a4(param_1,uVar1,uVar2);
  return uVar1;
}




bool FUN_00104177(pthread_t *param_1)

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




void FUN_00103bf9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101974(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c58(param_1,param_2);
  return;
}




undefined8 FUN_0010172f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001036ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001019d6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010336a(undefined8 param_1)

{
  FUN_00103514(param_1);
  return;
}




void FUN_001029be(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b80(param_1,param_2,0);
  return;
}




void FUN_00102abe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c9b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104010(void)

{
  return;
}




void FUN_001020f7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028b8(param_1);
  FUN_001028da(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010237a(undefined8 param_1)

{
  FUN_00102984(param_1);
  return;
}




long FUN_001036d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010387c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038e0(param_2);
                    /* try { // try from 0010373f to 001037d1 has its CatchHandler @ 001037fd */
    uVar2 = FUN_001036d0(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038f6(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010387c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038e0(local_38);
      uVar2 = FUN_001036d0(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038f6(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00103678(undefined8 param_1,undefined8 param_2)

{
  FUN_00103574(param_1,param_2);
  return param_1;
}




void FUN_00104026(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_001028da(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103ffa(void)

{
  return;
}




ulong FUN_00103e96(long param_1,ulong param_2,long param_3)

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




void FUN_00102de5(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031da(local_88);
                    /* try { // try from 00102e20 to 00102eaa has its CatchHandler @ 00102ef6 */
  pvVar1 = operator_new__(400);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_0010321a(local_58,local_88);
                    /* try { // try from 00102eb2 to 00102eb6 has its CatchHandler @ 00102ee1 */
  FUN_00101549(local_58);
  FUN_001031fa(local_58);
  FUN_001031fa(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101918(undefined8 *param_1)

{
  FUN_00101bec(*param_1);
  return;
}




void FUN_00103b4e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103244(long param_1)

{
  FUN_0010336a(param_1);
  FUN_0010338a(param_1);
  FUN_00103130(param_1 + 8);
  return;
}




int FUN_00103f93(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101cce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010242a(param_1);
  uVar2 = FUN_00101cbc(param_4);
  uVar3 = FUN_00101caa(param_3);
  uVar4 = FUN_00101c98(param_2);
  FUN_00102456(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101745(void)

{
  return;
}




void FUN_00103514(void)

{
  return;
}




void FUN_00102272(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102984(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010242a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ac(param_1);
  FUN_001029be(uVar1,1);
  return;
}




void FUN_001031da(undefined8 param_1)

{
  FUN_001031ba(param_1);
  return;
}




void FUN_00103c24(undefined4 param_1)

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




void FUN_00104073(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001038f6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001023ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d14(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d66(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001035d0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022a6(param_1);
  uVar2 = FUN_001036ba(param_2);
  uVar1 = FUN_001036d0(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ac(param_1);
  uVar2 = FUN_0010383f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010259a(param_1);
  uVar2 = FUN_0010385d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00101b8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018ae(undefined8 param_1)

{
  FUN_00101b8e(param_1);
  return;
}




void FUN_00103280(undefined8 param_1)

{
  FUN_0010339a(param_1);
  return;
}




long FUN_001027ac(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00103f84(void)

{
  return 0;
}




void FUN_001035b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101bec(long param_1)

{
  FUN_0010237a(param_1 + 0x20);
  return;
}




void FUN_00102f23(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031da(local_88);
                    /* try { // try from 00102f5e to 00102fe8 has its CatchHandler @ 00103034 */
  pvVar1 = operator_new__(800);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101758(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_0010321a(local_58,local_88);
                    /* try { // try from 00102ff0 to 00102ff4 has its CatchHandler @ 0010301f */
  FUN_0010163c(local_58);
  FUN_001031fa(local_58);
  FUN_001031fa(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010390c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103946(param_2);
  FUN_00103958(uVar1,uVar2);
  return;
}




void FUN_00102b06(undefined8 param_1)

{
  FUN_00102cae(param_1);
  return;
}




undefined8 FUN_00103523(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103678(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103574(undefined8 param_1,undefined8 param_2)

{
  FUN_001036a6(param_1,param_2);
  return;
}




void FUN_00102398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  FUN_00102400(param_1,uVar1);
  return;
}




ulong FUN_00103d92(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101b3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022a6(param_1);
  uVar2 = FUN_00102290(param_1);
  FUN_001022bc(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102836(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b78(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ac8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001032a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102290(param_1);
  FUN_001033aa(param_1,uVar1);
  FUN_0010319a(param_1);
  return;
}




undefined8 FUN_001041d2(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010338a(void)

{
  return;
}




void FUN_0010359e(void)

{
  return;
}




void FUN_00104052(void)

{
  return;
}




void FUN_00103fce(void)

{
  return;
}




void FUN_001029ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cbc(param_5);
  uVar2 = FUN_00101caa(param_4);
  uVar3 = FUN_00101c98(param_3);
  FUN_00102bd0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010319a(undefined8 param_1)

{
  FUN_00103280(param_1);
  return;
}




undefined8
FUN_0010214a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022a6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025b0(param_3);
      uVar5 = FUN_001020f7(param_4);
      cVar1 = FUN_0010193a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021ce;
      }
    }
  }
  bVar2 = true;
LAB_001021ce:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102272(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103fef(void)

{
  return;
}




undefined8 FUN_00102cae(undefined8 param_1)

{
  return param_1;
}




void FUN_0010383f(undefined8 param_1)

{
  FUN_001030d6(param_1);
  return;
}




void FUN_00103d32(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102dc7(undefined8 param_1)

{
  FUN_001023d0(param_1);
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




void FUN_00104031(void)

{
  return;
}




void FUN_00103aa2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103fb8(void)

{
  return;
}




undefined8 FUN_00102996(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102400(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c0e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001031fa(undefined8 param_1)

{
  FUN_001032a0(param_1);
  return;
}




void FUN_00103130(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010315a(param_1);
  return;
}




undefined8 FUN_00102cfc(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104047(void)

{
  return;
}




void FUN_001031ba(undefined8 param_1)

{
  FUN_00103244(param_1);
  return;
}




void FUN_00102b24(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc0(param_1,param_2);
  return;
}




void FUN_00103061(void)

{
  FUN_00102f23();
  return;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_34c;
  ulong local_348;
  undefined4 *local_340;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34c = 2;
  puVar1 = (undefined8 *)FUN_00101758(param_1,&local_34c);
  local_340 = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(local_340,local_338,800);
  FUN_00103afa(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bde(void)

{
  return;
}




void FUN_00104350(void)

{
  return;
}




long FUN_001022a6(long param_1)

{
  return param_1 + 8;
}




void FUN_00103ba3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fad(void)

{
  return;
}




undefined8 FUN_00102534(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102272(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023d0(undefined8 param_1)

{
  FUN_00102996(param_1);
  return;
}




void FUN_00103fd9(void)

{
  return;
}




void FUN_0010405d(void)

{
  return;
}




undefined8 FUN_0010260e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102290(param_1);
  local_50 = FUN_001022a6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020f7(local_58);
    local_59 = FUN_0010193a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102836(local_58);
    }
    else {
      local_58 = FUN_0010296e(local_58);
    }
  }
  FUN_00102272(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a6e(param_1);
    cVar1 = FUN_001018cc(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102abe(local_38,&local_58,&local_50);
      goto LAB_00102790;
    }
    FUN_0010280a(&local_48);
  }
  uVar2 = FUN_001025b0(local_48);
  cVar1 = FUN_0010193a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102878(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102abe(local_38,&local_58,&local_50);
  }
LAB_00102790:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00101758(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101884(param_1,param_2);
  local_28 = FUN_001018ae(param_1);
  cVar2 = FUN_001018cc(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018f2(param_1);
    uVar3 = FUN_00101918(&local_38);
    cVar2 = FUN_0010193a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017f8;
    }
  }
  bVar1 = true;
LAB_001017f8:
  if (bVar1) {
    uVar3 = FUN_00101961(param_2);
    FUN_0010199e(local_30,uVar3);
    FUN_001019d6(&local_28,&local_38);
    local_38 = FUN_001019f8(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101918(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102d66(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102da9(param_2);
  puVar2 = (undefined4 *)FUN_001023ee(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103afa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103bce(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103946(undefined8 param_1)

{
  return param_1;
}




void FUN_001036a6(void)

{
  return;
}




void FUN_00103cff(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001041f5(undefined8 *param_1)

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




void FUN_00102cd4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined4 * FUN_0010387c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028b8(param_2);
  puVar2 = (undefined4 *)FUN_0010390c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_00103103(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103cd1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001034b0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035b2(local_18,param_1);
  FUN_001035d0(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c9b(undefined8 param_1)

{
  return param_1;
}




void FUN_001025b0(undefined8 param_1)

{
  FUN_001020f7(param_1);
  return;
}




void FUN_001033aa(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102836(local_28);
    FUN_001033aa(param_1,uVar1);
    lVar2 = FUN_0010296e(local_28);
    FUN_00102234(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103f75(void)

{
  return 1;
}




void FUN_0010385d(undefined8 param_1)

{
  FUN_00103103(param_1);
  return;
}




void FUN_00103a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103946(param_3);
  puVar3 = (undefined8 *)FUN_0010172f(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c98(param_3);
  uVar1 = FUN_00101caa(param_4);
  FUN_00101974(local_38,uVar1);
  FUN_00101cbc(param_5);
  uVar1 = FUN_0010172f(0x10,param_2);
                    /* try { // try from 00102c58 to 00102c5c has its CatchHandler @ 00102c5f */
  FUN_00102d14(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fc3(void)

{
  return;
}




void FUN_00103a12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103946(param_3);
  FUN_00103a50(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001029ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00101884(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b3e(param_1,param_2);
  return;
}




void FUN_00102b80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cfc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001032de(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103414(param_1,param_2);
  lVar1 = FUN_00103484(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010349a(param_1);
                    /* try { // try from 00103339 to 0010333d has its CatchHandler @ 00103343 */
    uVar3 = FUN_001034b0(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined4 FUN_0010193a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}



