
long FUN_0010271c(long param_1)

{
  return param_1 + 0x18;
}




bool FUN_0010410f(pthread_t *param_1)

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




undefined8 FUN_001028de(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103322(void)

{
  return;
}




undefined8 FUN_00103f1c(void)

{
  return 0;
}




void FUN_00102a76(undefined8 param_1)

{
  FUN_00102c1e(param_1);
  return;
}




void FUN_001028a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010291c(param_1);
  FUN_00102abe(uVar1,param_2,1);
  return;
}




void FUN_00101b4e(void)

{
  return;
}




void FUN_001022ea(undefined8 param_1)

{
  FUN_001028f4(param_1);
  return;
}




void FUN_00103f9d(void)

{
  return;
}




undefined8 FUN_00101c08(undefined8 param_1)

{
  return param_1;
}




long FUN_0010306e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_00102216(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fbe(void)

{
  return;
}




void FUN_00103f71(void)

{
  return;
}




void FUN_00103fb3(void)

{
  return;
}




void FUN_00103ff5(void)

{
  return;
}




void FUN_001039e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038de(param_3);
  puVar3 = (undefined8 *)FUN_0010169f(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102067(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102828(param_1);
  FUN_0010284a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037d7(undefined8 param_1)

{
  FUN_0010306e(param_1);
  return;
}




undefined8 FUN_0010416a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102340(undefined8 param_1)

{
  FUN_00102906(param_1);
  return;
}




void FUN_00103f5b(void)

{
  return;
}




void FUN_0010292e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102af0(param_1,param_2,0);
  return;
}




void FUN_00103fa8(void)

{
  return;
}




undefined8 FUN_00102c0b(undefined8 param_1)

{
  return param_1;
}




void FUN_001018e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc8(param_1,param_2);
  return;
}




undefined8 FUN_001028f4(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101862(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b4e(param_1);
  return unaff_EBX;
}




void FUN_00103c16(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001017f4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aae(param_1,param_2);
  return;
}




void FUN_00102d37(undefined8 param_1)

{
  FUN_00102340(param_1);
  return;
}




void FUN_00103a3a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001021a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102860(param_1,param_2);
  FUN_001028a4(param_1,param_2);
  return;
}




void FUN_00103192(undefined8 param_1)

{
  FUN_00103238(param_1);
  return;
}




ulong FUN_00103d2a(long param_1,ulong param_2,long param_3)

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




void FUN_00103342(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027a6(local_28);
    FUN_00103342(param_1,uVar1);
    lVar2 = FUN_001028de(local_28);
    FUN_001021a4(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010418d(undefined8 *param_1)

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




undefined8 FUN_00102c6c(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103c97(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a94(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c30(param_1,param_2);
  return;
}




void FUN_001023c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010169f(0x30,param_2);
  uVar1 = FUN_00101c2c(param_5);
  uVar2 = FUN_00101c1a(param_4);
  uVar3 = FUN_00101c08(param_3);
  uVar4 = FUN_00101b5c(param_2);
  uVar5 = FUN_0010291c(param_1);
                    /* try { // try from 00102455 to 00102459 has its CatchHandler @ 0010245c */
  FUN_0010295c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104244(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102828(long param_1)

{
  FUN_00102a76(param_1 + 0x20);
  return;
}




void FUN_001033ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034bb(param_1,param_2);
  FUN_00103536(param_1,param_2);
  FUN_001030c8(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010284a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001030f2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_0010291c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104225(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8
FUN_001020ba(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102216(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102520(param_3);
      uVar5 = FUN_00102067(param_4);
      cVar1 = FUN_001018aa(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010213e;
      }
    }
  }
  bVar2 = true;
LAB_0010213e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021e2(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001021e2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010253e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029cc(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001038a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038de(param_2);
  FUN_001038f0(uVar1,uVar2);
  return;
}




undefined8 FUN_0010183c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102732(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029cc(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029cc(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103009(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a3a("Calling good()...");
  FUN_00102ff9();
  FUN_00103a3a("Finished good()");
  FUN_00103a3a("Calling bad()...");
  FUN_00102d55();
  FUN_00103a3a("Finished bad()");
  return 0;
}




void FUN_00101b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7e(param_2);
  FUN_00102308(param_1,uVar1);
  return;
}




long FUN_00103668(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103814(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103878(param_2);
                    /* try { // try from 001036d7 to 00103769 has its CatchHandler @ 00103795 */
    uVar2 = FUN_00103668(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010388e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103814(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103878(local_38);
      uVar2 = FUN_00103668(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010388e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00104042(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010400b,local_18);
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




void FUN_00103f7c(void)

{
  return;
}




void FUN_00104206(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102340(param_2);
  uVar1 = FUN_0010235e(uVar1);
  FUN_00102370(param_1,uVar1);
  return;
}




undefined8 FUN_0010190e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7e(param_2);
  FUN_00101b90(param_1,uVar1);
  return param_1;
}




void FUN_00103536(void)

{
  return;
}




undefined8 FUN_00101c1a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103276(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033ac(param_1,param_2);
  lVar1 = FUN_0010341c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103432(param_1);
                    /* try { // try from 001032d1 to 001032d5 has its CatchHandler @ 001032db */
    uVar3 = FUN_00103448(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102a2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c0b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029cc(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102abe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c44(param_1,param_2,param_3);
  return;
}




void FUN_00103cca(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001015d4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_4c;
  ulong local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 2;
  puVar1 = (undefined8 *)FUN_001016c8(param_1,&local_4c);
  local_40 = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    local_40[local_48] = *(undefined4 *)((long)&local_38 + local_48 * 4);
  }
  FUN_00103a92(*local_40);
  free(local_40);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024a4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001034bb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103610(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103e2e(long param_1,ulong param_2,long param_3)

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




void FUN_0010181e(undefined8 param_1)

{
  FUN_00101afe(param_1);
  return;
}




undefined8 FUN_00102906(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103fea(void)

{
  return;
}




void FUN_00103c69(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b5c(long param_1)

{
  FUN_001022ea(param_1 + 0x20);
  return;
}




undefined8 FUN_001038de(undefined8 param_1)

{
  return param_1;
}




void FUN_001031b2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103276(param_1,param_2);
  return;
}




void FUN_00103ae6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010222c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102067(local_38);
    cVar1 = FUN_001018aa(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027a6(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028de(local_38);
    }
  }
  FUN_001021e2(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101946(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_0010341c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010235e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010400b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c2c(param_5);
  uVar2 = FUN_00101c1a(param_4);
  uVar3 = FUN_00101c08(param_3);
  FUN_00102b40(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001027a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102520(undefined8 param_1)

{
  FUN_00102067(param_1);
  return;
}




void FUN_00103172(undefined8 param_1)

{
  FUN_00103152(param_1);
  return;
}




void FUN_00103f66(void)

{
  return;
}




void FUN_00102cd6(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d19(param_2);
  puVar2 = (undefined4 *)FUN_0010235e(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103fd4(void)

{
  return;
}




undefined8 FUN_00101c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010239a(param_1);
  uVar2 = FUN_00101c2c(param_4);
  uVar3 = FUN_00101c1a(param_3);
  uVar4 = FUN_00101c08(param_2);
  FUN_001023c6(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00101afe(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031dc(long param_1)

{
  FUN_00103302(param_1);
  FUN_00103322(param_1);
  FUN_001030c8(param_1 + 8);
  return;
}




void FUN_001027e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029cc(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103aba(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103fdf(void)

{
  return;
}




void FUN_001034ac(void)

{
  return;
}




void FUN_00102ea7(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103172(local_88);
  pvVar1 = malloc(0x28);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102f17 to 00102f80 has its CatchHandler @ 00102fcc */
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031b2(local_58,local_88);
                    /* try { // try from 00102f88 to 00102f8c has its CatchHandler @ 00102fb7 */
  FUN_001015d4(local_58);
  FUN_00103192(local_58);
  FUN_00103192(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010363e(void)

{
  return;
}




void FUN_00102af0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c6c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




long FUN_00103432(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_001024f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101888(undefined8 *param_1)

{
  FUN_00101b5c(*param_1);
  return;
}




undefined8 FUN_00101c2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102860(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b5c(param_2);
  uVar2 = FUN_0010291c(param_1);
  FUN_00102a94(uVar2,uVar1);
  return;
}




undefined8 FUN_001038f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010239a(param_1);
  uVar2 = FUN_001038de(param_2);
  FUN_0010393c(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010388e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00103218(undefined8 param_1)

{
  FUN_00103332(param_1);
  return;
}




void FUN_00103f87(void)

{
  return;
}




void FUN_00103302(undefined8 param_1)

{
  FUN_001034ac(param_1);
  return;
}




void FUN_00104000(void)

{
  return;
}




void FUN_00103448(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010354a(local_18,param_1);
  FUN_00103568(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f45(void)

{
  return;
}




void FUN_00103b91(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103132(undefined8 param_1)

{
  FUN_00103218(param_1);
  return;
}




void FUN_00102308(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7e(param_2);
  FUN_00102370(param_1,uVar1);
  return;
}




void FUN_00103c3e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_001016c8(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017f4(param_1,param_2);
  local_28 = FUN_0010181e(param_1);
  cVar2 = FUN_0010183c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101862(param_1);
    uVar3 = FUN_00101888(&local_38);
    cVar2 = FUN_001018aa(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101768;
    }
  }
  bVar1 = true;
LAB_00101768:
  if (bVar1) {
    uVar3 = FUN_001018d1(param_2);
    FUN_0010190e(local_30,uVar3);
    FUN_00101946(&local_28,&local_38);
    local_38 = FUN_00101968(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101888(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102c44(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010354a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a60(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d55(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103172(local_88);
  pvVar1 = malloc(10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102dc5 to 00102e2e has its CatchHandler @ 00102e7a */
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016c8(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031b2(local_58,local_88);
                    /* try { // try from 00102e36 to 00102e3a has its CatchHandler @ 00102e65 */
  FUN_00101509(local_58);
  FUN_00103192(local_58);
  FUN_00103192(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined4 FUN_001018aa(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00103f0d(void)

{
  return 1;
}




undefined8 FUN_00103878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b3b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001029cc(undefined8 param_1)

{
  return param_1;
}




long FUN_0010250a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001030c8(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030f2(param_1);
  return;
}




int FUN_00103f2b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_00103152(undefined8 param_1)

{
  FUN_001031dc(param_1);
  return;
}




void FUN_00102b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c08(param_3);
  uVar1 = FUN_00101c1a(param_4);
  FUN_001018e4(local_38,uVar1);
  FUN_00101c2c(param_5);
  uVar1 = FUN_0010169f(0x10,param_2);
                    /* try { // try from 00102bc8 to 00102bcc has its CatchHandler @ 00102bcf */
  FUN_00102c84(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ff9(void)

{
  FUN_00102ea7();
  return;
}




undefined8 FUN_001018d1(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024a4(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102216(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102520(local_50);
    cVar2 = FUN_001018aa(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102520(local_50);
      cVar2 = FUN_001018aa(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010250a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010250a(local_60);
          local_48[1] = 0;
          FUN_0010253e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027bc(local_48);
          uVar6 = FUN_00102520(*puVar5);
          cVar2 = FUN_001018aa(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010257e(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027a6(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010253e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102732(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010271c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010271c(local_60);
        uVar6 = FUN_0010271c(local_60);
        FUN_00102732(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010277a(local_48);
        uVar6 = FUN_00102520(*puVar5);
        cVar2 = FUN_001018aa(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010257e(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027a6(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010253e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102732(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010204c;
  }
  lVar3 = FUN_001024f4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d60:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010250a(local_60);
    uVar6 = FUN_00102520(*puVar5);
    cVar2 = FUN_001018aa(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d60;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010250a(local_60);
    local_48[1] = 0;
    FUN_0010253e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010257e(local_60,param_3);
  }
LAB_0010204c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103fc9(void)

{
  return;
}




void FUN_001016b5(void)

{
  return;
}




void FUN_0010239a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010291c(param_1);
  FUN_0010292e(uVar1,1);
  return;
}




void FUN_0010393c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010169f(0x30,param_2);
  uVar1 = FUN_001038de(param_3);
  uVar2 = FUN_00101b5c(param_2);
  uVar3 = FUN_0010291c(param_1);
  FUN_001039aa(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104270(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103b10(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010257e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102200(param_1);
  local_50 = FUN_00102216(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102067(local_58);
    local_59 = FUN_001018aa(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027a6(local_58);
    }
    else {
      local_58 = FUN_001028de(local_58);
    }
  }
  FUN_001021e2(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029de(param_1);
    cVar1 = FUN_0010183c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a2e(local_38,&local_58,&local_50);
      goto LAB_00102700;
    }
    FUN_0010277a(&local_48);
  }
  uVar2 = FUN_00102520(local_48);
  cVar1 = FUN_001018aa(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e8(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a2e(local_38,&local_58,&local_50);
  }
LAB_00102700:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103bbc(undefined4 param_1)

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




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_4c;
  ulong local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 2;
  puVar1 = (undefined8 *)FUN_001016c8(param_1,&local_4c);
  local_40 = (undefined4 *)*puVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    local_40[local_48] = *(undefined4 *)((long)&local_38 + local_48 * 4);
  }
  FUN_00103a92(*local_40);
  free(local_40);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f50(void)

{
  return;
}




undefined8 * FUN_001027bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8
FUN_00101968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c2c(param_5);
  uVar2 = FUN_00101c1a(param_4);
  uVar3 = FUN_00101c08(param_3);
  local_40 = FUN_00101c3e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019e4 to 00101a27 has its CatchHandler @ 00101a65 */
  uVar1 = FUN_00102067(local_40);
  local_38 = FUN_00101cbe(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021a4(param_1,local_40);
    FUN_001021e2(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020ba(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102d19(undefined8 param_1)

{
  FUN_00102d37(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001039aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038de(param_3);
  FUN_001039e8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103652(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010350c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010363e(param_1,param_2);
  return;
}




void FUN_00103f92(void)

{
  return;
}




void FUN_00102c84(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cd6(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103610(undefined8 param_1,undefined8 param_2)

{
  FUN_0010350c(param_1,param_2);
  return param_1;
}




long FUN_0010309b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102c30(void)

{
  return;
}




undefined8 * FUN_0010277a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103332(void)

{
  return;
}




void FUN_00103a92(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103568(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102216(param_1);
  uVar2 = FUN_00103652(param_2);
  uVar1 = FUN_00103668(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010271c(param_1);
  uVar2 = FUN_001037d7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010250a(param_1);
  uVar2 = FUN_001037f5(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined4 * FUN_00103814(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102828(param_2);
  puVar2 = (undefined4 *)FUN_001038a4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102370(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103b66(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001037f5(undefined8 param_1)

{
  FUN_0010309b(param_1);
  return;
}




undefined8 FUN_001029de(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e2(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102216(param_1);
  uVar2 = FUN_00102200(param_1);
  FUN_0010222c(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102c1e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010169f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103238(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102200(param_1);
  FUN_00103342(param_1,uVar1);
  FUN_00103132(param_1);
  return;
}




void FUN_001042e0(void)

{
  return;
}




undefined8 FUN_00101b7e(undefined8 param_1)

{
  return param_1;
}



