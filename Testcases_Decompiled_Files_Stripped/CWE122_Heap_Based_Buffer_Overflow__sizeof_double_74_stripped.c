
undefined8 FUN_00101dcf(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ee0(void)

{
  return;
}




void FUN_00103f43(void)

{
  return;
}




undefined8 FUN_001020bb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102f28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103377(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103377(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001039da(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b36(param_2);
  uVar1 = FUN_00102b54(uVar1);
  FUN_00102b66(param_1,uVar1);
  return;
}




void FUN_001020ac(void)

{
  return;
}




void FUN_0010166e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101976(local_88);
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = DAT_00105050;
  local_58[0] = 0;
                    /* try { // try from 001016f1 to 0010175a has its CatchHandler @ 001017a6 */
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019b6(local_58,local_88);
                    /* try { // try from 00101762 to 00101766 has its CatchHandler @ 00101791 */
  FUN_00103940(local_58);
  FUN_00101996(local_58);
  FUN_00101996(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101a7a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101cf2(param_1,param_2);
  local_28 = FUN_00101d1c(param_1);
  cVar2 = FUN_00101d3a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d60(param_1);
    uVar3 = FUN_00101d86(&local_38);
    cVar2 = FUN_00101da8(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b1a;
    }
  }
  bVar1 = true;
LAB_00101b1a:
  if (bVar1) {
    uVar3 = FUN_00101dcf(param_2);
    FUN_00101e0c(local_30,uVar3);
    FUN_00101e44(&local_28,&local_38);
    local_38 = FUN_00101e66(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101d86(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103bb8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




bool FUN_00104089(pthread_t *param_1)

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




void FUN_0010419f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00101871(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102ae0(undefined8 param_1)

{
  FUN_001032b2(param_1);
  return;
}




void FUN_00101a1c(undefined8 param_1)

{
  FUN_00101c62(param_1);
  return;
}




void FUN_001019e0(long param_1)

{
  FUN_00101c32(param_1);
  FUN_00101c52(param_1);
  FUN_001018cc(param_1 + 8);
  return;
}




void FUN_00103c44(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103ae0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103c11(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103ea5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001040e4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001034e4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001041be(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101956(undefined8 param_1)

{
  FUN_001019e0(param_1);
  return;
}




void FUN_001032d9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010350c(param_1,param_2,0);
  return;
}




void FUN_00103eeb(void)

{
  return;
}




void FUN_00101c32(undefined8 param_1)

{
  FUN_001020ac(param_1);
  return;
}




void FUN_00104180(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103f64(void)

{
  return;
}




void FUN_00103a8a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102176(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010281c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103be3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102336(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102c9a(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a0c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d16(local_50);
    cVar2 = FUN_00101da8(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d16(local_50);
      cVar2 = FUN_00101da8(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fc8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d00(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d00(local_60);
          local_48[1] = 0;
          FUN_00102d34(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102f9c(local_48);
          uVar6 = FUN_00102d16(*puVar5);
          cVar2 = FUN_00101da8(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d74(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020bb(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d34(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f28(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f12(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f12(local_60);
        uVar6 = FUN_00102f12(local_60);
        FUN_00102f28(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f70(local_48);
        uVar6 = FUN_00102d16(*puVar5);
        cVar2 = FUN_00101da8(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d74(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020bb(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d34(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f28(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026c4;
  }
  lVar3 = FUN_00102cea(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023d8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d00(local_60);
    uVar6 = FUN_00102d16(*puVar5);
    cVar2 = FUN_00101da8(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023d8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d00(local_60);
    local_48[1] = 0;
    FUN_00102d34(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d74(local_60,param_3);
  }
LAB_001026c4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




undefined8 FUN_001020d1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103792(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101848(0x30,param_2);
  uVar1 = FUN_001036ef(param_3);
  uVar2 = FUN_001021d4(param_2);
  uVar3 = FUN_00103244(param_1);
  FUN_0010381e(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001028e6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a0c(param_1);
  uVar2 = FUN_00103082(param_2);
  uVar1 = FUN_00103098(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f12(param_1);
  uVar2 = FUN_00103207(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d00(param_1);
  uVar2 = FUN_00103225(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010350c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103686(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101a3c(param_1);
  return;
}




undefined8 FUN_00102c9a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010281c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038cc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101a7a(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  FUN_00103be3(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00102f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103ef6(void)

{
  return;
}




undefined8 FUN_0010283a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103040(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010385b(undefined8 param_1)

{
  FUN_00102b36(param_1);
  return;
}




undefined8 FUN_00102280(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f17(void)

{
  return;
}




undefined8 FUN_0010201c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102fc8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103377(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00102032(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102b54(undefined8 param_1)

{
  return param_1;
}




void FUN_00102126(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a0c(param_1);
  uVar2 = FUN_00101cdc(param_1);
  FUN_00102a22(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103f0c(void)

{
  return;
}




void FUN_00101976(undefined8 param_1)

{
  FUN_00101956(param_1);
  return;
}




void FUN_001019b6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ba6(param_1,param_2);
  return;
}




void FUN_00101d86(undefined8 *param_1)

{
  FUN_001021d4(*param_1);
  return;
}




void FUN_00103422(undefined8 param_1)

{
  FUN_0010363a(param_1);
  return;
}




void FUN_00101de2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102240(param_1,param_2);
  return;
}




undefined8 FUN_00102a22(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026df(local_38);
    cVar1 = FUN_00101da8(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020bb(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020d1(local_38);
    }
  }
  FUN_0010281c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101848(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001032c4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ed5(void)

{
  return;
}




void FUN_00103b0b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103f01(void)

{
  return;
}




void FUN_00104260(void)

{
  return;
}




void FUN_0010185e(void)

{
  return;
}




void FUN_00103207(undefined8 param_1)

{
  FUN_00101871(param_1);
  return;
}




long FUN_0010189e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102d74(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101cdc(param_1);
  local_50 = FUN_00102a0c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026df(local_58);
    local_59 = FUN_00101da8(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020bb(local_58);
    }
    else {
      local_58 = FUN_001020d1(local_58);
    }
  }
  FUN_0010281c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010338a(param_1);
    cVar1 = FUN_00101d3a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033da(local_38,&local_58,&local_50);
      goto LAB_00102ef6;
    }
    FUN_00102f70(&local_48);
  }
  uVar2 = FUN_00102d16(local_48);
  cVar1 = FUN_00101da8(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fc8(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033da(local_38,&local_58,&local_50);
  }
LAB_00102ef6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f6(param_2);
  FUN_00102afe(param_1,uVar1);
  return;
}




undefined8 FUN_00102292(undefined8 param_1)

{
  return param_1;
}




void FUN_0010387a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036ef(param_3);
  puVar3 = (undefined8 *)FUN_00101848(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00101cf2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102126(param_1,param_2);
  return;
}




undefined8 FUN_00103082(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103940(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101a7a(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  FUN_00103be3(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104107(undefined8 *param_1)

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




void FUN_00103f59(void)

{
  return;
}




void FUN_001020e8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010298e(param_1,param_2);
  FUN_001029d2(param_1,param_2);
  return;
}




undefined8 FUN_00103e96(void)

{
  return 0;
}




void FUN_0010381e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036ef(param_3);
  FUN_0010387a(param_1,param_2,uVar1);
  return;
}




void FUN_001017d3(void)

{
  FUN_0010166e();
  return;
}




undefined4 * FUN_00103440(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103008(param_2);
  puVar2 = (undefined4 *)FUN_0010364c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102cea(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010364c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036ef(param_2);
  FUN_00103702(uVar1,uVar2);
  return;
}




void FUN_00101a3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cdc(param_1);
  FUN_00101c72(param_1,uVar1);
  FUN_00101936(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103008(long param_1)

{
  FUN_00103422(param_1 + 0x20);
  return;
}




void FUN_00101c52(void)

{
  return;
}




void FUN_00103eca(void)

{
  return;
}




void FUN_001021c6(void)

{
  return;
}




void FUN_00101e44(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined4 FUN_00101d60(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021c6(param_1);
  return unaff_EBX;
}




void FUN_00102bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101848(0x30,param_2);
  uVar1 = FUN_001022a4(param_5);
  uVar2 = FUN_00102292(param_4);
  uVar3 = FUN_00102280(param_3);
  uVar4 = FUN_001021d4(param_2);
  uVar5 = FUN_00103244(param_1);
                    /* try { // try from 00102c4b to 00102c4f has its CatchHandler @ 00102c52 */
  FUN_00103307(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103ab5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001028b4(void)

{
  return;
}




ulong FUN_00103da8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018f6(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101509(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101976(local_88);
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = DAT_00105050;
  local_58[0] = 0;
                    /* try { // try from 0010158c to 001015f5 has its CatchHandler @ 00101641 */
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a7a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019b6(local_58,local_88);
                    /* try { // try from 001015fd to 00101601 has its CatchHandler @ 0010162c */
  FUN_001038cc(local_58);
  FUN_00101996(local_58);
  FUN_00101996(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102d00(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101fac(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010283a(param_1,param_2);
  FUN_001028b4(param_1,param_2);
  FUN_001018cc(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010363a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e87(void)

{
  return 1;
}




undefined8 FUN_00103fbc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f85,local_18);
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




void FUN_0010306e(void)

{
  return;
}




void FUN_001029d2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103244(param_1);
  FUN_00103280(uVar1,param_2,1);
  return;
}




void FUN_00103280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001022a4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010302a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d1c(undefined8 param_1)

{
  FUN_00102176(param_1);
  return;
}




void FUN_001018cc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018f6(param_1);
  return;
}




void FUN_00102048(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028c8(local_18,param_1);
  FUN_001028e6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001033da(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103627(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103377(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d16(undefined8 param_1)

{
  FUN_001026df(param_1);
  return;
}




void FUN_00103b36(undefined4 param_1)

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




long FUN_00102f12(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103ebf(void)

{
  return;
}




void FUN_00103f6f(void)

{
  return;
}




undefined8 FUN_00103040(undefined8 param_1,undefined8 param_2)

{
  FUN_0010288a(param_1,param_2);
  return param_1;
}




void FUN_00103a34(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103702(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b90(param_1);
  uVar2 = FUN_001036ef(param_2);
  FUN_00103792(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102b66(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f6(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101ba6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fac(param_1,param_2);
  lVar1 = FUN_0010201c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102032(param_1);
                    /* try { // try from 00101c01 to 00101c05 has its CatchHandler @ 00101c0b */
    uVar3 = FUN_00102048(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103800(undefined8 param_1)

{
  FUN_0010385b(param_1);
  return;
}




void FUN_0010281c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103225(undefined8 param_1)

{
  FUN_0010189e(param_1);
  return;
}




void FUN_0010355c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102280(param_3);
  uVar1 = FUN_00102292(param_4);
  FUN_00101de2(local_38,uVar1);
  FUN_001022a4(param_5);
  uVar1 = FUN_00101848(0x10,param_2);
                    /* try { // try from 001035e4 to 001035e8 has its CatchHandler @ 001035eb */
  FUN_0010369e(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010298e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021d4(param_2);
  uVar2 = FUN_00103244(param_1);
  FUN_00103256(uVar2,uVar1);
  return;
}




void FUN_001039b4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010338a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010281c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010369e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010374e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001021d4(long param_1)

{
  FUN_00102ae0(param_1 + 0x20);
  return;
}




undefined8 FUN_00101d3a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102b36(undefined8 param_1)

{
  FUN_001032c4(param_1);
  return;
}




void FUN_00103a0c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103244(param_1);
  FUN_001032d9(uVar1,1);
  return;
}




undefined8 FUN_001022b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b90(param_1);
  uVar2 = FUN_001022a4(param_4);
  uVar3 = FUN_00102292(param_3);
  uVar4 = FUN_00102280(param_2);
  FUN_00102bbc(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00102a0c(long param_1)

{
  return param_1 + 8;
}




ulong FUN_00103ca4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101936(undefined8 param_1)

{
  FUN_00101a1c(param_1);
  return;
}




void FUN_00101c72(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020bb(local_28);
    FUN_00101c72(param_1,uVar1);
    lVar2 = FUN_001020d1(local_28);
    FUN_001020e8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001034ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f22(void)

{
  return;
}




undefined8 FUN_00103686(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined4 FUN_00101da8(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103f85(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010374e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103800(param_2);
  puVar2 = (undefined4 *)FUN_00102b54(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103a60(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8
FUN_00101e66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022a4(param_5);
  uVar2 = FUN_00102292(param_4);
  uVar3 = FUN_00102280(param_3);
  local_40 = FUN_001022b6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ee2 to 00101f25 has its CatchHandler @ 00101f63 */
  uVar1 = FUN_001026df(local_40);
  local_38 = FUN_00102336(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020e8(param_1,local_40);
    FUN_0010281c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102732(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001028c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f4e(void)

{
  return;
}




void FUN_001034d0(void)

{
  return;
}




undefined8 FUN_001032b2(undefined8 param_1)

{
  return param_1;
}




long FUN_00103098(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103440(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034a4(param_2);
                    /* try { // try from 00103107 to 00103199 has its CatchHandler @ 001031c5 */
    uVar2 = FUN_00103098(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034ba(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103440(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034a4(local_38);
      uVar2 = FUN_00103098(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034ba(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103b90(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010288a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010306e(param_1,param_2);
  return;
}




void FUN_00103256(undefined8 param_1,undefined8 param_2)

{
  FUN_001034d0(param_1,param_2);
  return;
}




void FUN_00102afe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f6(param_2);
  FUN_00102b66(param_1,uVar1);
  return;
}




undefined8
FUN_00102732(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a0c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d16(param_3);
      uVar5 = FUN_001026df(param_4);
      cVar1 = FUN_00101da8(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027b6;
      }
    }
  }
  bVar2 = true;
LAB_001027b6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010281c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f6(param_2);
  FUN_00102208(param_1,uVar1);
  return param_1;
}




void FUN_00103f7a(void)

{
  return;
}




void FUN_001041f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 * FUN_00102f70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103627(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103244(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103377(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c62(void)

{
  return;
}




void FUN_00103f38(void)

{
  return;
}




undefined8 FUN_001036ef(undefined8 param_1)

{
  return param_1;
}




void FUN_00103307(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022a4(param_5);
  uVar2 = FUN_00102292(param_4);
  uVar3 = FUN_00102280(param_3);
  FUN_0010355c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001021f6(undefined8 param_1)

{
  return param_1;
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




void FUN_001026df(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103008(param_1);
  FUN_0010302a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d34(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103377(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f2d(void)

{
  return;
}




undefined8 FUN_001017e3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039b4("Calling good()...");
  FUN_001017d3();
  FUN_001039b4("Finished good()");
  FUN_001039b4("Calling bad()...");
  FUN_00101509();
  FUN_001039b4("Finished bad()");
  return 0;
}



