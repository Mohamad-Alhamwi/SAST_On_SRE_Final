
void FUN_00103418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103509(param_2);
  uVar2 = FUN_00103509(param_1);
  FUN_0010352f(uVar2,uVar1,param_3);
  return;
}




void FUN_001036ad(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103ddd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010382f(undefined4 param_1)

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




void * FUN_0010364a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102dc9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010308e(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001030f8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ece(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010310e(param_1,param_2,param_3);
  return;
}




void FUN_00103c05(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001036ad(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f10(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024cc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101edc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010308e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101e9c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001026c6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103070(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102fd4(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_0010313f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103333(param_1);
  puVar1 = (undefined8 *)FUN_00103351(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103759(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010393d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102cdb(void)

{
  return;
}




void FUN_00102763(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb4(param_1,param_2,param_3);
  return;
}




void FUN_001036d3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101b9c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101edc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bee(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc4(param_1,param_2);
  FUN_00101e20(param_1);
  return;
}




void FUN_00102b3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f87(param_2);
  uVar2 = FUN_00102f87(param_1);
  FUN_00102dc9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bee(param_1,param_3);
                    /* try { // try from 00102642 to 00102646 has its CatchHandler @ 00102649 */
  FUN_00102c24(param_1,param_2);
  return;
}




void FUN_00103bce(void)

{
  return;
}




void FUN_00103018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d04(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a3f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103c52(void)

{
  return;
}




void FUN_00103e79(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001027c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103b8f(void)

{
  return 0;
}




void FUN_00103889(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




long FUN_0010326f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void * FUN_0010359d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103e98(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103600(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103c26(void)

{
  return;
}




void FUN_0010372d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102fe7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ee(param_1,param_2,param_3);
  return;
}




void FUN_0010305c(void)

{
  return;
}




undefined8 FUN_001025a5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b97(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103398(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101a3f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bc4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fd4(param_1,param_2);
  return;
}




void FUN_00101e00(undefined8 param_1)

{
  FUN_00102754(param_1);
  return;
}




undefined8 * FUN_00103468(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103bfa(void)

{
  return;
}




undefined8 FUN_00102e7e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




long FUN_00102cee(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025f6(param_1);
  FUN_0010313f(uVar1);
  return;
}




undefined8 FUN_00103cb5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c7e,local_18);
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




void FUN_00103804(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101efe(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001038b1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102992(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e7e(param_2);
  uVar2 = FUN_00102e7e(param_1);
  FUN_00102e90(uVar2,uVar1,param_3);
  return;
}




void FUN_001032e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e7e(param_1);
  uVar1 = FUN_00103468(uVar1,param_2,param_3);
  FUN_001030f8(&local_10,uVar1);
  return;
}




undefined8 FUN_00102b97(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc4(param_1,param_2);
  return param_1;
}




void FUN_00103705(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102dfe(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c5d(void)

{
  return;
}




void FUN_001030c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010326f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d04(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a56(undefined8 param_1)

{
  FUN_00101ae2(param_1);
  return;
}




void FUN_00103eb7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e62(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102763(param_1,param_2,param_3);
  }
  return;
}




void FUN_001031a8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103380(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103783(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001034d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010359d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103380(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103c47(void)

{
  return;
}




undefined8 FUN_001019da(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036ad("Calling good()...");
  FUN_001019ca();
  FUN_001036ad("Finished good()");
  FUN_001036ad("Calling bad()...");
  FUN_0010166e();
  FUN_001036ad("Finished bad()");
  return 0;
}




void FUN_00101b02(long *param_1)

{
  FUN_00101e62(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a56(param_1);
  return;
}




void FUN_001015a9(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001036ad(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bb8(void)

{
  return;
}




void FUN_00101e52(void)

{
  return;
}




void FUN_00102f59(undefined8 param_1,undefined8 param_2)

{
  FUN_001031a8(param_1,param_2,0);
  return;
}




void FUN_00102754(void)

{
  return;
}




void FUN_001019ca(void)

{
  FUN_0010181e();
  return;
}




undefined8 FUN_00102d7d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103070(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c68(void)

{
  return;
}




void FUN_0010352f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7e(param_3);
  uVar2 = FUN_00102e7e(local_28);
  uVar3 = FUN_00102e7e(local_20);
  uVar1 = FUN_00103615(uVar3,uVar2,uVar1);
  FUN_001030f8(&local_30,uVar1);
  return;
}




void FUN_00101ae2(undefined8 param_1)

{
  FUN_00101e52(param_1);
  return;
}




void FUN_00101eae(undefined8 param_1,undefined8 param_2)

{
  FUN_00102795(param_1,param_2);
  return;
}




void FUN_00103be4(void)

{
  return;
}




void FUN_001038dc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103333(undefined8 param_1)

{
  FUN_00103380(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_00102c24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b08(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_00102f2a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103615(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010364a(param_1,param_2,param_3);
  return;
}




void FUN_00101ce0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025f6(param_2);
  FUN_001025a5(&local_31,uVar1);
  uVar1 = FUN_0010257e(param_2);
                    /* try { // try from 00101d46 to 00101d4a has its CatchHandler @ 00101db3 */
  FUN_00102608(param_1,uVar1,&local_31);
  FUN_00101ae2(&local_31);
  uVar2 = FUN_00101e9c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026c6(param_2);
  uVar4 = FUN_0010266e(param_2);
                    /* try { // try from 00101d94 to 00101d98 has its CatchHandler @ 00101dd1 */
  uVar1 = FUN_0010271e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d04(param_3);
  uVar2 = FUN_00102cee(param_1);
  FUN_00102d16(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103c73(void)

{
  return;
}




bool FUN_00103d82(pthread_t *param_1)

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




void FUN_00103f60(void)

{
  return;
}




undefined8 FUN_001027e2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010181e(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a96(local_58);
  local_70 = (void *)0x0;
                    /* try { // try from 00101853 to 00101954 has its CatchHandler @ 001019a0 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  FUN_00101ce0(local_38,local_58);
                    /* try { // try from 0010195c to 00101960 has its CatchHandler @ 0010198b */
  FUN_001015a9(local_38);
  FUN_00101b54(local_38);
  FUN_00101b54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c31(void)

{
  return;
}




void FUN_00101a76(undefined8 param_1)

{
  FUN_00101ab6(param_1);
  return;
}




void FUN_0010310e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e5(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f59(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103b80(void)

{
  return 1;
}




void FUN_00103bd9(void)

{
  return;
}




long FUN_001028a6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101efe(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101efe(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102c7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe7(param_1,param_2,param_3);
  return;
}




void FUN_001037ae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong * FUN_00103351(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c1b(void)

{
  return;
}




void FUN_001028ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d7d(param_2);
  uVar2 = FUN_00102d7d(param_1);
  FUN_00102dc9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c3c(void)

{
  return;
}




void FUN_0010390a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010166e(void)

{
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a96(local_58);
  local_70 = 0;
                    /* try { // try from 001016a3 to 001017a8 has its CatchHandler @ 001017f4 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b9c(local_58);
  FUN_00101bec(local_38,&local_68);
  FUN_00101c1a(local_58,local_38[0],1,&local_70);
  FUN_00101ce0(local_38,local_58);
                    /* try { // try from 001017b0 to 001017b4 has its CatchHandler @ 001017df */
  FUN_00101509(local_38);
  FUN_00101b54(local_38);
  FUN_00101b54(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cb4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102f87(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103070(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bef(void)

{
  return;
}




long FUN_0010164a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




ulong FUN_00102a18(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f04(param_1);
  lVar2 = FUN_0010257e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010257e(local_40);
  local_30 = FUN_0010257e(local_40);
  plVar3 = (long *)FUN_00102f2a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010257e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f04(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f04(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010323e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103418(param_1,param_2,param_3);
  return;
}




void FUN_001033aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7e(param_3);
  uVar2 = FUN_001034b3(local_28);
  uVar3 = FUN_001034b3(local_20);
  uVar1 = FUN_001034d4(uVar3,uVar2,uVar1);
  FUN_001030f8(&local_30,uVar1);
  return;
}




void FUN_00102942(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dfe(param_2);
  uVar2 = FUN_00102dfe(param_1);
  FUN_00102e10(uVar2,uVar1,param_3);
  return;
}




void FUN_00103509(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103600(&local_10);
  FUN_00102dfe(uVar1);
  return;
}




void FUN_00101b54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e9c(param_1);
  FUN_00101eae(*param_1,param_1[1],uVar1);
  FUN_00101b02(param_1);
  return;
}




void FUN_00101e20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102d16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d04(param_3);
  FUN_00103018(param_1,param_2,uVar1);
  return;
}




void FUN_00103bc3(void)

{
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101a76(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101c1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f10(param_1);
  local_18 = FUN_00101f67(&local_38,&local_20);
  local_20 = FUN_001024cc(local_30);
  uVar1 = FUN_00102518(&local_20,local_18);
  FUN_00101fac(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024cc(local_30);
  FUN_00102518(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102888(undefined8 param_1)

{
  FUN_00102cee(param_1);
  return;
}




int FUN_00103b9e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c10(void)

{
  return;
}




void FUN_0010271e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c7e(param_1,param_2,param_3);
  return;
}




void FUN_00102795(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cdb(param_1,param_2);
  return;
}




void FUN_00102854(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cee(param_1);
  FUN_00102d53(*param_1,uVar1);
  return;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101e00(param_1);
  FUN_00101e20(param_1);
  return;
}




ulong FUN_00103aa1(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001034b3(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027e2(&local_10);
  return *puVar1;
}




long FUN_00101f67(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027e2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027e2(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103e00(undefined8 *param_1)

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




undefined8 FUN_00101efe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001025f6(undefined8 param_1)

{
  return param_1;
}




void FUN_001031ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103398(param_2);
  uVar2 = FUN_00103398(param_1);
  FUN_001033aa(uVar2,uVar1,param_3);
  return;
}




long FUN_0010257e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101edc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001037d9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102518(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101edc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d53(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305c(param_1,param_2);
  return;
}




void FUN_001029e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ece(param_1,param_2,param_3);
  return;
}




void FUN_00101fac(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a18(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024cc(local_80);
      local_60 = FUN_001028a6(&local_88,&local_78);
      local_70 = FUN_00102b08(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e9c(local_80);
                    /* try { // try from 001022b6 to 00102341 has its CatchHandler @ 001023f9 */
      FUN_001029e3(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e9c(local_80);
      puVar2 = (undefined8 *)FUN_00101efe(&local_88);
      local_70 = FUN_00102b3f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e9c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101efe(&local_88);
      local_70 = FUN_00102b3f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e9c(local_80);
      FUN_00101eae(*local_80,local_80[1],uVar1);
      FUN_00101e62(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027f4(local_38,param_1,param_4);
                    /* try { // try from 00102036 to 00102209 has its CatchHandler @ 001023db */
      local_50 = FUN_00102888(local_38);
      local_78 = FUN_00101b9c(local_80);
      local_48 = FUN_001028a6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e9c(local_80);
        FUN_001028ea(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101efe(&local_88);
        FUN_00102942(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101efe(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101efe(&local_88);
        FUN_00102992(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e9c(local_80);
        lVar4 = FUN_001029e3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e9c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101efe(&local_88);
        FUN_001028ea(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101efe(&local_88);
        FUN_00102992(*puVar2,local_40,local_50);
      }
      FUN_00102854(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010399d(long param_1,ulong param_2,long param_3)

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




void FUN_00103c7e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010266e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027c0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7e(param_3);
  uVar2 = FUN_00102e7e(local_28);
  uVar3 = FUN_00102e7e(local_20);
  uVar1 = FUN_001030c3(uVar3,uVar2,uVar1);
  FUN_001030f8(&local_30,uVar1);
  return;
}



