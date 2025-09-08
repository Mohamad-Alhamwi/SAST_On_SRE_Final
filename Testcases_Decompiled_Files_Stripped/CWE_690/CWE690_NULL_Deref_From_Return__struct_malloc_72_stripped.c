
long FUN_00102bce(long param_1)

{
  return param_1 + 8;
}




void FUN_00102c33(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f3c(param_1,param_2);
  return;
}




void FUN_00101727(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101976(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(8);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
                    /* try { // try from 0010179f to 00101834 has its CatchHandler @ 00101880 */
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  FUN_00101bc0(local_38,local_58);
                    /* try { // try from 0010183c to 00101840 has its CatchHandler @ 0010186b */
  FUN_00101521(local_38);
  FUN_00101a34(local_38);
  FUN_00101a34(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b1c(void)

{
  return;
}




void FUN_00103b27(void)

{
  return;
}




void FUN_00101d8e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102675(param_1,param_2);
  return;
}




void FUN_00103791(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001037ea(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001035e5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ec7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ce(param_1,param_2,param_3);
  return;
}




void FUN_00103b06(void)

{
  return;
}




void FUN_001019c2(undefined8 param_1)

{
  FUN_00101d32(param_1);
  return;
}




void FUN_00103663(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102634(void)

{
  return;
}




void FUN_00102e39(undefined8 param_1,undefined8 param_2)

{
  FUN_00103088(param_1,param_2,0);
  return;
}




void FUN_00102cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d5e(param_3);
  uVar2 = FUN_00102d5e(local_28);
  uVar3 = FUN_00102d5e(local_20);
  uVar1 = FUN_00102fa3(uVar3,uVar2,uVar1);
  FUN_00102fd8(&local_30,uVar1);
  return;
}




void FUN_0010368e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101521(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101580(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_001037ea(__ptr);
    free(__ptr);
  }
  return;
}




undefined8 FUN_0010191f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001019e2(long *param_1)

{
  FUN_00101d42(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101936(param_1);
  return;
}




void FUN_001027ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c5d(param_2);
  uVar2 = FUN_00102c5d(param_1);
  FUN_00102ca9(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_0010301f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103213(param_1);
  puVar1 = (undefined8 *)FUN_00103231(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




int FUN_00103a7e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010370f(undefined4 param_1)

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




void FUN_0010340f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d5e(param_3);
  uVar2 = FUN_00102d5e(local_28);
  uVar3 = FUN_00102d5e(local_20);
  uVar1 = FUN_001034f5(uVar3,uVar2,uVar1);
  FUN_00102fd8(&local_30,uVar1);
  return;
}




void FUN_00103a98(void)

{
  return;
}




void FUN_00103aa3(void)

{
  return;
}




void FUN_00103088(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103260(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102b94(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001023f8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dbc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001031c5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d5e(param_1);
  uVar1 = FUN_00103348(uVar1,param_2,param_3);
  FUN_00102fd8(&local_10,uVar1);
  return;
}




void FUN_00101acc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dde(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102be4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101936(undefined8 param_1)

{
  FUN_001019c2(param_1);
  return;
}




undefined8 FUN_00102a77(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aa4(param_1,param_2);
  return param_1;
}




void FUN_00101d42(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102643(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102bbb(void)

{
  return;
}




void FUN_001035b3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101d7c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102dae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fee(param_1,param_2,param_3);
  return;
}




void FUN_00102675(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bbb(param_1,param_2);
  return;
}




void FUN_00103ada(void)

{
  return;
}




undefined8 FUN_00103ce0(undefined8 *param_1)

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




undefined8 FUN_00102cde(undefined8 param_1)

{
  return param_1;
}




void FUN_001033b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010347d(param_1,param_2,param_3);
  return;
}




void FUN_00103639(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103b5e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001015a4(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101976(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(8);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
                    /* try { // try from 0010161c to 001016b1 has its CatchHandler @ 001016fd */
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a7c(local_58);
  FUN_00101acc(local_38,&local_60);
  FUN_00101afa(local_58,local_38[0],1,&local_68);
  FUN_00101bc0(local_38,local_58);
                    /* try { // try from 001016b9 to 001016bd has its CatchHandler @ 001016e8 */
  FUN_001014c9(local_38);
  FUN_00101a34(local_38);
  FUN_00101a34(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103278(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_00102768(undefined8 param_1)

{
  FUN_00102bce(param_1);
  return;
}




undefined8 FUN_00102c5d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f50(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033e9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034e0(&local_10);
  FUN_00102cde(uVar1);
  return;
}




void FUN_001037bc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010311e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f8(param_1,param_2,param_3);
  return;
}




long FUN_0010245e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103393(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026c2(&local_10);
  return *puVar1;
}




void FUN_00101d00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102eb4(void)

{
  return;
}




void FUN_00102f6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010311e(param_1,param_2,param_3);
  return;
}




void FUN_001030ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103278(param_2);
  uVar2 = FUN_00103278(param_1);
  FUN_0010328a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103ac4(void)

{
  return;
}




ulong FUN_0010387d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d32(void)

{
  return;
}




undefined8 FUN_00102e67(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f50(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010328a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d5e(param_3);
  uVar2 = FUN_00103393(local_28);
  uVar3 = FUN_00103393(local_20);
  uVar1 = FUN_001033b4(uVar3,uVar2,uVar1);
  FUN_00102fd8(&local_30,uVar1);
  return;
}




void FUN_00101afa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101df0(param_1);
  local_18 = FUN_00101e47(&local_38,&local_20);
  local_20 = FUN_001023ac(local_30);
  uVar1 = FUN_001023f8(&local_20,local_18);
  FUN_00101e8c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023ac(local_30);
  FUN_001023f8(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ab9(void)

{
  return;
}




undefined8 FUN_0010254e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026a0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001026c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00102786(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dde(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dde(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101956(undefined8 param_1)

{
  FUN_00101996(param_1);
  return;
}




void FUN_00102f3c(void)

{
  return;
}




void FUN_00103d59(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102fee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c5(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103cbd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a1f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e67(param_2);
  uVar2 = FUN_00102e67(param_1);
  FUN_00102ca9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b32(void)

{
  return;
}




void FUN_0010381d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 * FUN_00103348(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00103260(void)

{
  return 0xfffffffffffffff;
}




void * FUN_0010352a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




bool FUN_00103c62(pthread_t *param_1)

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




void FUN_00102fa3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314f(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102e0a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103acf(void)

{
  return;
}




void FUN_00102ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102be4(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010191f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103e40(void)

{
  return;
}




void FUN_001036e4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong * FUN_00103231(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103af0(void)

{
  return;
}




void FUN_00102822(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cde(param_2);
  uVar2 = FUN_00102cde(param_1);
  FUN_00102cf0(uVar2,uVar1,param_3);
  return;
}




void FUN_00102ace(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aa4(param_1,param_2);
  FUN_00101d00(param_1);
  return;
}




undefined8 FUN_00103a6f(void)

{
  return 0;
}




void FUN_00103ae5(void)

{
  return;
}




long FUN_00101e47(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026c2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026c2(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001029e8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e39(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102f50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_00103981(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010314f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103b53(void)

{
  return;
}




void FUN_00103769(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103d78(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001025a6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026a0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bf6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102be4(param_3);
  FUN_00102ef8(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001024d6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102872(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d5e(param_2);
  uVar2 = FUN_00102d5e(param_1);
  FUN_00102d70(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101dde(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034e0(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102fd8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001018ba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010358d("Calling good()...");
  FUN_001018aa();
  FUN_0010358d("Finished good()");
  FUN_0010358d("Calling bad()...");
  FUN_001015a4();
  FUN_0010358d("Finished bad()");
  return 0;
}




void FUN_00102734(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bce(param_1);
  FUN_00102c33(*param_1,uVar1);
  return;
}




void FUN_00102ca9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f6e(param_1,param_2,param_3);
  return;
}




long FUN_00101580(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001036b9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010360d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_001028f8(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102de4(param_1);
  lVar2 = FUN_0010245e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010245e(local_40);
  local_30 = FUN_0010245e(local_40);
  plVar3 = (long *)FUN_00102e0a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010245e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102de4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102de4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101df0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026a0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001034f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010352a(param_1,param_2,param_3);
  return;
}




void FUN_00103b48(void)

{
  return;
}




void FUN_00103b3d(void)

{
  return;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101ce0(param_1);
  FUN_00101d00(param_1);
  return;
}




void FUN_001032f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033e9(param_2);
  uVar2 = FUN_001033e9(param_1);
  FUN_0010340f(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001018aa(void)

{
  FUN_00101727();
  return;
}




void FUN_00101976(undefined8 param_1)

{
  FUN_00101956(param_1);
  return;
}




void FUN_00101ce0(undefined8 param_1)

{
  FUN_00102634(param_1);
  return;
}




void FUN_001026a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103afb(void)

{
  return;
}




void FUN_00103d97(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103b11(void)

{
  return;
}




undefined8 FUN_00102485(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a77(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102b04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029e8(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102643(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b94(param_1,param_2,param_3);
  return;
}




void FUN_00101a34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d7c(param_1);
  FUN_00101d8e(*param_1,param_1[1],uVar1);
  FUN_001019e2(param_1);
  return;
}




void FUN_00101e8c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001028f8(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023ac(local_80);
      local_60 = FUN_00102786(&local_88,&local_78);
      local_70 = FUN_001029e8(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d7c(local_80);
                    /* try { // try from 00102196 to 00102221 has its CatchHandler @ 001022d9 */
      FUN_001028c3(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d7c(local_80);
      puVar2 = (undefined8 *)FUN_00101dde(&local_88);
      local_70 = FUN_00102a1f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d7c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dde(&local_88);
      local_70 = FUN_00102a1f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d7c(local_80);
      FUN_00101d8e(*local_80,local_80[1],uVar1);
      FUN_00101d42(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026d4(local_38,param_1,param_4);
                    /* try { // try from 00101f16 to 001020e9 has its CatchHandler @ 001022bb */
      local_50 = FUN_00102768(local_38);
      local_78 = FUN_00101a7c(local_80);
      local_48 = FUN_00102786(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d7c(local_80);
        FUN_001027ca(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dde(&local_88);
        FUN_00102822(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dde(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dde(&local_88);
        FUN_00102872(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d7c(local_80);
        lVar4 = FUN_001028c3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d7c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dde(&local_88);
        FUN_001027ca(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dde(&local_88);
        FUN_00102872(*puVar2,local_40,local_50);
      }
      FUN_00102734(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023ac(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dbc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010358d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103aae(void)

{
  return;
}




undefined8 FUN_00103a60(void)

{
  return 1;
}




void FUN_00103dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102de4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024d6(param_1);
  FUN_0010301f(uVar1);
  return;
}




void FUN_001026d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102be4(param_3);
  uVar2 = FUN_00102bce(param_1);
  FUN_00102bf6(*param_1,uVar2,uVar1);
  return;
}




void FUN_001024e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ace(param_1,param_3);
                    /* try { // try from 00102522 to 00102526 has its CatchHandler @ 00102529 */
  FUN_00102b04(param_1,param_2);
  return;
}




void FUN_001028c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dae(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b95(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b5e,local_18);
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




void FUN_00102b5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec7(param_1,param_2,param_3);
  return;
}




void * FUN_0010347d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103213(undefined8 param_1)

{
  FUN_00103260(param_1);
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101580(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_001037ea(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101a7c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dbc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b5e(param_1,param_2,param_3);
  return;
}




void FUN_00101bc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024d6(param_2);
  FUN_00102485(&local_31,uVar1);
  uVar1 = FUN_0010245e(param_2);
                    /* try { // try from 00101c26 to 00101c2a has its CatchHandler @ 00101c93 */
  FUN_001024e8(param_1,uVar1,&local_31);
  FUN_001019c2(&local_31);
  uVar2 = FUN_00101d7c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025a6(param_2);
  uVar4 = FUN_0010254e(param_2);
                    /* try { // try from 00101c74 to 00101c78 has its CatchHandler @ 00101cb1 */
  uVar1 = FUN_001025fe(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eb4(param_1,param_2);
  return;
}



