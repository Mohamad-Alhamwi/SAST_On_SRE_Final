
void FUN_001034c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035ba(&local_10);
  FUN_00102dc2(uVar1);
  return;
}




void FUN_00103713(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f10(void)

{
  return;
}




void FUN_001038c4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001036e7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102e42(undefined8 param_1)

{
  return param_1;
}




long FUN_0010165c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103166(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010333e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00102f19(undefined8 param_1,undefined8 param_2)

{
  FUN_00103166(param_1,param_2,0);
  return;
}




void FUN_00103beb(void)

{
  return;
}




void FUN_00101680(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a5a(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 001016c9 to 0010179d has its CatchHandler @ 001017e9 */
  __isoc99_fscanf(stdin,&DAT_00104006,&local_64);
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  FUN_00101ca4(local_38,local_58);
                    /* try { // try from 001017a5 to 001017a9 has its CatchHandler @ 001017d4 */
  FUN_00101529(local_38);
  FUN_00101b18(local_38);
  FUN_00101b18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102490(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ea0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102569(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b5b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001030cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032a3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101ec2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102727(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c78(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001030b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010301a(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010165c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001036bf(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001031fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033d6(param_1,param_2,param_3);
  return;
}




void FUN_001037be(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010346d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027a6(&local_10);
  return *puVar1;
}




undefined8 FUN_00103b49(void)

{
  return 0;
}




void FUN_00102cda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cc8(param_3);
  FUN_00102fd8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001027a6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010373d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ca4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025ba(param_2);
  FUN_00102569(&local_31,uVar1);
  uVar1 = FUN_00102542(param_2);
                    /* try { // try from 00101d0a to 00101d0e has its CatchHandler @ 00101d77 */
  FUN_001025cc(param_1,uVar1,&local_31);
  FUN_00101aa6(&local_31);
  uVar2 = FUN_00101e60(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010268a(param_2);
  uVar4 = FUN_00102632(param_2);
                    /* try { // try from 00101d58 to 00101d5c has its CatchHandler @ 00101d95 */
  uVar1 = FUN_001026e2(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c78(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102bb2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b88(param_1,param_2);
  FUN_00101de4(param_1);
  return;
}




void FUN_001026e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c42(param_1,param_2,param_3);
  return;
}




void FUN_00103bb4(void)

{
  return;
}




void FUN_0010304c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031fc(param_1,param_2,param_3);
  return;
}




void FUN_00103c38(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102818(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cb2(param_1);
  FUN_00102d17(*param_1,uVar1);
  return;
}




void FUN_00103b88(void)

{
  return;
}




void FUN_001038f7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong * FUN_0010330f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103667(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010368d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103c0c(void)

{
  return;
}




void FUN_00103793(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010302e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103081(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010322d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102632(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102784(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_00103426(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00101a5a(undefined8 param_1)

{
  FUN_00101a3a(param_1);
  return;
}




void FUN_00102c42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa7(param_1,param_2,param_3);
  return;
}




void FUN_00101e26(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102727(param_1,param_2,param_3);
  }
  return;
}




void FUN_001034e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e42(param_3);
  uVar2 = FUN_00102e42(local_28);
  uVar3 = FUN_00102e42(local_20);
  uVar1 = FUN_001035cf(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




void FUN_00103be0(void)

{
  return;
}




void FUN_00102ec4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ba(param_1);
  FUN_001030fd(uVar1);
  return;
}




ulong * FUN_00102eea(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102d17(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301a(param_1,param_2);
  return;
}




undefined8 FUN_00102f47(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e71(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103896(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dc4(undefined8 param_1)

{
  FUN_00102718(param_1);
  return;
}




ulong FUN_00103957(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102acc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f19(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010333e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00102be8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102acc(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103768(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102e54(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




bool FUN_00103d3c(pthread_t *param_1)

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




undefined8 FUN_001030fd(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001032f1(param_1);
  puVar1 = (undefined8 *)FUN_0010330f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00102d41(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a7a(undefined8 param_1)

{
  FUN_00101dc4(param_1);
  FUN_00101de4(param_1);
  return;
}




void FUN_00101ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010322d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_001037e9(undefined4 param_1)

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




undefined8 FUN_001035ba(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001033d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034c3(param_2);
  uVar2 = FUN_001034c3(param_1);
  FUN_001034e9(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c2d(void)

{
  return;
}




void FUN_00101a3a(undefined8 param_1)

{
  FUN_00101a7a(param_1);
  return;
}




void FUN_00101bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ec2(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101813(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a5a(local_58);
  local_64 = 0x14;
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
                    /* try { // try from 00101883 to 00101918 has its CatchHandler @ 00101964 */
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101b60(local_58);
  FUN_00101bb0(local_38,&local_60);
  FUN_00101bde(local_58,local_38[0],1,&local_64);
  FUN_00101ca4(local_38,local_58);
                    /* try { // try from 00101920 to 00101924 has its CatchHandler @ 0010194f */
  FUN_001015c2(local_38);
  FUN_00101b18(local_38);
  FUN_00101b18(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b9e(void)

{
  return;
}




void FUN_00101e72(undefined8 param_1,undefined8 param_2)

{
  FUN_00102759(param_1,param_2);
  return;
}




void FUN_00102fa7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ac(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103c6f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c38,local_18);
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




void FUN_00102784(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101a1a(undefined8 param_1)

{
  FUN_00101aa6(param_1);
  return;
}




void FUN_00102dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e42(param_3);
  uVar2 = FUN_00102e42(local_28);
  uVar3 = FUN_00102e42(local_20);
  uVar1 = FUN_00103081(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




undefined8 FUN_00103d97(void *param_1)

{
  free(param_1);
  return 1;
}




void * FUN_00103604(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00101b60(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ea0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




undefined8 FUN_00101ed4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102784(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bca(void)

{
  return;
}




ulong FUN_00103a5b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103356(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102c9f(void)

{
  return;
}




void FUN_00102f94(void)

{
  return;
}




void FUN_001036bf(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e16(void)

{
  return;
}




long FUN_0010286a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ec2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ec2(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00103dba(undefined8 *param_1)

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




void FUN_00103ea0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_0010284c(undefined8 param_1)

{
  FUN_00102cb2(param_1);
  return;
}




undefined8 FUN_00101a03(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c17(void)

{
  return;
}




void FUN_00101aa6(undefined8 param_1)

{
  FUN_00101e16(param_1);
  return;
}




void FUN_001031ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103356(param_2);
  uVar2 = FUN_00103356(param_1);
  FUN_00103368(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b88(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f94(param_1,param_2);
  return;
}




void FUN_00103b7d(void)

{
  return;
}




void FUN_00103bbf(void)

{
  return;
}




void FUN_00102956(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e42(param_2);
  uVar2 = FUN_00102e42(param_1);
  FUN_00102e54(uVar2,uVar1,param_3);
  return;
}




long FUN_00102cb2(long param_1)

{
  return param_1 + 8;
}




void FUN_00103843(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e42(param_3);
  uVar2 = FUN_0010346d(local_28);
  uVar3 = FUN_0010346d(local_20);
  uVar1 = FUN_0010348e(uVar3,uVar2,uVar1);
  FUN_001030b6(&local_30,uVar1);
  return;
}




void FUN_00103c01(void)

{
  return;
}




void FUN_001029a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e8e(param_1,param_2,param_3);
  return;
}




void FUN_00103c22(void)

{
  return;
}




undefined8 FUN_00103b3a(void)

{
  return 1;
}




undefined8 FUN_0010199e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103667("Calling good()...");
  FUN_0010198e();
  FUN_00103667("Finished good()");
  FUN_00103667("Calling bad()...");
  FUN_00101680();
  FUN_00103667("Finished bad()");
  return 0;
}




undefined8 FUN_00102cc8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102cc8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101a03(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103bd5(void)

{
  return;
}




void FUN_0010198e(void)

{
  FUN_00101813();
  return;
}




undefined8 FUN_00102b5b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b88(param_1,param_2);
  return param_1;
}




void FUN_001032f1(undefined8 param_1)

{
  FUN_0010333e(param_1);
  return;
}




void FUN_0010348e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103557(param_1,param_2,param_3);
  return;
}




ulong FUN_001029dc(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ec4(param_1);
  lVar2 = FUN_00102542(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102542(local_40);
  local_30 = FUN_00102542(local_40);
  plVar3 = (long *)FUN_00102eea(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102542(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ec4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ec4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001035cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103604(param_1,param_2,param_3);
  return;
}




void FUN_00101bde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101ed4(param_1);
  local_18 = FUN_00101f2b(&local_38,&local_20);
  local_20 = FUN_00102490(local_30);
  uVar1 = FUN_001024dc(&local_20,local_18);
  FUN_00101f70(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102490(local_30);
  FUN_001024dc(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e60(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010304c(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107028 = 1;
    return;
  }
  return;
}




void FUN_00103ba9(void)

{
  return;
}




void FUN_00101ac6(long *param_1)

{
  FUN_00101e26(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101a1a(param_1);
  return;
}




void FUN_001015c2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010165c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_001036bf(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00101de4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102906(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dc2(param_2);
  uVar2 = FUN_00102dc2(param_1);
  FUN_00102dd4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103b93(void)

{
  return;
}




void FUN_00103bf6(void)

{
  return;
}




void FUN_00102759(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c9f(param_1,param_2);
  return;
}




void FUN_001027b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cc8(param_3);
  uVar2 = FUN_00102cb2(param_1);
  FUN_00102cda(*param_1,uVar2,uVar1);
  return;
}




void FUN_001028ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d41(param_2);
  uVar2 = FUN_00102d41(param_1);
  FUN_00102d8d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101b18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e60(param_1);
  FUN_00101e72(*param_1,param_1[1],uVar1);
  FUN_00101ac6(param_1);
  return;
}




void FUN_00103b72(void)

{
  return;
}




void * FUN_00103557(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_001024dc(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101ea0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e52(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f70(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_001029dc(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102490(local_80);
      local_60 = FUN_0010286a(&local_88,&local_78);
      local_70 = FUN_00102acc(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e60(local_80);
                    /* try { // try from 0010227a to 00102305 has its CatchHandler @ 001023bd */
      FUN_001029a7(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e60(local_80);
      puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
      local_70 = FUN_00102b03(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101e60(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
      local_70 = FUN_00102b03(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e60(local_80);
      FUN_00101e72(*local_80,local_80[1],uVar1);
      FUN_00101e26(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_001027b8(local_38,param_1,param_4);
                    /* try { // try from 00101ffa to 001021cd has its CatchHandler @ 0010239f */
      local_50 = FUN_0010284c(local_38);
      local_78 = FUN_00101b60(local_80);
      local_48 = FUN_0010286a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e60(local_80);
        FUN_001028ae(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
        FUN_00102906(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ec2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
        FUN_00102956(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101e60(local_80);
        lVar4 = FUN_001029a7(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e60(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
        FUN_001028ae(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ec2(&local_88);
        FUN_00102956(*puVar2,local_40,local_50);
      }
      FUN_00102818(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010268a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102784(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e42(param_1);
  uVar1 = FUN_00103426(uVar1,param_2,param_3);
  FUN_001030b6(&local_10,uVar1);
  return;
}




void FUN_001025cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bb2(param_1,param_3);
                    /* try { // try from 00102606 to 0010260a has its CatchHandler @ 0010260d */
  FUN_00102be8(param_1,param_2);
  return;
}




long FUN_00101f2b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027a6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027a6(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010386b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001025ba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102dc2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b03(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f47(param_2);
  uVar2 = FUN_00102f47(param_1);
  FUN_00102d8d(uVar2,uVar1,param_3,param_4);
  return;
}




long FUN_00102542(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




int FUN_00103b58(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103e33(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102718(void)

{
  return;
}




void FUN_00102e8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030cc(param_1,param_2,param_3);
  return;
}



