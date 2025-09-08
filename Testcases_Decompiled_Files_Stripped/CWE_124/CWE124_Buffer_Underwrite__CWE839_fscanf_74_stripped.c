
undefined8 FUN_001029cc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cb8(param_3);
  uVar1 = FUN_00101cca(param_4);
  FUN_00101994(local_38,uVar1);
  FUN_00101cdc(param_5);
  uVar1 = FUN_0010174f(8,param_2);
                    /* try { // try from 00102c78 to 00102c7c has its CatchHandler @ 00102c7f */
  FUN_00102d34(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103738(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022c6(param_1);
  uVar2 = FUN_00103822(param_2);
  uVar1 = FUN_00103838(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027cc(param_1);
  uVar2 = FUN_001039a7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001025ba(param_1);
  uVar2 = FUN_001039c5(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104178(void)

{
  return;
}




void FUN_00102de6(undefined8 param_1)

{
  FUN_001023f0(param_1);
  return;
}




void FUN_00102ba0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d1c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00102292(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_001027cc(long param_1)

{
  return param_1 + 0x18;
}




bool FUN_001042d4(pthread_t *param_1)

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




void FUN_001023b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c2e(param_2);
  FUN_00102420(param_1,uVar1);
  return;
}




void FUN_00103446(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010357c(param_1,param_2);
  lVar1 = FUN_001035ec(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103602(param_1);
                    /* try { // try from 001034a1 to 001034a5 has its CatchHandler @ 001034ab */
    uVar3 = FUN_00103618(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001025ee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001025d0(undefined8 param_1)

{
  FUN_00102117(param_1);
  return;
}




void FUN_00101687(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101778(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00103bff("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c57(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001041ba(void)

{
  return;
}




undefined8 FUN_00104352(undefined8 *param_1)

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




void FUN_001043cb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103e03(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102476(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010174f(0x28,param_2);
  uVar1 = FUN_00101cdc(param_5);
  uVar2 = FUN_00101cca(param_4);
  uVar3 = FUN_00101cb8(param_3);
  uVar4 = FUN_00101c0c(param_2);
  uVar5 = FUN_001029cc(param_1);
                    /* try { // try from 00102505 to 00102509 has its CatchHandler @ 0010250c */
  FUN_00102a0c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c25(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 * FUN_0010282a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001041a4(void)

{
  return;
}




void FUN_00102cf4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010432f(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001031d9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103bff("Calling good()...");
  FUN_001031c4();
  FUN_00103bff("Finished good()");
  FUN_00103bff("Calling bad()...");
  FUN_00102e04();
  FUN_00103bff("Finished bad()");
  return 0;
}




undefined8 FUN_00101cdc(undefined8 param_1)

{
  return param_1;
}




long FUN_00101778(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018a4(param_1,param_2);
  local_28 = FUN_001018ce(param_1);
  cVar2 = FUN_001018ec(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101912(param_1);
    uVar3 = FUN_00101938(&local_38);
    cVar2 = FUN_0010195a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101818;
    }
  }
  bVar1 = true;
LAB_00101818:
  if (bVar1) {
    uVar3 = FUN_00101981(param_2);
    FUN_001019be(local_30,uVar3);
    FUN_001019f6(&local_28,&local_38);
    local_38 = FUN_00101a18(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101938(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_00102cbb(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c2e(param_2);
  FUN_001023b8(param_1,uVar1);
  return;
}




void FUN_00104120(void)

{
  return;
}




void FUN_00101bfe(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101778(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c57(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103bff("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103362(undefined8 param_1)

{
  FUN_00103408(param_1);
  return;
}




undefined8 FUN_001025a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




long FUN_00103602(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103e2e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104157(void)

{
  return;
}




void FUN_0010380e(void)

{
  return;
}




void FUN_001018ce(undefined8 param_1)

{
  FUN_00101bae(param_1);
  return;
}




void FUN_001032c2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104141(void)

{
  return;
}




void FUN_00102e04(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103342(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 00102e56 to 00102ed3 has its CatchHandler @ 00102f1f */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103382(local_58,local_88);
                    /* try { // try from 00102edb to 00102edf has its CatchHandler @ 00102f0a */
  FUN_00101509(local_58);
  FUN_00103362(local_58);
  FUN_00103362(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028d8(long param_1)

{
  FUN_00102b26(param_1 + 0x20);
  return;
}




void FUN_00102b26(undefined8 param_1)

{
  FUN_00102cce(param_1);
  return;
}




undefined8 FUN_00103822(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ce0(param_1,param_2);
  return;
}




void FUN_00103502(void)

{
  return;
}




void FUN_00102ce0(void)

{
  return;
}




undefined8 FUN_00102554(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102292(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001025ba(long param_1)

{
  return param_1 + 0x20;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_001029a4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d00(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101c2e(undefined8 param_1)

{
  return param_1;
}




void FUN_001029de(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ba0(param_1,param_2,0);
  return;
}




void FUN_00103408(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022b0(param_1);
  FUN_00103512(param_1,uVar1);
  FUN_00103302(param_1);
  return;
}




undefined8 FUN_001022dc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102117(local_38);
    cVar1 = FUN_0010195a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102856(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010298e(local_38);
    }
  }
  FUN_00102292(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103bff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001041c5(void)

{
  return;
}




void FUN_0010239a(undefined8 param_1)

{
  FUN_001029a4(param_1);
  return;
}




undefined8 FUN_00101cee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010244a(param_1);
  uVar2 = FUN_00101cdc(param_4);
  uVar3 = FUN_00101cca(param_3);
  uVar4 = FUN_00101cb8(param_2);
  FUN_00102476(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103a74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103aae(param_2);
  FUN_00103ac0(uVar1,uVar2);
  return;
}




void FUN_001023f0(undefined8 param_1)

{
  FUN_001029b6(param_1);
  return;
}




void FUN_00103706(void)

{
  return;
}




void FUN_00102dc8(undefined8 param_1)

{
  FUN_00102de6(param_1);
  return;
}




void FUN_00102f4c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103342(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102fa0 to 00103003 has its CatchHandler @ 0010304f */
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = 7;
  FUN_00103382(local_58,local_88);
                    /* try { // try from 0010300b to 0010300f has its CatchHandler @ 0010303a */
  FUN_001015c8(local_58);
  FUN_00103362(local_58);
  FUN_00103362(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010414c(void)

{
  return;
}




void FUN_001019f6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001028fa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104162(void)

{
  return;
}




void FUN_00101c0c(long param_1)

{
  FUN_0010239a(param_1 + 0x20);
  return;
}




undefined8 FUN_00102cce(undefined8 param_1)

{
  return param_1;
}




void FUN_001044b0(void)

{
  return;
}




void FUN_00104136(void)

{
  return;
}




undefined8 FUN_001022b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103d2b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103618(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010371a(local_18,param_1);
  FUN_00103738(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103ff3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010262e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001022b0(param_1);
  local_50 = FUN_001022c6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102117(local_58);
    local_59 = FUN_0010195a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102856(local_58);
    }
    else {
      local_58 = FUN_0010298e(local_58);
    }
  }
  FUN_00102292(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a8e(param_1);
    cVar1 = FUN_001018ec(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102ade(local_38,&local_58,&local_50);
      goto LAB_001027b0;
    }
    FUN_0010282a(&local_48);
  }
  uVar2 = FUN_001025d0(local_48);
  cVar1 = FUN_0010195a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102898(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102ade(local_38,&local_58,&local_50);
  }
LAB_001027b0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102554(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022c6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025d0(local_50);
    cVar2 = FUN_0010195a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025d0(local_50);
      cVar2 = FUN_0010195a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102898(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001025ba(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001025ba(local_60);
          local_48[1] = 0;
          FUN_001025ee(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010286c(local_48);
          uVar6 = FUN_001025d0(*puVar5);
          cVar2 = FUN_0010195a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010262e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102856(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025ee(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027e2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027cc(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027cc(local_60);
        uVar6 = FUN_001027cc(local_60);
        FUN_001027e2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010282a(local_48);
        uVar6 = FUN_001025d0(*puVar5);
        cVar2 = FUN_0010195a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010262e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102856(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025ee(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027e2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020fc;
  }
  lVar3 = FUN_001025a4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e10:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001025ba(local_60);
    uVar6 = FUN_001025d0(*puVar5);
    cVar2 = FUN_0010195a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e10;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001025ba(local_60);
    local_48[1] = 0;
    FUN_001025ee(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010262e(local_60,param_3);
  }
LAB_001020fc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_00103838(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001039e4(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103a48(param_2);
                    /* try { // try from 001038a7 to 00103939 has its CatchHandler @ 00103965 */
    uVar2 = FUN_00103838(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103a5e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001039e4(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103a48(local_38);
      uVar2 = FUN_00103838(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103a5e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00102856(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102d1c(void)

{
  return 0x333333333333333;
}




undefined8 FUN_00102a7c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010298e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001035ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001041af(void)

{
  return;
}




void FUN_00103322(undefined8 param_1)

{
  FUN_001033ac(param_1);
  return;
}




void FUN_00104409(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102420(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c2e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101765(void)

{
  return;
}




void FUN_00102254(undefined8 param_1,undefined8 param_2)

{
  FUN_00102910(param_1,param_2);
  FUN_00102954(param_1,param_2);
  return;
}




void FUN_0010367c(void)

{
  return;
}




void FUN_00102ade(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102cbb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a7c(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103eef(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104440(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined4 * FUN_001039e4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028d8(param_2);
  puVar2 = (undefined4 *)FUN_00103a74(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001033ac(long param_1)

{
  FUN_001034d2(param_1);
  FUN_001034f2(param_1);
  FUN_00103298(param_1 + 8);
  return;
}




void FUN_00103b7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103aae(param_3);
  FUN_00103bb8(param_1,param_2,uVar1);
  return;
}




void FUN_0010307c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103342(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 001030ce to 0010314b has its CatchHandler @ 00103197 */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101778(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103382(local_58,local_88);
                    /* try { // try from 00103153 to 00103157 has its CatchHandler @ 00103182 */
  FUN_00101687(local_58);
  FUN_00103362(local_58);
  FUN_00103362(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039a7(undefined8 param_1)

{
  FUN_0010323e(param_1);
  return;
}




void FUN_00102910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c0c(param_2);
  uVar2 = FUN_001029cc(param_1);
  FUN_00102b44(uVar2,uVar1);
  return;
}




void FUN_00101c78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023f0(param_2);
  uVar1 = FUN_0010240e(uVar1);
  FUN_00102420(param_1,uVar1);
  return;
}




undefined8 FUN_0010240e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cf4(param_1,param_2,param_3);
  return;
}




void FUN_00103d56(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cd5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined4 FUN_00101912(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bfe(param_1);
  return unaff_EBX;
}




undefined8 FUN_0010368b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037e0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001041d0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010371a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001039c5(undefined8 param_1)

{
  FUN_0010326b(param_1);
  return;
}




void FUN_0010418e(void)

{
  return;
}




undefined8 FUN_001018ec(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010410a(void)

{
  return;
}




void FUN_00103512(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102856(local_28);
    FUN_00103512(param_1,uVar1);
    lVar2 = FUN_0010298e(local_28);
    FUN_00102254(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001027e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a7c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010412b(void)

{
  return;
}




undefined8 FUN_00101bae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102292(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103298(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001032c2(param_1);
  return;
}




undefined8 FUN_00103aae(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e5c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103382(undefined8 param_1,undefined8 param_2)

{
  FUN_00103446(param_1,param_2);
  return;
}




undefined8 FUN_00101981(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101cb8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010416d(void)

{
  return;
}




void FUN_00103cab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001040e1(void)

{
  return 0;
}




void FUN_00102d34(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d86(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102954(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029cc(param_1);
  FUN_00102b6e(uVar1,param_2,1);
  return;
}




void FUN_001034f2(void)

{
  return;
}




void FUN_00104183(void)

{
  return;
}




void FUN_00101994(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c78(param_1,param_2);
  return;
}




void FUN_0010357c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010368b(param_1,param_2);
  FUN_00103706(param_1,param_2);
  FUN_00103298(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031c4(void)

{
  FUN_00102f4c();
  FUN_0010307c();
  return;
}




void FUN_001033e8(undefined8 param_1)

{
  FUN_00103502(param_1);
  return;
}




undefined8 FUN_00101cca(undefined8 param_1)

{
  return param_1;
}




void FUN_0010244a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029cc(param_1);
  FUN_001029de(uVar1,1);
  return;
}




void FUN_001043ea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022c6(param_1);
  uVar2 = FUN_001022b0(param_1);
  FUN_001022dc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102898(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a7c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103d81(undefined4 param_1)

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




undefined8 FUN_001040d2(void)

{
  return 1;
}




undefined8 FUN_001029b6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104115(void)

{
  return;
}




undefined8 FUN_001019be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c2e(param_2);
  FUN_00101c40(param_1,uVar1);
  return param_1;
}




void FUN_00104199(void)

{
  return;
}




undefined8 FUN_00102a8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102292(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102117(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028d8(param_1);
  FUN_001028fa(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103342(undefined8 param_1)

{
  FUN_00103322(param_1);
  return;
}




undefined4 FUN_0010195a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103ddb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103aae(param_3);
  puVar2 = (undefined8 *)FUN_0010174f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_00103a5e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104207(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001041d0,local_18);
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




void FUN_00103302(undefined8 param_1)

{
  FUN_001033e8(param_1);
  return;
}




void FUN_00103b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010174f(0x28,param_2);
  uVar1 = FUN_00103aae(param_3);
  uVar2 = FUN_00101c0c(param_2);
  uVar3 = FUN_001029cc(param_1);
  FUN_00103b7a(uVar3,uVar2,uVar1);
  return;
}




void FUN_001034d2(undefined8 param_1)

{
  FUN_0010367c(param_1);
  return;
}




undefined8 FUN_0010174f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001018a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b5e(param_1,param_2);
  return;
}




void FUN_00101938(undefined8 *param_1)

{
  FUN_00101c0c(*param_1);
  return;
}




long FUN_0010326b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cdc(param_5);
  uVar2 = FUN_00101cca(param_4);
  uVar3 = FUN_00101cb8(param_3);
  FUN_00102bf0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001037e0(undefined8 param_1,undefined8 param_2)

{
  FUN_001036dc(param_1,param_2);
  return param_1;
}




void FUN_00103e8f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00103ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010244a(param_1);
  uVar2 = FUN_00103aae(param_2);
  FUN_00103b0c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103c7f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 * FUN_0010286c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




int FUN_001040f0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c57(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102d86(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102dc8(param_2);
  puVar2 = (undefined4 *)FUN_0010240e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8
FUN_0010216a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022c6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025d0(param_3);
      uVar5 = FUN_00102117(param_4);
      cVar1 = FUN_0010195a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021ee;
      }
    }
  }
  bVar2 = true;
LAB_001021ee:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102292(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_0010323e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8
FUN_00101a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cdc(param_5);
  uVar2 = FUN_00101cca(param_4);
  uVar3 = FUN_00101cb8(param_3);
  local_40 = FUN_00101cee(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a94 to 00101ad7 has its CatchHandler @ 00101b15 */
  uVar1 = FUN_00102117(local_40);
  local_38 = FUN_00101d6e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102254(param_1,local_40);
    FUN_00102292(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010216a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001036dc(undefined8 param_1,undefined8 param_2)

{
  FUN_0010380e(param_1,param_2);
  return;
}




void FUN_001015c8(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101778(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c57(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103bff("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001022c6(long param_1)

{
  return param_1 + 8;
}



