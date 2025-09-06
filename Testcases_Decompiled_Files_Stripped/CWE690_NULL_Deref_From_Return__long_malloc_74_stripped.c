
undefined8 FUN_00102868(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b54(param_3);
  uVar1 = FUN_00101b66(param_4);
  FUN_00101830(local_38,uVar1);
  FUN_00101b78(param_5);
  uVar1 = FUN_001015ea(0x10,param_2);
                    /* try { // try from 00102b14 to 00102b18 has its CatchHandler @ 00102b1b */
  FUN_00102bd0(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103534(undefined8 param_1,undefined8 param_2)

{
  FUN_00103430(param_1,param_2);
  return param_1;
}




void FUN_00103ee2(void)

{
  return;
}




void FUN_00102c83(undefined8 param_1)

{
  FUN_0010228c(param_1);
  return;
}




void FUN_00102a3c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bb8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010212e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00102668(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_0010408e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102254(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aca(param_2);
  FUN_001022bc(param_1,uVar1);
  return;
}




void FUN_00103226(undefined8 param_1)

{
  FUN_001033d0(param_1);
  return;
}




void FUN_0010248a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102918(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010246c(undefined8 param_1)

{
  FUN_00101fb3(param_1);
  return;
}




void FUN_00101566(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101614(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 5;
    FUN_00103a34(*local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f24(void)

{
  return;
}




void FUN_0010412a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104149(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103b8d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102312(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001015ea(0x30,param_2);
  uVar1 = FUN_00101b78(param_5);
  uVar2 = FUN_00101b66(param_4);
  uVar3 = FUN_00101b54(param_3);
  uVar4 = FUN_00101aa8(param_2);
  uVar5 = FUN_00102868(param_1);
                    /* try { // try from 001023a1 to 001023a5 has its CatchHandler @ 001023a8 */
  FUN_001028a8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001039b6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_001026c6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103f0e(void)

{
  return;
}




void FUN_00102b90(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001040b1(undefined8 *param_1)

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




long FUN_00102f92(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00101b78(undefined8 param_1)

{
  return param_1;
}




long FUN_00101614(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101740(param_1,param_2);
  local_28 = FUN_0010176a(param_1);
  cVar2 = FUN_00101788(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017ae(param_1);
    uVar3 = FUN_001017d4(&local_38);
    cVar2 = FUN_001017f6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016b4;
    }
  }
  bVar1 = true;
LAB_001016b4:
  if (bVar1) {
    uVar3 = FUN_0010181d(param_2);
    FUN_0010185a(local_30,uVar3);
    FUN_00101892(&local_28,&local_38);
    local_38 = FUN_001018b4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001017d4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00102b57(undefined8 param_1)

{
  return param_1;
}




void FUN_00101adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aca(param_2);
  FUN_00102254(param_1,uVar1);
  return;
}




void FUN_00103e8a(void)

{
  return;
}




void FUN_00101a9a(void)

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




void FUN_001030d6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010319a(param_1,param_2);
  return;
}




undefined8 FUN_00102440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010336c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010346e(local_18,param_1);
  FUN_0010348c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bbb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103ec1(void)

{
  return;
}




undefined8 FUN_00103576(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010176a(undefined8 param_1)

{
  FUN_00101a4a(param_1);
  return;
}




void FUN_00103056(undefined8 param_1)

{
  FUN_0010313c(param_1);
  return;
}




void FUN_00103eab(void)

{
  return;
}




void FUN_00102ca1(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103096(local_88);
  pvVar1 = malloc(8);
  local_58[0] = 0;
                    /* try { // try from 00102cfd to 00102d66 has its CatchHandler @ 00102db2 */
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030d6(local_58,local_88);
                    /* try { // try from 00102d6e to 00102d72 has its CatchHandler @ 00102d9d */
  FUN_001014e9(local_58);
  FUN_001030b6(local_58);
  FUN_001030b6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102774(long param_1)

{
  FUN_001029c2(param_1 + 0x20);
  return;
}




void FUN_001029c2(undefined8 param_1)

{
  FUN_00102b6a(param_1);
  return;
}




long FUN_0010358c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103738(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010379c(param_2);
                    /* try { // try from 001035fb to 0010368d has its CatchHandler @ 001036b9 */
    uVar2 = FUN_0010358c(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001037b2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103738(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010379c(local_38);
      uVar2 = FUN_0010358c(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001037b2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001029e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b7c(param_1,param_2);
  return;
}




void FUN_00103266(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001026f2(local_28);
    FUN_00103266(param_1,uVar1);
    lVar2 = FUN_0010282a(local_28);
    FUN_001020f0(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102b7c(void)

{
  return;
}




undefined8 FUN_001023f0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102456(long param_1)

{
  return param_1 + 0x20;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_00102840(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a8a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101aca(undefined8 param_1)

{
  return param_1;
}




void FUN_0010287a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a3c(param_1,param_2,0);
  return;
}




void FUN_0010319a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001032d0(param_1,param_2);
  lVar1 = FUN_00103340(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103356(param_1);
                    /* try { // try from 001031f5 to 001031f9 has its CatchHandler @ 001031ff */
    uVar3 = FUN_0010336c(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00102178(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00101fb3(local_38);
    cVar1 = FUN_001017f6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001026f2(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010282a(local_38);
    }
  }
  FUN_0010212e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103984(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103f2f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102236(undefined8 param_1)

{
  FUN_00102840(param_1);
  return;
}




undefined8 FUN_00101b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001022e6(param_1);
  uVar2 = FUN_00101b78(param_4);
  uVar3 = FUN_00101b66(param_3);
  uVar4 = FUN_00101b54(param_2);
  FUN_00102312(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00103802(undefined8 param_1)

{
  return param_1;
}




void FUN_0010228c(undefined8 param_1)

{
  FUN_00102852(param_1);
  return;
}




void FUN_0010346e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c65(undefined8 param_1)

{
  FUN_00102c83(param_1);
  return;
}




void FUN_00102ddf(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103096(local_88);
  pvVar1 = malloc(8);
  local_58[0] = 0;
                    /* try { // try from 00102e3b to 00102ea4 has its CatchHandler @ 00102ef0 */
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101614(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001030d6(local_58,local_88);
                    /* try { // try from 00102eac to 00102eb0 has its CatchHandler @ 00102edb */
  FUN_00101566(local_58);
  FUN_001030b6(local_58);
  FUN_001030b6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103eb6(void)

{
  return;
}




void FUN_00101892(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102796(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001037b2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ecc(void)

{
  return;
}




void FUN_00101aa8(long param_1)

{
  FUN_00102236(param_1 + 0x20);
  return;
}




undefined8 FUN_00102b6a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ea0(void)

{
  return;
}




undefined8 FUN_0010214c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ab5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001033d0(void)

{
  return;
}




undefined8 FUN_00103e31(void)

{
  return 1;
}




undefined8 FUN_001024ca(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010214c(param_1);
  local_50 = FUN_00102162(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fb3(local_58);
    local_59 = FUN_001017f6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001026f2(local_58);
    }
    else {
      local_58 = FUN_0010282a(local_58);
    }
  }
  FUN_0010212e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010292a(param_1);
    cVar1 = FUN_00101788(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010297a(local_38,&local_58,&local_50);
      goto LAB_0010264c;
    }
    FUN_001026c6(&local_48);
  }
  uVar2 = FUN_0010246c(local_48);
  cVar1 = FUN_001017f6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102734(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010297a(local_38,&local_58,&local_50);
  }
LAB_0010264c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001023f0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102162(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010246c(local_50);
    cVar2 = FUN_001017f6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010246c(local_50);
      cVar2 = FUN_001017f6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102734(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102456(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102456(local_60);
          local_48[1] = 0;
          FUN_0010248a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102708(local_48);
          uVar6 = FUN_0010246c(*puVar5);
          cVar2 = FUN_001017f6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001024ca(local_60,param_3);
          }
          else {
            lVar3 = FUN_001026f2(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010248a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010267e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102668(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102668(local_60);
        uVar6 = FUN_00102668(local_60);
        FUN_0010267e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001026c6(local_48);
        uVar6 = FUN_0010246c(*puVar5);
        cVar2 = FUN_001017f6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001024ca(local_60,param_3);
        }
        else {
          lVar3 = FUN_001026f2(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010248a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010267e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101f98;
  }
  lVar3 = FUN_00102440(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cac:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102456(local_60);
    uVar6 = FUN_0010246c(*puVar5);
    cVar2 = FUN_001017f6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cac;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102456(local_60);
    local_48[1] = 0;
    FUN_0010248a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001024ca(local_60,param_3);
  }
LAB_00101f98:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001036fb(undefined8 param_1)

{
  FUN_00102f92(param_1);
  return;
}




undefined8 FUN_001026f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102bb8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00102918(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010282a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00103356(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103f19(void)

{
  return;
}




void FUN_00103096(undefined8 param_1)

{
  FUN_00103076(param_1);
  return;
}




void FUN_001041a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001022bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aca(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101600(void)

{
  return;
}




void FUN_001020f0(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ac(param_1,param_2);
  FUN_001027f0(param_1,param_2);
  return;
}




undefined8 FUN_001033df(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103534(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010297a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b57(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102918(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103d52(long param_1,ulong param_2,long param_3)

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




void FUN_00104210(void)

{
  return;
}




undefined8 FUN_0010379c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010313c(undefined8 param_1)

{
  FUN_00103256(param_1);
  return;
}




void FUN_0010390c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103802(param_3);
  puVar3 = (undefined8 *)FUN_001015ea(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102f1d(void)

{
  FUN_00102ddf();
  return;
}




void FUN_00103719(undefined8 param_1)

{
  FUN_00102fbf(param_1);
  return;
}




void FUN_001027ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101aa8(param_2);
  uVar2 = FUN_00102868(param_1);
  FUN_001029e0(uVar2,uVar1);
  return;
}




void FUN_00101b14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010228c(param_2);
  uVar1 = FUN_001022aa(uVar1);
  FUN_001022bc(param_1,uVar1);
  return;
}




undefined8 FUN_001022aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b90(param_1,param_2,param_3);
  return;
}




void FUN_00103ae0(undefined4 param_1)

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




void FUN_00103a5f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined4 FUN_001017ae(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101a9a(param_1);
  return unaff_EBX;
}




void FUN_00103430(undefined8 param_1,undefined8 param_2)

{
  FUN_00103562(param_1,param_2);
  return;
}




undefined8 FUN_00103f66(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f2f,local_18);
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




undefined8 FUN_0010348c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102162(param_1);
  uVar2 = FUN_00103576(param_2);
  uVar1 = FUN_0010358c(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102668(param_1);
  uVar2 = FUN_001036fb(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102456(param_1);
  uVar2 = FUN_00103719(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined4 * FUN_00103738(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102774(param_2);
  puVar2 = (undefined4 *)FUN_001037c8(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103ef8(void)

{
  return;
}




undefined8 FUN_00101788(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103e74(void)

{
  return;
}




void FUN_001032d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033df(param_1,param_2);
  FUN_0010345a(param_1,param_2);
  FUN_00102fec(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010267e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102918(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102918(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e95(void)

{
  return;
}




undefined8 FUN_00101a4a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103016(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00103814(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022e6(param_1);
  uVar2 = FUN_00103802(param_2);
  FUN_00103860(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103bee(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103100(long param_1)

{
  FUN_00103226(param_1);
  FUN_00103246(param_1);
  FUN_00102fec(param_1 + 8);
  return;
}




undefined8 FUN_0010181d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101b54(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ed7(void)

{
  return;
}




void FUN_00103a34(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00103e4f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102bd0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c22(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102868(param_1);
  FUN_00102a0a(uVar1,param_2,1);
  return;
}




void FUN_00103256(void)

{
  return;
}




void FUN_00103eed(void)

{
  return;
}




void FUN_00101830(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b14(param_1,param_2);
  return;
}




undefined8 FUN_00103340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102f2d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010395e("Calling good()...");
  FUN_00102f1d();
  FUN_0010395e("Finished good()");
  FUN_0010395e("Calling bad()...");
  FUN_00102ca1();
  FUN_0010395e("Finished bad()");
  return 0;
}




void FUN_0010315c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010214c(param_1);
  FUN_00103266(param_1,uVar1);
  FUN_00103056(param_1);
  return;
}




undefined8 FUN_00101b66(undefined8 param_1)

{
  return param_1;
}




void FUN_001022e6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102868(param_1);
  FUN_0010287a(uVar1,1);
  return;
}




void FUN_00104168(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001019fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102162(param_1);
  uVar2 = FUN_0010214c(param_1);
  FUN_00102178(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102734(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102918(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103b3a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103e40(void)

{
  return 0;
}




undefined8 FUN_00102852(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103e7f(void)

{
  return;
}




undefined8 FUN_0010185a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101aca(param_2);
  FUN_00101adc(param_1,uVar1);
  return param_1;
}




void FUN_00103f03(void)

{
  return;
}




undefined8 FUN_0010292a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fb3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102774(param_1);
  FUN_00102796(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030b6(undefined8 param_1)

{
  FUN_0010315c(param_1);
  return;
}




undefined4 FUN_001017f6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103b62(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010395e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001037c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103802(param_2);
  FUN_00103814(uVar1,uVar2);
  return;
}




bool FUN_00104033(pthread_t *param_1)

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




void FUN_00103076(undefined8 param_1)

{
  FUN_00103100(param_1);
  return;
}




void FUN_001038ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103802(param_3);
  FUN_0010390c(param_1,param_2,uVar1);
  return;
}




void FUN_00103246(void)

{
  return;
}




undefined8 FUN_001015ea(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101740(undefined8 param_1,undefined8 param_2)

{
  FUN_001019fa(param_1,param_2);
  return;
}




void FUN_001017d4(undefined8 *param_1)

{
  FUN_00101aa8(*param_1);
  return;
}




void FUN_00102fec(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103016(param_1);
  return;
}




void FUN_001028a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101b78(param_5);
  uVar2 = FUN_00101b66(param_4);
  uVar3 = FUN_00101b54(param_3);
  FUN_00102a8c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103562(void)

{
  return;
}




ulong FUN_00103c4e(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001015ea(0x30,param_2);
  uVar1 = FUN_00103802(param_3);
  uVar2 = FUN_00101aa8(param_2);
  uVar3 = FUN_00102868(param_1);
  FUN_001038ce(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103a0a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 * FUN_00102708(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_00103e69(void)

{
  return;
}




void FUN_001039de(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c22(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102c65(param_2);
  puVar2 = (undefined4 *)FUN_001022aa(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8
FUN_00102006(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102162(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010246c(param_3);
      uVar5 = FUN_00101fb3(param_4);
      cVar1 = FUN_001017f6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010208a;
      }
    }
  }
  bVar2 = true;
LAB_0010208a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010212e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_00102fbf(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8
FUN_001018b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101b78(param_5);
  uVar2 = FUN_00101b66(param_4);
  uVar3 = FUN_00101b54(param_3);
  local_40 = FUN_00101b8a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101930 to 00101973 has its CatchHandler @ 001019b1 */
  uVar1 = FUN_00101fb3(local_40);
  local_38 = FUN_00101c0a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020f0(param_1,local_40);
    FUN_0010212e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102006(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010345a(void)

{
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101614(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  *local_18 = 5;
  FUN_00103a34(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102162(long param_1)

{
  return param_1 + 8;
}



