
void FUN_00101ecc(undefined8 *param_1)

{
  FUN_0010231a(*param_1);
  return;
}




void FUN_00104048(void)

{
  return;
}




void FUN_001040ab(void)

{
  return;
}




void FUN_0010218e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a0e(local_18,param_1);
  FUN_00102a2c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102eba(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101e22(param_1);
  local_50 = FUN_00102b52(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102825(local_58);
    local_59 = FUN_00101eee(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102201(local_58);
    }
    else {
      local_58 = FUN_00102217(local_58);
    }
  }
  FUN_00102962(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001034d0(param_1);
    cVar1 = FUN_00101e80(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103520(local_38,&local_58,&local_50);
      goto LAB_0010303c;
    }
    FUN_001030b6(&local_48);
  }
  uVar2 = FUN_00102e5c(local_48);
  cVar1 = FUN_00101eee(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010310e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103520(local_38,&local_58,&local_50);
  }
LAB_0010303c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103a7c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc0(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010233c(undefined8 param_1)

{
  return param_1;
}




long FUN_00102178(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00101529(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abc(local_88);
                    /* try { // try from 00101564 to 00101607 has its CatchHandler @ 00101653 */
  pvVar1 = operator_new__(800);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101afc(local_58,local_88);
                    /* try { // try from 0010160f to 00101613 has its CatchHandler @ 0010163e */
  FUN_00103a12(local_58);
  FUN_00101adc(local_58);
  FUN_00101adc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  FUN_00101da8(param_1);
  return;
}




void FUN_00103c94(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104103(void)

{
  return;
}




undefined8 FUN_0010426d(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00102b52(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010198f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101afc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101cec(param_1,param_2);
  return;
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101b82(param_1);
  return;
}




void FUN_00103d41(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103be9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d19(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00103f31(long param_1,ulong param_2,long param_3)

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




void FUN_0010410e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104290(undefined8 *param_1)

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




void FUN_00104380(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a3c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_001033f8(undefined8 param_1)

{
  return param_1;
}




void FUN_00104053(void)

{
  return;
}




long FUN_00101bc0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e38(param_1,param_2);
  local_28 = FUN_00101e62(param_1);
  cVar2 = FUN_00101e80(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101ea6(param_1);
    uVar3 = FUN_00101ecc(&local_38);
    cVar2 = FUN_00101eee(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c60;
    }
  }
  bVar1 = true;
LAB_00101c60:
  if (bVar1) {
    uVar3 = FUN_00101f15(param_2);
    FUN_00101f52(local_30,uVar3);
    FUN_00101f8a(&local_28,&local_38);
    local_38 = FUN_00101fac(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101ecc(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




bool FUN_00104212(pthread_t *param_1)

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




void FUN_001040cc(void)

{
  return;
}




void FUN_00103b95(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010222e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ad4(param_1,param_2);
  FUN_00102b18(param_1,param_2);
  return;
}




void FUN_00103cbf(undefined4 param_1)

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




undefined8 FUN_001023ea(undefined8 param_1)

{
  return param_1;
}




void FUN_001021f2(void)

{
  return;
}




undefined8 FUN_00103848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd6(param_1);
  uVar2 = FUN_00103835(param_2);
  FUN_001038d8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001029fa(void)

{
  return;
}




void FUN_00103616(void)

{
  return;
}




void FUN_00101a9c(undefined8 param_1)

{
  FUN_00101b26(param_1);
  return;
}




void FUN_00102cd6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010338a(param_1);
  FUN_0010341f(uVar1,1);
  return;
}




void FUN_001039a1(undefined8 param_1)

{
  FUN_00102c7c(param_1);
  return;
}




void FUN_0010306e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034bd(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034bd(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010405e(void)

{
  return;
}




undefined8
FUN_00102878(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b52(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e5c(param_3);
      uVar5 = FUN_00102825(param_4);
      cVar1 = FUN_00101eee(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001028fc;
      }
    }
  }
  bVar2 = true;
LAB_001028fc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102962(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103946(undefined8 param_1)

{
  FUN_001039a1(param_1);
  return;
}




void FUN_0010234e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233c(param_2);
  FUN_00102c44(param_1,uVar1);
  return;
}




void FUN_00101da8(void)

{
  return;
}




void FUN_0010407f(void)

{
  return;
}




undefined8
FUN_00101fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001023ea(param_5);
  uVar2 = FUN_001023d8(param_4);
  uVar3 = FUN_001023c6(param_3);
  local_40 = FUN_001023fc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102028 to 0010206b has its CatchHandler @ 001020a9 */
  uVar1 = FUN_00102825(local_40);
  local_38 = FUN_0010247c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010222e(param_1,local_40);
    FUN_00102962(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102878(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 * FUN_001030b6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001020f2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102980(param_1,param_2);
  FUN_001029fa(param_1,param_2);
  FUN_00101a12(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233c(param_2);
  FUN_00102cac(param_1,uVar1);
  return;
}




undefined8 FUN_00102217(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104074(void)

{
  return;
}




void FUN_00101a7c(undefined8 param_1)

{
  FUN_00101b62(param_1);
  return;
}




void FUN_00101abc(undefined8 param_1)

{
  FUN_00101a9c(param_1);
  return;
}




undefined8 FUN_00101e80(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001034d0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102962(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00101eee(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010338a(param_1);
  FUN_001033c6(uVar1,param_2,1);
  return;
}




void FUN_00101915(void)

{
  FUN_00101680();
  FUN_001017be();
  return;
}




void FUN_001033c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010362a(param_1,param_2,param_3);
  return;
}




int FUN_0010402e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c13(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104069(void)

{
  return;
}




void FUN_00104328(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010192a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b3d("Calling good()...");
  FUN_00101915();
  FUN_00103b3d("Finished good()");
  FUN_00103b3d("Calling bad()...");
  FUN_00101529();
  FUN_00103b3d("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




undefined8 FUN_001031c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001019a5(void)

{
  return;
}




void FUN_00102e5c(undefined8 param_1)

{
  FUN_00102825(param_1);
  return;
}




void FUN_0010231a(long param_1)

{
  FUN_00102c26(param_1 + 0x20);
  return;
}




void FUN_00102386(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c7c(param_2);
  uVar1 = FUN_00102c9a(uVar1);
  FUN_00102cac(param_1,uVar1);
  return;
}




void FUN_001043f0(void)

{
  return;
}




void FUN_00103964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103835(param_3);
  FUN_001039c0(param_1,param_2,uVar1);
  return;
}




void FUN_00101db8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102201(local_28);
    FUN_00101db8(param_1,uVar1);
    lVar2 = FUN_00102217(local_28);
    FUN_0010222e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103186(undefined8 param_1,undefined8 param_2)

{
  FUN_001029d0(param_1,param_2);
  return param_1;
}




void FUN_001039c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103835(param_3);
  puVar3 = (undefined8 *)FUN_0010198f(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00104145(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010410e,local_18);
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




void FUN_001040c1(void)

{
  return;
}




undefined8 FUN_00102201(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




ulong FUN_00103e2d(long param_1,ulong param_2,long param_3)

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




void FUN_001038d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010198f(0x30,param_2);
  uVar1 = FUN_00103835(param_3);
  uVar2 = FUN_0010231a(param_2);
  uVar3 = FUN_0010338a(param_1);
  FUN_00103964(uVar3,uVar2,uVar1);
  return;
}




void FUN_00101680(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abc(local_88);
                    /* try { // try from 001016bb to 00101745 has its CatchHandler @ 00101791 */
  pvVar1 = operator_new__(800);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101afc(local_58,local_88);
                    /* try { // try from 0010174d to 00101751 has its CatchHandler @ 0010177c */
  FUN_00103a7c(local_58);
  FUN_00101adc(local_58);
  FUN_00101adc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103520(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010376d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034bd(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010198f(0x30,param_2);
  uVar1 = FUN_001023ea(param_5);
  uVar2 = FUN_001023d8(param_4);
  uVar3 = FUN_001023c6(param_3);
  uVar4 = FUN_0010231a(param_2);
  uVar5 = FUN_0010338a(param_1);
                    /* try { // try from 00102d91 to 00102d95 has its CatchHandler @ 00102d98 */
  FUN_0010344d(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010376d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b26(long param_1)

{
  FUN_00101d78(param_1);
  FUN_00101d98(param_1);
  FUN_00101a12(param_1 + 8);
  return;
}




undefined8 * FUN_001030e2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101cec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001020f2(param_1,param_2);
  lVar1 = FUN_00102162(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102178(param_1);
                    /* try { // try from 00101d47 to 00101d4b has its CatchHandler @ 00101d51 */
    uVar3 = FUN_0010218e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_0010401f(void)

{
  return 0;
}




void FUN_0010226c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b52(param_1);
  uVar2 = FUN_00101e22(param_1);
  FUN_00102b68(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101f28(undefined8 param_1,undefined8 param_2)

{
  FUN_00102386(param_1,param_2);
  return;
}




void FUN_00101e62(undefined8 param_1)

{
  FUN_001022bc(param_1);
  return;
}




void FUN_00102cac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103bbd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104347(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102980(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103186(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103d9a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_001019e5(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
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




undefined8 FUN_00102de0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102962(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f8a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023c6(param_3);
  uVar1 = FUN_001023d8(param_4);
  FUN_00101f28(local_38,uVar1);
  FUN_001023ea(param_5);
  uVar1 = FUN_0010198f(0x10,param_2);
                    /* try { // try from 0010372a to 0010372e has its CatchHandler @ 00103731 */
  FUN_001037e4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103dcd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001040f8(void)

{
  return;
}




undefined8 FUN_00103170(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102a2c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b52(param_1);
  uVar2 = FUN_001031c8(param_2);
  uVar1 = FUN_001031de(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103058(param_1);
  uVar2 = FUN_0010334d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e46(param_1);
  uVar2 = FUN_0010336b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_0010338a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001023c6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010310e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034bd(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00101e22(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_001019b8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102162(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103568(undefined8 param_1)

{
  FUN_00103780(param_1);
  return;
}




undefined8 FUN_001034bd(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103c3e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102e7a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001034bd(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00104010(void)

{
  return 1;
}




void FUN_001040d7(void)

{
  return;
}




void FUN_0010314e(long param_1)

{
  FUN_00103568(param_1 + 0x20);
  return;
}




void FUN_00103b3d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001037e4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103894(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c7c(undefined8 param_1)

{
  FUN_0010340a(param_1);
  return;
}




void FUN_00101b82(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e22(param_1);
  FUN_00101db8(param_1,uVar1);
  FUN_00101a7c(param_1);
  return;
}




void FUN_00103894(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103946(param_2);
  puVar2 = (undefined4 *)FUN_00102c9a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102825(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010314e(param_1);
  FUN_00103170(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001031de(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103586(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001035ea(param_2);
                    /* try { // try from 0010324d to 001032df has its CatchHandler @ 0010330b */
    uVar2 = FUN_001031de(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103600(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103586(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001035ea(local_38);
      uVar2 = FUN_001031de(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103600(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010362a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a0e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a12(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc0(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010344d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001023ea(param_5);
  uVar2 = FUN_001023d8(param_4);
  uVar3 = FUN_001023c6(param_3);
  FUN_001036a2(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103792(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103835(param_2);
  FUN_00103848(uVar1,uVar2);
  return;
}




undefined8 FUN_001022bc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102962(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e38(undefined8 param_1,undefined8 param_2)

{
  FUN_0010226c(param_1,param_2);
  return;
}




void FUN_00102c26(undefined8 param_1)

{
  FUN_001033f8(param_1);
  return;
}




void FUN_00103ae6(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc0(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c9a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001023d8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ad4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010231a(param_2);
  uVar2 = FUN_0010338a(param_1);
  FUN_0010339c(uVar2,uVar1);
  return;
}




void FUN_00103d6c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a12(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a3c(param_1);
  return;
}




void FUN_00101d98(void)

{
  return;
}




undefined4 * FUN_00103586(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010314e(param_2);
  puVar2 = (undefined4 *)FUN_00103792(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_0010408a(void)

{
  return;
}




undefined8 FUN_00103780(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101ea6(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_0010230c(param_1);
  return unaff_EBX;
}




void FUN_001040ed(void)

{
  return;
}




undefined8 FUN_00103835(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b63(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101f52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233c(param_2);
  FUN_0010234e(param_1,uVar1);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_001029d0(undefined8 param_1,undefined8 param_2)

{
  FUN_001031b4(param_1,param_2);
  return;
}




void FUN_001040b6(void)

{
  return;
}




undefined8 FUN_001035ea(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010339c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103616(param_1,param_2);
  return;
}




void FUN_001031b4(void)

{
  return;
}




void FUN_00103c69(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102962(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010336b(undefined8 param_1)

{
  FUN_001019e5(param_1);
  return;
}




undefined8 FUN_00102b68(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102825(local_38);
    cVar1 = FUN_00101eee(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102201(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102217(local_38);
    }
  }
  FUN_00102962(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010247c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102de0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b52(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e5c(local_50);
    cVar2 = FUN_00101eee(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e5c(local_50);
      cVar2 = FUN_00101eee(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010310e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e46(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e46(local_60);
          local_48[1] = 0;
          FUN_00102e7a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001030e2(local_48);
          uVar6 = FUN_00102e5c(*puVar5);
          cVar2 = FUN_00101eee(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102eba(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102201(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102e7a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010306e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103058(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103058(local_60);
        uVar6 = FUN_00103058(local_60);
        FUN_0010306e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001030b6(local_48);
        uVar6 = FUN_00102e5c(*puVar5);
        cVar2 = FUN_00101eee(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102eba(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102201(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102e7a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010306e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010280a;
  }
  lVar3 = FUN_00102e30(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_0010251e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e46(local_60);
    uVar6 = FUN_00102e5c(*puVar5);
    cVar2 = FUN_00101eee(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_0010251e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e46(local_60);
    local_48[1] = 0;
    FUN_00102e7a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102eba(local_60,param_3);
  }
LAB_0010280a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00101f15(undefined8 param_1)

{
  return param_1;
}




void FUN_001040e2(void)

{
  return;
}




void FUN_00104309(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_00103058(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103652(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001037cc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010334d(undefined8 param_1)

{
  FUN_001019b8(param_1);
  return;
}




void FUN_0010341f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103652(param_1,param_2,0);
  return;
}




void FUN_00101d78(undefined8 param_1)

{
  FUN_001021f2(param_1);
  return;
}




void FUN_001040a0(void)

{
  return;
}




undefined8 FUN_001037cc(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_0010340a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010230c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_001023fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102cd6(param_1);
  uVar2 = FUN_001023ea(param_4);
  uVar3 = FUN_001023d8(param_3);
  uVar4 = FUN_001023c6(param_2);
  FUN_00102d02(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00102e46(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104095(void)

{
  return;
}




void FUN_001017be(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abc(local_88);
                    /* try { // try from 001017f9 to 0010189c has its CatchHandler @ 001018e8 */
  pvVar1 = operator_new__(800);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101bc0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101afc(local_58,local_88);
                    /* try { // try from 001018a4 to 001018a8 has its CatchHandler @ 001018d3 */
  FUN_00103ae6(local_58);
  FUN_00101adc(local_58);
  FUN_00101adc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



