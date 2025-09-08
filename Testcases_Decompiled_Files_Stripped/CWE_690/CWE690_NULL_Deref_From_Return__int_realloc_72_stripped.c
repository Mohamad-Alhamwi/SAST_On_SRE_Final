
undefined8 FUN_0010327a(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_001034fa(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103b78(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001036a8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_00103497(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bfe(param_3);
  FUN_00102f12(param_1,param_2,uVar1);
  return;
}




void FUN_00102f6a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102d0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d78(param_3);
  uVar2 = FUN_00102d78(local_28);
  uVar3 = FUN_00102d78(local_20);
  uVar1 = FUN_00102fbd(uVar3,uVar2,uVar1);
  FUN_00102ff2(&local_30,uVar1);
  return;
}




void FUN_00103ade(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101da8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010268f(param_1,param_2);
  return;
}




undefined8 FUN_00101e0a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bfe(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101939(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101d1a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001024f0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ee1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e8(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102e24(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102fbd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103169(param_1,param_2,param_3);
  return;
}




void FUN_001035cd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001037ab(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b1e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a02(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_001025c0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010350f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103544(param_1,param_2,param_3);
  return;
}




void FUN_001019dc(undefined8 param_1)

{
  FUN_00101d4c(param_1);
  return;
}




void FUN_00102a39(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e81(param_2);
  uVar2 = FUN_00102e81(param_1);
  FUN_00102cc3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001028dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dc8(param_1,param_2,param_3);
  return;
}




long FUN_00102478(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




int FUN_00103a98(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102e81(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f6a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b2b(void)

{
  return;
}




bool FUN_00103c7c(pthread_t *param_1)

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




void FUN_0010264e(void)

{
  return;
}




ulong FUN_00103897(long param_1,ulong param_2,long param_3)

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




void FUN_001036d3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001030a2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010327a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001033ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103497(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103cd7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103403(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034fa(&local_10);
  FUN_00102cf8(uVar1);
  return;
}




void FUN_00103aff(void)

{
  return;
}




void FUN_001035a7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102e53(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a2(param_1,param_2,0);
  return;
}




void FUN_00102ece(void)

{
  return;
}




undefined8 FUN_001023c6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010322d(undefined8 param_1)

{
  FUN_0010327a(param_1);
  return;
}




void FUN_0010173a(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101990(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,4);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
                    /* try { // try from 001017b9 to 0010184e has its CatchHandler @ 0010189a */
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  FUN_00101bda(local_38,local_58);
                    /* try { // try from 00101856 to 0010185a has its CatchHandler @ 00101885 */
  FUN_00101537(local_38);
  FUN_00101a4e(local_38);
  FUN_00101a4e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a02(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e53(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101ae6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101df8(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00103292(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ad3(void)

{
  return;
}




void FUN_00102cc3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f88(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cf8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee1(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d78(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b62(void)

{
  return;
}




void FUN_0010367d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019fc(long *param_1)

{
  FUN_00101d5c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101950(param_1);
  return;
}




void FUN_001036fe(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_001027a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101df8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101df8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001030e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103292(param_2);
  uVar2 = FUN_00103292(param_1);
  FUN_001032a4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00102912(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102dfe(param_1);
  lVar2 = FUN_00102478(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102478(local_40);
  local_30 = FUN_00102478(local_40);
  plVar3 = (long *)FUN_00102e24(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102478(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dfe(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dfe(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00103544(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102c4d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f56(param_1,param_2);
  return;
}




void FUN_00103b36(void)

{
  return;
}




void FUN_00102f56(void)

{
  return;
}




void FUN_00102bae(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001018c4(void)

{
  FUN_0010173a();
  return;
}




undefined8 FUN_00103cfa(undefined8 *param_1)

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




void FUN_00101cfa(undefined8 param_1)

{
  FUN_0010264e(param_1);
  return;
}




undefined8 FUN_00102ff2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001035ff(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103312(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103403(param_2);
  uVar2 = FUN_00103403(param_1);
  FUN_00103429(uVar2,uVar1,param_3);
  return;
}




void FUN_001031df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d78(param_1);
  uVar1 = FUN_00103362(uVar1,param_2,param_3);
  FUN_00102ff2(&local_10,uVar1);
  return;
}




void FUN_00103b20(void)

{
  return;
}




void FUN_001015b0(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101990(local_58);
  local_68 = (void *)0x0;
  local_68 = realloc((void *)0x0,4);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
                    /* try { // try from 0010162f to 001016c4 has its CatchHandler @ 00101710 */
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a96(local_58);
  FUN_00101ae6(local_38,&local_60);
  FUN_00101b14(local_58,local_38[0],1,&local_68);
  FUN_00101bda(local_38,local_58);
                    /* try { // try from 001016cc to 001016d0 has its CatchHandler @ 001016fb */
  FUN_001014e9(local_38);
  FUN_00101a4e(local_38);
  FUN_00101a4e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101990(undefined8 param_1)

{
  FUN_00101970(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_00103a7a(void)

{
  return 1;
}




void FUN_00101bda(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024f0(param_2);
  FUN_0010249f(&local_31,uVar1);
  uVar1 = FUN_00102478(param_2);
                    /* try { // try from 00101c40 to 00101c44 has its CatchHandler @ 00101cad */
  FUN_00102502(param_1,uVar1,&local_31);
  FUN_001019dc(&local_31);
  uVar2 = FUN_00101d96(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025c0(param_2);
  uVar4 = FUN_00102568(param_2);
                    /* try { // try from 00101c8e to 00101c92 has its CatchHandler @ 00101ccb */
  uVar1 = FUN_00102618(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103008(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102568(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_0010158c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00102bfe(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b41(void)

{
  return;
}




undefined8 FUN_001033ad(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026dc(&local_10);
  return *puVar1;
}




void FUN_00101970(undefined8 param_1)

{
  FUN_001019b0(param_1);
  return;
}




void FUN_00101d4c(void)

{
  return;
}




void FUN_00103abd(void)

{
  return;
}




void FUN_00103db1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103729(undefined4 param_1)

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




void FUN_00103d73(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103312(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102a91(undefined8 param_1,undefined8 param_2)

{
  FUN_00102abe(param_1,param_2);
  return param_1;
}




void FUN_00102d8a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103429(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d78(param_3);
  uVar2 = FUN_00102d78(local_28);
  uVar3 = FUN_00102d78(local_20);
  uVar1 = FUN_0010350f(uVar3,uVar2,uVar1);
  FUN_00102ff2(&local_30,uVar1);
  return;
}




undefined8 FUN_00101a96(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010268f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bd5(param_1,param_2);
  return;
}




void FUN_00103b4c(void)

{
  return;
}




void FUN_00103b6d(void)

{
  return;
}




void FUN_00103d92(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010265d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bae(param_1,param_2,param_3);
  return;
}




void FUN_00101537(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010158c(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 5;
    FUN_001035ff(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00103b0a(void)

{
  return;
}




undefined8 FUN_001018d4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035a7("Calling good()...");
  FUN_001018c4();
  FUN_001035a7("Finished good()");
  FUN_001035a7("Calling bad()...");
  FUN_001015b0();
  FUN_001035a7("Finished bad()");
  return 0;
}




void FUN_00102f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103138(param_1,param_2,param_3);
  return;
}




void FUN_0010288c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d78(param_2);
  uVar2 = FUN_00102d78(param_1);
  FUN_00102d8a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103837(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103ab2(void)

{
  return;
}




void FUN_001026ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bfe(param_3);
  uVar2 = FUN_00102be8(param_1);
  FUN_00102c10(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102abe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ece(param_1,param_2);
  return;
}




void FUN_00103627(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_00103169(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103af4(void)

{
  return;
}




void FUN_0010274e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102be8(param_1);
  FUN_00102c4d(*param_1,uVar1);
  return;
}




void FUN_00103b15(void)

{
  return;
}




void FUN_00103783(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010158c(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_001035ff(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102abe(param_1,param_2);
  FUN_00101d1a(param_1);
  return;
}




void FUN_00102dfe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f0(param_1);
  FUN_00103039(uVar1);
  return;
}




void FUN_00103ac8(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_0010283c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cf8(param_2);
  uVar2 = FUN_00102cf8(param_1);
  FUN_00102d0a(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103039(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010322d(param_1);
  puVar1 = (undefined8 *)FUN_0010324b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_0010324b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102782(undefined8 param_1)

{
  FUN_00102be8(param_1);
  return;
}




undefined8 * FUN_00103362(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001019b0(undefined8 param_1)

{
  FUN_00101cfa(param_1);
  FUN_00101d1a(param_1);
  return;
}




void FUN_00101b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e0a(param_1);
  local_18 = FUN_00101e61(&local_38,&local_20);
  local_20 = FUN_001023c6(local_30);
  uVar1 = FUN_00102412(&local_20,local_18);
  FUN_00101ea6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023c6(local_30);
  FUN_00102412(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bd5(void)

{
  return;
}




undefined8 FUN_00103a89(void)

{
  return 0;
}




undefined8 FUN_00101939(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00101a4e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d96(param_1);
  FUN_00101da8(*param_1,param_1[1],uVar1);
  FUN_001019fc(param_1);
  return;
}




undefined8 FUN_001026dc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e50(void)

{
  return;
}




ulong FUN_0010399b(long param_1,ulong param_2,long param_3)

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




void FUN_00103ae9(void)

{
  return;
}




void FUN_00102502(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ae8(param_1,param_3);
                    /* try { // try from 0010253c to 00102540 has its CatchHandler @ 00102543 */
  FUN_00102b1e(param_1,param_2);
  return;
}




void FUN_00102618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b78(param_1,param_2,param_3);
  return;
}




void FUN_001026ba(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_001019dc(param_1);
  return;
}




void FUN_00103804(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d78(param_3);
  uVar2 = FUN_001033ad(local_28);
  uVar3 = FUN_001033ad(local_20);
  uVar1 = FUN_001033ce(uVar3,uVar2,uVar1);
  FUN_00102ff2(&local_30,uVar1);
  return;
}




void FUN_00101dd6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103baf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b78,local_18);
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




undefined8 FUN_00101d96(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102412(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dd6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031df(param_1,param_2,param_3);
  return;
}




void FUN_00101ea6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102912(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023c6(local_80);
      local_60 = FUN_001027a0(&local_88,&local_78);
      local_70 = FUN_00102a02(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d96(local_80);
                    /* try { // try from 001021b0 to 0010223b has its CatchHandler @ 001022f3 */
      FUN_001028dd(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d96(local_80);
      puVar2 = (undefined8 *)FUN_00101df8(&local_88);
      local_70 = FUN_00102a39(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d96(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101df8(&local_88);
      local_70 = FUN_00102a39(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d96(local_80);
      FUN_00101da8(*local_80,local_80[1],uVar1);
      FUN_00101d5c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026ee(local_38,param_1,param_4);
                    /* try { // try from 00101f30 to 00102103 has its CatchHandler @ 001022d5 */
      local_50 = FUN_00102782(local_38);
      local_78 = FUN_00101a96(local_80);
      local_48 = FUN_001027a0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d96(local_80);
        FUN_001027e4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101df8(&local_88);
        FUN_0010283c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101df8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101df8(&local_88);
        FUN_0010288c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d96(local_80);
        lVar4 = FUN_001028dd(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d96(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101df8(&local_88);
        FUN_001027e4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101df8(&local_88);
        FUN_0010288c(*puVar2,local_40,local_50);
      }
      FUN_0010274e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010265d(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103653(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




long FUN_00101e61(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026dc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026dc(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_00102be8(long param_1)

{
  return param_1 + 8;
}




void FUN_001027e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c77(param_2);
  uVar2 = FUN_00102c77(param_1);
  FUN_00102cc3(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00101df8(undefined8 param_1)

{
  return param_1;
}




void FUN_001037d6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b57(void)

{
  return;
}




undefined8 FUN_0010249f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a91(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102c77(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f6a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



