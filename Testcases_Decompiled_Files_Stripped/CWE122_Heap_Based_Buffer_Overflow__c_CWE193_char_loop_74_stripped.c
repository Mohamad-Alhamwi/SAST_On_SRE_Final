
undefined8 FUN_001024cc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104007(void)

{
  return;
}




undefined8 * FUN_001027e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001031da(undefined8 param_1,undefined8 param_2)

{
  FUN_0010329e(param_1,param_2);
  return;
}




void FUN_00103c91(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102944(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001027ce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010190c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bf0(param_1,param_2);
  return;
}




undefined8
FUN_001020e2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010223e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102548(param_3);
      uVar5 = FUN_0010208f(param_4);
      cVar1 = FUN_001018d2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102166;
      }
    }
  }
  bVar2 = true;
LAB_00102166:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010220a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103f83(void)

{
  return;
}




undefined8 FUN_00101b26(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d41(undefined8 param_1)

{
  FUN_00102d5f(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101ce6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024cc(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010223e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102548(local_50);
    cVar2 = FUN_001018d2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102548(local_50);
      cVar2 = FUN_001018d2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102810(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102532(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102532(local_60);
          local_48[1] = 0;
          FUN_00102566(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027e4(local_48);
          uVar6 = FUN_00102548(*puVar5);
          cVar2 = FUN_001018d2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025a6(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027ce(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102566(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010275a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102744(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102744(local_60);
        uVar6 = FUN_00102744(local_60);
        FUN_0010275a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027a2(local_48);
        uVar6 = FUN_00102548(*puVar5);
        cVar2 = FUN_001018d2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025a6(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027ce(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102566(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010275a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102074;
  }
  lVar3 = FUN_0010251c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d88:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102532(local_60);
    uVar6 = FUN_00102548(*puVar5);
    cVar2 = FUN_001018d2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d88;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102532(local_60);
    local_48[1] = 0;
    FUN_00102566(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025a6(local_60,param_3);
  }
LAB_00102074:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00101c66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023c2(param_1);
  uVar2 = FUN_00101c54(param_4);
  uVar3 = FUN_00101c42(param_3);
  uVar4 = FUN_00101c30(param_2);
  FUN_001023ee(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103fa4(void)

{
  return;
}




undefined8 FUN_00103f44(void)

{
  return 0;
}




void FUN_00103f99(void)

{
  return;
}




void FUN_00103fdb(void)

{
  return;
}




undefined8 FUN_001038b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102368(param_2);
  uVar1 = FUN_00102386(uVar1);
  FUN_00102398(param_1,uVar1);
  return;
}




void FUN_00103572(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104012(void)

{
  return;
}




void FUN_0010220a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010426c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00103e56(long param_1,ulong param_2,long param_3)

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




void FUN_00102888(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b84(param_2);
  uVar2 = FUN_00102944(param_1);
  FUN_00102abc(uVar2,uVar1);
  return;
}




void FUN_00103f8e(void)

{
  return;
}




void FUN_00102a56(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c33(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101846(undefined8 param_1)

{
  FUN_00101b26(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102810(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001016c7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b0e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102c58(void)

{
  return;
}




void FUN_001038cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103906(param_2);
  FUN_00103918(uVar1,uVar2);
  return;
}




undefined8 FUN_00101c42(undefined8 param_1)

{
  return param_1;
}




long FUN_001030c3(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103be4(undefined4 param_1)

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




void FUN_00103240(undefined8 param_1)

{
  FUN_0010335a(param_1);
  return;
}




void FUN_0010401d(void)

{
  return;
}




void FUN_00102b18(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c94(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103b8e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102956(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b18(param_1,param_2,0);
  return;
}




void FUN_00102312(undefined8 param_1)

{
  FUN_0010291c(param_1);
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




long FUN_00102744(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104310(void)

{
  return;
}




void FUN_00103260(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102228(param_1);
  FUN_0010336a(param_1,uVar1);
  FUN_0010315a(param_1);
  return;
}




void FUN_0010275a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029f4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029f4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102ecf(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010319a(local_88);
  pvVar1 = malloc(0xb);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102f3f to 00102fa8 has its CatchHandler @ 00102ff4 */
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031da(local_58,local_88);
                    /* try { // try from 00102fb0 to 00102fb4 has its CatchHandler @ 00102fdf */
  FUN_001015f8(local_58);
  FUN_001031ba(local_58);
  FUN_001031ba(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102872(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001042a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101c30(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c54(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102944(param_1);
  FUN_00102956(uVar1,1);
  return;
}




long FUN_00103690(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010383c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038a0(param_2);
                    /* try { // try from 001036ff to 00103791 has its CatchHandler @ 001037bd */
    uVar2 = FUN_00103690(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038b6(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010383c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038a0(local_38);
      uVar2 = FUN_00103690(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038b6(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001015f8(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_3c;
  ulong local_38;
  void *local_30;
  size_t local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 2;
  plVar1 = (long *)FUN_001016f0(param_1,&local_3c);
  local_30 = (void *)*plVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  local_28 = strlen(local_1b);
  for (local_38 = 0; local_38 < local_28 + 1; local_38 = local_38 + 1) {
    *(char *)((long)local_30 + local_38) = local_1b[local_38];
  }
  FUN_00103a62(local_30);
  free(local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010251c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102cfe(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d41(param_2);
  puVar2 = (undefined4 *)FUN_00102386(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8
FUN_00101990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c54(param_5);
  uVar2 = FUN_00101c42(param_4);
  uVar3 = FUN_00101c30(param_3);
  local_40 = FUN_00101c66(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a0c to 00101a4f has its CatchHandler @ 00101a8d */
  uVar1 = FUN_0010208f(local_40);
  local_38 = FUN_00101ce6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021cc(param_1,local_40);
    FUN_0010220a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020e2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010355e(void)

{
  return;
}




void FUN_00103ffc(void)

{
  return;
}




int FUN_00103f53(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104028(void)

{
  return;
}




void FUN_00101ad6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010223e(param_1);
  uVar2 = FUN_00102228(param_1);
  FUN_00102254(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101864(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00103444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104033(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b76(void)

{
  return;
}




void FUN_0010319a(undefined8 param_1)

{
  FUN_0010317a(param_1);
  return;
}




undefined8 FUN_0010292e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010424d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c54(param_5);
  uVar2 = FUN_00101c42(param_4);
  uVar3 = FUN_00101c30(param_3);
  FUN_00102b68(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103bb9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba6(param_2);
  FUN_00102398(param_1,uVar1);
  return;
}




void FUN_0010336a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027ce(local_28);
    FUN_0010336a(param_1,uVar1);
    lVar2 = FUN_00102906(local_28);
    FUN_001021cc(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103c3e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_3c;
  ulong local_38;
  void *local_30;
  size_t local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 2;
  plVar1 = (long *)FUN_001016f0(param_1,&local_3c);
  local_30 = (void *)*plVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  local_28 = strlen(local_1b);
  for (local_38 = 0; local_38 < local_28 + 1; local_38 = local_38 + 1) {
    *(char *)((long)local_30 + local_38) = local_1b[local_38];
  }
  FUN_00103a62(local_30);
  free(local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00104137(pthread_t *param_1)

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




void FUN_00102850(long param_1)

{
  FUN_00102a9e(param_1 + 0x20);
  return;
}




void FUN_00103fd0(void)

{
  return;
}




void FUN_00103b63(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101936(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba6(param_2);
  FUN_00101bb8(param_1,uVar1);
  return param_1;
}




void FUN_001037ff(undefined8 param_1)

{
  FUN_00103096(param_1);
  return;
}




void FUN_001030f0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010311a(param_1);
  return;
}




void FUN_001039d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103906(param_3);
  FUN_00103a10(param_1,param_2,uVar1);
  return;
}




void FUN_0010208f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102850(param_1);
  FUN_00102872(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_0010188a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b76(param_1);
  return unaff_EBX;
}




void FUN_0010329e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033d4(param_1,param_2);
  lVar1 = FUN_00103444(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010345a(param_1);
                    /* try { // try from 001032f9 to 001032fd has its CatchHandler @ 00103303 */
    uVar3 = FUN_00103470(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00102228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ff1(void)

{
  return;
}




void FUN_001028cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102944(param_1);
  FUN_00102ae6(uVar1,param_2,1);
  return;
}




void FUN_00102548(undefined8 param_1)

{
  FUN_0010208f(param_1);
  return;
}




void FUN_00102398(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba6(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_00103096(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00103f35(void)

{
  return 1;
}




undefined8 FUN_00102c33(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fba(void)

{
  return;
}




undefined8 FUN_00101ba6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001018f9(undefined8 param_1)

{
  return param_1;
}




void FUN_0010311a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001025a6(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102228(param_1);
  local_50 = FUN_0010223e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010208f(local_58);
    local_59 = FUN_001018d2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027ce(local_58);
    }
    else {
      local_58 = FUN_00102906(local_58);
    }
  }
  FUN_0010220a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a06(param_1);
    cVar1 = FUN_00101864(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a56(local_38,&local_58,&local_50);
      goto LAB_00102728;
    }
    FUN_001027a2(&local_48);
  }
  uVar2 = FUN_00102548(local_48);
  cVar1 = FUN_001018d2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102810(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a56(local_38,&local_58,&local_50);
  }
LAB_00102728:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016c7(0x30,param_2);
  uVar1 = FUN_00103906(param_3);
  uVar2 = FUN_00101b84(param_2);
  uVar3 = FUN_00102944(param_1);
  FUN_001039d2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103fc5(void)

{
  return;
}




void FUN_0010335a(void)

{
  return;
}




undefined8 FUN_00102c94(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001034e3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103638(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001029f4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010332a(undefined8 param_1)

{
  FUN_001034d4(param_1);
  return;
}




undefined8 FUN_0010406a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104033,local_18);
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




void FUN_00102368(undefined8 param_1)

{
  FUN_0010292e(param_1);
  return;
}




void FUN_001016dd(void)

{
  return;
}




void FUN_00101b84(long param_1)

{
  FUN_00102312(param_1 + 0x20);
  return;
}




undefined8 * FUN_001027a2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010381d(undefined8 param_1)

{
  FUN_001030c3(param_1);
  return;
}




undefined8 FUN_0010367a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010315a(undefined8 param_1)

{
  FUN_00103240(param_1);
  return;
}




void FUN_00103f6d(void)

{
  return;
}




void FUN_001031ba(undefined8 param_1)

{
  FUN_00103260(param_1);
  return;
}




void FUN_00103fe6(void)

{
  return;
}




void FUN_0010334a(void)

{
  return;
}




void FUN_00103cf2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103aba(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103021(void)

{
  FUN_00102ecf();
  return;
}




void FUN_001021cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102888(param_1,param_2);
  FUN_001028cc(param_1,param_2);
  return;
}




void FUN_00103b38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102ae6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c6c(param_1,param_2,param_3);
  return;
}




long FUN_0010345a(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00103906(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c6c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001041b5(undefined8 *param_1)

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




long FUN_001016f0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010181c(param_1,param_2);
  local_28 = FUN_00101846(param_1);
  cVar2 = FUN_00101864(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010188a(param_1);
    uVar3 = FUN_001018b0(&local_38);
    cVar2 = FUN_001018d2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101790;
    }
  }
  bVar1 = true;
LAB_00101790:
  if (bVar1) {
    uVar3 = FUN_001018f9(param_2);
    FUN_00101936(local_30,uVar3);
    FUN_0010196e(&local_28,&local_38);
    local_38 = FUN_00101990(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018b0(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103c66(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103666(void)

{
  return;
}




void FUN_00103a62(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102906(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102386(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d7d(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010319a(local_88);
  pvVar1 = malloc(10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102ded to 00102e56 has its CatchHandler @ 00102ea2 */
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016f0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031da(local_58,local_88);
                    /* try { // try from 00102e5e to 00102e62 has its CatchHandler @ 00102e8d */
  FUN_00101529(local_58);
  FUN_001031ba(local_58);
  FUN_001031ba(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cbf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00103031(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a62("Calling good()...");
  FUN_00103021();
  FUN_00103a62("Finished good()");
  FUN_00103a62("Calling bad()...");
  FUN_00102d7d();
  FUN_00103a62("Finished bad()");
  return 0;
}




undefined8 FUN_00102a06(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010220a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cac(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cfe(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010181c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ad6(param_1,param_2);
  return;
}




void FUN_00101bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ba6(param_2);
  FUN_00102330(param_1,uVar1);
  return;
}




void FUN_00103faf(void)

{
  return;
}




undefined8 FUN_00102254(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010208f(local_38);
    cVar1 = FUN_001018d2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027ce(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102906(local_38);
    }
  }
  FUN_0010220a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined4 * FUN_0010383c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102850(param_2);
  puVar2 = (undefined4 *)FUN_001038cc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103906(param_3);
  puVar3 = (undefined8 *)FUN_001016c7(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001023ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016c7(0x30,param_2);
  uVar1 = FUN_00101c54(param_5);
  uVar2 = FUN_00101c42(param_4);
  uVar3 = FUN_00101c30(param_3);
  uVar4 = FUN_00101b84(param_2);
  uVar5 = FUN_00102944(param_1);
                    /* try { // try from 0010247d to 00102481 has its CatchHandler @ 00102484 */
  FUN_00102984(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ae2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00103d52(long param_1,ulong param_2,long param_3)

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




void FUN_00102566(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029f4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001018b0(undefined8 *param_1)

{
  FUN_00101b84(*param_1);
  return;
}




undefined8 FUN_00102c46(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001038a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103534(undefined8 param_1,undefined8 param_2)

{
  FUN_00103666(param_1,param_2);
  return;
}




void FUN_001033d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034e3(param_1,param_2);
  FUN_0010355e(param_1,param_2);
  FUN_001030f0(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f78(void)

{
  return;
}




void FUN_00102b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c30(param_3);
  uVar1 = FUN_00101c42(param_4);
  FUN_0010190c(local_38,uVar1);
  FUN_00101c54(param_5);
  uVar1 = FUN_001016c7(0x10,param_2);
                    /* try { // try from 00102bf0 to 00102bf4 has its CatchHandler @ 00102bf7 */
  FUN_00102cac(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034d4(void)

{
  return;
}




void FUN_00102d5f(undefined8 param_1)

{
  FUN_00102368(param_1);
  return;
}




void FUN_0010422e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102abc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c58(param_1,param_2);
  return;
}




long FUN_00102532(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103204(long param_1)

{
  FUN_0010332a(param_1);
  FUN_0010334a(param_1);
  FUN_001030f0(param_1 + 8);
  return;
}




undefined8 FUN_00103918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023c2(param_1);
  uVar2 = FUN_00103906(param_2);
  FUN_00103964(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00104192(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103470(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103572(local_18,param_1);
  FUN_00103590(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103638(undefined8 param_1,undefined8 param_2)

{
  FUN_00103534(param_1,param_2);
  return param_1;
}




long FUN_0010223e(long param_1)

{
  return param_1 + 8;
}




void FUN_00103a88(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103590(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010223e(param_1);
  uVar2 = FUN_0010367a(param_2);
  uVar1 = FUN_00103690(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102744(param_1);
  uVar2 = FUN_001037ff(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102532(param_1);
  uVar2 = FUN_0010381d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_0010291c(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018d2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102a9e(undefined8 param_1)

{
  FUN_00102c46(param_1);
  return;
}




void FUN_0010317a(undefined8 param_1)

{
  FUN_00103204(param_1);
  return;
}




void FUN_0010196e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



