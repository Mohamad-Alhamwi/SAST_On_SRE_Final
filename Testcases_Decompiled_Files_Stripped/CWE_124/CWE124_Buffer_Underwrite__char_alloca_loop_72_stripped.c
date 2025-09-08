
void FUN_00103cd1(void)

{
  return;
}




void FUN_00103d3f(void)

{
  return;
}




void FUN_00103f66(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101a38(undefined8 param_1)

{
  FUN_00101da8(param_1);
  return;
}




void FUN_00103d34(void)

{
  return;
}




undefined8 FUN_00103556(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001025c4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102716(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010399e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00103776(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_0010261c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102716(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c5a(param_3);
  FUN_00102f6e(param_1,param_2,uVar1);
  return;
}




void FUN_00102d1f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe4(param_1,param_2,param_3);
  return;
}




void FUN_0010391c(undefined4 param_1)

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




void FUN_00102c0a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




ulong * FUN_00102e80(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001038f1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103846(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010254c(undefined8 param_1)

{
  return param_1;
}




void FUN_001039f7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d76(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001019cc(undefined8 param_1)

{
  FUN_00101a0c(param_1);
  return;
}




undefined8 FUN_00101af2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e32(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101da8(void)

{
  return;
}




undefined8 FUN_00101df2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d6b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e04(undefined8 param_1,undefined8 param_2)

{
  FUN_001026eb(param_1,param_2);
  return;
}




void FUN_00101e32(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 * FUN_001033be(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00102f2a(void)

{
  return;
}




void FUN_00103d4a(void)

{
  return;
}




ulong FUN_0010296e(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102e5a(param_1);
  lVar2 = FUN_001024d4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001024d4(local_40);
  local_30 = FUN_001024d4(local_40);
  plVar3 = (long *)FUN_00102e80(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001024d4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e5a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e5a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001032d6(void)

{
  return 0xfffffffffffffff;
}




void FUN_0010323b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102dd4(param_1);
  uVar1 = FUN_001033be(uVar1,param_2,param_3);
  FUN_0010304e(&local_10,uVar1);
  return;
}




void FUN_00102e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103064(param_1,param_2,param_3);
  return;
}




void FUN_0010389b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e54(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102f6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c5a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101996(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103f85(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001014e9(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019ec(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x1015ac;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  *(undefined8 *)(puVar2 + -0x78) = 0x1015cf;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1015e6;
  FUN_00101b42(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 001015fd to 00101692 has its CatchHandler @ 001016de */
  *(undefined8 *)(puVar2 + -0x78) = 0x101602;
  FUN_00101b70(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10160e;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101625;
  FUN_00101b42(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x101641;
  FUN_00101b70(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10164d;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101664;
  FUN_00101b42(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x101680;
  FUN_00101b70(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101693;
  FUN_00101c36(local_38,local_58);
                    /* try { // try from 0010169a to 0010169e has its CatchHandler @ 001016c9 */
  *(undefined8 *)(puVar2 + -0x78) = 0x10169f;
  FUN_00103603(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1016ab;
  FUN_00101aaa(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1016b7;
  FUN_00101aaa(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101701;
  __stack_chk_fail();
}




undefined8 FUN_00103c6d(void)

{
  return 1;
}




void FUN_00103d13(void)

{
  return;
}




void FUN_00103d1e(void)

{
  return;
}




undefined8 FUN_00101996(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103d60(void)

{
  return;
}




void FUN_00103870(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001038c6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102dd4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102422(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e32(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cbb(void)

{
  return;
}




void FUN_0010274a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c5a(param_3);
  uVar2 = FUN_00102c44(param_1);
  FUN_00102c6c(*param_1,uVar2,uVar1);
  return;
}




ulong * FUN_001032a7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f2a(param_1,param_2);
  return;
}




void FUN_00103cdc(void)

{
  return;
}




void FUN_00103603(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00103776(param_1,2);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_0010379a(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00103776(param_1,2);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_0010379a(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a0c(undefined8 param_1)

{
  FUN_00101d56(param_1);
  FUN_00101d76(param_1);
  return;
}




undefined8 FUN_00103409(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102738(&local_10);
  return *puVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_0010379a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103eed(undefined8 *param_1)

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




undefined8 FUN_00102a5e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102eaf(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103fa4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001030fe(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001032d6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103c7c(void)

{
  return 0;
}




long FUN_00101ebd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102738(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102738(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103289(undefined8 param_1)

{
  FUN_001032d6(param_1);
  return;
}




undefined8 FUN_00101e66(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102716(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d55(void)

{
  return;
}




void FUN_0010356b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035a0(param_1,param_2,param_3);
  return;
}




void FUN_00101b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101e66(param_1);
  local_18 = FUN_00101ebd(&local_38,&local_20);
  local_20 = FUN_00102422(local_30);
  uVar1 = FUN_0010246e(&local_20,local_18);
  FUN_00101f02(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102422(local_30);
  FUN_0010246e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103976(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010342a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f3(param_1,param_2,param_3);
  return;
}




void FUN_001027aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c44(param_1);
  FUN_00102ca9(*param_1,uVar1);
  return;
}




void FUN_00102bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f3d(param_1,param_2,param_3);
  return;
}




void FUN_00103a2a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00103da2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d6b,local_18);
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




void FUN_00103cf2(void)

{
  return;
}




void FUN_00103cb0(void)

{
  return;
}




void FUN_00101707(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019ec(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017ca;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  *(undefined8 *)(puVar2 + -0x78) = 0x1017e9;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101800;
  FUN_00101b42(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 00101817 to 001018ac has its CatchHandler @ 001018f8 */
  *(undefined8 *)(puVar2 + -0x78) = 0x10181c;
  FUN_00101b70(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101828;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x10183f;
  FUN_00101b42(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x10185b;
  FUN_00101b70(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101867;
  local_68 = FUN_00101af2(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x10187e;
  FUN_00101b42(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x10189a;
  FUN_00101b70(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018ad;
  FUN_00101c36(local_38,local_58);
                    /* try { // try from 001018b4 to 001018b8 has its CatchHandler @ 001018e3 */
  *(undefined8 *)(puVar2 + -0x78) = 0x1018b9;
  FUN_001036bc(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018c5;
  FUN_00101aaa(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018d1;
  FUN_00101aaa(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x10191b;
  __stack_chk_fail();
}




undefined8 FUN_00102738(undefined8 param_1)

{
  return param_1;
}




void FUN_001028e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd4(param_2);
  uVar2 = FUN_00102dd4(param_1);
  FUN_00102de6(uVar2,uVar1,param_3);
  return;
}




void FUN_00102674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bd4(param_1,param_2,param_3);
  return;
}




void FUN_00102b7a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a5e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001037f2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102edd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102fc6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102716(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void * FUN_001034f3(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103d08(void)

{
  return;
}




void FUN_00102898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d54(param_2);
  uVar2 = FUN_00102d54(param_1);
  FUN_00102d66(uVar2,uVar1,param_3);
  return;
}




void FUN_00101f02(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010296e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102422(local_80);
      local_60 = FUN_001027fc(&local_88,&local_78);
      local_70 = FUN_00102a5e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101df2(local_80);
                    /* try { // try from 0010220c to 00102297 has its CatchHandler @ 0010234f */
      FUN_00102939(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101df2(local_80);
      puVar2 = (undefined8 *)FUN_00101e54(&local_88);
      local_70 = FUN_00102a95(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101df2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e54(&local_88);
      local_70 = FUN_00102a95(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101df2(local_80);
      FUN_00101e04(*local_80,local_80[1],uVar1);
      FUN_00101db8(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010274a(local_38,param_1,param_4);
                    /* try { // try from 00101f8c to 0010215f has its CatchHandler @ 00102331 */
      local_50 = FUN_001027de(local_38);
      local_78 = FUN_00101af2(local_80);
      local_48 = FUN_001027fc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101df2(local_80);
        FUN_00102840(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101e54(&local_88);
        FUN_00102898(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e54(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e54(&local_88);
        FUN_001028e8(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101df2(local_80);
        lVar4 = FUN_00102939(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101df2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e54(&local_88);
        FUN_00102840(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e54(&local_88);
        FUN_001028e8(*puVar2,local_40,local_50);
      }
      FUN_001027aa(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c31(void)

{
  return;
}




void FUN_00103fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00103c8b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_001024d4(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001032ee(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103d29(void)

{
  return;
}




void FUN_00101921(void)

{
  FUN_00101707();
  return;
}




undefined8 FUN_00102aed(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b1a(param_1,param_2);
  return param_1;
}




void FUN_00102fc6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010246e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101e32(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fb2(void)

{
  return;
}




void FUN_001026eb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c31(param_1,param_2);
  return;
}




void FUN_001027de(undefined8 param_1)

{
  FUN_00102c44(param_1);
  return;
}




void FUN_001039c9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001031c5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010304e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102dd4(param_3);
  uVar2 = FUN_00103409(local_28);
  uVar3 = FUN_00103409(local_20);
  uVar1 = FUN_0010342a(uVar3,uVar2,uVar1);
  FUN_0010304e(&local_30,uVar1);
  return;
}




void FUN_00101aaa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101df2(param_1);
  FUN_00101e04(*param_1,param_1[1],uVar1);
  FUN_00101a58(param_1);
  return;
}




bool FUN_00103e6f(pthread_t *param_1)

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




void FUN_00103ca5(void)

{
  return;
}




void FUN_001019ec(undefined8 param_1)

{
  FUN_001019cc(param_1);
  return;
}




void FUN_00101a58(long *param_1)

{
  FUN_00101db8(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001019ac(param_1);
  return;
}




void FUN_00103064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323b(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00104040(void)

{
  return;
}




void FUN_001026b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c0a(param_1,param_2,param_3);
  return;
}




void FUN_0010336e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010345f(param_2);
  uVar2 = FUN_0010345f(param_1);
  FUN_00103485(uVar2,uVar1,param_3);
  return;
}




void FUN_0010381a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001026aa(void)

{
  return;
}




void FUN_00103194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010336e(param_1,param_2,param_3);
  return;
}




ulong FUN_00103b8e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d56(undefined8 param_1)

{
  FUN_001026aa(param_1);
  return;
}




void FUN_00103cc6(void)

{
  return;
}




undefined8 FUN_00103095(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103289(param_1);
  puVar1 = (undefined8 *)FUN_001032a7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103cfd(void)

{
  return;
}




void FUN_00102939(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e24(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101c36(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010254c(param_2);
  FUN_001024fb(&local_31,uVar1);
  uVar1 = FUN_001024d4(param_2);
                    /* try { // try from 00101c9c to 00101ca0 has its CatchHandler @ 00101d09 */
  FUN_0010255e(param_1,uVar1,&local_31);
  FUN_00101a38(&local_31);
  uVar2 = FUN_00101df2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010261c(param_2);
  uVar4 = FUN_001025c4(param_2);
                    /* try { // try from 00101cea to 00101cee has its CatchHandler @ 00101d27 */
  uVar1 = FUN_00102674(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b1a(param_1,param_2);
  FUN_00101d76(param_1);
  return;
}




undefined8 FUN_001024fb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102aed(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010345f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103556(&local_10);
  FUN_00102d54(uVar1);
  return;
}




long FUN_001027fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e54(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e54(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010255e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b44(param_1,param_3);
                    /* try { // try from 00102598 to 0010259c has its CatchHandler @ 0010259f */
  FUN_00102b7a(param_1,param_2);
  return;
}




void FUN_00102a95(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102edd(param_2);
  uVar2 = FUN_00102edd(param_1);
  FUN_00102d1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103019(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c5(param_1,param_2,param_3);
  return;
}




void FUN_00101db8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001026b9(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102eaf(undefined8 param_1,undefined8 param_2)

{
  FUN_001030fe(param_1,param_2,0);
  return;
}




void FUN_00102f3d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103144(param_1,param_2,param_3);
  return;
}




void FUN_00102fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103194(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e54(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd3(param_2);
  uVar2 = FUN_00102cd3(param_1);
  FUN_00102d1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103ce7(void)

{
  return;
}




void FUN_00102ca9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fb2(param_1,param_2);
  return;
}




undefined8 FUN_00102c5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102de6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00101931(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010379a("Calling good()...");
  FUN_00101921();
  FUN_0010379a("Finished good()");
  FUN_0010379a("Calling bad()...");
  FUN_001014e9();
  FUN_0010379a("Finished bad()");
  return 0;
}




ulong FUN_00103a8a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102dd4(param_3);
  uVar2 = FUN_00102dd4(local_28);
  uVar3 = FUN_00102dd4(local_20);
  uVar1 = FUN_00103019(uVar3,uVar2,uVar1);
  FUN_0010304e(&local_30,uVar1);
  return;
}




void FUN_001019ac(undefined8 param_1)

{
  FUN_00101a38(param_1);
  return;
}




long FUN_00102c44(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00103eca(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102d54(undefined8 param_1)

{
  return param_1;
}




void FUN_00103485(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102dd4(param_3);
  uVar2 = FUN_00102dd4(local_28);
  uVar3 = FUN_00102dd4(local_20);
  uVar1 = FUN_0010356b(uVar3,uVar2,uVar1);
  FUN_0010304e(&local_30,uVar1);
  return;
}




void FUN_00103144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032ee(param_2);
  uVar2 = FUN_001032ee(param_1);
  FUN_00103300(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102cd3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102fc6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e5a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010254c(param_1);
  FUN_00103095(uVar1);
  return;
}




void * FUN_001035a0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}



