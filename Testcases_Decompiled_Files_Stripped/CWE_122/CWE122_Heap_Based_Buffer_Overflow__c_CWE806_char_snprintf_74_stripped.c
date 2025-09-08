
undefined8
FUN_0010212a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102286(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102590(param_3);
      uVar5 = FUN_001020d7(param_4);
      cVar1 = FUN_0010191a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021ae;
      }
    }
  }
  bVar2 = true;
LAB_001021ae:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102252(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103ff8(void)

{
  return;
}




void FUN_0010405b(void)

{
  return;
}




void FUN_001023e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bee(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102da7(undefined8 param_1)

{
  FUN_001023b0(param_1);
  return;
}




void FUN_00103a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103986(param_3);
  puVar3 = (undefined8 *)FUN_0010170f(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




long FUN_0010278c(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_001023ce(undefined8 param_1)

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




void FUN_00101b1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102286(param_1);
  uVar2 = FUN_00102270(param_1);
  FUN_0010229c(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103c64(undefined4 param_1)

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




void FUN_001040b3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00104235(undefined8 *param_1)

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




long FUN_00101738(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101864(param_1,param_2);
  local_28 = FUN_0010188e(param_1);
  cVar2 = FUN_001018ac(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018d2(param_1);
    uVar3 = FUN_001018f8(&local_38);
    cVar2 = FUN_0010191a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017d8;
    }
  }
  bVar1 = true;
LAB_001017d8:
  if (bVar1) {
    uVar3 = FUN_00101941(param_2);
    FUN_0010197e(local_30,uVar3);
    FUN_001019b6(&local_28,&local_38);
    local_38 = FUN_001019d8(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018f8(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102a9e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c7b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a3c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001019b6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010197e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bee(param_2);
  FUN_00101c00(param_1,uVar1);
  return param_1;
}




void FUN_00103d11(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103bb8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ce6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103fb5(void)

{
  return 1;
}




undefined8 FUN_001040ea(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040b3,local_18);
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




undefined8 FUN_00103563(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036b8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001042ae(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104390(void)

{
  return;
}




void FUN_001018f8(undefined8 *param_1)

{
  FUN_00101bcc(*param_1);
  return;
}




void FUN_0010331e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103454(param_1,param_2);
  lVar1 = FUN_001034c4(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034da(param_1);
                    /* try { // try from 00103379 to 0010337d has its CatchHandler @ 00103383 */
    uVar3 = FUN_001034f0(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104003(void)

{
  return;
}




void FUN_00101bbe(void)

{
  return;
}




undefined8 FUN_00104212(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010407c(void)

{
  return;
}




void FUN_00103b62(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103cbe(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102858(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a3c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010240a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010298c(param_1);
  FUN_0010299e(uVar1,1);
  return;
}




undefined4 * FUN_001038bc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102898(param_2);
  puVar2 = (undefined4 *)FUN_0010394c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_0010298c(undefined8 param_1)

{
  return param_1;
}




void FUN_001035b4(undefined8 param_1,undefined8 param_2)

{
  FUN_001036e6(param_1,param_2);
  return;
}




undefined8 FUN_00101941(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c8e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103998(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010240a(param_1);
  uVar2 = FUN_00103986(param_2);
  FUN_001039e4(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102f33(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010321a(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102fbf to 00103028 has its CatchHandler @ 00103074 */
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  FUN_0010325a(local_58,local_88);
                    /* try { // try from 00103030 to 00103034 has its CatchHandler @ 0010305f */
  FUN_0010163c(local_58);
  FUN_0010323a(local_58);
  FUN_0010323a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010400e(void)

{
  return;
}




void FUN_00102914(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010298c(param_1);
  FUN_00102b2e(uVar1,param_2,1);
  return;
}




void FUN_0010394c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103986(param_2);
  FUN_00103998(uVar1,uVar2);
  return;
}




void FUN_001027a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a3c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a3c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101c38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023b0(param_2);
  uVar1 = FUN_001023ce(uVar1);
  FUN_001023e0(param_1,uVar1);
  return;
}




void FUN_0010402f(void)

{
  return;
}




void FUN_0010235a(undefined8 param_1)

{
  FUN_00102964(param_1);
  return;
}




void FUN_001030a1(void)

{
  FUN_00102f33();
  return;
}




void FUN_00102378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bee(param_2);
  FUN_001023e0(param_1,uVar1);
  return;
}




void FUN_00102b2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102514(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102252(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104024(void)

{
  return;
}




undefined4 FUN_0010191a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101954(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c38(param_1,param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102514(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102286(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102590(local_50);
    cVar2 = FUN_0010191a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102590(local_50);
      cVar2 = FUN_0010191a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102858(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010257a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010257a(local_60);
          local_48[1] = 0;
          FUN_001025ae(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010282c(local_48);
          uVar6 = FUN_00102590(*puVar5);
          cVar2 = FUN_0010191a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025ee(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102816(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025ae(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027a2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010278c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010278c(local_60);
        uVar6 = FUN_0010278c(local_60);
        FUN_001027a2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027ea(local_48);
        uVar6 = FUN_00102590(*puVar5);
        cVar2 = FUN_0010191a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025ee(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102816(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025ae(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027a2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020bc;
  }
  lVar3 = FUN_00102564(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101dd0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010257a(local_60);
    uVar6 = FUN_00102590(*puVar5);
    cVar2 = FUN_0010191a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101dd0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010257a(local_60);
    local_48[1] = 0;
    FUN_001025ae(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025ee(local_60,param_3);
  }
LAB_001020bc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103454(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103563(param_1,param_2);
  FUN_001035de(param_1,param_2);
  FUN_00103170(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102214(undefined8 param_1,undefined8 param_2)

{
  FUN_001028d0(param_1,param_2);
  FUN_00102914(param_1,param_2);
  return;
}




undefined8 FUN_00102a4e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102252(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010170f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001032e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102270(param_1);
  FUN_001033ea(param_1,uVar1);
  FUN_001031da(param_1);
  return;
}




void FUN_00103fed(void)

{
  return;
}




void FUN_00103be3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104019(void)

{
  return;
}




void FUN_001042ec(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101725(void)

{
  return;
}




void FUN_001031fa(undefined8 param_1)

{
  FUN_00103284(param_1);
  return;
}




void FUN_00101864(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b1e(param_1,param_2);
  return;
}




void FUN_00102d46(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d89(param_2);
  puVar2 = (undefined4 *)FUN_001023ce(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001025ee(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102270(param_1);
  local_50 = FUN_00102286(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020d7(local_58);
    local_59 = FUN_0010191a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102816(local_58);
    }
    else {
      local_58 = FUN_0010294e(local_58);
    }
  }
  FUN_00102252(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a4e(param_1);
    cVar1 = FUN_001018ac(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a9e(local_38,&local_58,&local_50);
      goto LAB_00102770;
    }
    FUN_001027ea(&local_48);
  }
  uVar2 = FUN_00102590(local_48);
  cVar1 = FUN_0010191a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102858(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a9e(local_38,&local_58,&local_50);
  }
LAB_00102770:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_001027ea(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103986(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c78(undefined8 param_1)

{
  return param_1;
}




void FUN_0010319a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001039e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010170f(0x30,param_2);
  uVar1 = FUN_00103986(param_3);
  uVar2 = FUN_00101bcc(param_2);
  uVar3 = FUN_0010298c(param_1);
  FUN_00103a52(uVar3,uVar2,uVar1);
  return;
}




bool FUN_001041b7(pthread_t *param_1)

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




void FUN_00104071(void)

{
  return;
}




void FUN_00102436(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010170f(0x30,param_2);
  uVar1 = FUN_00101c9c(param_5);
  uVar2 = FUN_00101c8a(param_4);
  uVar3 = FUN_00101c78(param_3);
  uVar4 = FUN_00101bcc(param_2);
  uVar5 = FUN_0010298c(param_1);
                    /* try { // try from 001024c5 to 001024c9 has its CatchHandler @ 001024cc */
  FUN_001029cc(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




ulong FUN_00103ed6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103936(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101569(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101738(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(local_50);
  snprintf(local_48,__maxlen,"%s",local_50);
  FUN_00103ae2(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102ca0(void)

{
  return;
}




undefined8 FUN_001036b8(undefined8 param_1,undefined8 param_2)

{
  FUN_001035b4(param_1,param_2);
  return param_1;
}




undefined8
FUN_001019d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c9c(param_5);
  uVar2 = FUN_00101c8a(param_4);
  uVar3 = FUN_00101c78(param_3);
  local_40 = FUN_00101cae(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a54 to 00101a97 has its CatchHandler @ 00101ad5 */
  uVar1 = FUN_001020d7(local_40);
  local_38 = FUN_00101d2e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102214(param_1,local_40);
    FUN_00102252(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010212a(param_1,local_38._0_8_,local_38._8_8_,local_40);
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




undefined8 FUN_001030b1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ae2("Calling good()...");
  FUN_001030a1();
  FUN_00103ae2("Finished good()");
  FUN_00103ae2("Calling bad()...");
  FUN_00102dc5();
  FUN_00103ae2("Finished bad()");
  return 0;
}




void FUN_00101bcc(long param_1)

{
  FUN_0010235a(param_1 + 0x20);
  return;
}




int FUN_00103fd3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_0010257a(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101cae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010240a(param_1);
  uVar2 = FUN_00101c9c(param_4);
  uVar3 = FUN_00101c8a(param_3);
  uVar4 = FUN_00101c78(param_2);
  FUN_00102436(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102c7b(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b8e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104320(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102964(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d72(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001018ac(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102cb4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010229c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020d7(local_38);
    cVar1 = FUN_0010191a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102816(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010294e(local_38);
    }
  }
  FUN_00102252(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00103610(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102286(param_1);
  uVar2 = FUN_001036fa(param_2);
  uVar1 = FUN_00103710(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010278c(param_1);
  uVar2 = FUN_0010387f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010257a(param_1);
  uVar2 = FUN_0010389d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




ulong FUN_00103dd2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040a8(void)

{
  return;
}




void FUN_00103170(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010319a(param_1);
  return;
}




void FUN_001029cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c9c(param_5);
  uVar2 = FUN_00101c8a(param_4);
  uVar3 = FUN_00101c78(param_3);
  FUN_00102bb0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103284(long param_1)

{
  FUN_001033aa(param_1);
  FUN_001033ca(param_1);
  FUN_00103170(param_1 + 8);
  return;
}




undefined8 FUN_00102816(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_00103116(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00101c8a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010188e(undefined8 param_1)

{
  FUN_00101b6e(param_1);
  return;
}




void FUN_001023b0(undefined8 param_1)

{
  FUN_00102976(param_1);
  return;
}




long FUN_001034da(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001033ea(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102816(local_28);
    FUN_001033ea(param_1,uVar1);
    lVar2 = FUN_0010294e(local_28);
    FUN_00102214(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102cdc(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103c0e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d89(undefined8 param_1)

{
  FUN_00102da7(param_1);
  return;
}




undefined8 FUN_00103fc4(void)

{
  return 0;
}




void FUN_00104087(void)

{
  return;
}




long FUN_00103143(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103b08(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010387f(undefined8 param_1)

{
  FUN_00103116(param_1);
  return;
}




void FUN_00102b60(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cdc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00101b6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102252(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001028d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bcc(param_2);
  uVar2 = FUN_0010298c(param_1);
  FUN_00102b04(uVar2,uVar1);
  return;
}




void FUN_0010321a(undefined8 param_1)

{
  FUN_001031fa(param_1);
  return;
}




void FUN_001035de(void)

{
  return;
}




void FUN_0010299e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b60(param_1,param_2,0);
  return;
}




void FUN_00103a52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103986(param_3);
  FUN_00103a90(param_1,param_2,uVar1);
  return;
}




void FUN_001033da(void)

{
  return;
}




undefined8 FUN_001036fa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102590(undefined8 param_1)

{
  FUN_001020d7(param_1);
  return;
}




undefined8 FUN_00101c9c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b04(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca0(param_1,param_2);
  return;
}




void FUN_00103ae2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c78(param_3);
  uVar1 = FUN_00101c8a(param_4);
  FUN_00101954(local_38,uVar1);
  FUN_00101c9c(param_5);
  uVar1 = FUN_0010170f(0x10,param_2);
                    /* try { // try from 00102c38 to 00102c3c has its CatchHandler @ 00102c3f */
  FUN_00102cf4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_0010282c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102a3c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d3f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined4 FUN_001018d2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bbe(param_1);
  return unaff_EBX;
}




void FUN_00101c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bee(param_2);
  FUN_00102378(param_1,uVar1);
  return;
}




void FUN_001034f0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035f2(local_18,param_1);
  FUN_00103610(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010403a(void)

{
  return;
}




void FUN_001036e6(void)

{
  return;
}




void FUN_001020d7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102898(param_1);
  FUN_001028ba(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010409d(void)

{
  return;
}




void FUN_0010389d(undefined8 param_1)

{
  FUN_00103143(param_1);
  return;
}




void FUN_00103b3a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_00102286(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102976(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104066(void)

{
  return;
}




void FUN_00103554(void)

{
  return;
}




void FUN_001032c0(undefined8 param_1)

{
  FUN_001033da(param_1);
  return;
}




void FUN_001031da(undefined8 param_1)

{
  FUN_001032c0(param_1);
  return;
}




void FUN_00103c39(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010294e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010325a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010331e(param_1,param_2);
  return;
}




void FUN_00102ae6(undefined8 param_1)

{
  FUN_00102c8e(param_1);
  return;
}




undefined8 FUN_001028ba(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102252(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104092(void)

{
  return;
}




void FUN_001042cd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102dc5(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010321a(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102e51 to 00102eba has its CatchHandler @ 00102f06 */
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101738(local_88,local_58);
  *puVar1 = __s;
  FUN_0010325a(local_58,local_88);
                    /* try { // try from 00102ec2 to 00102ec6 has its CatchHandler @ 00102ef1 */
  FUN_00101569(local_58);
  FUN_0010323a(local_58);
  FUN_0010323a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010323a(undefined8 param_1)

{
  FUN_001032e0(param_1);
  return;
}




void FUN_001033ca(void)

{
  return;
}




undefined8 FUN_00101bee(undefined8 param_1)

{
  return param_1;
}




void FUN_00104050(void)

{
  return;
}




long FUN_00103710(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038bc(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103920(param_2);
                    /* try { // try from 0010377f to 00103811 has its CatchHandler @ 0010383d */
    uVar2 = FUN_00103710(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103936(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038bc(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103920(local_38);
      uVar2 = FUN_00103710(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103936(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001033aa(undefined8 param_1)

{
  FUN_00103554(param_1);
  return;
}




void FUN_001025ae(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a3c(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00102898(long param_1)

{
  FUN_00102ae6(param_1 + 0x20);
  return;
}




void FUN_00102cf4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d46(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104045(void)

{
  return;
}




void FUN_0010163c(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t __maxlen;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)FUN_00101738(param_1,&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  __maxlen = strlen(local_50);
  snprintf(local_48,__maxlen,"%s",local_50);
  FUN_00103ae2(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



