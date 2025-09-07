
void FUN_001037cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103128(param_3);
  uVar2 = FUN_00103128(local_28);
  uVar3 = FUN_00103128(local_20);
  uVar1 = FUN_001038b5(uVar3,uVar2,uVar1);
  FUN_0010339c(&local_30,uVar1);
  return;
}




void FUN_00103a23(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103bdd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001039f9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033b2(param_1,param_2,param_3);
  return;
}




void FUN_00101adc(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d40(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101b25 to 00101bf9 has its CatchHandler @ 00101c45 */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  FUN_00101f8a(local_38,local_58);
                    /* try { // try from 00101c01 to 00101c05 has its CatchHandler @ 00101c30 */
  FUN_001016c3(local_38);
  FUN_00101dfe(local_38);
  FUN_00101dfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036bc(param_1,param_2,param_3);
  return;
}




void FUN_0010327a(void)

{
  return;
}




void FUN_00103edc(void)

{
  return;
}




void FUN_00101c6f(void)

{
  FUN_00101961();
  FUN_00101adc();
  return;
}




long FUN_00102828(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_001028b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e98(param_1,param_3);
                    /* try { // try from 001028ec to 001028f0 has its CatchHandler @ 001028f3 */
  FUN_00102ece(param_1,param_2);
  return;
}




void FUN_0010344c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103624(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




long FUN_00102211(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102a8c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102a8c(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102a6a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001033e3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001035d7(param_1);
  puVar1 = (undefined8 *)FUN_001035f5(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103332(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e2(param_1,param_2,param_3);
  return;
}




void FUN_001017ce(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d40(local_58);
  local_64 = 0xffffffff;
                    /* try { // try from 00101817 to 001018eb has its CatchHandler @ 00101937 */
  __isoc99_fscanf(stdin,&DAT_00105055,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  FUN_00101f8a(local_38,local_58);
                    /* try { // try from 001018f3 to 001018f7 has its CatchHandler @ 00101922 */
  FUN_00101509(local_38);
  FUN_00101dfe(local_38);
  FUN_00101dfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103589(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103128(param_1);
  uVar1 = FUN_0010370c(uVar1,param_2,param_3);
  FUN_0010339c(&local_10,uVar1);
  return;
}




void FUN_00103acf(undefined4 param_1)

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




int FUN_00103e3e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103027(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103314(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102afe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f98(param_1);
  FUN_00102ffd(*param_1,uVar1);
  return;
}




void FUN_00103a4e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001020ca(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00102f98(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328d(param_1,param_2,param_3);
  return;
}




void FUN_00102a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f5e(param_1,param_2,param_3);
  return;
}




void FUN_00103ea5(void)

{
  return;
}




undefined8 FUN_0010339c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103f55(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f1e,local_18);
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




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




long FUN_00102b50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001021a8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001021a8(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103e79(void)

{
  return;
}




ulong FUN_00103c3d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010363c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103973(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001039a5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103efd(void)

{
  return;
}




void FUN_00103aa4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103367(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103513(param_1,param_2,param_3);
  return;
}




void FUN_001033b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103589(param_1,param_2,param_3);
  return;
}




void FUN_001029c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f28(param_1,param_2,param_3);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017aa(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010394d("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a5(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00103774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010383d(param_1,param_2,param_3);
  return;
}




void FUN_00101d8c(undefined8 param_1)

{
  FUN_001020fc(param_1);
  return;
}




void FUN_00102f85(void)

{
  return;
}




void FUN_00102158(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a3f(param_1,param_2);
  return;
}




void * FUN_0010383d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103ed1(void)

{
  return;
}




void FUN_001031ff(undefined8 param_1,undefined8 param_2)

{
  FUN_0010344c(param_1,param_2,0);
  return;
}




undefined8 FUN_0010322d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103314(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103073(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103332(param_1,param_2,param_3);
  return;
}




void FUN_0010328d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103492(param_1,param_2,param_3);
  return;
}




void FUN_00104138(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103baa(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001020fc(void)

{
  return;
}




ulong FUN_00103d41(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105104,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e41(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e6e(param_1,param_2);
  return param_1;
}




void FUN_0010364e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103128(param_3);
  uVar2 = FUN_00103753(local_28);
  uVar3 = FUN_00103753(local_20);
  uVar1 = FUN_00103774(uVar3,uVar2,uVar1);
  FUN_0010339c(&local_30,uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_00102f5e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103a79(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001031aa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a0(param_1);
  FUN_001033e3(uVar1);
  return;
}




bool FUN_00104022(pthread_t *param_1)

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




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00103492(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010363c(param_2);
  uVar2 = FUN_0010363c(param_1);
  FUN_0010364e(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001030a8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dac(long *param_1)

{
  FUN_0010210c(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d00(param_1);
  return;
}




undefined8 FUN_001021ba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a6a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035d7(undefined8 param_1)

{
  FUN_00103624(param_1);
  return;
}




void FUN_00103b29(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001038b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038ea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103753(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102a8c(&local_10);
  return *puVar1;
}




void FUN_00103f1e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d60(undefined8 param_1)

{
  FUN_001020aa(param_1);
  FUN_001020ca(param_1);
  return;
}




void FUN_00101f8a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028a0(param_2);
  FUN_0010284f(&local_31,uVar1);
  uVar1 = FUN_00102828(param_2);
                    /* try { // try from 00101ff0 to 00101ff4 has its CatchHandler @ 0010205d */
  FUN_001028b2(param_1,uVar1,&local_31);
  FUN_00101d8c(&local_31);
  uVar2 = FUN_00102146(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102970(param_2);
  uVar4 = FUN_00102918(param_2);
                    /* try { // try from 0010203e to 00102042 has its CatchHandler @ 0010207b */
  uVar1 = FUN_001029c8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c84(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010394d("Calling good()...");
  FUN_00101c6f();
  FUN_0010394d("Finished good()");
  FUN_0010394d("Calling bad()...");
  FUN_001017ce();
  FUN_0010394d("Finished bad()");
  return 0;
}




void FUN_00103e8f(void)

{
  return;
}




undefined8 FUN_001021a8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103300(void)

{
  return;
}




void FUN_00102a9e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102fae(param_3);
  uVar2 = FUN_00102f98(param_1);
  FUN_00102fc0(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101d40(undefined8 param_1)

{
  FUN_00101d20(param_1);
  return;
}




void FUN_0010313a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_0010407d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010394d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001021ba(param_1);
  local_18 = FUN_00102211(&local_38,&local_20);
  local_20 = FUN_00102776(local_30);
  uVar1 = FUN_001027c2(&local_20,local_18);
  FUN_00102256(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102776(local_30);
  FUN_001027c2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102256(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102cc2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102776(local_80);
      local_60 = FUN_00102b50(&local_88,&local_78);
      local_70 = FUN_00102db2(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102146(local_80);
                    /* try { // try from 00102560 to 001025eb has its CatchHandler @ 001026a3 */
      FUN_00102c8d(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102146(local_80);
      puVar2 = (undefined8 *)FUN_001021a8(&local_88);
      local_70 = FUN_00102de9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00102146(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001021a8(&local_88);
      local_70 = FUN_00102de9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102146(local_80);
      FUN_00102158(*local_80,local_80[1],uVar1);
      FUN_0010210c(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102a9e(local_38,param_1,param_4);
                    /* try { // try from 001022e0 to 001024b3 has its CatchHandler @ 00102685 */
      local_50 = FUN_00102b32(local_38);
      local_78 = FUN_00101e46(local_80);
      local_48 = FUN_00102b50(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102146(local_80);
        FUN_00102b94(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001021a8(&local_88);
        FUN_00102bec(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001021a8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001021a8(&local_88);
        FUN_00102c3c(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00102146(local_80);
        lVar4 = FUN_00102c8d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102146(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001021a8(&local_88);
        FUN_00102b94(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001021a8(&local_88);
        FUN_00102c3c(*puVar2,local_40,local_50);
      }
      FUN_00102afe(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ebb(void)

{
  return;
}




undefined8 FUN_00103e20(void)

{
  return 1;
}




void FUN_001036bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001037a9(param_2);
  uVar2 = FUN_001037a9(param_1);
  FUN_001037cf(uVar2,uVar1,param_3);
  return;
}




void FUN_001016c3(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017aa(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_0010394d("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a5(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_00102fae(undefined8 param_1)

{
  return param_1;
}




void FUN_001032be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102fae(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101ce9(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001039cd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102146(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030a8(param_2);
  uVar2 = FUN_001030a8(param_1);
  FUN_001030ba(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001040a0(undefined8 *param_1)

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




void FUN_00104157(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001015e6(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017aa(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_0010394d("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039a5(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103027(param_2);
  uVar2 = FUN_00103027(param_1);
  FUN_00103073(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101d20(undefined8 param_1)

{
  FUN_00101d60(param_1);
  return;
}




void FUN_00103f08(void)

{
  return;
}




void FUN_00101dfe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102146(param_1);
  FUN_00102158(*param_1,param_1[1],uVar1);
  FUN_00101dac(param_1);
  return;
}




long FUN_00103513(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102ece(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102db2(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103e6e(void)

{
  return;
}




void FUN_00103eb0(void)

{
  return;
}




ulong FUN_00102cc2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001031aa(param_1);
  lVar2 = FUN_00102828(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102828(local_40);
  local_30 = FUN_00102828(local_40);
  plVar3 = (long *)FUN_001031d0(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102828(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001031aa(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001031aa(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fae(param_3);
  FUN_001032be(param_1,param_2,uVar1);
  return;
}




void FUN_00103b51(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined4 * FUN_0010370c(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00103ef2(void)

{
  return;
}




undefined8 FUN_00102db2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001031ff(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103f13(void)

{
  return;
}




undefined8 FUN_00103e2f(void)

{
  return 0;
}




void FUN_00101d00(undefined8 param_1)

{
  FUN_00101d8c(param_1);
  return;
}




void FUN_00102ffd(undefined8 param_1,undefined8 param_2)

{
  FUN_00103300(param_1,param_2);
  return;
}




void FUN_00103314(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103ec6(void)

{
  return;
}




undefined8 FUN_00101ce9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e98(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e6e(param_1,param_2);
  FUN_001020ca(param_1);
  return;
}




undefined8 FUN_00103624(void)

{
  return 0x1fffffffffffffff;
}




void FUN_001037a9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001038a0(&local_10);
  FUN_001030a8(uVar1);
  return;
}




void FUN_00102de9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010322d(param_2);
  uVar2 = FUN_0010322d(param_1);
  FUN_00103073(uVar2,uVar1,param_3,param_4);
  return;
}




void * FUN_001038ea(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001020aa(undefined8 param_1)

{
  FUN_001029fe(param_1);
  return;
}




void FUN_00102186(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001030ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103128(param_3);
  uVar2 = FUN_00103128(local_28);
  uVar3 = FUN_00103128(local_20);
  uVar1 = FUN_00103367(uVar3,uVar2,uVar1);
  FUN_0010339c(&local_30,uVar1);
  return;
}




long FUN_001017aa(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103e9a(void)

{
  return;
}




undefined8 FUN_00101e46(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102186(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101961(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d40(local_58);
  local_64 = 7;
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
                    /* try { // try from 001019d1 to 00101a66 has its CatchHandler @ 00101ab2 */
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e46(local_58);
  FUN_00101e96(local_38,&local_60);
  FUN_00101ec4(local_58,local_38[0],1,&local_64);
  FUN_00101f8a(local_38,local_58);
                    /* try { // try from 00101a6e to 00101a72 has its CatchHandler @ 00101a9d */
  FUN_001015e6(local_38);
  FUN_00101dfe(local_38);
  FUN_00101dfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010210c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a0d(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102c8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103174(param_1,param_2,param_3);
  return;
}




void FUN_00103e84(void)

{
  return;
}




void FUN_00103ee7(void)

{
  return;
}




undefined8 FUN_00102a8c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b32(undefined8 param_1)

{
  FUN_00102f98(param_1);
  return;
}




void FUN_00102c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103128(param_2);
  uVar2 = FUN_00103128(param_1);
  FUN_0010313a(uVar2,uVar1,param_3);
  return;
}




void FUN_00101e96(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001021a8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103e63(void)

{
  return;
}




undefined8 FUN_001038a0(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_0010284f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e41(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104200(void)

{
  return;
}




undefined8 FUN_001027c2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102186(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029fe(void)

{
  return;
}




ulong * FUN_001035f5(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00102970(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a6a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102776(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102186(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b7c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102918(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a6a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103128(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e6e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010327a(param_1,param_2);
  return;
}




undefined8 FUN_001028a0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e58(void)

{
  return;
}




void FUN_00104119(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a3f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f85(param_1,param_2);
  return;
}




ulong * FUN_001031d0(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



