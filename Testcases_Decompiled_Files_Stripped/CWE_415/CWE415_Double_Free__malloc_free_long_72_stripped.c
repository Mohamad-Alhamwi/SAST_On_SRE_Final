
void FUN_00103507(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035fe(&local_10);
  FUN_00102dfc(uVar1);
  return;
}




void FUN_00103768(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103e98(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001038ea(undefined4 param_1)

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




long FUN_00103744(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102e8e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010168b(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a94(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
                    /* try { // try from 00101716 to 001017ab has its CatchHandler @ 001017f7 */
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  FUN_00101cde(local_38,local_58);
                    /* try { // try from 001017b3 to 001017b7 has its CatchHandler @ 001017e2 */
  FUN_001036e2(local_38);
  FUN_00101b52(local_38);
  FUN_00101b52(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103396(param_2);
  uVar2 = FUN_00103396(param_1);
  FUN_001033a8(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102f85(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010306e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cc0(void)

{
  return;
}




void FUN_00101821(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a94(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
                    /* try { // try from 001018b8 to 0010194d has its CatchHandler @ 00101999 */
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  FUN_00101cde(local_38,local_58);
                    /* try { // try from 00101955 to 00101959 has its CatchHandler @ 00101984 */
  FUN_00103719(local_38);
  FUN_00101b52(local_38);
  FUN_00101b52(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102516(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101eda(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001025f4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010313d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103331(param_1);
  puVar1 = (undefined8 *)FUN_0010334f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00101f0e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027be(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102793(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cd9(param_1,param_2);
  return;
}




void FUN_0010310c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e3(param_1,param_2,param_3);
  return;
}




void FUN_0010306e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
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




long FUN_0010326d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103814(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001039f8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102d51(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305a(param_1,param_2);
  return;
}




void FUN_001027f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d02(param_3);
  uVar2 = FUN_00102cec(param_1);
  FUN_00102d14(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010378e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101dfe(undefined8 param_1)

{
  FUN_00102752(param_1);
  return;
}




void FUN_00102cd9(void)

{
  return;
}




void FUN_00102c22(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b06(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102752(void)

{
  return;
}




void FUN_00103c89(void)

{
  return;
}




void FUN_001030c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010326d(param_1,param_2,param_3);
  return;
}




void FUN_00103d0d(void)

{
  return;
}




void FUN_00103f34(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102886(undefined8 param_1)

{
  FUN_00102cec(param_1);
  return;
}




undefined8 FUN_00103c4a(void)

{
  return 0;
}




void FUN_00103944(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010337e(void)

{
  return 0xfffffffffffffff;
}




void FUN_001036ab(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103744(param_1,2);
  free((void *)*puVar1);
  return;
}




void FUN_00103f53(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001036e2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103744(param_1,2);
  free((void *)*puVar1);
  return;
}




void FUN_00103ce1(void)

{
  return;
}




void FUN_001037e8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010308c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001030f6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001026c4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027be(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




undefined8 FUN_001034b1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027e0(&local_10);
  return *puVar1;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101dfe(param_1);
  FUN_00101e1e(param_1);
  return;
}




void FUN_00102cb2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101e9a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010352d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7c(param_3);
  uVar2 = FUN_00102e7c(local_28);
  uVar3 = FUN_00102e7c(local_20);
  uVar1 = FUN_00103613(uVar3,uVar2,uVar1);
  FUN_001030f6(&local_30,uVar1);
  return;
}




void FUN_00103cb5(void)

{
  return;
}




ulong * FUN_00102f28(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102f57(undefined8 param_1,undefined8 param_2)

{
  FUN_001031a6(param_1,param_2,0);
  return;
}




undefined8 FUN_00102d7b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010306e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fd2(void)

{
  return;
}




undefined8 FUN_00103d70(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d39,local_18);
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




void FUN_001038bf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e1e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010396c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102b3d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f85(param_2);
  uVar2 = FUN_00102f85(param_1);
  FUN_00102dc7(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103396(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe5(param_1,param_2,param_3);
  return;
}




void FUN_001037c0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010310c(param_1,param_2,param_3);
  return;
}




void FUN_00103d18(void)

{
  return;
}




void FUN_001031a6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010337e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102dc7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010308c(param_1,param_2,param_3);
  return;
}




void FUN_00101ae0(undefined8 param_1)

{
  FUN_00101e50(param_1);
  return;
}




void FUN_00103f72(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101efc(undefined8 param_1)

{
  return param_1;
}




void FUN_001032e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e7c(param_1);
  uVar1 = FUN_00103466(uVar1,param_2,param_3);
  FUN_001030f6(&local_10,uVar1);
  return;
}




void FUN_0010383e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001035fe(undefined8 *param_1)

{
  return *param_1;
}




undefined8 * FUN_00103466(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103d02(void)

{
  return;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101a74(param_1);
  return;
}




void FUN_00101c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f0e(param_1);
  local_18 = FUN_00101f65(&local_38,&local_20);
  local_20 = FUN_001024ca(local_30);
  uVar1 = FUN_00102516(&local_20,local_18);
  FUN_00101faa(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024ca(local_30);
  FUN_00102516(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019c3(void)

{
  FUN_0010168b();
  FUN_00101821();
  return;
}




void FUN_00103c73(void)

{
  return;
}




void FUN_00101eda(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103016(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d02(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a3d(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001027e0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a74(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




undefined8 FUN_00102e7c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d23(void)

{
  return;
}




void * FUN_00103648(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101bea(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101efc(param_2);
  *param_1 = *puVar1;
  return;
}




long FUN_00101f65(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027e0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027e0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c9f(void)

{
  return;
}




void FUN_00103997(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001033a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7c(param_3);
  uVar2 = FUN_001034b1(local_28);
  uVar3 = FUN_001034b1(local_20);
  uVar1 = FUN_001034d2(uVar3,uVar2,uVar1);
  FUN_001030f6(&local_30,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




long FUN_00102cec(long param_1)

{
  return param_1 + 8;
}




void FUN_00102fe5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ec(param_1,param_2,param_3);
  return;
}




void FUN_00103719(undefined8 param_1)

{
  FUN_00103744(param_1,2);
  return;
}




void FUN_00101e60(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102761(param_1,param_2,param_3);
  }
  return;
}




void FUN_001028e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d7b(param_2);
  uVar2 = FUN_00102d7b(param_1);
  FUN_00102dc7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d2e(void)

{
  return;
}




bool FUN_00103e3d(pthread_t *param_1)

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




void FUN_00104010(void)

{
  return;
}




long FUN_001028a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101efc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101efc(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101ae0(param_1);
  return;
}




void FUN_00103cec(void)

{
  return;
}




void FUN_00101b00(long *param_1)

{
  FUN_00101e60(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a54(param_1);
  return;
}




void FUN_0010323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103416(param_1,param_2,param_3);
  return;
}




void FUN_00102bec(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc2(param_1,param_2);
  FUN_00101e1e(param_1);
  return;
}




undefined8 FUN_00103c3b(void)

{
  return 1;
}




void FUN_00103c94(void)

{
  return;
}




void FUN_001029e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ecc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102d02(undefined8 param_1)

{
  return param_1;
}




void FUN_00103869(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103416(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103507(param_2);
  uVar2 = FUN_00103507(param_1);
  FUN_0010352d(uVar2,uVar1,param_3);
  return;
}




void FUN_00103cd6(void)

{
  return;
}




ulong FUN_00102a16(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f02(param_1);
  lVar2 = FUN_0010257c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010257c(local_40);
  local_30 = FUN_0010257c(local_40);
  plVar3 = (long *)FUN_00102f28(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010257c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f02(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f02(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103cf7(void)

{
  return;
}




void FUN_001039c5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101a3d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d02(param_3);
  FUN_00103016(param_1,param_2,uVar1);
  return;
}




void FUN_0010305a(void)

{
  return;
}




void FUN_00103caa(void)

{
  return;
}




undefined8 FUN_001019d8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103768("Calling good()...");
  FUN_001019c3();
  FUN_00103768("Finished good()");
  FUN_00103768("Calling bad()...");
  FUN_001014e9();
  FUN_00103768("Finished bad()");
  return 0;
}




void FUN_00102bc2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fd2(param_1,param_2);
  return;
}




ulong * FUN_0010334f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001034d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010359b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b06(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f57(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103613(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103648(param_1,param_2,param_3);
  return;
}




void FUN_00101cde(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025f4(param_2);
  FUN_001025a3(&local_31,uVar1);
  uVar1 = FUN_0010257c(param_2);
                    /* try { // try from 00101d44 to 00101d48 has its CatchHandler @ 00101db1 */
  FUN_00102606(param_1,uVar1,&local_31);
  FUN_00101ae0(&local_31);
  uVar2 = FUN_00101e9a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026c4(param_2);
  uVar4 = FUN_0010266c(param_2);
                    /* try { // try from 00101d92 to 00101d96 has its CatchHandler @ 00101dcf */
  uVar1 = FUN_0010271c(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101eac(undefined8 param_1,undefined8 param_2)

{
  FUN_00102793(param_1,param_2);
  return;
}




undefined8 FUN_00102dfc(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103c7e(void)

{
  return;
}




void FUN_00101b52(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e9a(param_1);
  FUN_00101eac(*param_1,param_1[1],uVar1);
  FUN_00101b00(param_1);
  return;
}




void FUN_001014e9(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a94(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
                    /* try { // try from 00101580 to 00101615 has its CatchHandler @ 00101661 */
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b9a(local_58);
  FUN_00101bea(local_38,&local_60);
  FUN_00101c18(local_58,local_38[0],1,&local_68);
  FUN_00101cde(local_38,local_58);
                    /* try { // try from 0010161d to 00101621 has its CatchHandler @ 0010164c */
  FUN_001036ab(local_38);
  FUN_00101b52(local_38);
  FUN_00101b52(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e50(void)

{
  return;
}




void FUN_00102990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e7c(param_2);
  uVar2 = FUN_00102e7c(param_1);
  FUN_00102e8e(uVar2,uVar1,param_3);
  return;
}




int FUN_00103c59(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ccb(void)

{
  return;
}




void FUN_001027be(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102852(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cec(param_1);
  FUN_00102d51(*param_1,uVar1);
  return;
}




void FUN_00102940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dfc(param_2);
  uVar2 = FUN_00102dfc(param_1);
  FUN_00102e0e(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101b9a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eda(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103b5c(long param_1,ulong param_2,long param_3)

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




void * FUN_0010359b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_0010257c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103ebb(undefined8 *param_1)

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




undefined8 FUN_001024ca(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eda(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010271c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c7c(param_1,param_2,param_3);
  return;
}




void FUN_00103331(undefined8 param_1)

{
  FUN_0010337e(param_1);
  return;
}




undefined8 FUN_0010266c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027be(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101faa(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a16(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024ca(local_80);
      local_60 = FUN_001028a4(&local_88,&local_78);
      local_70 = FUN_00102b06(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e9a(local_80);
                    /* try { // try from 001022b4 to 0010233f has its CatchHandler @ 001023f7 */
      FUN_001029e1(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e9a(local_80);
      puVar2 = (undefined8 *)FUN_00101efc(&local_88);
      local_70 = FUN_00102b3d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e9a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101efc(&local_88);
      local_70 = FUN_00102b3d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e9a(local_80);
      FUN_00101eac(*local_80,local_80[1],uVar1);
      FUN_00101e60(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027f2(local_38,param_1,param_4);
                    /* try { // try from 00102034 to 00102207 has its CatchHandler @ 001023d9 */
      local_50 = FUN_00102886(local_38);
      local_78 = FUN_00101b9a(local_80);
      local_48 = FUN_001028a4(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e9a(local_80);
        FUN_001028e8(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101efc(&local_88);
        FUN_00102940(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101efc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101efc(&local_88);
        FUN_00102990(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e9a(local_80);
        lVar4 = FUN_001029e1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e9a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101efc(&local_88);
        FUN_001028e8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101efc(&local_88);
        FUN_00102990(*puVar2,local_40,local_50);
      }
      FUN_00102852(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103894(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102606(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bec(param_1,param_3);
                    /* try { // try from 00102640 to 00102644 has its CatchHandler @ 00102647 */
  FUN_00102c22(param_1,param_2);
  return;
}




void FUN_00102e0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e7c(param_3);
  uVar2 = FUN_00102e7c(local_28);
  uVar3 = FUN_00102e7c(local_20);
  uVar1 = FUN_001030c1(uVar3,uVar2,uVar1);
  FUN_001030f6(&local_30,uVar1);
  return;
}




undefined8 FUN_00102b95(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc2(param_1,param_2);
  return param_1;
}




undefined8 FUN_001025a3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b95(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103a58(long param_1,ulong param_2,long param_3)

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




void FUN_00103d39(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102761(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb2(param_1,param_2,param_3);
  return;
}




void FUN_00102f02(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025f4(param_1);
  FUN_0010313d(uVar1);
  return;
}



