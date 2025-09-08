
undefined8 FUN_001023b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010422b(void)

{
  return;
}




void FUN_0010428e(void)

{
  return;
}




undefined8 FUN_00102654(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102392(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010317c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 001031ce to 0010324b has its CatchHandler @ 00103297 */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103482(local_58,local_88);
                    /* try { // try from 00103253 to 00103257 has its CatchHandler @ 00103282 */
  FUN_00101747(local_58);
  FUN_00103462(local_58);
  FUN_00103462(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d25(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102956(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102576(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010184f(0x28,param_2);
  uVar1 = FUN_00101ddc(param_5);
  uVar2 = FUN_00101dca(param_4);
  uVar3 = FUN_00101db8(param_3);
  uVar4 = FUN_00101d0c(param_2);
  uVar5 = FUN_00102acc(param_1);
                    /* try { // try from 00102605 to 00102609 has its CatchHandler @ 0010260c */
  FUN_00102b0c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010184f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d0c(long param_1)

{
  FUN_0010249a(param_1 + 0x20);
  return;
}




void FUN_00103f03(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




bool FUN_001043d4(pthread_t *param_1)

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




void FUN_001044ea(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102df4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001019ec(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101cae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102392(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023c6(param_1);
  uVar2 = FUN_001023b0(param_1);
  FUN_001023dc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103f8f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103e2b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103f5c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_001041f0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010442f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103806(void)

{
  return;
}




void FUN_00104509(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a94(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d78(param_1,param_2);
  return;
}




void FUN_001035f2(void)

{
  return;
}




void FUN_00104236(void)

{
  return;
}




void FUN_00101d40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2e(param_2);
  FUN_001024b8(param_1,uVar1);
  return;
}




void FUN_001044cb(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001042af(void)

{
  return;
}




void FUN_00103dd5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001026ee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f2e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d0c(param_2);
  uVar2 = FUN_00102acc(param_1);
  FUN_00102c44(uVar2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_001026a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103b5e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102b7c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010381a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101af6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102e1c(void)

{
  return 0x333333333333333;
}




void FUN_00103c7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bae(param_3);
  FUN_00103cb8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001032d9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103cff("Calling good()...");
  FUN_001032c4();
  FUN_00103cff("Finished good()");
  FUN_00103cff("Calling bad()...");
  FUN_00102f04();
  FUN_00103cff("Finished bad()");
  return 0;
}




void FUN_00104241(void)

{
  return;
}




undefined8 FUN_00102ab6(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010254a(param_1);
  uVar2 = FUN_00103bae(param_2);
  FUN_00103c0c(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 * FUN_0010296c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101ddc(undefined8 param_1)

{
  return param_1;
}




void FUN_00104262(void)

{
  return;
}




undefined8 FUN_0010250e(undefined8 param_1)

{
  return param_1;
}




long FUN_0010333e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102520(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2e(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00102dbb(undefined8 param_1)

{
  return param_1;
}




void FUN_001026d0(undefined8 param_1)

{
  FUN_00102217(param_1);
  return;
}




void FUN_00104257(void)

{
  return;
}




undefined8 FUN_00101abe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2e(param_2);
  FUN_00101d40(param_1,uVar1);
  return param_1;
}




undefined8
FUN_00101b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101ddc(param_5);
  uVar2 = FUN_00101dca(param_4);
  uVar3 = FUN_00101db8(param_3);
  local_40 = FUN_00101dee(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101b94 to 00101bd7 has its CatchHandler @ 00101c15 */
  uVar1 = FUN_00102217(local_40);
  local_38 = FUN_00101e6e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102354(param_1,local_40);
    FUN_00102392(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010226a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102354(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a10(param_1,param_2);
  FUN_00102a54(param_1,param_2);
  return;
}




long FUN_00103702(long param_1)

{
  return param_1 + 0x10;
}




long FUN_001023c6(long param_1)

{
  return param_1 + 8;
}




void FUN_00102c44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102de0(param_1,param_2);
  return;
}




void FUN_001019a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c5e(param_1,param_2);
  return;
}




void FUN_001035d2(undefined8 param_1)

{
  FUN_0010377c(param_1);
  return;
}




void FUN_00104220(void)

{
  return;
}




void FUN_00103e56(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010424c(void)

{
  return;
}




void FUN_001045b0(void)

{
  return;
}




void FUN_001019ce(undefined8 param_1)

{
  FUN_00101cae(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00103462(undefined8 param_1)

{
  FUN_00103508(param_1);
  return;
}




undefined4 FUN_00101a12(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101cfe(param_1);
  return unaff_EBX;
}




void FUN_00102f04(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 00102f56 to 00102fd3 has its CatchHandler @ 0010301f */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103482(local_58,local_88);
                    /* try { // try from 00102fdb to 00102fdf has its CatchHandler @ 0010300a */
  FUN_00101549(local_58);
  FUN_00103462(local_58);
  FUN_00103462(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_0010292a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102998(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b7c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010184f(0x28,param_2);
  uVar1 = FUN_00103bae(param_3);
  uVar2 = FUN_00101d0c(param_2);
  uVar3 = FUN_00102acc(param_1);
  FUN_00103c7a(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101dee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010254a(param_1);
  uVar2 = FUN_00101ddc(param_4);
  uVar3 = FUN_00101dca(param_3);
  uVar4 = FUN_00101db8(param_2);
  FUN_00102576(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103422(undefined8 param_1)

{
  FUN_001034ac(param_1);
  return;
}




void FUN_00103cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103bae(param_3);
  puVar2 = (undefined8 *)FUN_0010184f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_00104452(undefined8 *param_1)

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




void FUN_001042a4(void)

{
  return;
}




long FUN_001026ba(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_001041e1(void)

{
  return 0;
}




undefined8 FUN_00103bae(undefined8 param_1)

{
  return param_1;
}




void FUN_00101865(void)

{
  return;
}




void FUN_00103718(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010381a(local_18,param_1);
  FUN_00103838(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e34(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102e86(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103922(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101cfe(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109028 = 1;
    return;
  }
  return;
}




long FUN_0010336b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f0(param_2);
  uVar1 = FUN_0010250e(uVar1);
  FUN_00102520(param_1,uVar1);
  return;
}




void FUN_00104215(void)

{
  return;
}




undefined8 FUN_0010272e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001023b0(param_1);
  local_50 = FUN_001023c6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102217(local_58);
    local_59 = FUN_00101a5a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102956(local_58);
    }
    else {
      local_58 = FUN_00102a8e(local_58);
    }
  }
  FUN_00102392(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102b8e(param_1);
    cVar1 = FUN_001019ec(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bde(local_38,&local_58,&local_50);
      goto LAB_001028b0;
    }
    FUN_0010292a(&local_48);
  }
  uVar2 = FUN_001026d0(local_48);
  cVar1 = FUN_00101a5a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102998(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bde(local_38,&local_58,&local_50);
  }
LAB_001028b0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010249a(undefined8 param_1)

{
  FUN_00102aa4(param_1);
  return;
}




undefined8
FUN_0010226a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001023c6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026d0(param_3);
      uVar5 = FUN_00102217(param_4);
      cVar1 = FUN_00101a5a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001022ee;
      }
    }
  }
  bVar2 = true;
LAB_001022ee:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102392(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102df4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103e00(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ade(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca0(param_1,param_2,0);
  return;
}




ulong FUN_001040f3(long param_1,ulong param_2,long param_3)

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




undefined4 FUN_00101a5a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101747(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101878(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103cff("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d57(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e86(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ec8(param_2);
  puVar2 = (undefined4 *)FUN_0010250e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_001024f0(undefined8 param_1)

{
  FUN_00102ab6(param_1);
  return;
}




void FUN_0010390e(void)

{
  return;
}




undefined8 FUN_001041d2(void)

{
  return 1;
}




undefined8 FUN_00104307(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001042d0,local_18);
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




void FUN_00103402(undefined8 param_1)

{
  FUN_001034e8(param_1);
  return;
}




void FUN_00102bde(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102dbb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103508(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023b0(param_1);
  FUN_00103612(param_1,uVar1);
  FUN_00103402(param_1);
  return;
}




void FUN_001029d8(long param_1)

{
  FUN_00102c26(param_1 + 0x20);
  return;
}




void FUN_00103398(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001033c2(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102654(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023c6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026d0(local_50);
    cVar2 = FUN_00101a5a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026d0(local_50);
      cVar2 = FUN_00101a5a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102998(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001026ba(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001026ba(local_60);
          local_48[1] = 0;
          FUN_001026ee(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010296c(local_48);
          uVar6 = FUN_001026d0(*puVar5);
          cVar2 = FUN_00101a5a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010272e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102956(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001026ee(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001028e2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028cc(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028cc(local_60);
        uVar6 = FUN_001028cc(local_60);
        FUN_001028e2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010292a(local_48);
        uVar6 = FUN_001026d0(*puVar5);
        cVar2 = FUN_00101a5a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010272e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102956(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001026ee(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001028e2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001021fc;
  }
  lVar3 = FUN_001026a4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101f10:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001026ba(local_60);
    uVar6 = FUN_001026d0(*puVar5);
    cVar2 = FUN_00101a5a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101f10;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001026ba(local_60);
    local_48[1] = 0;
    FUN_001026ee(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010272e(local_60,param_3);
  }
LAB_001021fc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00101a38(undefined8 *param_1)

{
  FUN_00101d0c(*param_1);
  return;
}




void FUN_0010254a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102acc(param_1);
  FUN_00102ade(uVar1,1);
  return;
}




void FUN_0010377c(void)

{
  return;
}




undefined8 FUN_001036ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102ec8(undefined8 param_1)

{
  FUN_00102ee6(param_1);
  return;
}




void FUN_00103e81(undefined4 param_1)

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




void FUN_0010304c(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103442(local_88);
  local_58[0] = 0;
                    /* try { // try from 001030a0 to 00103103 has its CatchHandler @ 0010314f */
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101878(local_88,local_58);
  *puVar1 = 7;
  FUN_00103482(local_58,local_88);
                    /* try { // try from 0010310b to 0010310f has its CatchHandler @ 0010313a */
  FUN_00101648(local_58);
  FUN_00103462(local_58);
  FUN_00103462(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010420a(void)

{
  return;
}




void FUN_001042ba(void)

{
  return;
}




void FUN_001033c2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103d7f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_00103ae4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029d8(param_2);
  puVar2 = (undefined4 *)FUN_00103b74(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00102dce(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d2e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103bae(param_2);
  FUN_00103bc0(uVar1,uVar2);
  return;
}




undefined8 FUN_00102aa4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103482(undefined8 param_1,undefined8 param_2)

{
  FUN_00103546(param_1,param_2);
  return;
}




undefined8 FUN_00103838(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023c6(param_1);
  uVar2 = FUN_00103922(param_2);
  uVar1 = FUN_00103938(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028cc(param_1);
  uVar2 = FUN_00103aa7(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001026ba(param_1);
  uVar2 = FUN_00103ac5(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102b8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102392(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cff(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010367c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010378b(param_1,param_2);
  FUN_00103806(param_1,param_2);
  FUN_00103398(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103aa7(undefined8 param_1)

{
  FUN_0010333e(param_1);
  return;
}




long FUN_001028cc(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102217(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029d8(param_1);
  FUN_001029fa(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db8(param_3);
  uVar1 = FUN_00101dca(param_4);
  FUN_00101a94(local_38,uVar1);
  FUN_00101ddc(param_5);
  uVar1 = FUN_0010184f(8,param_2);
                    /* try { // try from 00102d78 to 00102d7c has its CatchHandler @ 00102d7f */
  FUN_00102e34(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d57(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102de0(void)

{
  return;
}




undefined8 FUN_001029fa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c26(undefined8 param_1)

{
  FUN_00102dce(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_00101a81(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103fef(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101dca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010378b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001038e0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010426d(void)

{
  return;
}




long FUN_00103938(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103ae4(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103b48(param_2);
                    /* try { // try from 001039a7 to 00103a39 has its CatchHandler @ 00103a65 */
    uVar2 = FUN_00103938(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103b5e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103ae4(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103b48(local_38);
      uVar2 = FUN_00103938(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103b5e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102392(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001042d0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103dab(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001024b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2e(param_2);
  FUN_00102520(param_1,uVar1);
  return;
}




void FUN_00101549(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101878(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103cff("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d57(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101ddc(param_5);
  uVar2 = FUN_00101dca(param_4);
  uVar3 = FUN_00101db8(param_3);
  FUN_00102cf0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104299(void)

{
  return;
}




void FUN_001037dc(undefined8 param_1,undefined8 param_2)

{
  FUN_0010390e(param_1,param_2);
  return;
}




void FUN_00103546(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010367c(param_1,param_2);
  lVar1 = FUN_001036ec(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103702(param_1);
                    /* try { // try from 001035a1 to 001035a5 has its CatchHandler @ 001035ab */
    uVar3 = FUN_00103718(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103442(undefined8 param_1)

{
  FUN_00103422(param_1);
  return;
}




void FUN_00103edb(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102acc(undefined8 param_1)

{
  return param_1;
}




void FUN_001034e8(undefined8 param_1)

{
  FUN_00103602(param_1);
  return;
}




void FUN_00102ca0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102e1c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_00102a8e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001023dc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102217(local_38);
    cVar1 = FUN_00101a5a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102956(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102a8e(local_38);
    }
  }
  FUN_00102392(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001042c5(void)

{
  return;
}




void FUN_00104540(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001032c4(void)

{
  FUN_0010304c();
  FUN_0010317c();
  return;
}




undefined8 FUN_001038e0(undefined8 param_1,undefined8 param_2)

{
  FUN_001037dc(param_1,param_2);
  return param_1;
}




void FUN_001034ac(long param_1)

{
  FUN_001035d2(param_1);
  FUN_001035f2(param_1);
  FUN_00103398(param_1 + 8);
  return;
}




void FUN_00103612(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102956(local_28);
    FUN_00103612(param_1,uVar1);
    lVar2 = FUN_00102a8e(local_28);
    FUN_00102354(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00101db8(undefined8 param_1)

{
  return param_1;
}




void FUN_00104283(void)

{
  return;
}




void FUN_00103ac5(undefined8 param_1)

{
  FUN_0010336b(param_1);
  return;
}




void FUN_00103602(void)

{
  return;
}




void FUN_001028e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b7c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b7c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101648(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101878(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103cff("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d57(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102acc(param_1);
  FUN_00102c6e(uVar1,param_2,1);
  return;
}




void FUN_00102ee6(undefined8 param_1)

{
  FUN_001024f0(param_1);
  return;
}




void FUN_00104278(void)

{
  return;
}




long FUN_00101878(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001019a4(param_1,param_2);
  local_28 = FUN_001019ce(param_1);
  cVar2 = FUN_001019ec(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101a12(param_1);
    uVar3 = FUN_00101a38(&local_38);
    cVar2 = FUN_00101a5a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101918;
    }
  }
  bVar1 = true;
LAB_00101918:
  if (bVar1) {
    uVar3 = FUN_00101a81(param_2);
    FUN_00101abe(local_30,uVar3);
    FUN_00101af6(&local_28,&local_38);
    local_38 = FUN_00101b18(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a38(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}



