
void FUN_0010372a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00103944(long param_1,ulong param_2,long param_3)

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




void FUN_00103b8b(void)

{
  return;
}




void FUN_001038e4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103135(param_1,param_2,param_3);
  return;
}




void FUN_00101a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d66(param_1);
  local_18 = FUN_00101dbd(&local_38,&local_20);
  local_20 = FUN_00102322(local_30);
  uVar1 = FUN_0010236e(&local_20,local_18);
  FUN_00101e02(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102322(local_30);
  FUN_0010236e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010337b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00102cd4(local_28);
  uVar3 = FUN_00102cd4(local_20);
  uVar1 = FUN_00103461(uVar3,uVar2,uVar1);
  FUN_00102f48(&local_30,uVar1);
  return;
}




long FUN_001030bf(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_00103da7(undefined8 *param_1)

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




void FUN_00101b36(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010244c(param_2);
  FUN_001023fb(&local_31,uVar1);
  uVar1 = FUN_001023d4(param_2);
                    /* try { // try from 00101b9c to 00101ba0 has its CatchHandler @ 00101c09 */
  FUN_0010245e(param_1,uVar1,&local_31);
  FUN_00101938(&local_31);
  uVar2 = FUN_00101cf2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010251c(param_2);
  uVar4 = FUN_001024c4(param_2);
                    /* try { // try from 00101bea to 00101bee has its CatchHandler @ 00101c27 */
  uVar1 = FUN_00102574(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b44(param_1);
  FUN_00102ba9(*param_1,uVar1);
  return;
}




void FUN_00102740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bd3(param_2);
  uVar2 = FUN_00102bd3(param_1);
  FUN_00102c1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e9(param_1,param_2,param_3);
  return;
}




void FUN_001025eb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b31(param_1,param_2);
  return;
}




undefined8 FUN_001029ed(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a1a(param_1,param_2);
  return param_1;
}




undefined8 FUN_001032ff(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102638(&local_10);
  return *puVar1;
}




