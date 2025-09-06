
undefined8 FUN_00102c0e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b1a(void)

{
  return;
}




undefined8 FUN_00101aa6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101de6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101af6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e08(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102ede(void)

{
  return;
}




void FUN_00102fcd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103179(param_1,param_2,param_3);
  return;
}




void FUN_00101d6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010266d(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102cd3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f98(param_1,param_2,param_3);
  return;
}




void FUN_001033de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a7(param_1,param_2,param_3);
  return;
}




void FUN_00103739(undefined4 param_1)

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




void FUN_001019c0(undefined8 param_1)

{
  FUN_00101d0a(param_1);
  FUN_00101d2a(param_1);
  return;
}




void FUN_00103637(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e0e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102500(param_1);
  FUN_00103049(uVar1);
  return;
}




void FUN_00103663(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




undefined8 FUN_00103002(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b25(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ef(param_1,param_2,param_3);
  return;
}




void FUN_00103df0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b2e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a12(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001035dd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010289c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d88(param_2);
  uVar2 = FUN_00102d88(param_1);
  FUN_00102d9a(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d88(param_3);
  uVar2 = FUN_00102d88(local_28);
  uVar3 = FUN_00102d88(local_20);
  uVar1 = FUN_00102fcd(uVar3,uVar2,uVar1);
  FUN_00103002(&local_30,uVar1);
  return;
}




undefined8 FUN_00103ce7(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103d0a(undefined8 *param_1)

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




void FUN_00103aee(void)

{
  return;
}




void FUN_001032b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d88(param_3);
  uVar2 = FUN_001033bd(local_28);
  uVar3 = FUN_001033bd(local_20);
  uVar1 = FUN_001033de(uVar3,uVar2,uVar1);
  FUN_00103002(&local_30,uVar1);
  return;
}




void FUN_00103148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103322(param_1,param_2,param_3);
  return;
}




void FUN_00101a5e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101da6(param_1);
  FUN_00101db8(*param_1,param_1[1],uVar1);
  FUN_00101a0c(param_1);
  return;
}




undefined8 FUN_00102d08(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a12(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e63(param_1,param_2);
  }
  return uVar1;
}




void FUN_001036e3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101d2a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef1(param_1,param_2,param_3);
  return;
}




void * FUN_00103554(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101d5c(void)

{
  return;
}




undefined8 FUN_00103a8a(void)

{
  return 1;
}




undefined8 FUN_00102d88(undefined8 param_1)

{
  return param_1;
}




void FUN_0010265e(void)

{
  return;
}




void FUN_001031ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d88(param_1);
  uVar1 = FUN_00103372(uVar1,param_2,param_3);
  FUN_00103002(&local_10,uVar1);
  return;
}




