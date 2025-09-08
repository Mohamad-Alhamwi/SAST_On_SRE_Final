
undefined8 FUN_00104480(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00104676(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 FUN_00102f64(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00103ea6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001041c4(long param_1)

{
  FUN_001045de(param_1 + 0x20);
  return;
}




void FUN_0010490a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001049ba(param_2);
  puVar2 = (undefined4 *)FUN_00103d10(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00104842(void)

{
  return 0x333333333333333;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102570();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_00104c2b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010422a(void)

{
  return;
}




void FUN_0010494c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00102a04(0x28,param_2);
  uVar1 = FUN_001048ab(param_3);
  uVar2 = FUN_00103390(param_2);
  uVar3 = FUN_00104400(param_1);
  FUN_001049d8(uVar3,uVar2,uVar1);
  return;
}




void FUN_001040e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104533(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104533(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001041fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a46(param_1,param_2);
  return param_1;
}




undefined8 FUN_00104400(undefined8 param_1)

{
  return param_1;
}




void FUN_0010485a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010490a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_001038ee(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00103bc8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00103ed2(param_3);
      uVar5 = FUN_0010389b(param_4);
      cVar1 = FUN_00102f64(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103972;
      }
    }
  }
  bVar2 = true;
LAB_00103972:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001039d8(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001048ab(param_3);
  puVar2 = (undefined8 *)FUN_00102a04(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103390(long param_1)

{
  FUN_00103c9c(param_1 + 0x20);
  return;
}




void FUN_00104495(undefined8 param_1,undefined8 param_2)

{
  FUN_001046c8(param_1,param_2,0);
  return;
}




undefined8 FUN_001050e7(void)

{
  return 0;
}




void FUN_00104de1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010540f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001048be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103d4c(param_1);
  uVar2 = FUN_001048ab(param_2);
  FUN_0010494c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001046c8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104842(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_00103f30(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102e98(param_1);
  local_50 = FUN_00103bc8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010389b(local_58);
    local_59 = FUN_00102f64(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103277(local_58);
    }
    else {
      local_58 = FUN_0010328d(local_58);
    }
  }
  FUN_001039d8(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00104546(param_1);
    cVar1 = FUN_00102ef6(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00104596(local_38,&local_58,&local_50);
      goto LAB_001040b2;
    }
    FUN_0010412c(&local_48);
  }
  uVar2 = FUN_00103ed2(local_48);
  cVar1 = FUN_00102f64(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00104184(local_38,&local_48,&local_40);
  }
  else {
    FUN_00104596(local_38,&local_58,&local_50);
  }
LAB_001040b2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102629(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b32(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001026df to 001027e0 has its CatchHandler @ 0010282f */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102c36(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102c36(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102c36(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_00102b72(local_78,local_a8);
                    /* try { // try from 001027e8 to 001027ec has its CatchHandler @ 0010281a */
  FUN_00104a7b(local_78);
  FUN_00102b52(local_78);
  FUN_00102b52(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102bd8(undefined8 param_1)

{
  FUN_00102e1e(param_1);
  return;
}




undefined8 FUN_001041e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010285f(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b32(local_88);
  local_58[0] = 0;
                    /* try { // try from 001028b3 to 00102916 has its CatchHandler @ 00102962 */
  puVar1 = (undefined4 *)FUN_00102c36(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102c36(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102c36(local_88,local_58);
  *puVar1 = 0x14;
  FUN_00102b72(local_58,local_88);
                    /* try { // try from 0010291e to 00102922 has its CatchHandler @ 0010294d */
  FUN_00104b40(local_58);
  FUN_00102b52(local_58);
  FUN_00102b52(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c9c(undefined8 param_1)

{
  FUN_0010446e(param_1);
  return;
}




void FUN_001054b0(void)

{
  return;
}




void FUN_001039d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a1a(void)

{
  return;
}




void FUN_00102e2e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103277(local_28);
    FUN_00102e2e(param_1,uVar1);
    lVar2 = FUN_0010328d(local_28);
    FUN_001032a4(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103d4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104400(param_1);
  FUN_00104495(uVar1,1);
  return;
}




void FUN_00102f9e(undefined8 param_1,undefined8 param_2)

{
  FUN_001033fc(param_1,param_2);
  return;
}




void FUN_0010511b(void)

{
  return;
}




void FUN_001044c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00103460(param_5);
  uVar2 = FUN_0010344e(param_4);
  uVar3 = FUN_0010343c(param_3);
  FUN_00104718(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103d10(undefined8 param_1)

{
  return param_1;
}




void FUN_00104596(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001047e3(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104533(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102fc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_2);
  FUN_001033c4(param_1,uVar1);
  return param_1;
}




void FUN_00102d62(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103168(param_1,param_2);
  lVar1 = FUN_001031d8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001031ee(param_1);
                    /* try { // try from 00102dbd to 00102dc1 has its CatchHandler @ 00102dc7 */
    uVar3 = FUN_00103204(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00104546(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001039d8(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105194(void)

{
  return;
}




undefined8 FUN_0010344e(undefined8 param_1)

{
  return param_1;
}




void FUN_00105152(void)

{
  return;
}




void FUN_00102b72(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d62(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_001049d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001048ab(param_3);
  FUN_00104a34(param_1,param_2,uVar1);
  return;
}




void FUN_00103382(void)

{
  return;
}




undefined8 FUN_0010446e(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010412c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00104533(undefined8 param_1)

{
  return param_1;
}




void FUN_00105147(void)

{
  return;
}




void FUN_00102ab2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102b9c(long param_1)

{
  FUN_00102dee(param_1);
  FUN_00102e0e(param_1);
  FUN_00102a88(param_1 + 8);
  return;
}




void FUN_00103268(void)

{
  return;
}




undefined8 FUN_0010299f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104c05("Calling good()...");
  FUN_0010298f();
  FUN_00104c05("Finished good()");
  FUN_00104c05("Calling bad()...");
  FUN_00102629();
  FUN_00104c05("Finished bad()");
  return 0;
}




undefined4 FUN_00102f1c(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00103382(param_1);
  return unaff_EBX;
}




void FUN_001053d1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104e09(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b52(undefined8 param_1)

{
  FUN_00102bf8(param_1);
  return;
}




void FUN_00104c85(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010515d(void)

{
  return;
}




void FUN_001051d6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104a7b(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_00102c36(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00104c5d(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00105189(void)

{
  return;
}




void FUN_00104c05(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_001031ee(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00102a04(0x28,param_2);
  uVar1 = FUN_00103460(param_5);
  uVar2 = FUN_0010344e(param_4);
  uVar3 = FUN_0010343c(param_3);
  uVar4 = FUN_00103390(param_2);
  uVar5 = FUN_00104400(param_1);
                    /* try { // try from 00103e07 to 00103e0b has its CatchHandler @ 00103e0e */
  FUN_001044c3(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001048ab(undefined8 param_1)

{
  return param_1;
}




void FUN_00102af2(undefined8 param_1)

{
  FUN_00102bd8(param_1);
  return;
}




void FUN_001046a0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001043e1(undefined8 param_1)

{
  FUN_00102a5a(param_1);
  return;
}




void FUN_00103cf2(undefined8 param_1)

{
  FUN_00104480(param_1);
  return;
}




void FUN_00104d5c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104d87(undefined4 param_1)

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




undefined8 FUN_00105358(undefined8 *param_1)

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




undefined8 FUN_00103460(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103a84(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00105110(void)

{
  return;
}




undefined8 FUN_001050d8(void)

{
  return 1;
}




void FUN_00103000(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010443c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046a0(param_1,param_2,param_3);
  return;
}




void FUN_00104d31(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102e1e(void)

{
  return;
}




ulong FUN_00104ff9(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001040ce(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104a15(undefined8 param_1)

{
  FUN_00103cf2(param_1);
  return;
}




void FUN_00102b32(undefined8 param_1)

{
  FUN_00102b12(param_1);
  return;
}




long FUN_00104254(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001045fc(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104660(param_2);
                    /* try { // try from 001042c3 to 00104355 has its CatchHandler @ 00104381 */
    uVar2 = FUN_00104254(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104676(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001045fc(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104660(local_38);
      uVar2 = FUN_00104254(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104676(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00105131(void)

{
  return;
}




void FUN_00104b40(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_00102c36(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00104c5d(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a88(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00102ab2(param_1);
  return;
}




void FUN_00102eae(undefined8 param_1,undefined8 param_2)

{
  FUN_001032e2(param_1,param_2);
  return;
}




void FUN_00103a70(void)

{
  return;
}




void FUN_001043c3(undefined8 param_1)

{
  FUN_00102a2d(param_1);
  return;
}




void FUN_00104808(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001048ab(param_2);
  FUN_001048be(uVar1,uVar2);
  return;
}




undefined8 FUN_001031d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001032e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103bc8(param_1);
  uVar2 = FUN_00102e98(param_1);
  FUN_00103bde(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001051b5(void)

{
  return;
}




undefined8
FUN_00103022(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00103460(param_5);
  uVar2 = FUN_0010344e(param_4);
  uVar3 = FUN_0010343c(param_3);
  local_40 = FUN_00103472(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010309e to 001030e1 has its CatchHandler @ 0010311f */
  uVar1 = FUN_0010389b(local_40);
  local_38 = FUN_001034f2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001032a4(param_1,local_40);
    FUN_001039d8(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001038ee(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




long FUN_00102a5a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00105173(void)

{
  return;
}




void FUN_0010517e(void)

{
  return;
}




undefined8 FUN_00103472(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103d4c(param_1);
  uVar2 = FUN_00103460(param_4);
  uVar3 = FUN_0010344e(param_3);
  uVar4 = FUN_0010343c(param_2);
  FUN_00103d78(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_0010343c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105335(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ed8(undefined8 param_1)

{
  FUN_00103332(param_1);
  return;
}




undefined8 * FUN_00104158(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102f42(undefined8 *param_1)

{
  FUN_00103390(*param_1);
  return;
}




void FUN_00104412(undefined8 param_1,undefined8 param_2)

{
  FUN_0010468c(param_1,param_2);
  return;
}




void FUN_00104718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010343c(param_3);
  uVar1 = FUN_0010344e(param_4);
  FUN_00102f9e(local_38,uVar1);
  FUN_00103460(param_5);
  uVar1 = FUN_00102a04(8,param_2);
                    /* try { // try from 001047a0 to 001047a4 has its CatchHandler @ 001047a7 */
  FUN_0010485a(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010520d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001051d6,local_18);
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




void FUN_00103168(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001039f6(param_1,param_2);
  FUN_00103a70(param_1,param_2);
  FUN_00102a88(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ed2(undefined8 param_1)

{
  FUN_0010389b(param_1);
  return;
}




long FUN_00103bc8(long param_1)

{
  return param_1 + 8;
}




void FUN_0010513c(void)

{
  return;
}




undefined8 FUN_00102a04(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102dee(undefined8 param_1)

{
  FUN_00103268(param_1);
  return;
}




void FUN_00103cba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_2);
  FUN_00103d22(param_1,uVar1);
  return;
}




void FUN_00104cdb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103277(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001039f6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001041fc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e90)();
  return;
}




void FUN_0010519f(void)

{
  return;
}




void FUN_001051aa(void)

{
  return;
}




undefined8 FUN_00103e56(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001039d8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103cf2(param_2);
  uVar1 = FUN_00103d10(uVar1);
  FUN_00103d22(param_1,uVar1);
  return;
}




void FUN_001051cb(void)

{
  return;
}




void FUN_00103b4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103390(param_2);
  uVar2 = FUN_00104400(param_1);
  FUN_00104412(uVar2,uVar1);
  return;
}




long FUN_00102c36(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102eae(param_1,param_2);
  local_28 = FUN_00102ed8(param_1);
  cVar2 = FUN_00102ef6(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00102f1c(param_1);
    uVar3 = FUN_00102f42(&local_38);
    cVar2 = FUN_00102f64(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00102cd6;
    }
  }
  bVar1 = true;
LAB_00102cd6:
  if (bVar1) {
    uVar3 = FUN_00102f8b(param_2);
    FUN_00102fc8(local_30,uVar3);
    FUN_00103000(&local_28,&local_38);
    local_38 = FUN_00103022(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102f42(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




long FUN_00103ebc(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104e62(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102e0e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




undefined8 FUN_0010423e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104d06(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001034f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103e56(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103bc8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00103ed2(local_50);
    cVar2 = FUN_00102f64(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00103ed2(local_50);
      cVar2 = FUN_00102f64(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00104184(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103ebc(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103ebc(local_60);
          local_48[1] = 0;
          FUN_00103ef0(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00104158(local_48);
          uVar6 = FUN_00103ed2(*puVar5);
          cVar2 = FUN_00102f64(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103f30(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103277(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103ef0(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001040e4(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001040ce(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001040ce(local_60);
        uVar6 = FUN_001040ce(local_60);
        FUN_001040e4(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010412c(local_48);
        uVar6 = FUN_00103ed2(*puVar5);
        cVar2 = FUN_00102f64(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103f30(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103277(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103ef0(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001040e4(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103880;
  }
  lVar3 = FUN_00103ea6(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00103594:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103ebc(local_60);
    uVar6 = FUN_00103ed2(*puVar5);
    cVar2 = FUN_00102f64(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00103594;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103ebc(local_60);
    local_48[1] = 0;
    FUN_00103ef0(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103f30(local_60,param_3);
  }
LAB_00103880:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




ulong FUN_00104ef5(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001045de(undefined8 param_1)

{
  FUN_001047f6(param_1);
  return;
}




undefined8 FUN_00103aa2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103bc8(param_1);
  uVar2 = FUN_0010423e(param_2);
  uVar1 = FUN_00104254(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001040ce(param_1);
  uVar2 = FUN_001043c3(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103ebc(param_1);
  uVar2 = FUN_001043e1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_001047f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b12(undefined8 param_1)

{
  FUN_00102b9c(param_1);
  return;
}




undefined8 FUN_00103bde(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010389b(local_38);
    cVar1 = FUN_00102f64(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103277(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010328d(local_38);
    }
  }
  FUN_001039d8(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103ef0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00104533(param_3);
  param_1[1] = *puVar1;
  return;
}




int FUN_001050f6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104cb1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010468c(void)

{
  return;
}




void FUN_0010389b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001041c4(param_1);
  FUN_001041e6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103332(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001039d8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103204(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103a84(local_18,param_1);
  FUN_00103aa2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104e34(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104184(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104533(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b4a(param_1,param_2);
  FUN_00103b8e(param_1,param_2);
  return;
}




void FUN_0010298f(void)

{
  FUN_0010285f();
  return;
}




void FUN_00104c5d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001051c0(void)

{
  return;
}




void FUN_001053f0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001047e3(undefined8 param_1)

{
  return param_1;
}




void FUN_001049ba(undefined8 param_1)

{
  FUN_00104a15(param_1);
  return;
}




undefined8 FUN_00102f8b(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a46(undefined8 param_1,undefined8 param_2)

{
  FUN_0010422a(param_1,param_2);
  return;
}




undefined8 FUN_0010328d(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033b2(param_2);
  FUN_00103cba(param_1,uVar1);
  return;
}




void FUN_00105126(void)

{
  return;
}




void FUN_00104e95(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102bf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102e98(param_1);
  FUN_00102e2e(param_1,uVar1);
  FUN_00102af2(param_1);
  return;
}




long FUN_00102a2d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00104660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104400(param_1);
  FUN_0010443c(uVar1,param_2,1);
  return;
}




undefined8 FUN_001033b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00105168(void)

{
  return;
}




bool FUN_001052da(pthread_t *param_1)

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




undefined8 FUN_00102ef6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00105440(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined4 * FUN_001045fc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001041c4(param_2);
  puVar2 = (undefined4 *)FUN_00104808(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}



