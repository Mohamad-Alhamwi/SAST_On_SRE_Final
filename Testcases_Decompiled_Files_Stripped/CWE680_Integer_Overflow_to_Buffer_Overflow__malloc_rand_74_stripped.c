
void FUN_00102a26(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c03(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102c64(void)

{
  return 0x333333333333333;
}




void FUN_001037eb(undefined8 param_1)

{
  FUN_00103090(param_1);
  return;
}




void FUN_00103fe0(void)

{
  return;
}




long FUN_00103063(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102c3c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00102368(param_1,uVar1);
  return;
}




void FUN_001027e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c4(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00104260(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001023be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101697(0x28,param_2);
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  uVar4 = FUN_00101b54(param_2);
  uVar5 = FUN_00102914(param_1);
                    /* try { // try from 0010244d to 00102451 has its CatchHandler @ 00102454 */
  FUN_00102954(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103412(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
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




undefined8 FUN_0010279e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 * FUN_00102772(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101816(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




undefined8 FUN_00104178(undefined8 *param_1)

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




undefined8 FUN_00103ef8(void)

{
  return 1;
}




void FUN_00102536(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103b51(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102842(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




bool FUN_001040fa(pthread_t *param_1)

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




void FUN_00102d2e(undefined8 param_1)

{
  FUN_00102338(param_1);
  return;
}




void FUN_001042d0(void)

{
  return;
}




void FUN_00103148(undefined8 param_1)

{
  FUN_001031d2(param_1);
  return;
}




void FUN_0010219c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102858(param_1,param_2);
  FUN_0010289c(param_1,param_2);
  return;
}




void FUN_00101880(undefined8 *param_1)

{
  FUN_00101b54(*param_1);
  return;
}




void FUN_00102c7c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cce(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_00101c24(param_4);
  uVar3 = FUN_00101c12(param_3);
  uVar4 = FUN_00101c00(param_2);
  FUN_001023be(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103f88(void)

{
  return;
}




undefined8 FUN_00101c00(undefined8 param_1)

{
  return param_1;
}




long FUN_001016c0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017ec(param_1,param_2);
  local_28 = FUN_00101816(param_1);
  cVar2 = FUN_00101834(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010185a(param_1);
    uVar3 = FUN_00101880(&local_38);
    cVar2 = FUN_001018a2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101760;
    }
  }
  bVar1 = true;
LAB_00101760:
  if (bVar1) {
    uVar3 = FUN_001018c9(param_2);
    FUN_00101906(local_30,uVar3);
    FUN_0010193e(&local_28,&local_38);
    local_38 = FUN_00101960(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101880(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_001032f8(undefined8 param_1)

{
  FUN_001034a2(param_1);
  return;
}




long FUN_00102714(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103540(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103f07(void)

{
  return 0;
}




void FUN_00103fbf(void)

{
  return;
}




undefined8 FUN_0010386e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001018c9(undefined8 param_1)

{
  return param_1;
}




void FUN_001031d2(long param_1)

{
  FUN_001032f8(param_1);
  FUN_00103318(param_1);
  FUN_001030be(param_1 + 8);
  return;
}




void FUN_00103fa9(void)

{
  return;
}




long FUN_00103090(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001028ec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c03(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102c16(undefined8 param_1)

{
  return param_1;
}




void FUN_001034a2(void)

{
  return;
}




void FUN_00102d10(undefined8 param_1)

{
  FUN_00102d2e(param_1);
  return;
}




undefined8 FUN_00102576(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021f8(param_1);
  local_50 = FUN_0010220e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010205f(local_58);
    local_59 = FUN_001018a2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010279e(local_58);
    }
    else {
      local_58 = FUN_001028d6(local_58);
    }
  }
  FUN_001021da(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029d6(param_1);
    cVar1 = FUN_00101834(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a26(local_38,&local_58,&local_50);
      goto LAB_001026f8;
    }
    FUN_00102772(&local_48);
  }
  uVar2 = FUN_00102518(local_48);
  cVar1 = FUN_001018a2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a26(local_38,&local_58,&local_50);
  }
LAB_001026f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010272a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c4(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c4(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101697(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001029c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c54(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101c24(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a6e(undefined8 param_1)

{
  FUN_00102c16(param_1);
  return;
}




void FUN_001033a2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034b1(param_1,param_2);
  FUN_0010352c(param_1,param_2);
  FUN_001030be(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103b26(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001041f1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102392(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102914(param_1);
  FUN_00102926(uVar1,1);
  return;
}




void FUN_001021da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a25(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010249c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010365e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010380a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010386e(param_2);
                    /* try { // try from 001036cd to 0010375f has its CatchHandler @ 0010378b */
    uVar2 = FUN_0010365e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103884(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010380a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010386e(local_38);
      uVar2 = FUN_0010365e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103884(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00102ffe(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a25("Calling good()...");
  FUN_00102fee();
  FUN_00103a25("Finished good()");
  FUN_00103a25("Calling bad()...");
  FUN_00102d4c();
  FUN_00103a25("Finished bad()");
  return 0;
}




void FUN_001030be(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030e8(param_1);
  return;
}




void FUN_00103fb4(void)

{
  return;
}




void FUN_00101b54(long param_1)

{
  FUN_001022e2(param_1 + 0x20);
  return;
}




undefined8 FUN_001028fe(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001039a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038d4(param_3);
  FUN_001039de(param_1,param_2,uVar1);
  return;
}




void FUN_00103fca(void)

{
  return;
}




undefined8 FUN_00101c12(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cce(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d10(param_2);
  puVar2 = (undefined4 *)FUN_00102356(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103f9e(void)

{
  return;
}




void FUN_00102338(undefined8 param_1)

{
  FUN_001028fe(param_1);
  return;
}




void FUN_00103c82(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010355e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010220e(param_1);
  uVar2 = FUN_00103648(param_2);
  uVar1 = FUN_0010365e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102714(param_1);
  uVar2 = FUN_001037cd(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102502(param_1);
  uVar2 = FUN_001037eb(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103f46(void)

{
  return;
}




undefined8 * FUN_001027b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001021f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010389a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038d4(param_2);
  FUN_001038e6(uVar1,uVar2);
  return;
}




void FUN_00102858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b54(param_2);
  uVar2 = FUN_00102914(param_1);
  FUN_00102a8c(uVar2,uVar1);
  return;
}




void FUN_00102d4c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103168(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 00102de2 to 00102e45 has its CatchHandler @ 00102e91 */
  puVar4 = (uint *)FUN_001016c0(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_001016c0(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_001016c0(local_88,local_58);
  *puVar4 = uVar1;
  FUN_001031a8(local_58,local_88);
                    /* try { // try from 00102e4d to 00102e51 has its CatchHandler @ 00102e7c */
  FUN_00101509(local_58);
  FUN_00103188(local_58);
  FUN_00103188(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ab6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c3c(param_1,param_2,param_3);
  return;
}




void FUN_00102954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  FUN_00102b38(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010352c(void)

{
  return;
}




undefined8 FUN_00104155(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010322e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f8(param_1);
  FUN_00103338(param_1,uVar1);
  FUN_00103128(param_1);
  return;
}




long FUN_00102502(long param_1)

{
  return param_1 + 0x20;
}




undefined4 FUN_0010185a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b46(param_1);
  return unaff_EBX;
}




void FUN_001022e2(undefined8 param_1)

{
  FUN_001028ec(param_1);
  return;
}




undefined8 FUN_00103606(undefined8 param_1,undefined8 param_2)

{
  FUN_00103502(param_1,param_2);
  return param_1;
}




void FUN_00102b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c00(param_3);
  uVar1 = FUN_00101c12(param_4);
  FUN_001018dc(local_38,uVar1);
  FUN_00101c24(param_5);
  uVar1 = FUN_00101697(8,param_2);
                    /* try { // try from 00102bc0 to 00102bc4 has its CatchHandler @ 00102bc7 */
  FUN_00102c7c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f3b(void)

{
  return;
}




void FUN_00103932(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101697(0x28,param_2);
  uVar1 = FUN_001038d4(param_3);
  uVar2 = FUN_00101b54(param_2);
  uVar3 = FUN_00102914(param_1);
  FUN_001039a0(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103328(void)

{
  return;
}




void FUN_00103ad1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001030e8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001038d4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102914(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010249c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010220e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102518(local_50);
    cVar2 = FUN_001018a2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102518(local_50);
      cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102502(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102502(local_60);
          local_48[1] = 0;
          FUN_00102536(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027b4(local_48);
          uVar6 = FUN_00102518(*puVar5);
          cVar2 = FUN_001018a2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102576(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010279e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102536(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010272a(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102714(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102714(local_60);
        uVar6 = FUN_00102714(local_60);
        FUN_0010272a(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102772(local_48);
        uVar6 = FUN_00102518(*puVar5);
        cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102576(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010279e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102536(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010272a(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102044;
  }
  lVar3 = FUN_001024ec(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d58:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102502(local_60);
    uVar6 = FUN_00102518(*puVar5);
    cVar2 = FUN_001018a2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d58;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102502(local_60);
    local_48[1] = 0;
    FUN_00102536(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102576(local_60,param_3);
  }
LAB_00102044:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001024ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102c28(void)

{
  return;
}




void FUN_00103cb5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c29(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101906(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00101b88(param_1,uVar1);
  return param_1;
}




void FUN_00103634(void)

{
  return;
}




void FUN_00104210(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001037cd(undefined8 param_1)

{
  FUN_00103063(param_1);
  return;
}




undefined8 FUN_001038e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102392(param_1);
  uVar2 = FUN_001038d4(param_2);
  FUN_00103932(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103ff6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018dc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc0(param_1,param_2);
  return;
}




void FUN_00103f72(void)

{
  return;
}




undefined8 FUN_001034b1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103606(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102820(long param_1)

{
  FUN_00102a6e(param_1 + 0x20);
  return;
}




void FUN_00103f93(void)

{
  return;
}




void FUN_00101bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102338(param_2);
  uVar1 = FUN_00102356(uVar1);
  FUN_00102368(param_1,uVar1);
  return;
}




void FUN_001031a8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010326c(param_1,param_2);
  return;
}




void FUN_00103a4b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




int FUN_00103f16(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103318(void)

{
  return;
}




void FUN_00101aa6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010220e(param_1);
  uVar2 = FUN_001021f8(param_1);
  FUN_00102224(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010205f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102820(param_1);
  FUN_00102842(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fd5(void)

{
  return;
}




void FUN_00103c01(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103f5c(void)

{
  return;
}




void FUN_00102ebe(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103168(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f12 to 00102f75 has its CatchHandler @ 00102fc1 */
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016c0(local_88,local_58);
  *puVar1 = 0x14;
  FUN_001031a8(local_58,local_88);
                    /* try { // try from 00102f7d to 00102f81 has its CatchHandler @ 00102fac */
  FUN_001015d0(local_58);
  FUN_00103188(local_58);
  FUN_00103188(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102926(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ae8(param_1,param_2,0);
  return;
}




void FUN_0010343e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103540(local_18,param_1);
  FUN_0010355e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103feb(void)

{
  return;
}




undefined8 FUN_00101af6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103502(undefined8 param_1,undefined8 param_2)

{
  FUN_00103634(param_1,param_2);
  return;
}




void FUN_00103128(undefined8 param_1)

{
  FUN_0010320e(param_1);
  return;
}




void FUN_00103338(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010279e(local_28);
    FUN_00103338(param_1,uVar1);
    lVar2 = FUN_001028d6(local_28);
    FUN_0010219c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8
FUN_001020b2(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010220e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102518(param_3);
      uVar5 = FUN_0010205f(param_4);
      cVar1 = FUN_001018a2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102136;
      }
    }
  }
  bVar2 = true;
LAB_00102136:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021da(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102518(undefined8 param_1)

{
  FUN_0010205f(param_1);
  return;
}




void FUN_00101b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b76(param_2);
  FUN_00102300(param_1,uVar1);
  return;
}




undefined8 FUN_001028d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_00103d15(long param_1,ulong param_2,long param_3)

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




void FUN_00103f51(void)

{
  return;
}




undefined8 FUN_001029d6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021da(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f7d(void)

{
  return;
}




void FUN_00101b46(void)

{
  return;
}




undefined8 FUN_0010402d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103ff6,local_18);
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




void FUN_00102ae8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c64(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




long FUN_0010220e(long param_1)

{
  return param_1 + 8;
}




void FUN_0010326c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033a2(param_1,param_2);
  lVar1 = FUN_00103412(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103428(param_1);
                    /* try { // try from 001032c7 to 001032cb has its CatchHandler @ 001032d1 */
    uVar3 = FUN_0010343e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8
FUN_00101960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c24(param_5);
  uVar2 = FUN_00101c12(param_4);
  uVar3 = FUN_00101c00(param_3);
  local_40 = FUN_00101c36(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019dc to 00101a1f has its CatchHandler @ 00101a5d */
  uVar1 = FUN_0010205f(local_40);
  local_38 = FUN_00101cb6(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010219c(param_1,local_40);
    FUN_001021da(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020b2(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




ulong FUN_00103e19(long param_1,ulong param_2,long param_3)

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




void FUN_00103afb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001039de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001038d4(param_3);
  puVar2 = (undefined8 *)FUN_00101697(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_0010422f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010320e(undefined8 param_1)

{
  FUN_00103328(param_1);
  return;
}




void FUN_00103aa5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103428(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00101834(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined4 FUN_001018a2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010193e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103188(undefined8 param_1)

{
  FUN_0010322e(param_1);
  return;
}




void FUN_00102a8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c28(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined4 * FUN_0010380a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102820(param_2);
  puVar2 = (undefined4 *)FUN_0010389a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103f30(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001016ad(void)

{
  return;
}




void FUN_00103a7d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103ba7(undefined4 param_1)

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




void FUN_0010289c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102914(param_1);
  FUN_00102ab6(uVar1,param_2,1);
  return;
}




void FUN_001015d0(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001016c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a7d(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f67(void)

{
  return;
}




void FUN_00103b7c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102fee(void)

{
  FUN_00102ebe();
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_001016c0(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103a7d(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102224(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010205f(local_38);
    cVar1 = FUN_001018a2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010279e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028d6(local_38);
    }
  }
  FUN_001021da(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101b76(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103168(undefined8 param_1)

{
  FUN_00103148(param_1);
  return;
}




undefined8 FUN_00103648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001017ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aa6(param_1,param_2);
  return;
}




undefined8 FUN_00102356(undefined8 param_1)

{
  return param_1;
}