undefined8 FUN_001031e8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001019f2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d32(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010344c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001016a6(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ec(local_58);
  local_64 = 0x14;
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
                    /* try { // try from 00101716 to 001017ab has its CatchHandler @ 001017f7 */
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  FUN_00101b36(local_38,local_58);
                    /* try { // try from 001017b3 to 001017b7 has its CatchHandler @ 001017e2 */
  FUN_00103594(local_38);
  FUN_001019aa(local_38);
  FUN_001019aa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103b45(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101821(void)

{
  FUN_001016a6();
  return;
}




undefined8 FUN_00101831(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103654("Calling good()...");
  FUN_00101821();
  FUN_00103654("Finished good()");
  FUN_00103654("Calling bad()...");
  FUN_001014e9();
  FUN_00103654("Finished bad()");
  return 0;
}




void FUN_00103bc2(void)

{
  return;
}




void FUN_00102e6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102b5a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101896(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a7a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010295e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong FUN_00103a48(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001023fb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029ed(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102dab(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ff8(param_1,param_2,0);
  return;
}




void FUN_00102d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f5e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010295e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102dab(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103c1a(void)

{
  return;
}




void FUN_00103268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103355(param_2);
  uVar2 = FUN_00103355(param_1);
  FUN_0010337b(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b0a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103bee(void)

{
  return;
}




void FUN_00103b96(void)

{
  return;
}




void FUN_00103594(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00103630(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036ac(*__ptr);
  free(__ptr);
  return;
}




void FUN_00103858(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103883(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103e5e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103b36(void)

{
  return 0;
}




void FUN_001031fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_001032ff(local_28);
  uVar3 = FUN_001032ff(local_20);
  uVar1 = FUN_00103320(uVar3,uVar2,uVar1);
  FUN_00102f48(&local_30,uVar1);
  return;
}




undefined4 * FUN_001032b8(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00102839(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d20(param_1,param_2,param_3);
  return;
}




void FUN_0010190c(undefined8 param_1)

{
  FUN_00101c56(param_1);
  FUN_00101c76(param_1);
  return;
}




void FUN_001036d4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d32(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong * FUN_00102d7c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_0010251c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103755(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103d84(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010303e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031e8(param_2);
  uVar2 = FUN_001031e8(param_1);
  FUN_001031fa(uVar2,uVar1,param_3);
  return;
}




void FUN_0010308e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103268(param_1,param_2,param_3);
  return;
}




void FUN_00102eac(void)

{
  return;
}




void FUN_00103135(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cd4(param_1);
  uVar1 = FUN_001032b8(uVar1,param_2,param_3);
  FUN_00102f48(&local_10,uVar1);
  return;
}




void FUN_00103b80(void)

{
  return;
}




undefined8 FUN_0010244c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ba1(void)

{
  return;
}




undefined8 FUN_00102c54(undefined8 param_1)

{
  return param_1;
}




long FUN_00103630(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_001018cc(undefined8 param_1)

{
  FUN_0010190c(param_1);
  return;
}




void FUN_00102d56(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010244c(param_1);
  FUN_00102f8f(uVar1);
  return;
}




void FUN_001018ac(undefined8 param_1)

{
  FUN_00101938(param_1);
  return;
}




undefined8 FUN_00103b27(void)

{
  return 1;
}




undefined8 FUN_00102f8f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103183(param_1);
  puVar1 = (undefined8 *)FUN_001031a1(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103355(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010344c(&local_10);
  FUN_00102c54(uVar1);
  return;
}




void FUN_00102ec0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d54(undefined8 param_1)

{
  return param_1;
}




void FUN_001025b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b0a(param_1,param_2,param_3);
  return;
}




void FUN_00103461(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103496(param_1,param_2,param_3);
  return;
}




void FUN_00103b5f(void)

{
  return;
}




void FUN_001037ab(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001036ac(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d04(undefined8 param_1,undefined8 param_2)

{
  FUN_001025eb(param_1,param_2);
  return;
}




undefined8 FUN_0010236e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101d32(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c56(undefined8 param_1)

{
  FUN_001025aa(param_1);
  return;
}




void FUN_00103c04(void)

{
  return;
}




void FUN_001025aa(void)

{
  return;
}




ulong * FUN_001031a1(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102a44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a1a(param_1,param_2);
  FUN_00101c76(param_1);
  return;
}




undefined8 FUN_00101cf2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f48(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103830(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102322(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d32(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018ec(undefined8 param_1)

{
  FUN_001018cc(param_1);
  return;
}




void FUN_00102616(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103c5c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c25,local_18);
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




void FUN_00103bac(void)

{
  return;
}




void FUN_00103654(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101958(long *param_1)

{
  FUN_00101cb8(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_001018ac(param_1);
  return;
}




undefined8 FUN_00102dd9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ec0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103183(undefined8 param_1)

{
  FUN_001031d0(param_1);
  return;
}




void FUN_001038b1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001014e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ec(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
                    /* try { // try from 0010159b to 00101630 has its CatchHandler @ 0010167c */
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019f2(local_58);
  FUN_00101a42(local_38,&local_60);
  FUN_00101a70(local_58,local_38[0],1,&local_64);
  FUN_00101b36(local_38,local_58);
                    /* try { // try from 00101638 to 0010163c has its CatchHandler @ 00101667 */
  FUN_001034f9(local_38);
  FUN_001019aa(local_38);
  FUN_001019aa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024c4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102b44(long param_1)

{
  return param_1 + 8;
}




void FUN_00101938(undefined8 param_1)

{
  FUN_00101ca8(param_1);
  return;
}




void FUN_00102b31(void)

{
  return;
}




void FUN_00101cb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025b9(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103e90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d66(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102616(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_001033e9(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00102ce6(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103be3(void)

{
  return;
}




void FUN_00103c25(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ba9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eac(param_1,param_2);
  return;
}




void FUN_00102e26(void)

{
  return;
}




void FUN_00103b6a(void)

{
  return;
}




void FUN_0010367a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103e3f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102bd3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ec0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f00(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103bb7(void)

{
  return;
}




void FUN_00101ca8(void)

{
  return;
}




void FUN_00102e39(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010303e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031d0(void)

{
  return 0x1fffffffffffffff;
}




bool FUN_00103d29(pthread_t *param_1)

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




void FUN_00101c76(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102cd4(undefined8 param_1)

{
  return param_1;
}




void FUN_001034f9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00103630(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001036ac(*__ptr);
  free(__ptr);
  return;
}




void FUN_00103700(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c1f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ede(param_1,param_2,param_3);
  return;
}




void FUN_001037d6(undefined4 param_1)

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




long FUN_001023d4(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00102574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ad4(param_1,param_2,param_3);
  return;
}




void FUN_001019aa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cf2(param_1);
  FUN_00101d04(*param_1,param_1[1],uVar1);
  FUN_00101958(param_1);
  return;
}




void FUN_00102ede(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010308e(param_1,param_2,param_3);
  return;
}




void FUN_00103c0f(void)

{
  return;
}




long FUN_00101dbd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102638(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102638(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101a42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d54(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010245e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a44(param_1,param_3);
                    /* try { // try from 00102498 to 0010249c has its CatchHandler @ 0010249f */
  FUN_00102a7a(param_1,param_2);
  return;
}




void FUN_00102b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b5a(param_3);
  FUN_00102e6a(param_1,param_2,uVar1);
  return;
}




void FUN_00103bf9(void)

{
  return;
}




void FUN_00103e20(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e26(param_1,param_2);
  return;
}




void FUN_00102ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e39(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b5a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101896(undefined8 param_1,undefined8 param_2)

{
  return param_2;
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




void FUN_00101e02(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010286e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102322(local_80);
      local_60 = FUN_001026fc(&local_88,&local_78);
      local_70 = FUN_0010295e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101cf2(local_80);
                    /* try { // try from 0010210c to 00102197 has its CatchHandler @ 0010224f */
      FUN_00102839(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101cf2(local_80);
      puVar2 = (undefined8 *)FUN_00101d54(&local_88);
      local_70 = FUN_00102995(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101cf2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d54(&local_88);
      local_70 = FUN_00102995(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101cf2(local_80);
      FUN_00101d04(*local_80,local_80[1],uVar1);
      FUN_00101cb8(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_0010264a(local_38,param_1,param_4);
                    /* try { // try from 00101e8c to 0010205f has its CatchHandler @ 00102231 */
      local_50 = FUN_001026de(local_38);
      local_78 = FUN_001019f2(local_80);
      local_48 = FUN_001026fc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101cf2(local_80);
        FUN_00102740(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_00102798(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d54(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_001027e8(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101cf2(local_80);
        lVar4 = FUN_00102839(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101cf2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_00102740(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d54(&local_88);
        FUN_001027e8(*puVar2,local_40,local_50);
      }
      FUN_001026aa(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bd8(void)

{
  return;
}




void FUN_00103780(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001026de(undefined8 param_1)

{
  FUN_00102b44(param_1);
  return;
}




void FUN_0010264a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b5a(param_3);
  uVar2 = FUN_00102b44(param_1);
  FUN_00102b6c(*param_1,uVar2,uVar1);
  return;
}




ulong FUN_0010286e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d56(param_1);
  lVar2 = FUN_001023d4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023d4(local_40);
  local_30 = FUN_001023d4(local_40);
  plVar3 = (long *)FUN_00102d7c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023d4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d56(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d56(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00103496(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001027e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd4(param_2);
  uVar2 = FUN_00102cd4(param_1);
  FUN_00102ce6(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102638(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b75(void)

{
  return;
}




void FUN_00102798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c54(param_2);
  uVar2 = FUN_00102c54(param_1);
  FUN_00102c66(uVar2,uVar1,param_3);
  return;
}




void FUN_00102f13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030bf(param_1,param_2,param_3);
  return;
}




void FUN_00102c66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00102cd4(local_28);
  uVar3 = FUN_00102cd4(local_20);
  uVar1 = FUN_00102f13(uVar3,uVar2,uVar1);
  FUN_00102f48(&local_30,uVar1);
  return;
}




long FUN_001026fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d54(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d54(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103bcd(void)

{
  return;
}




void FUN_00102995(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd9(param_2);
  uVar2 = FUN_00102dd9(param_1);
  FUN_00102c1f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102ff8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031d0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}