void FUN_001015c4(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a0(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
                    /* try { // try from 00101641 to 001016d6 has its CatchHandler @ 00101722 */
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  FUN_00101bea(local_38,local_58);
                    /* try { // try from 001016de to 001016e2 has its CatchHandler @ 0010170d */
  FUN_001014e9(local_38);
  FUN_00101a5e(local_38);
  FUN_00101a5e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024af(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102aa1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102c87(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f7a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103bbf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b88,local_18);
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




void FUN_00102af8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ace(param_1,param_2);
  FUN_00101d2a(param_1);
  return;
}




undefined8 * FUN_00103372(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_0010360f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103b72(void)

{
  return;
}




void FUN_00101541(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015a0(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_00103814(__ptr);
    free(__ptr);
  }
  return;
}




ulong * FUN_0010325b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c0e(param_3);
  FUN_00102f22(param_1,param_2,uVar1);
  return;
}




void FUN_00103e60(void)

{
  return;
}




void FUN_00103b30(void)

{
  return;
}




void FUN_00103322(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103413(param_2);
  uVar2 = FUN_00103413(param_1);
  FUN_00103439(uVar2,uVar1,param_3);
  return;
}




void FUN_00102e63(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b2(param_1,param_2,0);
  return;
}




void FUN_00102f66(void)

{
  return;
}




void FUN_001028ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dd8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103049(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010323d(param_1);
  puVar1 = (undefined8 *)FUN_0010325b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103ac2(void)

{
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015a0(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_00103814(__ptr);
  free(__ptr);
  return;
}




void FUN_00103814(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d0a(undefined8 param_1)

{
  FUN_0010265e(param_1);
  return;
}




void FUN_00103af9(void)

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




ulong * FUN_00102e34(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010328a(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00102500(undefined8 param_1)

{
  return param_1;
}




void FUN_0010269f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be5(param_1,param_2);
  return;
}




void FUN_00103b46(void)

{
  return;
}




void FUN_00103b67(void)

{
  return;
}




void FUN_0010275e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bf8(param_1);
  FUN_00102c5d(*param_1,uVar1);
  return;
}




undefined8 FUN_00101949(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001025d0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026ca(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102bf8(long param_1)

{
  return param_1 + 8;
}




void FUN_00103b51(void)

{
  return;
}




undefined8 FUN_001023d6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101de6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102922(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102e0e(param_1);
  lVar2 = FUN_00102488(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102488(local_40);
  local_30 = FUN_00102488(local_40);
  plVar3 = (long *)FUN_00102e34(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102488(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e0e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e0e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_001027b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e08(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e08(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101bea(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102500(param_2);
  FUN_001024af(&local_31,uVar1);
  uVar1 = FUN_00102488(param_2);
                    /* try { // try from 00101c50 to 00101c54 has its CatchHandler @ 00101cbd */
  FUN_00102512(param_1,uVar1,&local_31);
  FUN_001019ec(&local_31);
  uVar2 = FUN_00101da6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025d0(param_2);
  uVar4 = FUN_00102578(param_2);
                    /* try { // try from 00101c9e to 00101ca2 has its CatchHandler @ 00101cdb */
  uVar1 = FUN_00102628(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102be5(void)

{
  return;
}




void FUN_0010323d(undefined8 param_1)

{
  FUN_0010328a(param_1);
  return;
}




void FUN_00103b3b(void)

{
  return;
}




void FUN_001035b7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




bool FUN_00103c8c(pthread_t *param_1)

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




void FUN_00101eb6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102922(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023d6(local_80);
      local_60 = FUN_001027b0(&local_88,&local_78);
      local_70 = FUN_00102a12(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101da6(local_80);
                    /* try { // try from 001021c0 to 0010224b has its CatchHandler @ 00102303 */
      FUN_001028ed(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101da6(local_80);
      puVar2 = (undefined8 *)FUN_00101e08(&local_88);
      local_70 = FUN_00102a49(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101da6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e08(&local_88);
      local_70 = FUN_00102a49(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101da6(local_80);
      FUN_00101db8(*local_80,local_80[1],uVar1);
      FUN_00101d6c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026fe(local_38,param_1,param_4);
                    /* try { // try from 00101f40 to 00102113 has its CatchHandler @ 001022e5 */
      local_50 = FUN_00102792(local_38);
      local_78 = FUN_00101aa6(local_80);
      local_48 = FUN_001027b0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101da6(local_80);
        FUN_001027f4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101e08(&local_88);
        FUN_0010284c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e08(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e08(&local_88);
        FUN_0010289c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101da6(local_80);
        lVar4 = FUN_001028ed(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101da6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e08(&local_88);
        FUN_001027f4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e08(&local_88);
        FUN_0010289c(*puVar2,local_40,local_50);
      }
      FUN_0010275e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010350a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102f7a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102792(undefined8 param_1)

{
  FUN_00102bf8(param_1);
  return;
}




long FUN_001015a0(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102d9a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_001018e4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035b7("Calling good()...");
  FUN_001018d4();
  FUN_001035b7("Finished good()");
  FUN_001035b7("Calling bad()...");
  FUN_001015c4();
  FUN_001035b7("Finished bad()");
  return 0;
}




void FUN_00103d83(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102ace(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ede(param_1,param_2);
  return;
}




void FUN_001037bb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001018d4(void)

{
  FUN_0010174c();
  return;
}




undefined8 FUN_00101e08(undefined8 param_1)

{
  return param_1;
}




void FUN_00103793(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102f22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c0e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101949(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103847(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101de6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001026ca(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010370e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102512(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102af8(param_1,param_3);
                    /* try { // try from 0010254c to 00102550 has its CatchHandler @ 00102553 */
  FUN_00102b2e(param_1,param_2);
  return;
}




void FUN_00103ae3(void)

{
  return;
}




ulong FUN_001039ab(long param_1,ulong param_2,long param_3)

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




long FUN_00102488(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103da2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103439(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d88(param_3);
  uVar2 = FUN_00102d88(local_28);
  uVar3 = FUN_00102d88(local_20);
  uVar1 = FUN_0010351f(uVar3,uVar2,uVar1);
  FUN_00103002(&local_30,uVar1);
  return;
}




void FUN_0010174c(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a0(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
                    /* try { // try from 001017c9 to 0010185e has its CatchHandler @ 001018aa */
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aa6(local_58);
  FUN_00101af6(local_38,&local_60);
  FUN_00101b24(local_58,local_38[0],1,&local_68);
  FUN_00101bea(local_38,local_58);
                    /* try { // try from 00101866 to 0010186a has its CatchHandler @ 00101895 */
  FUN_00101541(local_38);
  FUN_00101a5e(local_38);
  FUN_00101a5e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c5d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f66(param_1,param_2);
  return;
}




void FUN_0010368d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103a99(void)

{
  return 0;
}




void FUN_00103b04(void)

{
  return;
}




void FUN_00103b0f(void)

{
  return;
}




void FUN_00101db8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010269f(param_1,param_2);
  return;
}




void FUN_00103dc1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101da6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ad8(void)

{
  return;
}




void FUN_00101980(undefined8 param_1)

{
  FUN_001019c0(param_1);
  return;
}




void FUN_00103b88(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




int FUN_00103aa8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001027f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c87(param_2);
  uVar2 = FUN_00102c87(param_1);
  FUN_00102cd3(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010266d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bbe(param_1,param_2,param_3);
  return;
}




void FUN_00101960(undefined8 param_1)

{
  FUN_001019ec(param_1);
  return;
}




void FUN_00101b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e1a(param_1);
  local_18 = FUN_00101e71(&local_38,&local_20);
  local_20 = FUN_001023d6(local_30);
  uVar1 = FUN_00102422(&local_20,local_18);
  FUN_00101eb6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023d6(local_30);
  FUN_00102422(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019a0(undefined8 param_1)

{
  FUN_00101980(param_1);
  return;
}




void FUN_00102bbe(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001026ec(undefined8 param_1)

{
  return param_1;
}




void FUN_001019ec(undefined8 param_1)

{
  FUN_00101d5c(param_1);
  return;
}




undefined8 FUN_00102422(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101de6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102aa1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ace(param_1,param_2);
  return param_1;
}




ulong FUN_001038a7(long param_1,ulong param_2,long param_3)

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




void FUN_00102628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b88(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e1a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ca(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00101e71(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026ec(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026ec(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010351f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103554(param_1,param_2,param_3);
  return;
}




void * FUN_001034a7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001036b8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001037e6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001026fe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c0e(param_3);
  uVar2 = FUN_00102bf8(param_1);
  FUN_00102c20(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102ef1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030f8(param_1,param_2,param_3);
  return;
}




void FUN_00103b5c(void)

{
  return;
}




undefined8 FUN_00102e91(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f7a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010284c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d08(param_2);
  uVar2 = FUN_00102d08(param_1);
  FUN_00102d1a(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001032a2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b7d(void)

{
  return;
}




void FUN_00103413(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010350a(&local_10);
  FUN_00102d08(uVar1);
  return;
}




long FUN_00103179(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001030f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032a2(param_2);
  uVar2 = FUN_001032a2(param_1);
  FUN_001032b4(uVar2,uVar1,param_3);
  return;
}




void FUN_00101a0c(long *param_1)

{
  FUN_00101d6c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101960(param_1);
  return;
}




void FUN_00102dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103018(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102578(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026ca(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030b2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010328a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103acd(void)

{
  return;
}




void FUN_00102f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103148(param_1,param_2,param_3);
  return;
}




void FUN_00102a49(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e91(param_2);
  uVar2 = FUN_00102e91(param_1);
  FUN_00102cd3(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_001033bd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026ec(&local_10);
  return *puVar1;
}



