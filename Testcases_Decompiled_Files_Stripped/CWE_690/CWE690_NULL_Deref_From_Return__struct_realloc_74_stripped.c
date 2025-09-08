
void FUN_001024b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102946(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f71(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104250(void)

{
  return;
}




void FUN_001027da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ad6(param_2);
  uVar2 = FUN_00102896(param_1);
  FUN_00102a0e(uVar2,uVar1);
  return;
}




void FUN_001031dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103312(param_1,param_2);
  lVar1 = FUN_00103382(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103398(param_1);
                    /* try { // try from 00103237 to 0010323b has its CatchHandler @ 00103241 */
    uVar3 = FUN_001033ae(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




ulong FUN_00103d94(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102958(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010215c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027c4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102190(param_1);
  uVar2 = FUN_0010217a(param_1);
  FUN_001021a6(param_1,uVar2,uVar1,param_2);
  return;
}




long FUN_00102190(long param_1)

{
  return param_1 + 8;
}




void FUN_00103eed(void)

{
  return;
}




void FUN_00101b0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101af8(param_2);
  FUN_00102282(param_1,uVar1);
  return;
}




void FUN_00102f5f(void)

{
  FUN_00102e17();
  return;
}




void FUN_0010215c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010211e(undefined8 param_1,undefined8 param_2)

{
  FUN_001027da(param_1,param_2);
  FUN_0010281e(param_1,param_2);
  return;
}




void FUN_00103f0e(void)

{
  return;
}




void FUN_00103ec1(void)

{
  return;
}




void FUN_00103f03(void)

{
  return;
}




void FUN_00103f45(void)

{
  return;
}




void FUN_001038a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101618(0x30,param_2);
  uVar1 = FUN_00103844(param_3);
  uVar2 = FUN_00101ad6(param_2);
  uVar3 = FUN_00102896(param_1);
  FUN_00103910(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102314(param_1);
  uVar2 = FUN_00101ba6(param_4);
  uVar3 = FUN_00101b94(param_3);
  uVar4 = FUN_00101b82(param_2);
  FUN_00102340(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_001035b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103fa8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f71,local_18);
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




void FUN_00102264(undefined8 param_1)

{
  FUN_0010286e(param_1);
  return;
}




void FUN_00103eab(void)

{
  return;
}




undefined8 FUN_00102880(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ef8(void)

{
  return;
}




void FUN_00102a6a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102be6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined4 FUN_00101824(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010281e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102896(param_1);
  FUN_00102a38(uVar1,param_2,1);
  return;
}




void FUN_00101798(undefined8 param_1)

{
  FUN_00101a78(param_1);
  return;
}




void FUN_00103af7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010162e(void)

{
  return;
}




void FUN_00102c50(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c93(param_2);
  puVar2 = (undefined4 *)FUN_001022d8(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103844(param_3);
  FUN_0010394e(param_1,param_2,uVar1);
  return;
}




void FUN_00101fe1(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027a2(param_1);
  FUN_001027c4(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030b8(undefined8 param_1)

{
  FUN_00103142(param_1);
  return;
}




void FUN_00103bfd(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103288(void)

{
  return;
}




bool FUN_00104075(pthread_t *param_1)

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




void FUN_00102baa(void)

{
  return;
}




void FUN_00103ba4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001029a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b85(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102946(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001022ea(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101af8(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010416c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 * FUN_00102736(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103298(void)

{
  return;
}




void FUN_00102762(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102946(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00103001(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_0010286e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001040f3(undefined8 *param_1)

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

long FUN_00101c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010241e(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102190(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010249a(local_50);
    cVar2 = FUN_00101824(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010249a(local_50);
      cVar2 = FUN_00101824(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102762(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102484(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102484(local_60);
          local_48[1] = 0;
          FUN_001024b8(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102736(local_48);
          uVar6 = FUN_0010249a(*puVar5);
          cVar2 = FUN_00101824(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024f8(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102720(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024b8(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026ac(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102696(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102696(local_60);
        uVar6 = FUN_00102696(local_60);
        FUN_001026ac(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026f4(local_48);
        uVar6 = FUN_0010249a(*puVar5);
        cVar2 = FUN_00101824(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024f8(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102720(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024b8(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026ac(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fc6;
  }
  lVar3 = FUN_0010246e(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cda:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102484(local_60);
    uVar6 = FUN_0010249a(*puVar5);
    cVar2 = FUN_00101824(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cda;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102484(local_60);
    local_48[1] = 0;
    FUN_001024b8(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024f8(local_60,param_3);
  }
LAB_00101fc6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8
FUN_00102034(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102190(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010249a(param_3);
      uVar5 = FUN_00101fe1(param_4);
      cVar1 = FUN_00101824(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020b8;
      }
    }
  }
  bVar2 = true;
LAB_001020b8:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010215c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_00102484(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001037de(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010176e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a28(param_1,param_2);
  return;
}




undefined8 FUN_001024f8(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010217a(param_1);
  local_50 = FUN_00102190(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fe1(local_58);
    local_59 = FUN_00101824(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102720(local_58);
    }
    else {
      local_58 = FUN_00102858(local_58);
    }
  }
  FUN_0010215c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102958(param_1);
    cVar1 = FUN_001017b6(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029a8(local_38,&local_58,&local_50);
      goto LAB_0010267a;
    }
    FUN_001026f4(&local_48);
  }
  uVar2 = FUN_0010249a(local_48);
  cVar1 = FUN_00101824(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102762(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029a8(local_38,&local_58,&local_50);
  }
LAB_0010267a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e17(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d8(local_88);
  pvVar1 = realloc((void *)0x0,8);
  local_58[0] = 0;
                    /* try { // try from 00102e7d to 00102ee6 has its CatchHandler @ 00102f32 */
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103118(local_58,local_88);
                    /* try { // try from 00102eee to 00102ef2 has its CatchHandler @ 00102f1d */
  FUN_0010158d(local_58);
  FUN_001030f8(local_58);
  FUN_001030f8(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ad6(long param_1)

{
  FUN_00102264(param_1 + 0x20);
  return;
}




void FUN_001035a4(void)

{
  return;
}




void FUN_00103f66(void)

{
  return;
}




void FUN_00103ecc(void)

{
  return;
}




undefined8 FUN_001040d0(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101af8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010184b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103421(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103576(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101b42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022ba(param_2);
  uVar1 = FUN_001022d8(uVar1);
  FUN_001022ea(param_1,uVar1);
  return;
}




void FUN_0010317e(undefined8 param_1)

{
  FUN_00103298(param_1);
  return;
}




undefined8 FUN_00102946(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f0(undefined8 param_1)

{
  FUN_00102b98(param_1);
  return;
}




void FUN_00103bcf(undefined8 param_1)

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




void FUN_00102314(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102896(param_1);
  FUN_001028a8(uVar1,1);
  return;
}




void FUN_001033ae(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034b0(local_18,param_1);
  FUN_001034ce(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c30(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_00101642(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010176e(param_1,param_2);
  local_28 = FUN_00101798(param_1);
  cVar2 = FUN_001017b6(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017dc(param_1);
    uVar3 = FUN_00101802(&local_38);
    cVar2 = FUN_00101824(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016e2;
    }
  }
  bVar1 = true;
LAB_001016e2:
  if (bVar1) {
    uVar3 = FUN_0010184b(param_2);
    FUN_00101888(local_30,uVar3);
    FUN_001018c0(&local_28,&local_38);
    local_38 = FUN_001018e2(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101802(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00102858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f3a(void)

{
  return;
}




void FUN_00103b7c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101a78(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010215c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001037f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001030d8(undefined8 param_1)

{
  FUN_001030b8(param_1);
  return;
}




void FUN_001039f8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010217a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010185e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b42(param_1,param_2);
  return;
}




void FUN_001032a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102720(local_28);
    FUN_001032a8(param_1,uVar1);
    lVar2 = FUN_00102858(local_28);
    FUN_0010211e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102282(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101af8(param_2);
  FUN_001022ea(param_1,uVar1);
  return;
}




void FUN_00103f5b(void)

{
  return;
}




undefined8 FUN_00102896(undefined8 param_1)

{
  return param_1;
}




void FUN_001026ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102946(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102946(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010246e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103098(undefined8 param_1)

{
  FUN_0010317e(param_1);
  return;
}




void FUN_00103eb6(void)

{
  return;
}




undefined8 FUN_00102be6(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103f24(void)

{
  return;
}




undefined8 FUN_00101b94(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_001018e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101ba6(param_5);
  uVar2 = FUN_00101b94(param_4);
  uVar3 = FUN_00101b82(param_3);
  local_40 = FUN_00101bb8(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010195e to 001019a1 has its CatchHandler @ 001019df */
  uVar1 = FUN_00101fe1(local_40);
  local_38 = FUN_00101c38(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010211e(param_1,local_40);
    FUN_0010215c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102034(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001030f8(undefined8 param_1)

{
  FUN_0010319e(param_1);
  return;
}




undefined8 FUN_00102720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001039c6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103f2f(void)

{
  return;
}




long FUN_00103398(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102cb1(undefined8 param_1)

{
  FUN_001022ba(param_1);
  return;
}




undefined8 FUN_001034ce(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102190(param_1);
  uVar2 = FUN_001035b8(param_2);
  uVar1 = FUN_001035ce(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102696(param_1);
  uVar2 = FUN_0010373d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102484(param_1);
  uVar2 = FUN_0010375b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102a0e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102baa(param_1,param_2);
  return;
}




void FUN_00103312(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103421(param_1,param_2);
  FUN_0010349c(param_1,param_2);
  FUN_0010302e(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101618(0x30,param_2);
  uVar1 = FUN_00101ba6(param_5);
  uVar2 = FUN_00101b94(param_4);
  uVar3 = FUN_00101b82(param_3);
  uVar4 = FUN_00101ad6(param_2);
  uVar5 = FUN_00102896(param_1);
                    /* try { // try from 001023cf to 001023d3 has its CatchHandler @ 001023d6 */
  FUN_001028d6(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001017b6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101b82(undefined8 param_1)

{
  return param_1;
}




void FUN_001027a2(long param_1)

{
  FUN_001029f0(param_1 + 0x20);
  return;
}




void FUN_0010380a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103844(param_2);
  FUN_00103856(uVar1,uVar2);
  return;
}




undefined4 * FUN_0010377a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027a2(param_2);
  puVar2 = (undefined4 *)FUN_0010380a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103118(undefined8 param_1,undefined8 param_2)

{
  FUN_001031dc(param_1,param_2);
  return;
}




void FUN_00103ed7(void)

{
  return;
}




void FUN_0010319e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010217a(param_1);
  FUN_001032a8(param_1,uVar1);
  FUN_00103098(param_1);
  return;
}




void FUN_00103f50(void)

{
  return;
}




undefined8 FUN_00103382(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103e82(void)

{
  return 0;
}




void FUN_00103aa1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010302e(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103058(param_1);
  return;
}




undefined8 FUN_001021a6(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fe1(local_38);
    cVar1 = FUN_00101824(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102720(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102858(local_38);
    }
  }
  FUN_0010215c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103b22(undefined4 param_1)

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




undefined8 FUN_00101618(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102b98(undefined8 param_1)

{
  return param_1;
}




void FUN_00103472(undefined8 param_1,undefined8 param_2)

{
  FUN_001035a4(param_1,param_2);
  return;
}




void FUN_0010394e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103844(param_3);
  puVar3 = (undefined8 *)FUN_00101618(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102c93(undefined8 param_1)

{
  FUN_00102cb1(param_1);
  return;
}




undefined4 FUN_001017dc(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ac8(param_1);
  return unaff_EBX;
}




ulong FUN_00103c90(long param_1,ulong param_2,long param_3)

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




void FUN_0010375b(undefined8 param_1)

{
  FUN_00103001(param_1);
  return;
}




void FUN_00103a4c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001028a8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a6a(param_1,param_2,0);
  return;
}




undefined8 FUN_0010241e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010215c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102fd4(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00103e73(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103058(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bbe(param_1,param_2,param_3);
  return;
}




void FUN_00102ccf(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d8(local_88);
  pvVar1 = realloc((void *)0x0,8);
  local_58[0] = 0;
                    /* try { // try from 00102d35 to 00102d9e has its CatchHandler @ 00102dea */
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101642(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103118(local_58,local_88);
                    /* try { // try from 00102da6 to 00102daa has its CatchHandler @ 00102dd5 */
  FUN_00101509(local_58);
  FUN_001030f8(local_58);
  FUN_001030f8(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101802(undefined8 *param_1)

{
  FUN_00101ad6(*param_1);
  return;
}




undefined8 FUN_00101ba6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f19(void)

{
  return;
}




void FUN_0010158d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101642(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = 1;
    local_18[1] = 1;
    FUN_00103bfd(local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001022d8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103844(undefined8 param_1)

{
  return param_1;
}




void FUN_0010418b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a20(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010249a(undefined8 param_1)

{
  FUN_00101fe1(param_1);
  return;
}




void FUN_00103acc(undefined8 param_1)

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




int FUN_00103e91(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 * FUN_001026f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101888(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101af8(param_2);
  FUN_00101b0a(param_1,uVar1);
  return param_1;
}




void FUN_00102bfe(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c50(param_1,param_2,&local_29);
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




undefined8 FUN_00103856(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102314(param_1);
  uVar2 = FUN_00103844(param_2);
  FUN_001038a2(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00103576(undefined8 param_1,undefined8 param_2)

{
  FUN_00103472(param_1,param_2);
  return param_1;
}




void FUN_00103412(void)

{
  return;
}




void FUN_00103ee2(void)

{
  return;
}




void FUN_00102bbe(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001034b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102f6f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039a0("Calling good()...");
  FUN_00102f5f();
  FUN_001039a0("Finished good()");
  FUN_001039a0("Calling bad()...");
  FUN_00102ccf();
  FUN_001039a0("Finished bad()");
  return 0;
}




undefined8 FUN_00102b85(undefined8 param_1)

{
  return param_1;
}




long FUN_00102696(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103268(undefined8 param_1)

{
  FUN_00103412(param_1);
  return;
}




void FUN_001039a0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010349c(void)

{
  return;
}




void FUN_0010373d(undefined8 param_1)

{
  FUN_00102fd4(param_1);
  return;
}




void FUN_001022ba(undefined8 param_1)

{
  FUN_00102880(param_1);
  return;
}




void FUN_001041e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a76(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_001035ce(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010377a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037de(param_2);
                    /* try { // try from 0010363d to 001036cf has its CatchHandler @ 001036fb */
    uVar2 = FUN_001035ce(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037f4(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010377a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037de(local_38);
      uVar2 = FUN_001035ce(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037f4(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001028d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101ba6(param_5);
  uVar2 = FUN_00101b94(param_4);
  uVar3 = FUN_00101b82(param_3);
  FUN_00102aba(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001018c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102aba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b82(param_3);
  uVar1 = FUN_00101b94(param_4);
  FUN_0010185e(local_38,uVar1);
  FUN_00101ba6(param_5);
  uVar1 = FUN_00101618(0x10,param_2);
                    /* try { // try from 00102b42 to 00102b46 has its CatchHandler @ 00102b49 */
  FUN_00102bfe(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
  puVar1 = (undefined8 *)FUN_00101642(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  *local_18 = 1;
  local_18[1] = 1;
  FUN_00103bfd(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103142(long param_1)

{
  FUN_00103268(param_1);
  FUN_00103288(param_1);
  FUN_0010302e(param_1 + 8);
  return;
}




void FUN_001041aa(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ac8(void)

{
  return;
}



