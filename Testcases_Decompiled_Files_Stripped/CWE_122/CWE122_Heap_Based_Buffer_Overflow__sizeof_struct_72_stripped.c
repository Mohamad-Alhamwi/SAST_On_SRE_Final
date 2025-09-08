
void FUN_001036cd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001039c0(long param_1,ulong param_2,long param_3)

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




void FUN_00103b0e(void)

{
  return;
}




ulong FUN_001038bc(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102fb3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031a7(param_1);
  puVar1 = (undefined8 *)FUN_001031c5(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00101b54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010246a(param_2);
  FUN_00102419(&local_31,uVar1);
  uVar1 = FUN_001023f2(param_2);
                    /* try { // try from 00101bba to 00101bbe has its CatchHandler @ 00101c27 */
  FUN_0010247c(param_1,uVar1,&local_31);
  FUN_00101956(&local_31);
  uVar2 = FUN_00101d10(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010253a(param_2);
  uVar4 = FUN_001024e2(param_2);
                    /* try { // try from 00101c08 to 00101c0c has its CatchHandler @ 00101c45 */
  uVar1 = FUN_00102592(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00103411(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103159(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cf2(param_1);
  uVar1 = FUN_001032dc(uVar1,param_2,param_3);
  FUN_00102f6c(&local_10,uVar1);
  return;
}




void FUN_00103d98(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c74(undefined8 param_1)

{
  FUN_001025c8(param_1);
  return;
}




void FUN_001026fc(undefined8 param_1)

{
  FUN_00102b62(param_1);
  return;
}




void FUN_001027b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c72(param_2);
  uVar2 = FUN_00102c72(param_1);
  FUN_00102c84(uVar2,uVar1,param_3);
  return;
}




void FUN_0010337d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103474(&local_10);
  FUN_00102c72(uVar1);
  return;
}




void FUN_00102634(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102a38(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e48(param_1,param_2);
  return;
}




void FUN_00103348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103411(param_1,param_2,param_3);
  return;
}




void FUN_0010321e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf2(param_3);
  uVar2 = FUN_00103327(local_28);
  uVar3 = FUN_00103327(local_20);
  uVar1 = FUN_00103348(uVar3,uVar2,uVar1);
  FUN_00102f6c(&local_30,uVar1);
  return;
}




void FUN_00101a60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d72(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103489(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034be(param_1,param_2,param_3);
  return;
}




void FUN_0010183f(void)

{
  FUN_00101694();
  return;
}




void FUN_00103ad7(void)

{
  return;
}




undefined8 FUN_0010184f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035cc("Calling good()...");
  FUN_0010183f();
  FUN_001035cc("Finished good()");
  FUN_001035cc("Calling bad()...");
  FUN_001014e9();
  FUN_001035cc("Finished bad()");
  return 0;
}




undefined8 FUN_001018b4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b45(void)

{
  return;
}




void FUN_00102ed0(void)

{
  return;
}




void FUN_00102af2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e5b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103a9f(void)

{
  return 1;
}




undefined8 FUN_0010246a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102dfb(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ee4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010246a(param_1);
  FUN_00102fb3(uVar1);
  return;
}




void FUN_001029b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dfb(param_2);
  uVar2 = FUN_00102dfb(param_1);
  FUN_00102c3d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b9d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 * FUN_001032dc(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102b4f(void)

{
  return;
}




void FUN_00103b71(void)

{
  return;
}




void FUN_00103b19(void)

{
  return;
}




long FUN_001035a8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001037fb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103829(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103e10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00103abd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010328c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010337d(param_2);
  uVar2 = FUN_0010337d(param_1);
  FUN_001033a3(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103327(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102656(&local_10);
  return *puVar1;
}




ulong FUN_0010288c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d78(param_1);
  lVar2 = FUN_001023f2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023f2(local_40);
  local_30 = FUN_001023f2(local_40);
  plVar3 = (long *)FUN_00102d9e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023f2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d78(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d78(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101956(undefined8 param_1)

{
  FUN_00101cc6(param_1);
  return;
}




void FUN_00103678(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101d72(undefined8 param_1)

{
  return param_1;
}




void FUN_00102dcd(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301c(param_1,param_2,0);
  return;
}




void FUN_00102592(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102af2(param_1,param_2,param_3);
  return;
}




void FUN_001036f8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103d1f(undefined8 *param_1)

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




void FUN_001030b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328c(param_1,param_2,param_3);
  return;
}




long FUN_001030e3(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102ee4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_001031a7(undefined8 param_1)

{
  FUN_001031f4(param_1);
  return;
}




void FUN_00103b03(void)

{
  return;
}




void FUN_0010247c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a62(param_1,param_3);
                    /* try { // try from 001024b6 to 001024ba has its CatchHandler @ 001024bd */
  FUN_00102a98(param_1,param_2);
  return;
}




void FUN_00103b24(void)

{
  return;
}




void FUN_00102c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf2(param_3);
  uVar2 = FUN_00102cf2(local_28);
  uVar3 = FUN_00102cf2(local_20);
  uVar1 = FUN_00102f37(uVar3,uVar2,uVar1);
  FUN_00102f6c(&local_30,uVar1);
  return;
}




void FUN_001035cc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010190a(undefined8 param_1)

{
  FUN_001018ea(param_1);
  return;
}




ulong * FUN_00102d9e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001018ea(undefined8 param_1)

{
  FUN_0010192a(param_1);
  return;
}




undefined8 FUN_00103aae(void)

{
  return 0;
}




void FUN_0010301c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031f4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001033a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf2(param_3);
  uVar2 = FUN_00102cf2(local_28);
  uVar3 = FUN_00102cf2(local_20);
  uVar1 = FUN_00103489(uVar3,uVar2,uVar1);
  FUN_00102f6c(&local_30,uVar1);
  return;
}




void FUN_00102f02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101d84(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102634(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102609(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b4f(param_1,param_2);
  return;
}




void * FUN_001034be(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103ae2(void)

{
  return;
}




void FUN_0010374e(undefined4 param_1)

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




void FUN_0010364c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d50(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_001023f2(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101c94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103b87(void)

{
  return;
}




void FUN_001025d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b28(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031f4(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102a98(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010297c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101d22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102609(param_1,param_2);
  return;
}




void FUN_00102f82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103159(param_1,param_2,param_3);
  return;
}




void FUN_001037d0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010238c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d50(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010192a(undefined8 param_1)

{
  FUN_00101c74(param_1);
  FUN_00101c94(param_1);
  return;
}




undefined8 FUN_00102656(undefined8 param_1)

{
  return param_1;
}




bool FUN_00103ca1(pthread_t *param_1)

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




void FUN_00103b2f(void)

{
  return;
}




void FUN_001035f2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001019c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d10(param_1);
  FUN_00101d22(*param_1,param_1[1],uVar1);
  FUN_00101976(param_1);
  return;
}




void FUN_00102e48(void)

{
  return;
}




ulong * FUN_001031c5(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010385c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101694(void)

{
  long in_FS_OFFSET;
  undefined4 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010190a(local_58);
  local_68 = (undefined4 *)0x0;
  local_68 = (undefined4 *)malloc(8);
  if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 1;
  local_68[1] = 2;
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
                    /* try { // try from 00101734 to 001017c9 has its CatchHandler @ 00101815 */
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  FUN_00101b54(local_38,local_58);
                    /* try { // try from 001017d1 to 001017d5 has its CatchHandler @ 00101800 */
  FUN_00103564(local_38);
  FUN_001019c8(local_38);
  FUN_001019c8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010253a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102634(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b78(undefined8 param_1)

{
  return param_1;
}




void FUN_00101976(long *param_1)

{
  FUN_00101cd6(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018ca(param_1);
  return;
}




long FUN_00102b62(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101d10(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e80(void)

{
  return;
}




long FUN_00101ddb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102656(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102656(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103474(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102d42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f82(param_1,param_2,param_3);
  return;
}




void FUN_00103b66(void)

{
  return;
}




undefined8 FUN_00103bd4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b9d,local_18);
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




undefined8 FUN_00102bf1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ee4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103062(param_1,param_2,param_3);
  return;
}




void FUN_00103aed(void)

{
  return;
}




void FUN_00103624(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103dd6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102c3d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f02(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103b3a(void)

{
  return;
}




void FUN_00101cd6(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025d7(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b78(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018b4(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_0010320c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103cfc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_00102d04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103564(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001035a8(param_1,2);
  __ptr = (void *)*puVar1;
  FUN_00103829(__ptr);
  free(__ptr);
  return;
}




void FUN_001036a2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102c72(undefined8 param_1)

{
  return param_1;
}




void FUN_001037a8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102419(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a0b(param_1,param_2);
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
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_001025c8(void)

{
  return;
}




undefined8 FUN_00101a10(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d50(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f37(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e3(param_1,param_2,param_3);
  return;
}




void FUN_00103b92(void)

{
  return;
}




void FUN_00101e20(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010288c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102340(local_80);
      local_60 = FUN_0010271a(&local_88,&local_78);
      local_70 = FUN_0010297c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d10(local_80);
                    /* try { // try from 0010212a to 001021b5 has its CatchHandler @ 0010226d */
      FUN_00102857(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d10(local_80);
      puVar2 = (undefined8 *)FUN_00101d72(&local_88);
      local_70 = FUN_001029b3(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d10(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d72(&local_88);
      local_70 = FUN_001029b3(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d10(local_80);
      FUN_00101d22(*local_80,local_80[1],uVar1);
      FUN_00101cd6(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102668(local_38,param_1,param_4);
                    /* try { // try from 00101eaa to 0010207d has its CatchHandler @ 0010224f */
      local_50 = FUN_001026fc(local_38);
      local_78 = FUN_00101a10(local_80);
      local_48 = FUN_0010271a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d10(local_80);
        FUN_0010275e(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d72(&local_88);
        FUN_001027b6(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d72(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d72(&local_88);
        FUN_00102806(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d10(local_80);
        lVar4 = FUN_00102857(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d10(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d72(&local_88);
        FUN_0010275e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d72(&local_88);
        FUN_00102806(*puVar2,local_40,local_50);
      }
      FUN_001026c8(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d84(param_1);
  local_18 = FUN_00101ddb(&local_38,&local_20);
  local_20 = FUN_00102340(local_30);
  uVar1 = FUN_0010238c(&local_20,local_18);
  FUN_00101e20(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102340(local_30);
  FUN_0010238c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024e2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102634(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bc7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ed0(param_1,param_2);
  return;
}




void FUN_00103b7c(void)

{
  return;
}




void FUN_00103db7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a62(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a38(param_1,param_2);
  FUN_00101c94(param_1);
  return;
}




void FUN_00102b28(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102b8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b78(param_3);
  FUN_00102e8c(param_1,param_2,uVar1);
  return;
}




void FUN_001018ca(undefined8 param_1)

{
  FUN_00101956(param_1);
  return;
}




void FUN_001014e9(void)

{
  long in_FS_OFFSET;
  undefined4 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010190a(local_58);
  local_68 = (undefined4 *)0x0;
  local_68 = (undefined4 *)malloc(8);
  if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 1;
  local_68[1] = 2;
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
                    /* try { // try from 00101589 to 0010161e has its CatchHandler @ 0010166a */
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a10(local_58);
  FUN_00101a60(local_38,&local_60);
  FUN_00101a8e(local_58,local_38[0],1,&local_68);
  FUN_00101b54(local_38,local_58);
                    /* try { // try from 00101626 to 0010162a has its CatchHandler @ 00101655 */
  FUN_00103521(local_38);
  FUN_001019c8(local_38);
  FUN_001019c8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102340(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d50(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b5b(void)

{
  return;
}




void FUN_00103723(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




long FUN_0010271a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d72(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d72(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001026c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b62(param_1);
  FUN_00102bc7(*param_1,uVar1);
  return;
}




undefined8 FUN_0010297c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102dcd(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103521(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001035a8(param_1,2);
  __ptr = (void *)*puVar1;
  FUN_00103829(__ptr);
  free(__ptr);
  return;
}




void FUN_00102857(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d42(param_1,param_2,param_3);
  return;
}




void FUN_00102668(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b78(param_3);
  uVar2 = FUN_00102b62(param_1);
  FUN_00102b8a(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103af8(void)

{
  return;
}




void FUN_00102806(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cf2(param_2);
  uVar2 = FUN_00102cf2(param_1);
  FUN_00102d04(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102f6c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102cf2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010275e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bf1(param_2);
  uVar2 = FUN_00102bf1(param_1);
  FUN_00102c3d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b50(void)

{
  return;
}




undefined8 FUN_00102a0b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a38(param_1,param_2);
  return param_1;
}




void FUN_00103062(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010320c(param_2);
  uVar2 = FUN_0010320c(param_1);
  FUN_0010321e(uVar2,uVar1,param_3);
  return;
}



