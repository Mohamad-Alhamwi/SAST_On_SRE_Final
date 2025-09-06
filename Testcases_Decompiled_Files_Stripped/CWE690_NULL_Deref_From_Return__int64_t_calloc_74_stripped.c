
void FUN_001024aa(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102938(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f59(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104230(void)

{
  return;
}




void FUN_001027cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ac8(param_2);
  uVar2 = FUN_00102888(param_1);
  FUN_00102a00(uVar2,uVar1);
  return;
}




void FUN_001031c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032fa(param_1,param_2);
  lVar1 = FUN_0010336a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103380(param_1);
                    /* try { // try from 0010321f to 00103223 has its CatchHandler @ 00103229 */
    uVar3 = FUN_00103396(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




ulong FUN_00103d7c(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010294a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102182(param_1);
  uVar2 = FUN_0010216c(param_1);
  FUN_00102198(param_1,uVar2,uVar1,param_2);
  return;
}




long FUN_00102182(long param_1)

{
  return param_1 + 8;
}




void FUN_00103ed5(void)

{
  return;
}




void FUN_00101afc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aea(param_2);
  FUN_00102274(param_1,uVar1);
  return;
}




void FUN_00102f47(void)

{
  FUN_00102e04();
  return;
}




void FUN_0010214e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102110(undefined8 param_1,undefined8 param_2)

{
  FUN_001027cc(param_1,param_2);
  FUN_00102810(param_1,param_2);
  return;
}




void FUN_00103ef6(void)

{
  return;
}




void FUN_00103ea9(void)

{
  return;
}




void FUN_00103eeb(void)

{
  return;
}




void FUN_00103f2d(void)

{
  return;
}




void FUN_0010388a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010160a(0x30,param_2);
  uVar1 = FUN_0010382c(param_3);
  uVar2 = FUN_00101ac8(param_2);
  uVar3 = FUN_00102888(param_1);
  FUN_001038f8(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101baa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102306(param_1);
  uVar2 = FUN_00101b98(param_4);
  uVar3 = FUN_00101b86(param_3);
  uVar4 = FUN_00101b74(param_2);
  FUN_00102332(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_001035a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103f90(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f59,local_18);
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




void FUN_00102256(undefined8 param_1)

{
  FUN_00102860(param_1);
  return;
}




void FUN_00103e93(void)

{
  return;
}




undefined8 FUN_00102872(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ee0(void)

{
  return;
}




void FUN_00102a5c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bd8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined4 FUN_00101816(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102810(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102888(param_1);
  FUN_00102a2a(uVar1,param_2,1);
  return;
}




void FUN_0010178a(undefined8 param_1)

{
  FUN_00101a6a(param_1);
  return;
}




void FUN_00103adf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101620(void)

{
  return;
}




void FUN_00102c42(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c85(param_2);
  puVar2 = (undefined4 *)FUN_001022ca(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001038f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010382c(param_3);
  FUN_00103936(param_1,param_2,uVar1);
  return;
}




void FUN_00101fd3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102794(param_1);
  FUN_001027b6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030a0(undefined8 param_1)

{
  FUN_0010312a(param_1);
  return;
}




void FUN_00103be5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103270(void)

{
  return;
}




bool FUN_0010405d(pthread_t *param_1)

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




void FUN_00102b9c(void)

{
  return;
}




void FUN_00103b8c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010299a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b77(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102938(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001022dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aea(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104154(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 * FUN_00102728(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103280(void)

{
  return;
}




void FUN_00102754(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102938(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00102fe9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102860(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001040db(undefined8 *param_1)

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




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102410(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102182(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010248c(local_50);
    cVar2 = FUN_00101816(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010248c(local_50);
      cVar2 = FUN_00101816(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102754(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102476(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102476(local_60);
          local_48[1] = 0;
          FUN_001024aa(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102728(local_48);
          uVar6 = FUN_0010248c(*puVar5);
          cVar2 = FUN_00101816(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024ea(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102712(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024aa(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010269e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102688(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102688(local_60);
        uVar6 = FUN_00102688(local_60);
        FUN_0010269e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026e6(local_48);
        uVar6 = FUN_0010248c(*puVar5);
        cVar2 = FUN_00101816(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024ea(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102712(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024aa(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010269e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fb8;
  }
  lVar3 = FUN_00102460(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101ccc:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102476(local_60);
    uVar6 = FUN_0010248c(*puVar5);
    cVar2 = FUN_00101816(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101ccc;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102476(local_60);
    local_48[1] = 0;
    FUN_001024aa(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024ea(local_60,param_3);
  }
LAB_00101fb8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8
FUN_00102026(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102182(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010248c(param_3);
      uVar5 = FUN_00101fd3(param_4);
      cVar1 = FUN_00101816(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020aa;
      }
    }
  }
  bVar2 = true;
LAB_001020aa:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010214e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_00102476(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001037c6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101760(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a1a(param_1,param_2);
  return;
}




undefined8 FUN_001024ea(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010216c(param_1);
  local_50 = FUN_00102182(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fd3(local_58);
    local_59 = FUN_00101816(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102712(local_58);
    }
    else {
      local_58 = FUN_0010284a(local_58);
    }
  }
  FUN_0010214e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010294a(param_1);
    cVar1 = FUN_001017a8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010299a(local_38,&local_58,&local_50);
      goto LAB_0010266c;
    }
    FUN_001026e6(&local_48);
  }
  uVar2 = FUN_0010248c(local_48);
  cVar1 = FUN_00101816(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102754(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010299a(local_38,&local_58,&local_50);
  }
LAB_0010266c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e04(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030c0(local_88);
  pvVar1 = calloc(1,8);
  local_58[0] = 0;
                    /* try { // try from 00102e65 to 00102ece has its CatchHandler @ 00102f1a */
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103100(local_58,local_88);
                    /* try { // try from 00102ed6 to 00102eda has its CatchHandler @ 00102f05 */
  FUN_00101586(local_58);
  FUN_001030e0(local_58);
  FUN_001030e0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ac8(long param_1)

{
  FUN_00102256(param_1 + 0x20);
  return;
}




void FUN_0010358c(void)

{
  return;
}




void FUN_00103f4e(void)

{
  return;
}




void FUN_00103eb4(void)

{
  return;
}




undefined8 FUN_001040b8(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101aea(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010183d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103409(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010355e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101b34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022ac(param_2);
  uVar1 = FUN_001022ca(uVar1);
  FUN_001022dc(param_1,uVar1);
  return;
}




void FUN_00103166(undefined8 param_1)

{
  FUN_00103280(param_1);
  return;
}




undefined8 FUN_00102938(undefined8 param_1)

{
  return param_1;
}




void FUN_001029e2(undefined8 param_1)

{
  FUN_00102b8a(param_1);
  return;
}




void FUN_00103bb7(undefined8 param_1)

{
  printf("%g\n",param_1);
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




void FUN_00102306(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102888(param_1);
  FUN_0010289a(uVar1,1);
  return;
}




void FUN_00103396(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103498(local_18,param_1);
  FUN_001034b6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c18(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_00101634(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101760(param_1,param_2);
  local_28 = FUN_0010178a(param_1);
  cVar2 = FUN_001017a8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017ce(param_1);
    uVar3 = FUN_001017f4(&local_38);
    cVar2 = FUN_00101816(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016d4;
    }
  }
  bVar1 = true;
LAB_001016d4:
  if (bVar1) {
    uVar3 = FUN_0010183d(param_2);
    FUN_0010187a(local_30,uVar3);
    FUN_001018b2(&local_28,&local_38);
    local_38 = FUN_001018d4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001017f4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_0010284a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f22(void)

{
  return;
}




void FUN_00103b64(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101a6a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001037dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001030c0(undefined8 param_1)

{
  FUN_001030a0(param_1);
  return;
}




void FUN_001039e0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010216c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101850(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b34(param_1,param_2);
  return;
}




void FUN_00103290(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102712(local_28);
    FUN_00103290(param_1,uVar1);
    lVar2 = FUN_0010284a(local_28);
    FUN_00102110(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aea(param_2);
  FUN_001022dc(param_1,uVar1);
  return;
}




void FUN_00103f43(void)

{
  return;
}




undefined8 FUN_00102888(undefined8 param_1)

{
  return param_1;
}




void FUN_0010269e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102938(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102938(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103080(undefined8 param_1)

{
  FUN_00103166(param_1);
  return;
}




void FUN_00103e9e(void)

{
  return;
}




undefined8 FUN_00102bd8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103f0c(void)

{
  return;
}




undefined8 FUN_00101b86(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001018d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101b98(param_5);
  uVar2 = FUN_00101b86(param_4);
  uVar3 = FUN_00101b74(param_3);
  local_40 = FUN_00101baa(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101950 to 00101993 has its CatchHandler @ 001019d1 */
  uVar1 = FUN_00101fd3(local_40);
  local_38 = FUN_00101c2a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102110(param_1,local_40);
    FUN_0010214e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102026(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001030e0(undefined8 param_1)

{
  FUN_00103186(param_1);
  return;
}




undefined8 FUN_00102712(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001039ae(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103f17(void)

{
  return;
}




long FUN_00103380(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102ca3(undefined8 param_1)

{
  FUN_001022ac(param_1);
  return;
}




undefined8 FUN_001034b6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102182(param_1);
  uVar2 = FUN_001035a0(param_2);
  uVar1 = FUN_001035b6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102688(param_1);
  uVar2 = FUN_00103725(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102476(param_1);
  uVar2 = FUN_00103743(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102a00(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b9c(param_1,param_2);
  return;
}




void FUN_001032fa(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103409(param_1,param_2);
  FUN_00103484(param_1,param_2);
  FUN_00103016(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102332(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010160a(0x30,param_2);
  uVar1 = FUN_00101b98(param_5);
  uVar2 = FUN_00101b86(param_4);
  uVar3 = FUN_00101b74(param_3);
  uVar4 = FUN_00101ac8(param_2);
  uVar5 = FUN_00102888(param_1);
                    /* try { // try from 001023c1 to 001023c5 has its CatchHandler @ 001023c8 */
  FUN_001028c8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001017a8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101b74(undefined8 param_1)

{
  return param_1;
}




void FUN_00102794(long param_1)

{
  FUN_001029e2(param_1 + 0x20);
  return;
}




void FUN_001037f2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010382c(param_2);
  FUN_0010383e(uVar1,uVar2);
  return;
}




undefined4 * FUN_00103762(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102794(param_2);
  puVar2 = (undefined4 *)FUN_001037f2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103100(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c4(param_1,param_2);
  return;
}




void FUN_00103ebf(void)

{
  return;
}




void FUN_00103186(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010216c(param_1);
  FUN_00103290(param_1,uVar1);
  FUN_00103080(param_1);
  return;
}




void FUN_00103f38(void)

{
  return;
}




undefined8 FUN_0010336a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103e6a(void)

{
  return 0;
}




void FUN_00103a89(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103016(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103040(param_1);
  return;
}




undefined8 FUN_00102198(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fd3(local_38);
    cVar1 = FUN_00101816(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102712(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010284a(local_38);
    }
  }
  FUN_0010214e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103b0a(undefined4 param_1)

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




undefined8 FUN_0010160a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102b8a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010345a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010358c(param_1,param_2);
  return;
}




void FUN_00103936(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010382c(param_3);
  puVar3 = (undefined8 *)FUN_0010160a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102c85(undefined8 param_1)

{
  FUN_00102ca3(param_1);
  return;
}




undefined4 FUN_001017ce(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101aba(param_1);
  return unaff_EBX;
}




ulong FUN_00103c78(long param_1,ulong param_2,long param_3)

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




void FUN_00103743(undefined8 param_1)

{
  FUN_00102fe9(param_1);
  return;
}




void FUN_00103a34(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010289a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a5c(param_1,param_2,0);
  return;
}




undefined8 FUN_00102410(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102fbc(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00103e5b(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103040(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102a2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bb0(param_1,param_2,param_3);
  return;
}




void FUN_00102cc1(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030c0(local_88);
  pvVar1 = calloc(1,8);
  local_58[0] = 0;
                    /* try { // try from 00102d22 to 00102d8b has its CatchHandler @ 00102dd7 */
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101634(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103100(local_58,local_88);
                    /* try { // try from 00102d93 to 00102d97 has its CatchHandler @ 00102dc2 */
  FUN_00101509(local_58);
  FUN_001030e0(local_58);
  FUN_001030e0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017f4(undefined8 *param_1)

{
  FUN_00101ac8(*param_1);
  return;
}




undefined8 FUN_00101b98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f01(void)

{
  return;
}




void FUN_00101586(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101634(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 5;
    FUN_00103a89(*local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001022ca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010382c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104173(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a08(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010248c(undefined8 param_1)

{
  FUN_00101fd3(param_1);
  return;
}




void FUN_00103ab4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




int FUN_00103e79(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 * FUN_001026e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010187a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aea(param_2);
  FUN_00101afc(param_1,uVar1);
  return param_1;
}




void FUN_00102bf0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c42(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




undefined8 FUN_0010383e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102306(param_1);
  uVar2 = FUN_0010382c(param_2);
  FUN_0010388a(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010355e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010345a(param_1,param_2);
  return param_1;
}




void FUN_001033fa(void)

{
  return;
}




void FUN_00103eca(void)

{
  return;
}




void FUN_00102bb0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103498(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102f57(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103988("Calling good()...");
  FUN_00102f47();
  FUN_00103988("Finished good()");
  FUN_00103988("Calling bad()...");
  FUN_00102cc1();
  FUN_00103988("Finished bad()");
  return 0;
}




undefined8 FUN_00102b77(undefined8 param_1)

{
  return param_1;
}




long FUN_00102688(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103250(undefined8 param_1)

{
  FUN_001033fa(param_1);
  return;
}




void FUN_00103988(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103484(void)

{
  return;
}




void FUN_00103725(undefined8 param_1)

{
  FUN_00102fbc(param_1);
  return;
}




void FUN_001022ac(undefined8 param_1)

{
  FUN_00102872(param_1);
  return;
}




void FUN_001041c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a5e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_001035b6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103762(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037c6(param_2);
                    /* try { // try from 00103625 to 001036b7 has its CatchHandler @ 001036e3 */
    uVar2 = FUN_001035b6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037dc(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103762(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037c6(local_38);
      uVar2 = FUN_001035b6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037dc(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001028c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101b98(param_5);
  uVar2 = FUN_00101b86(param_4);
  uVar3 = FUN_00101b74(param_3);
  FUN_00102aac(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001018b2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b74(param_3);
  uVar1 = FUN_00101b86(param_4);
  FUN_00101850(local_38,uVar1);
  FUN_00101b98(param_5);
  uVar1 = FUN_0010160a(0x10,param_2);
                    /* try { // try from 00102b34 to 00102b38 has its CatchHandler @ 00102b3b */
  FUN_00102bf0(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101509(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101634(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  *local_18 = 5;
  FUN_00103a89(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010312a(long param_1)

{
  FUN_00103250(param_1);
  FUN_00103270(param_1);
  FUN_00103016(param_1 + 8);
  return;
}




void FUN_00104192(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101aba(void)

{
  return;
}



