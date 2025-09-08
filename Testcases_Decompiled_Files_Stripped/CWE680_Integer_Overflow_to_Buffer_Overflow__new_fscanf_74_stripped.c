
undefined8 FUN_00103570(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010224a(param_1);
  uVar2 = FUN_0010365a(param_2);
  uVar1 = FUN_00103670(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102750(param_1);
  uVar2 = FUN_001037df(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010253e(param_1);
  uVar2 = FUN_001037fd(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001038ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038e6(param_2);
  FUN_001038f8(uVar1,uVar2);
  return;
}




void FUN_00103fe7(void)

{
  return;
}




undefined8 FUN_001016d3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103ab7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103896(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102d88(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317a(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 00102dda to 00102e57 has its CatchHandler @ 00102ea3 */
  __isoc99_fscanf(stdin,&DAT_0010500a,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = local_8c;
  FUN_001031ba(local_58,local_88);
                    /* try { // try from 00102e5f to 00102e63 has its CatchHandler @ 00102e8e */
  FUN_00101549(local_58);
  FUN_0010319a(local_58);
  FUN_0010319a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010330a(undefined8 param_1)

{
  FUN_001034b4(param_1);
  return;
}




long FUN_001030a2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103f4d(void)

{
  return;
}




void FUN_00103240(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102234(param_1);
  FUN_0010334a(param_1,uVar1);
  FUN_0010313a(param_1);
  return;
}




void FUN_00103220(undefined8 param_1)

{
  FUN_0010333a(param_1);
  return;
}




undefined8 FUN_0010287e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010317a(undefined8 param_1)

{
  FUN_0010315a(param_1);
  return;
}




void FUN_001028d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102950(param_1);
  FUN_00102af2(uVar1,param_2,1);
  return;
}




void FUN_00102572(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a00(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_0010199c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c60(param_5);
  uVar2 = FUN_00101c4e(param_4);
  uVar3 = FUN_00101c3c(param_3);
  local_40 = FUN_00101c72(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a18 to 00101a5b has its CatchHandler @ 00101a99 */
  uVar1 = FUN_0010209b(local_40);
  local_38 = FUN_00101cf2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021d8(param_1,local_40);
    FUN_00102216(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020ee(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010333a(void)

{
  return;
}




void FUN_00102766(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a00(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a00(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101918(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bfc(param_1,param_2);
  return;
}




void FUN_00101852(undefined8 param_1)

{
  FUN_00101b32(param_1);
  return;
}




undefined8 * FUN_001027ae(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101c3c(undefined8 param_1)

{
  return param_1;
}




void FUN_001039b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038e6(param_3);
  FUN_001039f0(param_1,param_2,uVar1);
  return;
}




void FUN_0010281c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a00(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001023a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bb2(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00101c4e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102950(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b8e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c78(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001038e6(undefined8 param_1)

{
  return param_1;
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




undefined4 FUN_00101896(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b82(param_1);
  return unaff_EBX;
}




ulong FUN_00103e2b(long param_1,ulong param_2,long param_3)

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




void FUN_0010209b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010285c(param_1);
  FUN_0010287e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031ba(undefined8 param_1,undefined8 param_2)

{
  FUN_0010327e(param_1,param_2);
  return;
}




void FUN_00103f9a(void)

{
  return;
}




void FUN_00103ffd(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016fc(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00103a8f(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101870(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103c66(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102b24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102ca0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




long FUN_0010343a(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103ae3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001037fd(undefined8 param_1)

{
  FUN_001030a2(param_1);
  return;
}




void FUN_00104008(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined4 * FUN_0010381c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010285c(param_2);
  puVar2 = (undefined4 *)FUN_001038ac(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102554(undefined8 param_1)

{
  FUN_0010209b(param_1);
  return;
}




void FUN_00103f6e(void)

{
  return;
}




void FUN_00102990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c60(param_5);
  uVar2 = FUN_00101c4e(param_4);
  uVar3 = FUN_00101c3c(param_3);
  FUN_00102b74(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016d3(0x28,param_2);
  uVar1 = FUN_001038e6(param_3);
  uVar2 = FUN_00101b90(param_2);
  uVar3 = FUN_00102950(param_1);
  FUN_001039b2(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010319a(undefined8 param_1)

{
  FUN_00103240(param_1);
  return;
}




void FUN_001018bc(undefined8 *param_1)

{
  FUN_00101b90(*param_1);
  return;
}




void FUN_001031e4(long param_1)

{
  FUN_0010330a(param_1);
  FUN_0010332a(param_1);
  FUN_001030d0(param_1 + 8);
  return;
}




void FUN_0010353e(void)

{
  return;
}




void FUN_00101828(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ae2(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102374(undefined8 param_1)

{
  FUN_0010293a(param_1);
  return;
}




undefined8 FUN_00103618(undefined8 param_1,undefined8 param_2)

{
  FUN_00103514(param_1,param_2);
  return param_1;
}




void FUN_00103f42(void)

{
  return;
}




undefined8 FUN_00103010(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a37("Calling good()...");
  FUN_00103000();
  FUN_00103a37("Finished good()");
  FUN_00103a37("Calling bad()...");
  FUN_00102d88();
  FUN_00103a37("Finished bad()");
  return 0;
}




long FUN_00102750(long param_1)

{
  return param_1 + 0x18;
}




long FUN_00103075(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102392(undefined8 param_1)

{
  return param_1;
}




void FUN_001016e9(void)

{
  return;
}




undefined8 FUN_00102ca0(void)

{
  return 0x333333333333333;
}




void FUN_00102894(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b90(param_2);
  uVar2 = FUN_00102950(param_1);
  FUN_00102ac8(uVar2,uVar1);
  return;
}




void FUN_00104241(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101c72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023ce(param_1);
  uVar2 = FUN_00101c60(param_4);
  uVar3 = FUN_00101c4e(param_3);
  uVar4 = FUN_00101c3c(param_2);
  FUN_001023fa(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001030d0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030fa(param_1);
  return;
}




void FUN_00103fd1(void)

{
  return;
}




void FUN_0010233c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bb2(param_2);
  FUN_001023a4(param_1,uVar1);
  return;
}




void FUN_00103a8f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010197a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101b90(long param_1)

{
  FUN_0010231e(param_1 + 0x20);
  return;
}




void FUN_00103b0d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101c60(undefined8 param_1)

{
  return param_1;
}




void FUN_00103450(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103552(local_18,param_1);
  FUN_00103570(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102928(undefined8 param_1)

{
  return param_1;
}




void FUN_00104203(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00101942(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bb2(param_2);
  FUN_00101bc4(param_1,uVar1);
  return param_1;
}




long FUN_0010224a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001038f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023ce(param_1);
  uVar2 = FUN_001038e6(param_2);
  FUN_00103944(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102ed0(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317a(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f24 to 00102f87 has its CatchHandler @ 00102fd3 */
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_001016fc(local_88,local_58);
  *puVar1 = 0x14;
  FUN_001031ba(local_58,local_88);
                    /* try { // try from 00102f8f to 00102f93 has its CatchHandler @ 00102fbe */
  FUN_0010160e(local_58);
  FUN_0010319a(local_58);
  FUN_0010319a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fa5(void)

{
  return;
}




undefined8 FUN_00101b32(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102216(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010327e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033b4(param_1,param_2);
  lVar1 = FUN_00103424(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010343a(param_1);
                    /* try { // try from 001032d9 to 001032dd has its CatchHandler @ 001032e3 */
    uVar3 = FUN_00103450(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102cb8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d0a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010403f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104008,local_18);
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




void FUN_0010334a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027da(local_28);
    FUN_0010334a(param_1,uVar1);
    lVar2 = FUN_00102912(local_28);
    FUN_001021d8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001039f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_001038e6(param_3);
  puVar2 = (undefined8 *)FUN_001016d3(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_0010365a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103514(undefined8 param_1,undefined8 param_2)

{
  FUN_00103646(param_1,param_2);
  return;
}




void FUN_00103f8f(void)

{
  return;
}




void FUN_00101bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102374(param_2);
  uVar1 = FUN_00102392(uVar1);
  FUN_001023a4(param_1,uVar1);
  return;
}




void FUN_00102962(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b24(param_1,param_2,0);
  return;
}




undefined8 FUN_00102912(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010231e(undefined8 param_1)

{
  FUN_00102928(param_1);
  return;
}




void FUN_00103cc7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010313a(undefined8 param_1)

{
  FUN_00103220(param_1);
  return;
}




void FUN_00102216(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102d6a(undefined8 param_1)

{
  FUN_00102374(param_1);
  return;
}




void FUN_00103fb0(void)

{
  return;
}




void FUN_001037df(undefined8 param_1)

{
  FUN_00103075(param_1);
  return;
}




undefined8 FUN_00101bb2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101905(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010418a(undefined8 *param_1)

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




void FUN_00101ae2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010224a(param_1);
  uVar2 = FUN_00102234(param_1);
  FUN_00102260(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103f19(void)

{
  return 0;
}




void FUN_00102af2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c78(param_1,param_2,param_3);
  return;
}




void FUN_00103b38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_001027f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




bool FUN_0010410c(pthread_t *param_1)

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




undefined8 FUN_00102a12(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102216(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034b4(void)

{
  return;
}




void FUN_001021d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102894(param_1,param_2);
  FUN_001028d8(param_1,param_2);
  return;
}




undefined8 FUN_00102c3f(undefined8 param_1)

{
  return param_1;
}




void FUN_001030fa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00103880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102a62(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c3f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a00(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103fbb(void)

{
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_00102b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c3c(param_3);
  uVar1 = FUN_00101c4e(param_4);
  FUN_00101918(local_38,uVar1);
  FUN_00101c60(param_5);
  uVar1 = FUN_001016d3(8,param_2);
                    /* try { // try from 00102bfc to 00102c00 has its CatchHandler @ 00102c03 */
  FUN_00102cb8(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104167(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102a00(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b82(void)

{
  return;
}




undefined8 FUN_0010293a(undefined8 *param_1)

{
  return *param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cf2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024d8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010224a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102554(local_50);
    cVar2 = FUN_001018de(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102554(local_50);
      cVar2 = FUN_001018de(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010281c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010253e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010253e(local_60);
          local_48[1] = 0;
          FUN_00102572(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027f0(local_48);
          uVar6 = FUN_00102554(*puVar5);
          cVar2 = FUN_001018de(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025b2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027da(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102572(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102766(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102750(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102750(local_60);
        uVar6 = FUN_00102750(local_60);
        FUN_00102766(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027ae(local_48);
        uVar6 = FUN_00102554(*puVar5);
        cVar2 = FUN_001018de(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025b2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027da(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102572(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102766(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102080;
  }
  lVar3 = FUN_00102528(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d94:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010253e(local_60);
    uVar6 = FUN_00102554(*puVar5);
    cVar2 = FUN_001018de(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d94;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010253e(local_60);
    local_48[1] = 0;
    FUN_00102572(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025b2(local_60,param_3);
  }
LAB_00102080:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103f79(void)

{
  return;
}




void FUN_0010285c(long param_1)

{
  FUN_00102aaa(param_1 + 0x20);
  return;
}




void FUN_0010332a(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00103c3b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010160e(undefined8 param_1)

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
  piVar1 = (int *)FUN_001016fc(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00103a8f(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




undefined8 FUN_00103f0a(void)

{
  return 1;
}




undefined8 FUN_00102c52(undefined8 param_1)

{
  return param_1;
}




void FUN_001023fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016d3(0x28,param_2);
  uVar1 = FUN_00101c60(param_5);
  uVar2 = FUN_00101c4e(param_4);
  uVar3 = FUN_00101c3c(param_3);
  uVar4 = FUN_00101b90(param_2);
  uVar5 = FUN_00102950(param_1);
                    /* try { // try from 00102489 to 0010248d has its CatchHandler @ 00102490 */
  FUN_00102990(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101bc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bb2(param_2);
  FUN_0010233c(param_1,uVar1);
  return;
}




void FUN_00103a37(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001034c3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103618(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_001016fc(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101828(param_1,param_2);
  local_28 = FUN_00101852(param_1);
  cVar2 = FUN_00101870(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101896(param_1);
    uVar3 = FUN_001018bc(&local_38);
    cVar2 = FUN_001018de(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010179c;
    }
  }
  bVar1 = true;
LAB_0010179c:
  if (bVar1) {
    uVar3 = FUN_00101905(param_2);
    FUN_00101942(local_30,uVar3);
    FUN_0010197a(&local_28,&local_38);
    local_38 = FUN_0010199c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018bc(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103f63(void)

{
  return;
}




undefined8 FUN_001027da(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001025b2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102234(param_1);
  local_50 = FUN_0010224a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010209b(local_58);
    local_59 = FUN_001018de(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027da(local_58);
    }
    else {
      local_58 = FUN_00102912(local_58);
    }
  }
  FUN_00102216(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a12(param_1);
    cVar1 = FUN_00101870(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a62(local_38,&local_58,&local_50);
      goto LAB_00102734;
    }
    FUN_001027ae(&local_48);
  }
  uVar2 = FUN_00102554(local_48);
  cVar1 = FUN_001018de(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010281c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a62(local_38,&local_58,&local_50);
  }
LAB_00102734:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103f84(void)

{
  return;
}




void FUN_00103b63(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001024d8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102216(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c64(void)

{
  return;
}




void FUN_0010315a(undefined8 param_1)

{
  FUN_001031e4(param_1);
  return;
}




int FUN_00103f28(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103552(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102260(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010209b(local_38);
    cVar1 = FUN_001018de(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027da(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102912(local_38);
    }
  }
  FUN_00102216(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_00103670(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010381c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103880(param_2);
                    /* try { // try from 001036df to 00103771 has its CatchHandler @ 0010379d */
    uVar2 = FUN_00103670(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103896(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010381c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103880(local_38);
      uVar2 = FUN_00103670(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103896(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102d0a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d4c(param_2);
  puVar2 = (undefined4 *)FUN_00102392(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




ulong FUN_00103d27(long param_1,ulong param_2,long param_3)

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




void FUN_00104222(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_0010253e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103c94(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103f58(void)

{
  return;
}




void FUN_00103c13(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined4 FUN_001018de(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103646(void)

{
  return;
}




void FUN_00103ff2(void)

{
  return;
}




void FUN_001042e0(void)

{
  return;
}




void FUN_00102aaa(undefined8 param_1)

{
  FUN_00102c52(param_1);
  return;
}




void FUN_00102ac8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c64(param_1,param_2);
  return;
}




void FUN_001023ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102950(param_1);
  FUN_00102962(uVar1,1);
  return;
}




void FUN_001033b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c3(param_1,param_2);
  FUN_0010353e(param_1,param_2);
  FUN_001030d0(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_001020ee(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010224a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102554(param_3);
      uVar5 = FUN_0010209b(param_4);
      cVar1 = FUN_001018de(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102172;
      }
    }
  }
  bVar2 = true;
LAB_00102172:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102216(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103a5d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d4c(undefined8 param_1)

{
  FUN_00102d6a(param_1);
  return;
}




void FUN_00103bb9(undefined4 param_1)

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




void FUN_00103fc6(void)

{
  return;
}




void FUN_00103000(void)

{
  FUN_00102ed0();
  return;
}



