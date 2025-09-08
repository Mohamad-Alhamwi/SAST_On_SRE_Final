
void FUN_0010251c(undefined8 param_1)

{
  FUN_00102063(param_1);
  return;
}




void FUN_0010406a(void)

{
  return;
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




void FUN_001016b1(void)

{
  return;
}




undefined8 FUN_00102846(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001032a2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fc(param_1);
  FUN_001033ac(param_1,uVar1);
  FUN_0010319c(param_1);
  return;
}




void FUN_0010181a(undefined8 param_1)

{
  FUN_00101afa(param_1);
  return;
}




undefined8 FUN_001029c8(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103d94(long param_1,ulong param_2,long param_3)

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




void FUN_00102824(long param_1)

{
  FUN_00102a72(param_1 + 0x20);
  return;
}




undefined8
FUN_00101964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c28(param_5);
  uVar2 = FUN_00101c16(param_4);
  uVar3 = FUN_00101c04(param_3);
  local_40 = FUN_00101c3a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019e0 to 00101a23 has its CatchHandler @ 00101a61 */
  uVar1 = FUN_00102063(local_40);
  local_38 = FUN_00101cba(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021a0(param_1,local_40);
    FUN_001021de(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020b6(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_001021fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fe6(void)

{
  return;
}




undefined8 FUN_00101b7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102edc(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031dc(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f81 to 00102fea has its CatchHandler @ 00103036 */
  puVar1 = (undefined8 *)FUN_001016c4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_001016c4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_001016c4(local_88,local_58);
  *puVar1 = __s;
  FUN_0010321c(local_58,local_88);
                    /* try { // try from 00102ff2 to 00102ff6 has its CatchHandler @ 00103021 */
  FUN_001015f2(local_58);
  FUN_001031fc(local_58);
  FUN_001031fc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021a0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010285c(param_1,param_2);
  FUN_001028a0(param_1,param_2);
  return;
}




undefined8
FUN_001020b6(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102212(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010251c(param_3);
      uVar5 = FUN_00102063(param_4);
      cVar1 = FUN_001018a6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010213a;
      }
    }
  }
  bVar2 = true;
LAB_0010213a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021de(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104007(void)

{
  return;
}




void FUN_00103fba(void)

{
  return;
}




void FUN_00103ffc(void)

{
  return;
}




void FUN_0010403e(void)

{
  return;
}




undefined8 FUN_0010395a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102396(param_1);
  uVar2 = FUN_00103948(param_2);
  FUN_001039a6(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00101c28(undefined8 param_1)

{
  return param_1;
}




void FUN_001036a8(void)

{
  return;
}




void FUN_00104075(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102228(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102063(local_38);
    cVar1 = FUN_001018a6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027a2(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028da(local_38);
    }
  }
  FUN_001021de(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




int FUN_00103f95(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001028f0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ff1(void)

{
  return;
}




void FUN_00102aba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c40(param_1,param_2,param_3);
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




void FUN_001015f2(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016c4(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103aa4(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010285c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b58(param_2);
  uVar2 = FUN_00102918(param_1);
  FUN_00102a90(uVar2,uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00103bd0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102c80(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cd2(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010169b(0x30,param_2);
  uVar1 = FUN_00103948(param_3);
  uVar2 = FUN_00101b58(param_2);
  uVar3 = FUN_00102918(param_1);
  FUN_00103a14(uVar3,uVar2,uVar1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024a0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102212(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010251c(local_50);
    cVar2 = FUN_001018a6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010251c(local_50);
      cVar2 = FUN_001018a6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e4(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102506(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102506(local_60);
          local_48[1] = 0;
          FUN_0010253a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027b8(local_48);
          uVar6 = FUN_0010251c(*puVar5);
          cVar2 = FUN_001018a6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010257a(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027a2(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010253a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010272e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102718(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102718(local_60);
        uVar6 = FUN_00102718(local_60);
        FUN_0010272e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102776(local_48);
        uVar6 = FUN_0010251c(*puVar5);
        cVar2 = FUN_001018a6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010257a(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027a2(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010253a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010272e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102048;
  }
  lVar3 = FUN_001024f0(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d5c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102506(local_60);
    uVar6 = FUN_0010251c(*puVar5);
    cVar2 = FUN_001018a6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d5c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102506(local_60);
    local_48[1] = 0;
    FUN_0010253a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010257a(local_60,param_3);
  }
LAB_00102048:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010319c(undefined8 param_1)

{
  FUN_00103282(param_1);
  return;
}




void FUN_00103cd3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010336c(undefined8 param_1)

{
  FUN_00103516(param_1);
  return;
}




long FUN_001016c4(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017f0(param_1,param_2);
  local_28 = FUN_0010181a(param_1);
  cVar2 = FUN_00101838(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010185e(param_1);
    uVar3 = FUN_00101884(&local_38);
    cVar2 = FUN_001018a6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101764;
    }
  }
  bVar1 = true;
LAB_00101764:
  if (bVar1) {
    uVar3 = FUN_001018cd(param_2);
    FUN_0010190a(local_30,uVar3);
    FUN_00101942(&local_28,&local_38);
    local_38 = FUN_00101964(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101884(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_001040ac(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104075,local_18);
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




undefined8 FUN_00102c1a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c80(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029da(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021de(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010235a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010169b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001027a2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001041f7(undefined8 *param_1)

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




void FUN_0010338c(void)

{
  return;
}




undefined8 * FUN_001027b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_001030d8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001028da(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001041d4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101c3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102396(param_1);
  uVar2 = FUN_00101c28(param_4);
  uVar3 = FUN_00101c16(param_3);
  uVar4 = FUN_00101c04(param_2);
  FUN_001023c2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102063(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102824(param_1);
  FUN_00102846(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined4 * FUN_0010387e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102824(param_2);
  puVar2 = (undefined4 *)FUN_0010390e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101884(undefined8 *param_1)

{
  FUN_00101b58(*param_1);
  return;
}




void FUN_0010253a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029c8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d51(void)

{
  void *__s;
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031dc(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  lVar1 = (long)__s + -8;
  local_58[0] = 0;
                    /* try { // try from 00102dfa to 00102e63 has its CatchHandler @ 00102eaf */
  plVar2 = (long *)FUN_001016c4(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 1;
  plVar2 = (long *)FUN_001016c4(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 2;
  plVar2 = (long *)FUN_001016c4(local_88,local_58);
  *plVar2 = lVar1;
  FUN_0010321c(local_58,local_88);
                    /* try { // try from 00102e6b to 00102e6f has its CatchHandler @ 00102e9a */
  FUN_00101549(local_58);
  FUN_001031fc(local_58);
  FUN_001031fc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b4a(void)

{
  return;
}




undefined8 FUN_0010367a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103576(param_1,param_2);
  return param_1;
}




void FUN_0010405f(void)

{
  return;
}




void FUN_00103fc5(void)

{
  return;
}




bool FUN_00104179(pthread_t *param_1)

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




void FUN_00101b58(long param_1)

{
  FUN_001022e6(param_1 + 0x20);
  return;
}




undefined4 FUN_001018a6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101838(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103516(void)

{
  return;
}




void FUN_00101b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7a(param_2);
  FUN_00102304(param_1,uVar1);
  return;
}




void FUN_00103246(long param_1)

{
  FUN_0010336c(param_1);
  FUN_0010338c(param_1);
  FUN_00103132(param_1 + 8);
  return;
}




void FUN_00102958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c28(param_5);
  uVar2 = FUN_00101c16(param_4);
  uVar3 = FUN_00101c04(param_3);
  FUN_00102b3c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102a2a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c07(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103ca8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010236c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7a(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_0010349c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103d01(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001028a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102918(param_1);
  FUN_00102aba(uVar1,param_2,1);
  return;
}




void FUN_00104033(void)

{
  return;
}




void FUN_00103c26(undefined4 param_1)

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




void FUN_00101aaa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102212(param_1);
  uVar2 = FUN_001021fc(param_1);
  FUN_00102228(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_001038e2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001031bc(undefined8 param_1)

{
  FUN_00103246(param_1);
  return;
}




void FUN_00103aca(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001021de(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001018cd(undefined8 param_1)

{
  return param_1;
}




void FUN_0010339c(void)

{
  return;
}




void FUN_001022e6(undefined8 param_1)

{
  FUN_001028f0(param_1);
  return;
}




void FUN_00104054(void)

{
  return;
}




undefined8 FUN_00102902(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00102718(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_001024a0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021de(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010315c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103faf(void)

{
  return;
}




void FUN_00102c40(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010401d(void)

{
  return;
}




undefined8 FUN_00101c04(undefined8 param_1)

{
  return param_1;
}




void FUN_00101942(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001031dc(undefined8 param_1)

{
  FUN_001031bc(param_1);
  return;
}




undefined8 * FUN_00102776(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103aa4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104028(void)

{
  return;
}




undefined8 FUN_00103486(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102d15(undefined8 param_1)

{
  FUN_00102d33(param_1);
  return;
}




void FUN_001035b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a72(undefined8 param_1)

{
  FUN_00102c1a(param_1);
  return;
}




void FUN_001033ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027a2(local_28);
    FUN_001033ac(param_1,uVar1);
    lVar2 = FUN_001028da(local_28);
    FUN_001021a0(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102396(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102918(param_1);
  FUN_0010292a(uVar1,1);
  return;
}




void FUN_00101bc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233c(param_2);
  uVar1 = FUN_0010235a(uVar1);
  FUN_0010236c(param_1,uVar1);
  return;
}




void FUN_001027e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c8(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001038f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010385f(undefined8 param_1)

{
  FUN_00103105(param_1);
  return;
}




void FUN_001031fc(undefined8 param_1)

{
  FUN_001032a2(param_1);
  return;
}




void FUN_00103fd0(void)

{
  return;
}




void FUN_00103282(undefined8 param_1)

{
  FUN_0010339c(param_1);
  return;
}




void FUN_00104049(void)

{
  return;
}




void FUN_00103416(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103525(param_1,param_2);
  FUN_001035a0(param_1,param_2);
  FUN_00103132(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103f77(void)

{
  return 1;
}




void FUN_00103b7a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103105(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




long FUN_00102212(long param_1)

{
  return param_1 + 8;
}




void FUN_00103bfb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102c07(undefined8 param_1)

{
  return param_1;
}




void FUN_001017f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aaa(param_1,param_2);
  return;
}




undefined8 FUN_00103525(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010367a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103948(param_3);
  FUN_00103a52(param_1,param_2,uVar1);
  return;
}




void FUN_00102cd2(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d15(param_2);
  puVar2 = (undefined4 *)FUN_0010235a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103d34(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103841(undefined8 param_1)

{
  FUN_001030d8(param_1);
  return;
}




void FUN_00103b24(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102918(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010169b(0x30,param_2);
  uVar1 = FUN_00101c28(param_5);
  uVar2 = FUN_00101c16(param_4);
  uVar3 = FUN_00101c04(param_3);
  uVar4 = FUN_00101b58(param_2);
  uVar5 = FUN_00102918(param_1);
                    /* try { // try from 00102451 to 00102455 has its CatchHandler @ 00102458 */
  FUN_00102958(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 FUN_0010185e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b4a(param_1);
  return unaff_EBX;
}




undefined8 FUN_00103073(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103aa4("Calling good()...");
  FUN_00103063();
  FUN_00103aa4("Finished good()");
  FUN_00103aa4("Calling bad()...");
  FUN_00102d51();
  FUN_00103aa4("Finished bad()");
  return 0;
}




ulong FUN_00103e98(long param_1,ulong param_2,long param_3)

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




void FUN_00103132(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010315c(param_1);
  return;
}




void FUN_00102a90(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2c(param_1,param_2);
  return;
}




void FUN_00102d33(undefined8 param_1)

{
  FUN_0010233c(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




undefined8 FUN_00101c16(undefined8 param_1)

{
  return param_1;
}




void FUN_00104012(void)

{
  return;
}




void FUN_0010233c(undefined8 param_1)

{
  FUN_00102902(param_1);
  return;
}




void FUN_0010390e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103948(param_2);
  FUN_0010395a(uVar1,uVar2);
  return;
}




void FUN_00104270(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103afc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_00102506(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103ba5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103f86(void)

{
  return 0;
}




void FUN_0010272e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c8(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001018e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc4(param_1,param_2);
  return;
}




undefined8 FUN_00102c68(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104350(void)

{
  return;
}




undefined8 FUN_00103948(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035d2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102212(param_1);
  uVar2 = FUN_001036bc(param_2);
  uVar1 = FUN_001036d2(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102718(param_1);
  uVar2 = FUN_00103841(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102506(param_1);
  uVar2 = FUN_0010385f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001034b2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035b4(local_18,param_1);
  FUN_001035d2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fdb(void)

{
  return;
}




void FUN_00102c2c(void)

{
  return;
}




void FUN_001035a0(void)

{
  return;
}




void FUN_00103063(void)

{
  FUN_00102edc();
  return;
}




void FUN_00102b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c04(param_3);
  uVar1 = FUN_00101c16(param_4);
  FUN_001018e0(local_38,uVar1);
  FUN_00101c28(param_5);
  uVar1 = FUN_0010169b(0x10,param_2);
                    /* try { // try from 00102bc4 to 00102bc8 has its CatchHandler @ 00102bcb */
  FUN_00102c80(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010257a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021fc(param_1);
  local_50 = FUN_00102212(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102063(local_58);
    local_59 = FUN_001018a6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027a2(local_58);
    }
    else {
      local_58 = FUN_001028da(local_58);
    }
  }
  FUN_001021de(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029da(param_1);
    cVar1 = FUN_00101838(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a2a(local_38,&local_58,&local_50);
      goto LAB_001026fc;
    }
    FUN_00102776(&local_48);
  }
  uVar2 = FUN_0010251c(local_48);
  cVar1 = FUN_001018a6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e4(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a2a(local_38,&local_58,&local_50);
  }
LAB_001026fc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001032e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103416(param_1,param_2);
  lVar1 = FUN_00103486(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010349c(param_1);
                    /* try { // try from 0010333b to 0010333f has its CatchHandler @ 00103345 */
    uVar3 = FUN_001034b2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103a52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103948(param_3);
  puVar3 = (undefined8 *)FUN_0010169b(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103576(undefined8 param_1,undefined8 param_2)

{
  FUN_001036a8(param_1,param_2);
  return;
}




long FUN_001036d2(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010387e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038e2(param_2);
                    /* try { // try from 00103741 to 001037d3 has its CatchHandler @ 001037ff */
    uVar2 = FUN_001036d2(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038f8(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010387e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038e2(local_38);
      uVar2 = FUN_001036d2(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038f8(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016c4(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103aa4(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7a(param_2);
  FUN_0010236c(param_1,uVar1);
  return;
}




void FUN_001042ae(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103b50(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001036bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010292a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aec(param_1,param_2,0);
  return;
}




undefined8 FUN_0010190a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7a(param_2);
  FUN_00101b8c(param_1,uVar1);
  return param_1;
}




void FUN_00102aec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c68(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010321c(undefined8 param_1,undefined8 param_2)

{
  FUN_001032e0(param_1,param_2);
  return;
}




void FUN_0010428f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101afa(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021de(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



