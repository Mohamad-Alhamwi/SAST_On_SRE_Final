
void FUN_001030c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010329f(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103352(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bd5(void)

{
  return;
}




undefined8 FUN_001035ba(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_0010333a(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00102b51(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b7e(param_1,param_2);
  return param_1;
}




void FUN_00102e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c8(param_1,param_2,param_3);
  return;
}




void FUN_00102c6e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b56(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e96(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c9a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025b0(param_2);
  FUN_0010255f(&local_31,uVar1);
  uVar1 = FUN_00102538(param_2);
                    /* try { // try from 00101d00 to 00101d04 has its CatchHandler @ 00101d6d */
  FUN_001025c2(param_1,uVar1,&local_31);
  FUN_00101a9c(&local_31);
  uVar2 = FUN_00101e56(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102680(param_2);
  uVar4 = FUN_00102628(param_2);
                    /* try { // try from 00101d4e to 00101d52 has its CatchHandler @ 00101d8b */
  uVar1 = FUN_001026d8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102e38(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a70(undefined8 param_1)

{
  FUN_00101dba(param_1);
  FUN_00101dda(param_1);
  return;
}




void FUN_00101e96(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102dca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e38(param_3);
  uVar2 = FUN_00102e38(local_28);
  uVar3 = FUN_00102e38(local_20);
  uVar1 = FUN_0010307d(uVar3,uVar2,uVar1);
  FUN_001030b2(&local_30,uVar1);
  return;
}




void FUN_00102d0d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103016(param_1,param_2);
  return;
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




ulong * FUN_00102ee4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010346d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010279c(&local_10);
  return *puVar1;
}




void FUN_001036bf(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001028fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102db8(param_2);
  uVar2 = FUN_00102db8(param_1);
  FUN_00102dca(uVar2,uVar1,param_3);
  return;
}




long FUN_00101f21(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010279c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010279c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e38(param_3);
  uVar2 = FUN_0010346d(local_28);
  uVar3 = FUN_0010346d(local_20);
  uVar1 = FUN_0010348e(uVar3,uVar2,uVar1);
  FUN_001030b2(&local_30,uVar1);
  return;
}




void FUN_0010167e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a50(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016b3 to 0010178b has its CatchHandler @ 001017d7 */
  local_68 = operator_new__(10);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  FUN_00101c9a(local_38,local_58);
                    /* try { // try from 00101793 to 00101797 has its CatchHandler @ 001017c2 */
  FUN_00101529(local_38);
  FUN_00101b0e(local_38);
  FUN_00101b0e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010280e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ca8(param_1);
  FUN_00102d0d(*param_1,uVar1);
  return;
}




void FUN_0010277a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101e56(undefined8 param_1)

{
  return param_1;
}




void FUN_00103843(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102d83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103048(param_1,param_2,param_3);
  return;
}




void FUN_00103b88(void)

{
  return;
}




void FUN_00103beb(void)

{
  return;
}




undefined8 FUN_00102486(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e96(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103768(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001035cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103604(param_1,param_2,param_3);
  return;
}




void FUN_00102fa1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a8(param_1,param_2,param_3);
  return;
}




void FUN_0010329f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e38(param_1);
  uVar1 = FUN_00103422(uVar1,param_2,param_3);
  FUN_001030b2(&local_10,uVar1);
  return;
}




void FUN_00103bf6(void)

{
  return;
}




void FUN_001032ed(undefined8 param_1)

{
  FUN_0010333a(param_1);
  return;
}




undefined8 FUN_00103b49(void)

{
  return 0;
}




undefined8 * FUN_00103422(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00102d37(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102db8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e0c(void)

{
  return;
}




void FUN_0010307d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103229(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_001027ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cbe(param_3);
  uVar2 = FUN_00102ca8(param_1);
  FUN_00102cd0(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_001019f9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001030f9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001032ed(param_1);
  puVar1 = (undefined8 *)FUN_0010330b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
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




void FUN_00102bde(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ac2(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103e71(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa1(param_1,param_2,param_3);
  return;
}




void FUN_0010294c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e38(param_2);
  uVar2 = FUN_00102e38(param_1);
  FUN_00102e4a(uVar2,uVar1,param_3);
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




void FUN_00102c95(void)

{
  return;
}




void FUN_00103bbf(void)

{
  return;
}




void * FUN_00103557(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101801(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a50(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101836 to 0010190e has its CatchHandler @ 0010195a */
  local_68 = operator_new__(0xb);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b56(local_58);
  FUN_00101ba6(local_38,&local_60);
  FUN_00101bd4(local_58,local_38[0],1,&local_68);
  FUN_00101c9a(local_38,local_58);
                    /* try { // try from 00101916 to 0010191a has its CatchHandler @ 00101945 */
  FUN_001015c1(local_38);
  FUN_00101b0e(local_38);
  FUN_00101b0e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00103604(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001026d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c38(param_1,param_2,param_3);
  return;
}




void FUN_00102fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cbe(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019f9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103c2d(void)

{
  return;
}




undefined8 FUN_0010279c(undefined8 param_1)

{
  return param_1;
}




void FUN_001033d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034c3(param_2);
  uVar2 = FUN_001034c3(param_1);
  FUN_001034e9(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b7e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f8e(param_1,param_2);
  return;
}




void FUN_00103b93(void)

{
  return;
}




void FUN_00102e4a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010299d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e88(param_1,param_2,param_3);
  return;
}




void FUN_00103c01(void)

{
  return;
}




void FUN_00101a50(undefined8 param_1)

{
  FUN_00101a30(param_1);
  return;
}




void FUN_00102f13(undefined8 param_1,undefined8 param_2)

{
  FUN_00103162(param_1,param_2,0);
  return;
}




void FUN_0010348e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103557(param_1,param_2,param_3);
  return;
}




void FUN_001031a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103352(param_2);
  uVar2 = FUN_00103352(param_1);
  FUN_00103364(uVar2,uVar1,param_3);
  return;
}




void FUN_00103048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031f8(param_1,param_2,param_3);
  return;
}




void FUN_00103b7d(void)

{
  return;
}




void FUN_001015c1(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010165a(param_1,2);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  strcpy(__dest,local_1b);
  FUN_00103667(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037be(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a30(undefined8 param_1)

{
  FUN_00101a70(param_1);
  return;
}




undefined8 FUN_00102cbe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101eca(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010277a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102af9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f41(param_2);
  uVar2 = FUN_00102f41(param_1);
  FUN_00102d83(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b9e(void)

{
  return;
}




long FUN_00103229(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00101a9c(undefined8 param_1)

{
  FUN_00101e0c(param_1);
  return;
}




void FUN_00101529(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010165a(param_1,2);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  strcpy(__dest,local_1b);
  FUN_00103667(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103896(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103c22(void)

{
  return;
}




void FUN_00103e33(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103667(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c0c(void)

{
  return;
}




void FUN_00103016(void)

{
  return;
}




void FUN_00102842(undefined8 param_1)

{
  FUN_00102ca8(param_1);
  return;
}




long FUN_00102ca8(long param_1)

{
  return param_1 + 8;
}




ulong * FUN_0010330b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00101994(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103667("Calling good()...");
  FUN_00101984();
  FUN_00103667("Finished good()");
  FUN_00103667("Calling bad()...");
  FUN_0010167e();
  FUN_00103667("Finished bad()");
  return 0;
}




long FUN_00102538(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103ba9(void)

{
  return;
}




void FUN_00103bca(void)

{
  return;
}




void FUN_00103c17(void)

{
  return;
}




undefined8 FUN_001024d2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101e96(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103b58(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102ebe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025b0(param_1);
  FUN_001030f9(uVar1);
  return;
}




void FUN_0010274f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c95(param_1,param_2);
  return;
}




void FUN_0010373d(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




void FUN_0010386b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ba8(param_1,param_3);
                    /* try { // try from 001025fc to 00102600 has its CatchHandler @ 00102603 */
  FUN_00102bde(param_1,param_2);
  return;
}




long FUN_00102860(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101eb8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101eb8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001034c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035ba(&local_10);
  FUN_00102db8(uVar1);
  return;
}




void FUN_0010302a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103b3a(void)

{
  return 1;
}




undefined8 FUN_00102628(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010277a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b72(void)

{
  return;
}




void FUN_0010368d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001038c4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001028a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d37(param_2);
  uVar2 = FUN_00102d37(param_1);
  FUN_00102d83(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cbe(param_3);
  FUN_00102fd2(param_1,param_2,uVar1);
  return;
}




void FUN_0010271d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c6e(param_1,param_2,param_3);
  return;
}




void FUN_00102f8e(void)

{
  return;
}




undefined8 FUN_001030b2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102680(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010277a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033d2(param_1,param_2,param_3);
  return;
}




long FUN_0010165a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101a10(undefined8 param_1)

{
  FUN_00101a9c(param_1);
  return;
}




ulong FUN_001029d2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ebe(param_1);
  lVar2 = FUN_00102538(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102538(local_40);
  local_30 = FUN_00102538(local_40);
  plVar3 = (long *)FUN_00102ee4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102538(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ebe(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ebe(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_001025b0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101984(void)

{
  FUN_00101801();
  return;
}




void FUN_00103e52(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103c38(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103793(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101eb8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f66(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001029d2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102486(local_80);
      local_60 = FUN_00102860(&local_88,&local_78);
      local_70 = FUN_00102ac2(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e56(local_80);
                    /* try { // try from 00102270 to 001022fb has its CatchHandler @ 001023b3 */
      FUN_0010299d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e56(local_80);
      puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
      local_70 = FUN_00102af9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e56(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
      local_70 = FUN_00102af9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e56(local_80);
      FUN_00101e68(*local_80,local_80[1],uVar1);
      FUN_00101e1c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027ae(local_38,param_1,param_4);
                    /* try { // try from 00101ff0 to 001021c3 has its CatchHandler @ 00102395 */
      local_50 = FUN_00102842(local_38);
      local_78 = FUN_00101b56(local_80);
      local_48 = FUN_00102860(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e56(local_80);
        FUN_001028a4(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
        FUN_001028fc(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101eb8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
        FUN_0010294c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e56(local_80);
        lVar4 = FUN_0010299d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e56(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
        FUN_001028a4(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101eb8(&local_88);
        FUN_0010294c(*puVar2,local_40,local_50);
      }
      FUN_0010280e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010255f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b51(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103713(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103162(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010333a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00101ba6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101eb8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103be0(void)

{
  return;
}




void FUN_00101b0e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e56(param_1);
  FUN_00101e68(*param_1,param_1[1],uVar1);
  FUN_00101abc(param_1);
  return;
}




void FUN_00101e1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010271d(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00103d97(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102f41(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010302a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dda(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103f10(void)

{
  return;
}




void FUN_00101abc(long *param_1)

{
  FUN_00101e1c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a10(param_1);
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
  uVar1 = FUN_00102e38(param_3);
  uVar2 = FUN_00102e38(local_28);
  uVar3 = FUN_00102e38(local_20);
  uVar1 = FUN_001035cf(uVar3,uVar2,uVar1);
  FUN_001030b2(&local_30,uVar1);
  return;
}




void FUN_00101dba(undefined8 param_1)

{
  FUN_0010270e(param_1);
  return;
}




undefined8 FUN_00102ac2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f13(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010270e(void)

{
  return;
}




void FUN_00101bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101eca(param_1);
  local_18 = FUN_00101f21(&local_38,&local_20);
  local_20 = FUN_00102486(local_30);
  uVar1 = FUN_001024d2(&local_20,local_18);
  FUN_00101f66(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102486(local_30);
  FUN_001024d2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036e7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bb4(void)

{
  return;
}




void FUN_00101e68(undefined8 param_1,undefined8 param_2)

{
  FUN_0010274f(param_1,param_2);
  return;
}




void FUN_00102ba8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b7e(param_1,param_2);
  FUN_00101dda(param_1);
  return;
}



