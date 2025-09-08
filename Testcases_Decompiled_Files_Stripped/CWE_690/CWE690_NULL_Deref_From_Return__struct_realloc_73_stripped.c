
void FUN_0010210c(void)

{
  return;
}




void FUN_0010290a(void)

{
  return;
}




void FUN_00102999(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010251f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102152(undefined8 param_1)

{
  FUN_001022ab(param_1,1);
  return;
}




undefined8 FUN_001022d9(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cc2(param_2);
  FUN_00101c71(&local_21,uVar1);
  FUN_00101cd4(param_1,&local_21);
  FUN_00101a10(&local_21);
  uVar1 = FUN_00101d5c(param_2);
  uVar2 = FUN_00101d0c(param_2);
                    /* try { // try from 00101b22 to 00101b26 has its CatchHandler @ 00101b29 */
  FUN_00101da8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




undefined8 FUN_00102052(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010192e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101cc2(undefined8 param_1)

{
  return param_1;
}




void FUN_001028e9(void)

{
  return;
}




void FUN_001021b0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010211f(*param_1,param_1[1],1);
  }
  return;
}




long * FUN_001015c0(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101b92(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101624(local_20);
    uVar3 = FUN_00101e16(param_1);
    FUN_00101e28(uVar3,uVar2);
    FUN_00101e52(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101fb6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224e(param_1,param_2);
  return;
}




void FUN_00101e28(undefined8 param_1,undefined8 param_2)

{
  FUN_0010210c(param_1,param_2);
  return;
}




undefined8 FUN_00102af8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001015e4(undefined8 *param_1)

{
  FUN_00101624(*param_1);
  return;
}




long FUN_0010222c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102957(void)

{
  return;
}




undefined8 FUN_00102b1b(undefined8 *param_1)

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




undefined8 FUN_00101892(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023c8("Calling good()...");
  FUN_00101882();
  FUN_001023c8("Finished good()");
  FUN_001023c8("Calling bad()...");
  FUN_00101676();
  FUN_001023c8("Finished bad()");
  return 0;
}




void FUN_001020be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e81(param_2);
  uVar2 = FUN_00101574(param_1);
  FUN_00101c10(param_1,uVar2,uVar1);
  return;
}




void FUN_00102962(void)

{
  return;
}




undefined8 FUN_00101664(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102078(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00101574(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101606(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101676(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a4(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,8);
                    /* try { // try from 001016c9 to 00101706 has its CatchHandler @ 00101752 */
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a96(local_38,local_58);
                    /* try { // try from 0010170e to 00101712 has its CatchHandler @ 0010173d */
  FUN_00101469(local_38);
  FUN_001019c4(local_38);
  FUN_001019c4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024c9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101516(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 1;
  __ptr[1] = 1;
  FUN_00102625(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_0010289b(void)

{
  return 1;
}




void FUN_001028ff(void)

{
  return;
}




undefined8 FUN_001023b0(void)

{
  return 0x555555555555555;
}




void FUN_001019a4(undefined8 param_1)

{
  FUN_00101984(param_1);
  return;
}




void FUN_0010249e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d0c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102034(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102978(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_0010296d(void)

{
  return;
}




ulong FUN_001027bc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a30(undefined8 param_1)

{
  FUN_00101b92(param_1);
  FUN_00101964(param_1);
  return;
}




void FUN_0010190e(undefined8 param_1)

{
  FUN_0010192e(param_1);
  return;
}




void FUN_00101e06(void)

{
  return;
}




void FUN_00102c70(void)

{
  return;
}




void FUN_00102b94(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001025f7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102262(long param_1)

{
  FUN_00102330(param_1 + 0x10);
  return;
}




undefined8 FUN_00101fe0(undefined8 param_1)

{
  return param_1;
}




void FUN_001028de(void)

{
  return;
}




void FUN_0010292b(void)

{
  return;
}




int FUN_001028b9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101964(undefined8 param_1)

{
  FUN_00101a10(param_1);
  return;
}




void FUN_00102658(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102920(void)

{
  return;
}




void FUN_00101882(void)

{
  FUN_0010177c();
  return;
}




void FUN_001028f4(void)

{
  return;
}




void FUN_001014bc(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101516(param_1);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    FUN_00102625(__ptr);
    free(__ptr);
  }
  return;
}




void FUN_00102983(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102625(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001022ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e81(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018f7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010224e(void)

{
  return;
}




void FUN_00101f5e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001028d3(void)

{
  return;
}




void FUN_00101da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102052(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010209c(&local_18);
    FUN_001020be(local_10,uVar2);
    FUN_00102078(&local_18);
  }
  return;
}




void FUN_00102034(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101a5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101574(param_1);
  FUN_00101c10(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101f88(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fb6(param_1,param_2);
  return param_1;
}




void FUN_00102936(void)

{
  return;
}




void FUN_00102420(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101646(undefined8 param_1)

{
  FUN_00101664(param_1);
  return;
}




void FUN_001019c4(undefined8 param_1)

{
  FUN_00101a30(param_1);
  return;
}




undefined8 FUN_00101e94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102152(param_1);
  uVar2 = FUN_00101e16(param_1);
  FUN_00102176(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e81(param_2);
  uVar4 = FUN_00101624(uVar1);
  FUN_001021ef(uVar2,uVar4,uVar3);
  FUN_0010222c(local_38,0);
  FUN_001021b0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001018f7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010211f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102284(param_1,param_2,param_3);
  return;
}




void FUN_001023ee(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_00102a9d(pthread_t *param_1)

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




undefined8 FUN_001029d0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102999,local_18);
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




void FUN_00102915(void)

{
  return;
}




void FUN_0010209c(undefined8 *param_1)

{
  FUN_00102262(*param_1);
  return;
}




void FUN_00102474(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e52(undefined8 param_1,undefined8 param_2)

{
  FUN_0010211f(param_1,param_2,1);
  return;
}




void FUN_00101984(undefined8 param_1)

{
  FUN_001019e4(param_1);
  return;
}




void FUN_00101a10(undefined8 param_1)

{
  FUN_00101b82(param_1);
  return;
}




void FUN_00101516(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101574(param_1);
  FUN_001015c0(&local_18);
  FUN_001015e4(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e16(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bd2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  FUN_00101e06(param_1);
  return;
}




void FUN_00102941(void)

{
  return;
}




void FUN_001024f4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101c71(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f88(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102bb3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ff2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe0(param_2);
  FUN_00101fb6(param_1,uVar1);
  FUN_0010190e(param_1);
  return;
}




void FUN_001019e4(undefined8 param_1)

{
  FUN_00101b62(param_1);
  FUN_0010190e(param_1);
  return;
}




void FUN_00101b82(void)

{
  return;
}




void FUN_00101624(long param_1)

{
  FUN_00101646(param_1 + 0x10);
  return;
}




void FUN_001025cc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001021ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e81(param_3);
  FUN_001022ec(param_1,param_2,uVar1);
  return;
}




void FUN_0010294c(void)

{
  return;
}




undefined8 FUN_0010239e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010254a(undefined4 param_1)

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




void FUN_00102176(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001023c8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102330(undefined8 param_1)

{
  FUN_0010239e(param_1);
  return;
}




undefined8 FUN_00101d5c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102034(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010298e(void)

{
  return;
}




undefined8 FUN_001028aa(void)

{
  return 0;
}




void FUN_0010234e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023b0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102448(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101cd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fe0(param_2);
  FUN_00101ff2(param_1,uVar1);
  return;
}




void FUN_00101606(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001022ab(undefined8 param_1,undefined8 param_2)

{
  FUN_0010234e(param_1,param_2,0);
  return;
}




void FUN_001025a4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010177c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a4(local_58);
  local_60 = (void *)0x0;
  local_60 = realloc((void *)0x0,8);
                    /* try { // try from 001017cf to 0010180c has its CatchHandler @ 00101858 */
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a5c(local_58,&local_60);
  FUN_00101a96(local_38,local_58);
                    /* try { // try from 00101814 to 00101818 has its CatchHandler @ 00101843 */
  FUN_001014bc(local_38);
  FUN_001019c4(local_38);
  FUN_001019c4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102284(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101e81(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e81(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e94(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f5e(param_1,1);
  return;
}




ulong FUN_001026b8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



