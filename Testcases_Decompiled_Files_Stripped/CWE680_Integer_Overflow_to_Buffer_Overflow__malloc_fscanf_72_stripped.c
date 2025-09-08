
long FUN_00103626(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_001037cc(undefined4 param_1)

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




undefined8 FUN_00103b2c(void)

{
  return 0;
}




void FUN_001037a1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102b50(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_0010188c(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101902(undefined8 param_1)

{
  FUN_00101c4c(param_1);
  FUN_00101c6c(param_1);
  return;
}




void FUN_001031f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cca(param_3);
  uVar2 = FUN_001032f5(local_28);
  uVar3 = FUN_001032f5(local_20);
  uVar1 = FUN_00103316(uVar3,uVar2,uVar1);
  FUN_00102f3e(&local_30,uVar1);
  return;
}




undefined8 FUN_00102f3e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_0010192e(undefined8 param_1)

{
  FUN_00101c9e(param_1);
  return;
}




void FUN_001025a0(void)

{
  return;
}




void FUN_0010260c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001031c6(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00102454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a3a(param_1,param_3);
                    /* try { // try from 0010248e to 00102492 has its CatchHandler @ 00102495 */
  FUN_00102a70(param_1,param_2);
  return;
}




void FUN_0010278e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c4a(param_2);
  uVar2 = FUN_00102c4a(param_1);
  FUN_00102c5c(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_00103197(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010325e(param_1,param_2,param_3);
  return;
}




void FUN_001018c2(undefined8 param_1)

{
  FUN_00101902(param_1);
  return;
}




undefined4 * FUN_001032ae(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_001038a7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103b76(void)

{
  return;
}




void FUN_00102d4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102442(param_1);
  FUN_00102f85(uVar1);
  return;
}




ulong FUN_00102864(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d4c(param_1);
  lVar2 = FUN_001023ca(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023ca(local_40);
  local_30 = FUN_001023ca(local_40);
  plVar3 = (long *)FUN_00102d72(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023ca(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d4c(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d4c(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103826(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d5c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010260c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cca(param_3);
  uVar2 = FUN_00102cca(local_28);
  uVar3 = FUN_00102cca(local_20);
  uVar1 = FUN_00102f09(uVar3,uVar2,uVar1);
  FUN_00102f3e(&local_30,uVar1);
  return;
}




undefined8 FUN_00102bc9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eb6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001026f2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d4a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d4a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103bce(void)

{
  return;
}




void FUN_0010312b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cca(param_1);
  uVar1 = FUN_001032ae(uVar1,param_2,param_3);
  FUN_00102f3e(&local_10,uVar1);
  return;
}




void FUN_00103e16(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010298b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dcf(param_2);
  uVar2 = FUN_00102dcf(param_1);
  FUN_00102c15(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103ba2(void)

{
  return;
}




int FUN_00103b3b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103371(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cca(param_3);
  uVar2 = FUN_00102cca(local_28);
  uVar3 = FUN_00102cca(local_20);
  uVar1 = FUN_00103457(uVar3,uVar2,uVar1);
  FUN_00102f3e(&local_30,uVar1);
  return;
}




void FUN_00103720(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010374b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103c52(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c1b,local_18);
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




void FUN_00103879(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_001030b5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00103179(undefined8 param_1)

{
  FUN_001031c6(param_1);
  return;
}




void FUN_001026a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b3a(param_1);
  FUN_00102b9f(*param_1,uVar1);
  return;
}




void FUN_00101509(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e2(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101552 to 00101626 has its CatchHandler @ 00101672 */
  __isoc99_fscanf(stdin,&DAT_00104005,&local_64);
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  FUN_00101b2c(local_38,local_58);
                    /* try { // try from 0010162e to 00101632 has its CatchHandler @ 0010165d */
  FUN_001034ef(local_38);
  FUN_001019a0(local_38);
  FUN_001019a0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034ef(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00103626(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036a2(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101c4c(undefined8 param_1)

{
  FUN_001025a0(param_1);
  return;
}




undefined8 FUN_00102c4a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102364(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101d28(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010364a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103bfa(void)

{
  return;
}




void FUN_00102ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103084(param_1,param_2,param_3);
  return;
}




void FUN_00102f09(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b5(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102d72(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010312b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b1d(void)

{
  return 1;
}




long FUN_00101db3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010262e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010262e(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103b55(void)

{
  return;
}




long FUN_00102b3a(long param_1)

{
  return param_1 + 8;
}




void * FUN_001033df(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00102c15(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ed4(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_0010384e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ea2(void)

{
  return;
}




void FUN_00103e35(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001031de(undefined8 param_1)

{
  return param_1;
}




void FUN_00102da1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fee(param_1,param_2,0);
  return;
}




void FUN_00101c6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102442(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032f5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010262e(&local_10);
  return *puVar1;
}




void FUN_001038da(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001036a2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_0010348c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00103d9d(undefined8 *param_1)

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




void FUN_00101b2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102442(param_2);
  FUN_001023f1(&local_31,uVar1);
  uVar1 = FUN_001023ca(param_2);
                    /* try { // try from 00101b92 to 00101b96 has its CatchHandler @ 00101bff */
  FUN_00102454(param_1,uVar1,&local_31);
  FUN_0010192e(&local_31);
  uVar2 = FUN_00101ce8(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102512(param_2);
  uVar4 = FUN_001024ba(param_2);
                    /* try { // try from 00101be0 to 00101be4 has its CatchHandler @ 00101c1d */
  uVar1 = FUN_0010256a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010194e(long *param_1)

{
  FUN_00101cae(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_001018a2(param_1);
  return;
}




void FUN_00103bb8(void)

{
  return;
}




undefined8 FUN_001023f1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e3(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102fee(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031c6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_0010282f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d16(param_1,param_2,param_3);
  return;
}




void FUN_00101a66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d5c(param_1);
  local_18 = FUN_00101db3(&local_38,&local_20);
  local_20 = FUN_00102318(local_30);
  uVar1 = FUN_00102364(&local_20,local_18);
  FUN_00101df8(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102318(local_30);
  FUN_00102364(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103034(param_1,param_2,param_3);
  return;
}




void FUN_00103e54(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001036f6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cfa(undefined8 param_1,undefined8 param_2)

{
  FUN_001025e1(param_1,param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107028 = 1;
    return;
  }
  return;
}




undefined8 FUN_001024ba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010260c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103be4(void)

{
  return;
}




void FUN_00103b60(void)

{
  return;
}




undefined8 FUN_00103442(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101817(void)

{
  FUN_0010169c();
  return;
}




undefined8 FUN_00102cca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f85(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103179(param_1);
  puVar1 = (undefined8 *)FUN_00103197(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103776(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102318(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d28(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a10(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e1c(param_1,param_2);
  return;
}




void FUN_00103e80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010169c(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e2(local_58);
  local_64 = 0x14;
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
                    /* try { // try from 0010170c to 001017a1 has its CatchHandler @ 001017ed */
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019e8(local_58);
  FUN_00101a38(local_38,&local_60);
  FUN_00101a66(local_58,local_38[0],1,&local_64);
  FUN_00101b2c(local_38,local_58);
                    /* try { // try from 001017a9 to 001017ad has its CatchHandler @ 001017d8 */
  FUN_0010358a(local_38);
  FUN_001019a0(local_38);
  FUN_001019a0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029e3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a10(param_1,param_2);
  return param_1;
}




void FUN_00101a38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d4a(param_2);
  *param_1 = *puVar1;
  return;
}




bool FUN_00103d1f(pthread_t *param_1)

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




void FUN_00101c9e(void)

{
  return;
}




void FUN_0010325e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010334b(param_2);
  uVar2 = FUN_0010334b(param_1);
  FUN_00103371(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b9f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea2(param_1,param_2);
  return;
}




void FUN_00103b97(void)

{
  return;
}




void FUN_00103bd9(void)

{
  return;
}




void FUN_00102aca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e2f(param_1,param_2,param_3);
  return;
}




void FUN_00102cdc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




ulong FUN_0010393a(long param_1,ulong param_2,long param_3)

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




void FUN_00103457(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010348c(param_1,param_2,param_3);
  return;
}




void FUN_00103c1b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102b00(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103d7a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b6b(void)

{
  return;
}




undefined8 FUN_001019e8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d28(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f54(param_1,param_2,param_3);
  return;
}




void FUN_00103034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031de(param_2);
  uVar2 = FUN_001031de(param_1);
  FUN_001031f0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103bef(void)

{
  return;
}




void FUN_001019a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ce8(param_1);
  FUN_00101cfa(*param_1,param_1[1],uVar1);
  FUN_0010194e(param_1);
  return;
}




void FUN_00102b62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b50(param_3);
  FUN_00102e60(param_1,param_2,uVar1);
  return;
}




void FUN_0010334b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103442(&local_10);
  FUN_00102c4a(uVar1);
  return;
}




void FUN_001018a2(undefined8 param_1)

{
  FUN_0010192e(param_1);
  return;
}




void FUN_0010358a(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00103626(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036a2(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102b27(void)

{
  return;
}




void FUN_001036ca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101d4a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010188c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_001023ca(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_00101827(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010364a("Calling good()...");
  FUN_00101817();
  FUN_0010364a("Finished good()");
  FUN_0010364a("Calling bad()...");
  FUN_00101509();
  FUN_0010364a("Finished bad()");
  return 0;
}




undefined8 FUN_00102dcf(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eb6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bc3(void)

{
  return;
}




void FUN_00101cae(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025af(param_1,param_2,param_3);
  }
  return;
}




void FUN_001018e2(undefined8 param_1)

{
  FUN_001018c2(param_1);
  return;
}




void FUN_00101df8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102864(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102318(local_80);
      local_60 = FUN_001026f2(&local_88,&local_78);
      local_70 = FUN_00102954(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ce8(local_80);
                    /* try { // try from 00102102 to 0010218d has its CatchHandler @ 00102245 */
      FUN_0010282f(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ce8(local_80);
      puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
      local_70 = FUN_0010298b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101ce8(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
      local_70 = FUN_0010298b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ce8(local_80);
      FUN_00101cfa(*local_80,local_80[1],uVar1);
      FUN_00101cae(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102640(local_38,param_1,param_4);
                    /* try { // try from 00101e82 to 00102055 has its CatchHandler @ 00102227 */
      local_50 = FUN_001026d4(local_38);
      local_78 = FUN_001019e8(local_80);
      local_48 = FUN_001026f2(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ce8(local_80);
        FUN_00102736(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
        FUN_0010278e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d4a(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
        FUN_001027de(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101ce8(local_80);
        lVar4 = FUN_0010282f(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ce8(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
        FUN_00102736(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d4a(&local_88);
        FUN_001027de(*puVar2,local_40,local_50);
      }
      FUN_001026a0(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102954(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103bad(void)

{
  return;
}




void FUN_00103c10(void)

{
  return;
}




void FUN_001027de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cca(param_2);
  uVar2 = FUN_00102cca(param_1);
  FUN_00102cdc(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102954(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102da1(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102a3a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a10(param_1,param_2);
  FUN_00101c6c(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




undefined8 FUN_00101ce8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b8c(void)

{
  return;
}




void FUN_00103670(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001025af(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b00(param_1,param_2,param_3);
  return;
}




void FUN_0010256a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aca(param_1,param_2,param_3);
  return;
}




void FUN_001026d4(undefined8 param_1)

{
  FUN_00102b3a(param_1);
  return;
}




void FUN_00103316(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033df(param_1,param_2,param_3);
  return;
}




void FUN_00102640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b50(param_3);
  uVar2 = FUN_00102b3a(param_1);
  FUN_00102b62(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102512(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010260c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103a3e(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010262e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e1c(void)

{
  return;
}




undefined8 FUN_00102b50(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b27(param_1,param_2);
  return;
}




void FUN_00103b81(void)

{
  return;
}




void FUN_00103ef0(void)

{
  return;
}




void FUN_00102736(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bc9(param_2);
  uVar2 = FUN_00102bc9(param_1);
  FUN_00102c15(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102eb6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



