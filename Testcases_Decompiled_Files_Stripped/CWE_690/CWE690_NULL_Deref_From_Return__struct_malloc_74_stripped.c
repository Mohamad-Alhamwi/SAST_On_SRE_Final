
undefined8 FUN_00102b65(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ded(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a4(local_88);
  pvVar1 = malloc(8);
  local_58[0] = 0;
                    /* try { // try from 00102e49 to 00102eb2 has its CatchHandler @ 00102efe */
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030e4(local_58,local_88);
                    /* try { // try from 00102eba to 00102ebe has its CatchHandler @ 00102ee9 */
  FUN_0010156d(local_58);
  FUN_001030c4(local_58);
  FUN_001030c4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103822(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022f4(param_1);
  uVar2 = FUN_00103810(param_2);
  FUN_0010386e(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001040bf(undefined8 *param_1)

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




void FUN_001030a4(undefined8 param_1)

{
  FUN_00103084(param_1);
  return;
}




void FUN_00102caf(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a4(local_88);
  pvVar1 = malloc(8);
  local_58[0] = 0;
                    /* try { // try from 00102d0b to 00102d74 has its CatchHandler @ 00102dc0 */
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101622(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030e4(local_58,local_88);
                    /* try { // try from 00102d7c to 00102d80 has its CatchHandler @ 00102dab */
  FUN_001014e9(local_58);
  FUN_001030c4(local_58);
  FUN_001030c4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023fe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010284e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024d8(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010215a(param_1);
  local_50 = FUN_00102170(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fc1(local_58);
    local_59 = FUN_00101804(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102700(local_58);
    }
    else {
      local_58 = FUN_00102838(local_58);
    }
  }
  FUN_0010213c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102938(param_1);
    cVar1 = FUN_00101796(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102988(local_38,&local_58,&local_50);
      goto LAB_0010265a;
    }
    FUN_001026d4(&local_48);
  }
  uVar2 = FUN_0010247a(local_48);
  cVar1 = FUN_00101804(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102742(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102988(local_38,&local_58,&local_50);
  }
LAB_0010265a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103468(void)

{
  return;
}




undefined8 FUN_001015f8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010174e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a08(param_1,param_2);
  return;
}




void FUN_001027fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102876(param_1);
  FUN_00102a18(uVar1,param_2,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_0010183e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b22(param_1,param_2);
  return;
}




void FUN_001027ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ab6(param_2);
  uVar2 = FUN_00102876(param_1);
  FUN_001029ee(uVar2,uVar1);
  return;
}




void FUN_00103e98(void)

{
  return;
}




undefined8 * FUN_00102716(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103bc9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102876(undefined8 param_1)

{
  return param_1;
}




void FUN_001041b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




long FUN_00102fcd(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_0010316a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010215a(param_1);
  FUN_00103274(param_1,uVar1);
  FUN_00103064(param_1);
  return;
}




void FUN_00102262(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad8(param_2);
  FUN_001022ca(param_1,uVar1);
  return;
}




undefined8
FUN_001018c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101b86(param_5);
  uVar2 = FUN_00101b74(param_4);
  uVar3 = FUN_00101b62(param_3);
  local_40 = FUN_00101b98(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010193e to 00101981 has its CatchHandler @ 001019bf */
  uVar1 = FUN_00101fc1(local_40);
  local_38 = FUN_00101c18(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020fe(param_1,local_40);
    FUN_0010213c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102014(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102f2b(void)

{
  FUN_00102ded();
  return;
}




undefined8 FUN_0010215a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103f11(void)

{
  return;
}




undefined8
FUN_00102014(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102170(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010247a(param_3);
      uVar5 = FUN_00101fc1(param_4);
      cVar1 = FUN_00101804(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102098;
      }
    }
  }
  bVar2 = true;
LAB_00102098:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010213c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined4 FUN_00101804(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_00103364(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102782(long param_1)

{
  FUN_001029d0(param_1 + 0x20);
  return;
}




void FUN_00103709(undefined8 param_1)

{
  FUN_00102fa0(param_1);
  return;
}




void FUN_00103ea3(void)

{
  return;
}




undefined8 FUN_00103f74(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f3d,local_18);
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




void FUN_001038dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103810(param_3);
  FUN_0010391a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101a58(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103264(void)

{
  return;
}




void FUN_00103f32(void)

{
  return;
}




void FUN_001030c4(undefined8 param_1)

{
  FUN_0010316a(param_1);
  return;
}




undefined8 FUN_00102938(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010213c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c30(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c73(param_2);
  puVar2 = (undefined4 *)FUN_001022b8(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010391a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103810(param_3);
  puVar3 = (undefined8 *)FUN_001015f8(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102c73(undefined8 param_1)

{
  FUN_00102c91(param_1);
  return;
}




undefined8 FUN_00103542(undefined8 param_1,undefined8 param_2)

{
  FUN_0010343e(param_1,param_2);
  return param_1;
}




long FUN_00102fa0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102742(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102926(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001027a4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_001017bc(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101aa8(param_1);
  return unaff_EBX;
}




void FUN_00102a4a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bc6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00103e4e(void)

{
  return 0;
}




void FUN_0010213c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102b78(undefined8 param_1)

{
  return param_1;
}




void FUN_0010343e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103570(param_1,param_2);
  return;
}




void FUN_0010247a(undefined8 param_1)

{
  FUN_00101fc1(param_1);
  return;
}




void FUN_00103b9b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102498(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102926(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010229a(undefined8 param_1)

{
  FUN_00102860(param_1);
  return;
}




void FUN_00103a6d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102676(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001037d6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103810(param_2);
  FUN_00103822(uVar1,uVar2);
  return;
}




void FUN_00103084(undefined8 param_1)

{
  FUN_0010310e(param_1);
  return;
}




void FUN_001030e4(undefined8 param_1,undefined8 param_2)

{
  FUN_001031a8(param_1,param_2);
  return;
}




void FUN_00103f3d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101b86(undefined8 param_1)

{
  return param_1;
}




void FUN_00102988(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b65(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102926(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103a18(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_00104041(pthread_t *param_1)

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




void FUN_001020fe(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ba(param_1,param_2);
  FUN_001027fe(param_1,param_2);
  return;
}




undefined8 FUN_00102f3b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010396c("Calling good()...");
  FUN_00102f2b();
  FUN_0010396c("Finished good()");
  FUN_0010396c("Calling bad()...");
  FUN_00102caf();
  FUN_0010396c("Finished bad()");
  return 0;
}




void FUN_00103f27(void)

{
  return;
}




undefined8 FUN_0010244e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




int FUN_00103e5d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103727(undefined8 param_1)

{
  FUN_00102fcd(param_1);
  return;
}




void FUN_00103ecf(void)

{
  return;
}




undefined8 FUN_00102838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001022b8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010396c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00102888(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a4a(param_1,param_2,0);
  return;
}




void FUN_00102ffa(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103024(param_1);
  return;
}




void FUN_00102b9e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b9e(param_1,param_2,param_3);
  return;
}




long FUN_0010359a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103746(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001037aa(param_2);
                    /* try { // try from 00103609 to 0010369b has its CatchHandler @ 001036c7 */
    uVar2 = FUN_0010359a(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037c0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103746(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001037aa(local_38);
      uVar2 = FUN_0010359a(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037c0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104220(void)

{
  return;
}




void FUN_001032de(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033ed(param_1,param_2);
  FUN_00103468(param_1,param_2);
  FUN_00102ffa(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_001026d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001018a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001015f8(0x30,param_2);
  uVar1 = FUN_00101b86(param_5);
  uVar2 = FUN_00101b74(param_4);
  uVar3 = FUN_00101b62(param_3);
  uVar4 = FUN_00101ab6(param_2);
  uVar5 = FUN_00102876(param_1);
                    /* try { // try from 001023af to 001023b3 has its CatchHandler @ 001023b6 */
  FUN_001028b6(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 * FUN_00103746(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102782(param_2);
  puVar2 = (undefined4 *)FUN_001037d6(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102bde(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c30(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ec4(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101430();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_001039ec(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001033de(void)

{
  return;
}




void FUN_00103b48(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010310e(long param_1)

{
  FUN_00103234(param_1);
  FUN_00103254(param_1);
  FUN_00102ffa(param_1 + 8);
  return;
}




void FUN_00103992(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001029d0(undefined8 param_1)

{
  FUN_00102b78(param_1);
  return;
}




long FUN_00102170(long param_1)

{
  return param_1 + 8;
}




void FUN_0010268c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102926(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102926(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102c91(undefined8 param_1)

{
  FUN_0010229a(param_1);
  return;
}




void FUN_00103e77(void)

{
  return;
}




undefined8 FUN_00103e3f(void)

{
  return 1;
}




void FUN_00101ab6(long param_1)

{
  FUN_00102244(param_1 + 0x20);
  return;
}




undefined8 FUN_001037aa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103810(undefined8 param_1)

{
  return param_1;
}




void FUN_001039c4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104157(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101aa8(void)

{
  return;
}




void FUN_00103efb(void)

{
  return;
}




void FUN_00103570(void)

{
  return;
}




undefined8 FUN_00102860(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103f1c(void)

{
  return;
}




void FUN_00101fc1(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102782(param_1);
  FUN_001027a4(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103254(void)

{
  return;
}




void FUN_00103a98(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103eae(void)

{
  return;
}




void FUN_0010337a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010347c(local_18,param_1);
  FUN_0010349a(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b22(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010229a(param_2);
  uVar1 = FUN_001022b8(uVar1);
  FUN_001022ca(param_1,uVar1);
  return;
}




undefined8 FUN_00102186(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fc1(local_38);
    cVar1 = FUN_00101804(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102700(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102838(local_38);
    }
  }
  FUN_0010213c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010409c(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00103d60(long param_1,ulong param_2,long param_3)

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




void FUN_00103ee5(void)

{
  return;
}




void FUN_00103024(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001029ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b8a(param_1,param_2);
  return;
}




undefined8 FUN_0010349a(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102170(param_1);
  uVar2 = FUN_00103584(param_2);
  uVar1 = FUN_0010359a(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102676(param_1);
  uVar2 = FUN_00103709(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102464(param_1);
  uVar2 = FUN_00103727(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104138(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101b62(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010314a(undefined8 param_1)

{
  FUN_00103264(param_1);
  return;
}




undefined8 FUN_001033ed(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103542(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102244(undefined8 param_1)

{
  FUN_0010284e(param_1);
  return;
}




undefined8 FUN_00102700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001023fe(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102170(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010247a(local_50);
    cVar2 = FUN_00101804(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010247a(local_50);
      cVar2 = FUN_00101804(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102742(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102464(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102464(local_60);
          local_48[1] = 0;
          FUN_00102498(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102716(local_48);
          uVar6 = FUN_0010247a(*puVar5);
          cVar2 = FUN_00101804(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024d8(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102700(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102498(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010268c(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102676(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102676(local_60);
        uVar6 = FUN_00102676(local_60);
        FUN_0010268c(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026d4(local_48);
        uVar6 = FUN_0010247a(*puVar5);
        cVar2 = FUN_00101804(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024d8(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102700(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102498(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010268c(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fa6;
  }
  lVar3 = FUN_0010244e(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cba:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102464(local_60);
    uVar6 = FUN_0010247a(*puVar5);
    cVar2 = FUN_00101804(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cba;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102464(local_60);
    local_48[1] = 0;
    FUN_00102498(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024d8(local_60,param_3);
  }
LAB_00101fa6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00102926(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e82(void)

{
  return;
}




void FUN_00103eda(void)

{
  return;
}




void FUN_00102a9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b62(param_3);
  uVar1 = FUN_00101b74(param_4);
  FUN_0010183e(local_38,uVar1);
  FUN_00101b86(param_5);
  uVar1 = FUN_001015f8(0x10,param_2);
                    /* try { // try from 00102b22 to 00102b26 has its CatchHandler @ 00102b29 */
  FUN_00102bde(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f06(void)

{
  return;
}




undefined8 FUN_00101b74(undefined8 param_1)

{
  return param_1;
}




void FUN_00104176(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102bc6(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_001022ca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad8(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_0010334e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101aea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad8(param_2);
  FUN_00102262(param_1,uVar1);
  return;
}




void FUN_00103e8d(void)

{
  return;
}




void FUN_00103b70(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103a42(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103274(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102700(local_28);
    FUN_00103274(param_1,uVar1);
    lVar2 = FUN_00102838(local_28);
    FUN_001020fe(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103aee(undefined4 param_1)

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




void FUN_0010347c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101868(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ad8(param_2);
  FUN_00101aea(param_1,uVar1);
  return param_1;
}




void FUN_00101a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102170(param_1);
  uVar2 = FUN_0010215a(param_1);
  FUN_00102186(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101ad8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103234(undefined8 param_1)

{
  FUN_001033de(param_1);
  return;
}




void FUN_00102b8a(void)

{
  return;
}




void FUN_0010160e(void)

{
  return;
}




void FUN_0010386e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001015f8(0x30,param_2);
  uVar1 = FUN_00103810(param_3);
  uVar2 = FUN_00101ab6(param_2);
  uVar3 = FUN_00102876(param_1);
  FUN_001038dc(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103eb9(void)

{
  return;
}




void FUN_0010156d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101622(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  if (local_18 != (undefined4 *)0x0) {
    *local_18 = 1;
    local_18[1] = 1;
    FUN_00103bc9(local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017e2(undefined8 *param_1)

{
  FUN_00101ab6(*param_1);
  return;
}




void FUN_00103ac3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00103c5c(long param_1,ulong param_2,long param_3)

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




void FUN_001028b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101b86(param_5);
  uVar2 = FUN_00101b74(param_4);
  uVar3 = FUN_00101b62(param_3);
  FUN_00102a9a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101796(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103ef0(void)

{
  return;
}




void FUN_00103bfc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101622(param_1,&local_1c);
  local_18 = (undefined4 *)*puVar1;
  *local_18 = 1;
  local_18[1] = 1;
  FUN_00103bc9(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103064(undefined8 param_1)

{
  FUN_0010314a(param_1);
  return;
}




void FUN_00101778(undefined8 param_1)

{
  FUN_00101a58(param_1);
  return;
}




void FUN_001022f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102876(param_1);
  FUN_00102888(uVar1,1);
  return;
}




undefined8 FUN_00101b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001022f4(param_1);
  uVar2 = FUN_00101b86(param_4);
  uVar3 = FUN_00101b74(param_3);
  uVar4 = FUN_00101b62(param_2);
  FUN_00102320(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00101622(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010174e(param_1,param_2);
  local_28 = FUN_00101778(param_1);
  cVar2 = FUN_00101796(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017bc(param_1);
    uVar3 = FUN_001017e2(&local_38);
    cVar2 = FUN_00101804(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016c2;
    }
  }
  bVar1 = true;
LAB_001016c2:
  if (bVar1) {
    uVar3 = FUN_0010182b(param_2);
    FUN_00101868(local_30,uVar3);
    FUN_001018a0(&local_28,&local_38);
    local_38 = FUN_001018c2(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001017e2(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001031a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032de(param_1,param_2);
  lVar1 = FUN_0010334e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103364(param_1);
                    /* try { // try from 00103203 to 00103207 has its CatchHandler @ 0010320d */
    uVar3 = FUN_0010337a(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_001037c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010182b(undefined8 param_1)

{
  return param_1;
}




long FUN_00102464(long param_1)

{
  return param_1 + 0x20;
}



