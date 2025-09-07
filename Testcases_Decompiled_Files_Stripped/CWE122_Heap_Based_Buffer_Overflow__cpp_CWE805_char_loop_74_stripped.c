
undefined8 FUN_001041b8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103512(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010368c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined4 * FUN_00103446(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010300e(param_2);
  puVar2 = (undefined4 *)FUN_00103652(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021da(param_2);
  uVar2 = FUN_0010324a(param_1);
  FUN_0010325c(uVar2,uVar1);
  return;
}




void FUN_00103feb(void)

{
  return;
}




void FUN_00103074(void)

{
  return;
}




void FUN_001017d9(void)

{
  FUN_00101691();
  return;
}




void FUN_00103fd5(void)

{
  return;
}




undefined8 FUN_00103708(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b96(param_1);
  uVar2 = FUN_001036f5(param_2);
  FUN_00103798(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103fca(void)

{
  return;
}




undefined8 FUN_0010368c(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001038d2(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  ulong local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 2;
  plVar1 = (long *)FUN_00101a80(param_1,&local_8c);
  local_80 = (void *)*plVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_80 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103a88(local_80);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010217c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102822(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f9e(void)

{
  return;
}




void FUN_001021da(long param_1)

{
  FUN_00102ae6(param_1 + 0x20);
  return;
}




void FUN_00101fb2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102840(param_1,param_2);
  FUN_001028ba(param_1,param_2);
  FUN_001018d2(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101864(void)

{
  return;
}




long FUN_00102d06(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104001(void)

{
  return;
}




void FUN_0010204e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028ce(local_18,param_1);
  FUN_001028ec(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d7a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101ce2(param_1);
  local_50 = FUN_00102a12(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026e5(local_58);
    local_59 = FUN_00101dae(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020c1(local_58);
    }
    else {
      local_58 = FUN_001020d7(local_58);
    }
  }
  FUN_00102822(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103390(param_1);
    cVar1 = FUN_00101d40(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033e0(local_38,&local_58,&local_50);
      goto LAB_00102efc;
    }
    FUN_00102f76(&local_48);
  }
  uVar2 = FUN_00102d1c(local_48);
  cVar1 = FUN_00101dae(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fce(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033e0(local_38,&local_58,&local_50);
  }
LAB_00102efc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001020b2(void)

{
  return;
}




void FUN_00103c0a(undefined4 param_1)

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




void FUN_00103b34(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010199c(undefined8 param_1)

{
  FUN_00101a42(param_1);
  return;
}




void FUN_001029d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010324a(param_1);
  FUN_00103286(uVar1,param_2,1);
  return;
}




void FUN_001020ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00102994(param_1,param_2);
  FUN_001029d8(param_1,param_2);
  return;
}




void FUN_00101d8c(undefined8 *param_1)

{
  FUN_001021da(*param_1);
  return;
}




void FUN_001019bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bac(param_1,param_2);
  return;
}




undefined8 FUN_00102286(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cb7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010184e(0x30,param_2);
  uVar1 = FUN_001036f5(param_3);
  uVar2 = FUN_001021da(param_2);
  uVar3 = FUN_0010324a(param_1);
  FUN_00103824(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102d1c(undefined8 param_1)

{
  FUN_001026e5(param_1);
  return;
}




undefined8 FUN_00103046(undefined8 param_1,undefined8 param_2)

{
  FUN_00102890(param_1,param_2);
  return param_1;
}




long FUN_00101a80(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101cf8(param_1,param_2);
  local_28 = FUN_00101d22(param_1);
  cVar2 = FUN_00101d40(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d66(param_1);
    uVar3 = FUN_00101d8c(&local_38);
    cVar2 = FUN_00101dae(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b20;
    }
  }
  bVar1 = true;
LAB_00101b20:
  if (bVar1) {
    uVar3 = FUN_00101dd5(param_2);
    FUN_00101e12(local_30,uVar3);
    FUN_00101e4a(&local_28,&local_38);
    local_38 = FUN_00101e6c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d8c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103b5e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001034aa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103fb4(void)

{
  return;
}




void FUN_00103806(undefined8 param_1)

{
  FUN_00103861(param_1);
  return;
}




undefined8 FUN_001032b8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103652(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036f5(param_2);
  FUN_00103708(uVar1,uVar2);
  return;
}




undefined8 FUN_00103640(undefined8 param_1)

{
  return param_1;
}




void FUN_001032df(undefined8 param_1,undefined8 param_2)

{
  FUN_00103512(param_1,param_2,0);
  return;
}




void FUN_00102890(undefined8 param_1,undefined8 param_2)

{
  FUN_00103074(param_1,param_2);
  return;
}




void FUN_0010402d(void)

{
  return;
}




void FUN_00104330(void)

{
  return;
}




void FUN_00103880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036f5(param_3);
  puVar3 = (undefined8 *)FUN_0010184e(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8
FUN_00101e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022aa(param_5);
  uVar2 = FUN_00102298(param_4);
  uVar3 = FUN_00102286(param_3);
  local_40 = FUN_001022bc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ee8 to 00101f2b has its CatchHandler @ 00101f69 */
  uVar1 = FUN_001026e5(local_40);
  local_38 = FUN_0010233c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020ee(param_1,local_40);
    FUN_00102822(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102738(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_001022aa(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fa9(void)

{
  return;
}




void FUN_00103fbf(void)

{
  return;
}




undefined8 * FUN_00102fa2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00104090(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104059,local_18);
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




undefined8 FUN_00102ca0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102822(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d40(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001041db(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




long FUN_00102038(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102b6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fc(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036f5(param_3);
  FUN_00103880(param_1,param_2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00101c68(void)

{
  return;
}




undefined4 FUN_00101d66(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021cc(param_1);
  return unaff_EBX;
}




void FUN_001021cc(void)

{
  return;
}




void FUN_00101a22(undefined8 param_1)

{
  FUN_00101c68(param_1);
  return;
}




long FUN_00102a12(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00103f5b(void)

{
  return 1;
}




void FUN_00101d22(undefined8 param_1)

{
  FUN_0010217c(param_1);
  return;
}




undefined8 FUN_0010184e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001018fc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010330d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022aa(param_5);
  uVar2 = FUN_00102298(param_4);
  uVar3 = FUN_00102286(param_3);
  FUN_00103562(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001019e6(long param_1)

{
  FUN_00101c38(param_1);
  FUN_00101c58(param_1);
  FUN_001018d2(param_1 + 8);
  return;
}




undefined8 FUN_00103390(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102822(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104038(void)

{
  return;
}




void FUN_001034d6(void)

{
  return;
}




void FUN_0010220e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fc(param_2);
  FUN_00102b04(param_1,uVar1);
  return;
}




void FUN_00103286(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034ea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001017e9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a88("Calling good()...");
  FUN_001017d9();
  FUN_00103a88("Finished good()");
  FUN_00103a88("Calling bad()...");
  FUN_00101549();
  FUN_00103a88("Finished bad()");
  return 0;
}




void FUN_00101c78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020c1(local_28);
    FUN_00101c78(param_1,uVar1);
    lVar2 = FUN_001020d7(local_28);
    FUN_001020ee(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103b08(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ae6(undefined8 param_1)

{
  FUN_001032b8(param_1);
  return;
}




undefined8 FUN_00102b5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c64(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_001018a4(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103fe0(void)

{
  return;
}




void FUN_00102b04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fc(param_2);
  FUN_00102b6c(param_1,uVar1);
  return;
}




void FUN_0010400c(void)

{
  return;
}




void FUN_00104273(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103aae(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104059(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010197c(undefined8 param_1)

{
  FUN_0010195c(param_1);
  return;
}




void FUN_00102f2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010337d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010337d(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102298(undefined8 param_1)

{
  return param_1;
}




void FUN_00103861(undefined8 param_1)

{
  FUN_00102b3c(param_1);
  return;
}




undefined8 FUN_001034c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001021fc(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cf8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212c(param_1,param_2);
  return;
}




undefined8 FUN_001032ca(undefined8 *param_1)

{
  return *param_1;
}




int FUN_00103f79(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c58(void)

{
  return;
}




undefined8 FUN_00102a28(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026e5(local_38);
    cVar1 = FUN_00101dae(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020c1(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020d7(local_38);
    }
  }
  FUN_00102822(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00101e12(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fc(param_2);
  FUN_0010220e(param_1,uVar1);
  return param_1;
}




void FUN_0010325c(undefined8 param_1,undefined8 param_2)

{
  FUN_001034d6(param_1,param_2);
  return;
}




void FUN_001042c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010193c(undefined8 param_1)

{
  FUN_00101a22(param_1);
  return;
}




undefined8 FUN_00103030(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101691(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010197c(local_88);
                    /* try { // try from 001016cc to 00101760 has its CatchHandler @ 001017ac */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019bc(local_58,local_88);
                    /* try { // try from 00101768 to 0010176c has its CatchHandler @ 00101797 */
  FUN_001039ad(local_58);
  FUN_0010199c(local_58);
  FUN_0010199c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101877(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102840(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103046(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010324a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020d7(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102fce(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010337d(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010233c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102ca0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a12(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d1c(local_50);
    cVar2 = FUN_00101dae(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d1c(local_50);
      cVar2 = FUN_00101dae(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fce(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d06(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d06(local_60);
          local_48[1] = 0;
          FUN_00102d3a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fa2(local_48);
          uVar6 = FUN_00102d1c(*puVar5);
          cVar2 = FUN_00101dae(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d7a(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020c1(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d3a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f2e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f18(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f18(local_60);
        uVar6 = FUN_00102f18(local_60);
        FUN_00102f2e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f76(local_48);
        uVar6 = FUN_00102d1c(*puVar5);
        cVar2 = FUN_00101dae(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d7a(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020c1(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d3a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f2e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026ca;
  }
  lVar3 = FUN_00102cf0(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023de:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d06(local_60);
    uVar6 = FUN_00102d1c(*puVar5);
    cVar2 = FUN_00101dae(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023de;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d06(local_60);
    local_48[1] = 0;
    FUN_00102d3a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d7a(local_60,param_3);
  }
LAB_001026ca:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103bdf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c38(undefined8 param_1)

{
  FUN_001020b2(param_1);
  return;
}




void FUN_00103ae0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104043(void)

{
  return;
}




undefined8 FUN_00103f6a(void)

{
  return 0;
}




void FUN_00103c8c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001033e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010362d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010337d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001026e5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010300e(param_1);
  FUN_00103030(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001028ba(void)

{
  return;
}




undefined8 * FUN_00102f76(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001034ea(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103754(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103806(param_2);
  puVar2 = (undefined4 *)FUN_00102b5a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001022bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b96(param_1);
  uVar2 = FUN_001022aa(param_4);
  uVar3 = FUN_00102298(param_3);
  uVar4 = FUN_00102286(param_2);
  FUN_00102bc2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001018d2(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018fc(param_1);
  return;
}




void FUN_00102246(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b3c(param_2);
  uVar1 = FUN_00102b5a(uVar1);
  FUN_00102b6c(param_1,uVar1);
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ce2(param_1);
  FUN_00101c78(param_1,uVar1);
  FUN_0010193c(param_1);
  return;
}




void FUN_0010212c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a12(param_1);
  uVar2 = FUN_00101ce2(param_1);
  FUN_00102a28(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103ff6(void)

{
  return;
}




ulong FUN_00103d78(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00103b89(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010337d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101dd5(undefined8 param_1)

{
  return param_1;
}




void FUN_0010195c(undefined8 param_1)

{
  FUN_001019e6(param_1);
  return;
}




void FUN_00102d3a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010337d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010404e(void)

{
  return;
}




undefined8 FUN_001020c1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102022(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001028ce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001028ec(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a12(param_1);
  uVar2 = FUN_00103088(param_2);
  uVar1 = FUN_0010309e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f18(param_1);
  uVar2 = FUN_0010320d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d06(param_1);
  uVar2 = FUN_0010322b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103428(undefined8 param_1)

{
  FUN_00103640(param_1);
  return;
}




void FUN_0010300e(long param_1)

{
  FUN_00103428(param_1 + 0x20);
  return;
}




void FUN_00101de8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102246(param_1,param_2);
  return;
}




void FUN_00103f93(void)

{
  return;
}




void FUN_00104022(void)

{
  return;
}




void FUN_00103d18(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




bool FUN_0010415d(pthread_t *param_1)

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




void FUN_00102bc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010184e(0x30,param_2);
  uVar1 = FUN_001022aa(param_5);
  uVar2 = FUN_00102298(param_4);
  uVar3 = FUN_00102286(param_3);
  uVar4 = FUN_001021da(param_2);
  uVar5 = FUN_0010324a(param_1);
                    /* try { // try from 00102c51 to 00102c55 has its CatchHandler @ 00102c58 */
  FUN_0010330d(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101ce2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104292(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001036a4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103754(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a88(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010362d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e4a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103562(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102286(param_3);
  uVar1 = FUN_00102298(param_4);
  FUN_00101de8(local_38,uVar1);
  FUN_001022aa(param_5);
  uVar1 = FUN_0010184e(0x10,param_2);
                    /* try { // try from 001035ea to 001035ee has its CatchHandler @ 001035f1 */
  FUN_001036a4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039ad(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  ulong local_88;
  void *local_80;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 2;
  plVar1 = (long *)FUN_00101a80(param_1,&local_8c);
  local_80 = (void *)*plVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)local_80 + local_88) = local_78[local_88];
  }
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103a88(local_80);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010320d(undefined8 param_1)

{
  FUN_00101877(param_1);
  return;
}




void FUN_00101549(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010197c(local_88);
                    /* try { // try from 00101584 to 00101618 has its CatchHandler @ 00101664 */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a80(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019bc(local_58,local_88);
                    /* try { // try from 00101620 to 00101624 has its CatchHandler @ 0010164f */
  FUN_001038d2(local_58);
  FUN_0010199c(local_58);
  FUN_0010199c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104254(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102b3c(undefined8 param_1)

{
  FUN_001032ca(param_1);
  return;
}




long FUN_00102f18(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00102b96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010324a(param_1);
  FUN_001032df(uVar1,1);
  return;
}




long FUN_0010309e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103446(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034aa(param_2);
                    /* try { // try from 0010310d to 0010319f has its CatchHandler @ 001031cb */
    uVar2 = FUN_0010309e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034c0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103446(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034aa(local_38);
      uVar2 = FUN_0010309e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034c0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8
FUN_00102738(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a12(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d1c(param_3);
      uVar5 = FUN_001026e5(param_4);
      cVar1 = FUN_00101dae(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027bc;
      }
    }
  }
  bVar2 = true;
LAB_001027bc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102822(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102822(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined4 FUN_00101dae(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104017(void)

{
  return;
}




void FUN_00101bac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fb2(param_1,param_2);
  lVar1 = FUN_00102022(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102038(param_1);
                    /* try { // try from 00101c07 to 00101c0b has its CatchHandler @ 00101c11 */
    uVar3 = FUN_0010204e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




ulong FUN_00103e7c(long param_1,ulong param_2,long param_3)

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




void FUN_0010322b(undefined8 param_1)

{
  FUN_001018a4(param_1);
  return;
}




undefined8 FUN_00103088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001036f5(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bb4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}



