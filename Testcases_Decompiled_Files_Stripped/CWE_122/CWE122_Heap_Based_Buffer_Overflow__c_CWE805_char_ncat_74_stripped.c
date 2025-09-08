
undefined4 FUN_00101d8e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021f4(param_1);
  return unaff_EBX;
}




void FUN_00103f59(void)

{
  return;
}




void FUN_00103fbc(void)

{
  return;
}




long FUN_00102060(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102d62(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001033a5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001038fa(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101aa8(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(local_80,local_78,100);
  FUN_00103a4e(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102202(long param_1)

{
  FUN_00102b0e(param_1 + 0x20);
  return;
}




undefined8 FUN_0010204a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101a0e(long param_1)

{
  FUN_00101c60(param_1);
  FUN_00101c80(param_1);
  FUN_001018fa(param_1 + 8);
  return;
}




void FUN_00103ba5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104014(void)

{
  return;
}




undefined8 FUN_0010417e(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101811(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a4e("Calling good()...");
  FUN_00101801();
  FUN_00103a4e("Finished good()");
  FUN_00103a4e("Calling bad()...");
  FUN_00101549();
  FUN_00103a4e("Finished bad()");
  return 0;
}




void FUN_00102a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103272(param_1);
  FUN_001032ae(uVar1,param_2,1);
  return;
}




void FUN_001019c4(undefined8 param_1)

{
  FUN_00101a6a(param_1);
  return;
}




void FUN_001019a4(undefined8 param_1)

{
  FUN_00101984(param_1);
  return;
}




void FUN_00103c52(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103afa(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103c2a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00103e42(long param_1,ulong param_2,long param_3)

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




void FUN_0010401f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001034d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001041a1(undefined8 *param_1)

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




void FUN_00104290(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018fa(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101924(param_1);
  return;
}




void FUN_001032ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103512(param_1,param_2,param_3);
  return;
}




void FUN_00103f64(void)

{
  return;
}




void FUN_00101a6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0a(param_1);
  FUN_00101ca0(param_1,uVar1);
  FUN_00101964(param_1);
  return;
}




bool FUN_00104123(pthread_t *param_1)

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




void FUN_00103fdd(void)

{
  return;
}




void FUN_00103aa6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001020ff(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103bd0(undefined4 param_1)

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




undefined8 FUN_001022c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102076(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028f6(local_18,param_1);
  FUN_00102914(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010371d(undefined8 param_1)

{
  return param_1;
}




void FUN_001028b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010309c(param_1,param_2);
  return;
}




undefined8 FUN_001034e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101964(undefined8 param_1)

{
  FUN_00101a4a(param_1);
  return;
}




void FUN_00102b94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102224(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010384c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010371d(param_3);
  FUN_001038a8(param_1,param_2,uVar1);
  return;
}




long FUN_00102f40(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103f6f(void)

{
  return;
}




void FUN_0010270d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103036(param_1);
  FUN_00103058(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101876(0x30,param_2);
  uVar1 = FUN_0010371d(param_3);
  uVar2 = FUN_00102202(param_2);
  uVar3 = FUN_00103272(param_1);
  FUN_0010384c(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102224(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_00103f90(void)

{
  return;
}




void FUN_00101e72(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102f56(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033a5(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033a5(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_00101e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022d2(param_5);
  uVar2 = FUN_001022c0(param_4);
  uVar3 = FUN_001022ae(param_3);
  local_40 = FUN_001022e4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f10 to 00101f53 has its CatchHandler @ 00101f91 */
  uVar1 = FUN_0010270d(local_40);
  local_38 = FUN_00102364(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102116(param_1,local_40);
    FUN_0010284a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102760(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102b0e(undefined8 param_1)

{
  FUN_001032e0(param_1);
  return;
}




undefined8 FUN_001020e9(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f85(void)

{
  return;
}




void FUN_00101924(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101984(undefined8 param_1)

{
  FUN_00101a0e(param_1);
  return;
}




void FUN_00101d4a(undefined8 param_1)

{
  FUN_001021a4(param_1);
  return;
}




undefined8 FUN_001033a5(undefined8 param_1)

{
  return param_1;
}




void FUN_00101db4(undefined8 *param_1)

{
  FUN_00102202(*param_1);
  return;
}




void FUN_001029bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102202(param_2);
  uVar2 = FUN_00103272(param_1);
  FUN_00103284(uVar2,uVar1);
  return;
}




void FUN_001016a5(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a4(local_88);
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 0010171f to 00101788 has its CatchHandler @ 001017d4 */
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019e4(local_58,local_88);
                    /* try { // try from 00101790 to 00101794 has its CatchHandler @ 001017bf */
  FUN_001039a4(local_58);
  FUN_001019c4(local_58);
  FUN_001019c4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103284(undefined8 param_1,undefined8 param_2)

{
  FUN_001034fe(param_1,param_2);
  return;
}




int FUN_00103f3f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103b24(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103f7a(void)

{
  return;
}




void FUN_00104239(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101801(void)

{
  FUN_001016a5();
  return;
}




void FUN_0010309c(void)

{
  return;
}




undefined8 FUN_00101876(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00102d2e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001021f4(void)

{
  return;
}




void FUN_00102236(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102224(param_2);
  FUN_00102b2c(param_1,uVar1);
  return;
}




void FUN_00104300(void)

{
  return;
}




void FUN_0010382e(undefined8 param_1)

{
  FUN_00103889(param_1);
  return;
}




void FUN_00101c90(void)

{
  return;
}




undefined8 FUN_00103058(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103889(undefined8 param_1)

{
  FUN_00102b64(param_1);
  return;
}




undefined8 FUN_00104056(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010401f,local_18);
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




void FUN_00103fd2(void)

{
  return;
}




void FUN_001020da(void)

{
  return;
}




ulong FUN_00103d3e(long param_1,ulong param_2,long param_3)

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




void FUN_0010377c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010382e(param_2);
  puVar2 = (undefined4 *)FUN_00102b82(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
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




undefined8 FUN_001033b8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010284a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bbe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103272(param_1);
  FUN_00103307(uVar1,1);
  return;
}




void FUN_0010358a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022ae(param_3);
  uVar1 = FUN_001022c0(param_4);
  FUN_00101e10(local_38,uVar1);
  FUN_001022d2(param_5);
  uVar1 = FUN_00101876(0x10,param_2);
                    /* try { // try from 00103612 to 00103616 has its CatchHandler @ 00103619 */
  FUN_001036cc(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bd4(param_1,param_2);
  return;
}




undefined8 * FUN_00102f9e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00101aa8(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d20(param_1,param_2);
  local_28 = FUN_00101d4a(param_1);
  cVar2 = FUN_00101d68(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d8e(param_1);
    uVar3 = FUN_00101db4(&local_38);
    cVar2 = FUN_00101dd6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b48;
    }
  }
  bVar1 = true;
LAB_00101b48:
  if (bVar1) {
    uVar3 = FUN_00101dfd(param_2);
    FUN_00101e3a(local_30,uVar3);
    FUN_00101e72(&local_28,&local_38);
    local_38 = FUN_00101e94(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101db4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103f30(void)

{
  return 0;
}




void FUN_00102116(undefined8 param_1,undefined8 param_2)

{
  FUN_001029bc(param_1,param_2);
  FUN_00102a00(param_1,param_2);
  return;
}




undefined8 FUN_00101dfd(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102154(param_1,param_2);
  return;
}




undefined8 FUN_00102b82(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ace(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104258(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010284a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103cab(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_0010189f(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00102bea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101876(0x30,param_2);
  uVar1 = FUN_001022d2(param_5);
  uVar2 = FUN_001022c0(param_4);
  uVar3 = FUN_001022ae(param_3);
  uVar4 = FUN_00102202(param_2);
  uVar5 = FUN_00103272(param_1);
                    /* try { // try from 00102c79 to 00102c7d has its CatchHandler @ 00102c80 */
  FUN_00103335(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101e3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102224(param_2);
  FUN_00102236(param_1,uVar1);
  return param_1;
}




void FUN_0010353a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036b4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103cde(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104009(void)

{
  return;
}




void FUN_00103036(long param_1)

{
  FUN_00103450(param_1 + 0x20);
  return;
}




void FUN_001028f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103253(undefined8 param_1)

{
  FUN_001018cc(param_1);
  return;
}




void FUN_0010226e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b64(param_2);
  uVar1 = FUN_00102b82(uVar1);
  FUN_00102b94(param_1,uVar1);
  return;
}




undefined8 * FUN_00102fca(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101ca0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020e9(local_28);
    FUN_00101ca0(param_1,uVar1);
    lVar2 = FUN_001020ff(local_28);
    FUN_00102116(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010188c(void)

{
  return;
}




void FUN_00101fda(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102868(param_1,param_2);
  FUN_001028e2(param_1,param_2);
  FUN_001018fa(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103408(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103655(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033a5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103335(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022d2(param_5);
  uVar2 = FUN_001022c0(param_4);
  uVar3 = FUN_001022ae(param_3);
  FUN_0010358a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102cc8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010284a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b4f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102d44(undefined8 param_1)

{
  FUN_0010270d(param_1);
  return;
}




undefined8 FUN_00103f21(void)

{
  return 1;
}




void FUN_00103fe8(void)

{
  return;
}




void FUN_00102ff6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033a5(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103a4e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001036b4(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102b2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102224(param_2);
  FUN_00102b94(param_1,uVar1);
  return;
}




void FUN_00101a4a(undefined8 param_1)

{
  FUN_00101c90(param_1);
  return;
}




undefined8 FUN_00103730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bbe(param_1);
  uVar2 = FUN_0010371d(param_2);
  FUN_001037c0(param_1,uVar1,uVar2);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102cc8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a3a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d44(local_50);
    cVar2 = FUN_00101dd6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d44(local_50);
      cVar2 = FUN_00101dd6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102ff6(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d2e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d2e(local_60);
          local_48[1] = 0;
          FUN_00102d62(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fca(local_48);
          uVar6 = FUN_00102d44(*puVar5);
          cVar2 = FUN_00101dd6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102da2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020e9(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d62(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f56(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f40(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f40(local_60);
        uVar6 = FUN_00102f40(local_60);
        FUN_00102f56(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f9e(local_48);
        uVar6 = FUN_00102d44(*puVar5);
        cVar2 = FUN_00101dd6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102da2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020e9(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d62(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f56(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026f2;
  }
  lVar3 = FUN_00102d18(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102406:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d2e(local_60);
    uVar6 = FUN_00102d44(*puVar5);
    cVar2 = FUN_00101dd6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102406;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d2e(local_60);
    local_48[1] = 0;
    FUN_00102d62(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102da2(local_60,param_3);
  }
LAB_001026f2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001030b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001034fe(void)

{
  return;
}




void FUN_001028e2(void)

{
  return;
}




void FUN_001038a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010371d(param_3);
  puVar3 = (undefined8 *)FUN_00101876(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103307(undefined8 param_1,undefined8 param_2)

{
  FUN_0010353a(param_1,param_2,0);
  return;
}




undefined8 FUN_00103668(undefined8 param_1)

{
  return param_1;
}




void FUN_00102154(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a3a(param_1);
  uVar2 = FUN_00101d0a(param_1);
  FUN_00102a50(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101d0a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102a50(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010270d(local_38);
    cVar1 = FUN_00101dd6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020e9(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020ff(local_38);
    }
  }
  FUN_0010284a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001039a4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101aa8(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(local_80,local_78,100);
  FUN_00103a4e(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b64(undefined8 param_1)

{
  FUN_001032f2(param_1);
  return;
}




undefined8 FUN_001022ae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102914(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a3a(param_1);
  uVar2 = FUN_001030b0(param_2);
  uVar1 = FUN_001030c6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f40(param_1);
  uVar2 = FUN_00103235(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d2e(param_1);
  uVar2 = FUN_00103253(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103c7d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001018cc(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101c60(undefined8 param_1)

{
  FUN_001020da(param_1);
  return;
}




void FUN_00103450(undefined8 param_1)

{
  FUN_00103668(param_1);
  return;
}




void FUN_00103f9b(void)

{
  return;
}




undefined8 FUN_00103655(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d68(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103ffe(void)

{
  return;
}




void FUN_001036cc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010377c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a74(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e10(undefined8 param_1,undefined8 param_2)

{
  FUN_0010226e(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_00102868(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010306e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103fc7(void)

{
  return;
}




undefined4 * FUN_0010346e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103036(param_2);
  puVar2 = (undefined4 *)FUN_0010367a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00103272(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010306e(undefined8 param_1,undefined8 param_2)

{
  FUN_001028b8(param_1,param_2);
  return param_1;
}




void FUN_00103b7a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8
FUN_00102760(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a3a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d44(param_3);
      uVar5 = FUN_0010270d(param_4);
      cVar1 = FUN_00101dd6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027e4;
      }
    }
  }
  bVar2 = true;
LAB_001027e4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010284a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103235(undefined8 param_1)

{
  FUN_0010189f(param_1);
  return;
}




long FUN_00102a3a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001022e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bbe(param_1);
  uVar2 = FUN_001022d2(param_4);
  uVar3 = FUN_001022c0(param_3);
  uVar4 = FUN_001022ae(param_2);
  FUN_00102bea(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined4 FUN_00101dd6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103ff3(void)

{
  return;
}




void FUN_0010421a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102da2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101d0a(param_1);
  local_50 = FUN_00102a3a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010270d(local_58);
    local_59 = FUN_00101dd6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020e9(local_58);
    }
    else {
      local_58 = FUN_001020ff(local_58);
    }
  }
  FUN_0010284a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033b8(param_1);
    cVar1 = FUN_00101d68(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103408(local_38,&local_58,&local_50);
      goto LAB_00102f24;
    }
    FUN_00102f9e(&local_48);
  }
  uVar2 = FUN_00102d44(local_48);
  cVar1 = FUN_00101dd6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102ff6(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103408(local_38,&local_58,&local_50);
  }
LAB_00102f24:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103512(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_001030c6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010346e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034d2(param_2);
                    /* try { // try from 00103135 to 001031c7 has its CatchHandler @ 001031f3 */
    uVar2 = FUN_001030c6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034e8(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010346e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034d2(local_38);
      uVar2 = FUN_001030c6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034e8(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_001032f2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101bd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fda(param_1,param_2);
  lVar1 = FUN_0010204a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102060(param_1);
                    /* try { // try from 00101c2f to 00101c33 has its CatchHandler @ 00101c39 */
    uVar3 = FUN_00102076(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103fb1(void)

{
  return;
}




void FUN_0010367a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010371d(param_2);
  FUN_00103730(uVar1,uVar2);
  return;
}




undefined8 FUN_001032e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021a4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010284a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001022d2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103fa6(void)

{
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
  FUN_001019a4(local_88);
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 001015c3 to 0010162c has its CatchHandler @ 00101678 */
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101aa8(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019e4(local_58,local_88);
                    /* try { // try from 00101634 to 00101638 has its CatchHandler @ 00101663 */
  FUN_001038fa(local_58);
  FUN_001019c4(local_58);
  FUN_001019c4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



