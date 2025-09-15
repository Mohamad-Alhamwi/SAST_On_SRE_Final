
void FUN_00104b7d(undefined8 param_1)

{
  FUN_00104bca(param_1);
  return;
}




void FUN_00104d53(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104e4a(&local_10);
  FUN_00104648(uVar1);
  return;
}




void FUN_001036f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00103fdf(param_1,param_2);
  return;
}




undefined8 FUN_001046c8(undefined8 param_1)

{
  return param_1;
}




void FUN_00105730(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00105627(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001048a6(void)

{
  return;
}




void FUN_00104ff8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104f4f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001032e0(undefined8 param_1)

{
  FUN_001032c0(param_1);
  return;
}




ulong FUN_001051e7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010490d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104ab9(param_1,param_2,param_3);
  return;
}




void FUN_00105023(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001047d1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001048ba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001048d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a88(param_1,param_2,param_3);
  return;
}




void FUN_00104a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104be2(param_2);
  uVar2 = FUN_00104be2(param_1);
  FUN_00104bf4(uVar2,uVar1,param_3);
  return;
}




void FUN_00104f77(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010422d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104718(param_1,param_2,param_3);
  return;
}




void FUN_001050fb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103fdf(undefined8 param_1,undefined8 param_2)

{
  FUN_00104525(param_1,param_2);
  return;
}




ulong * FUN_00104b9b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105486(void)

{
  return;
}




void FUN_0010542e(void)

{
  return;
}




void FUN_00104fcd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00104e4a(undefined8 *param_1)

{
  return *param_1;
}




ulong * FUN_00104774(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001048ba(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102583) */
/* WARNING: Removing unreachable block (ram,0x0010258f) */

void FUN_00102570(void)

{
  return;
}




long FUN_00104538(long param_1)

{
  return param_1 + 8;
}




void FUN_00103210(void)

{
  FUN_00102b6b();
  FUN_00102dc9();
  return;
}




ulong FUN_00104262(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_0010474e(param_1);
  lVar2 = FUN_00103dc8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103dc8(local_40);
  local_30 = FUN_00103dc8(local_40);
  plVar3 = (long *)FUN_00104774(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103dc8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_0010474e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_0010474e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_0010375a(param_1);
  local_18 = FUN_001037b1(&local_38,&local_20);
  local_20 = FUN_00103d16(local_30);
  uVar1 = FUN_00103d62(&local_20,local_18);
  FUN_001037f6(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103d16(local_30);
  FUN_00103d62(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010564a(undefined8 *param_1)

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




void FUN_00104613(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048d8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103748(undefined8 param_1)

{
  return param_1;
}




void FUN_00105491(void)

{
  return;
}




undefined8 FUN_00104bca(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102700(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_0010459d(undefined8 param_1,undefined8 param_2)

{
  FUN_001048a6(param_1,param_2);
  return;
}




void FUN_001054a7(void)

{
  return;
}




void FUN_00104c62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104d53(param_2);
  uVar2 = FUN_00104d53(param_1);
  FUN_00104d79(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010375a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010400a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010334c(long *param_1)

{
  FUN_001036ac(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001032a0(param_1);
  return;
}




void FUN_00104bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001046c8(param_3);
  uVar2 = FUN_00104cfd(local_28);
  uVar3 = FUN_00104cfd(local_20);
  uVar1 = FUN_00104d1e(uVar3,uVar2,uVar1);
  FUN_00104942(&local_30,uVar1);
  return;
}




void FUN_001040d2(undefined8 param_1)

{
  FUN_00104538(param_1);
  return;
}




void FUN_001032c0(undefined8 param_1)

{
  FUN_00103300(param_1);
  return;
}




void FUN_00105079(undefined4 param_1)

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




void FUN_00103fad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044fe(param_1,param_2,param_3);
  return;
}




void FUN_00104b2f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001046c8(param_1);
  uVar1 = FUN_00104cb2(uVar1,param_2,param_3);
  FUN_00104942(&local_10,uVar1);
  return;
}




void FUN_0010481e(void)

{
  return;
}




undefined8 FUN_00104be2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103e40(undefined8 param_1)

{
  return param_1;
}




void FUN_001036ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103fad(param_1,param_2,param_3);
  }
  return;
}




void FUN_00105439(void)

{
  return;
}




undefined8 FUN_001053ca(void)

{
  return 1;
}




void FUN_00105126(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001045c7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001048ba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001054b2(void)

{
  return;
}




void FUN_001054c8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001056e2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00105187(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_00103dc8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00104648(undefined8 param_1)

{
  return param_1;
}




void FUN_00104fa3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void * FUN_00104de7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001049f2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104bca(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00104560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010454e(param_3);
  FUN_00104862(param_1,param_2,uVar1);
  return;
}




void FUN_00105418(void)

{
  return;
}




void FUN_00105423(void)

{
  return;
}




long FUN_001040f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103748(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103748(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010352a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103e40(param_2);
  FUN_00103def(&local_31,uVar1);
  uVar1 = FUN_00103dc8(param_2);
                    /* try { // try from 00103590 to 00103594 has its CatchHandler @ 001035fd */
  FUN_00103e52(param_1,uVar1,&local_31);
  FUN_0010332c(&local_31);
  uVar2 = FUN_001036e6(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103f10(param_2);
  uVar4 = FUN_00103eb8(param_2);
                    /* try { // try from 001035de to 001035e2 has its CatchHandler @ 0010361b */
  uVar1 = FUN_00103f68(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025c4) */
/* WARNING: Removing unreachable block (ram,0x001025d0) */

void FUN_001025a0(void)

{
  return;
}




void FUN_0010440e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010481e(param_1,param_2);
  return;
}




void FUN_0010547b(void)

{
  return;
}




long FUN_001037b1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010402c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010402c(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_00104ab9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010540d(void)

{
  return;
}




void FUN_00103436(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103748(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00105470(void)

{
  return;
}




void FUN_001047a3(undefined8 param_1,undefined8 param_2)

{
  FUN_001049f2(param_1,param_2,0);
  return;
}




void FUN_001056c3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001050d3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102b6b(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032e0(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_001033e6(local_c8);
  FUN_00103436(local_a8,&local_d0);
                    /* try { // try from 00102c7c to 00102d41 has its CatchHandler @ 00102d99 */
  FUN_00103464(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001033e6(local_c8);
  FUN_00103436(local_a8,&local_d0);
  FUN_00103464(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001033e6(local_c8);
  FUN_00103436(local_a8,&local_d0);
  FUN_00103464(local_c8,local_a8[0],1,&local_d8);
  FUN_0010352a(local_a8,local_c8);
                    /* try { // try from 00102d4c to 00102d50 has its CatchHandler @ 00102d81 */
  FUN_0010266f(local_a8);
  FUN_0010339e(local_a8);
  FUN_0010339e(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104b2f(param_1,param_2,param_3);
  return;
}




void FUN_0010549c(void)

{
  return;
}




void FUN_00105154(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010364a(undefined8 param_1)

{
  FUN_00103f9e(param_1);
  return;
}




undefined8 FUN_001043e1(undefined8 param_1,undefined8 param_2)

{
  FUN_0010440e(param_1,param_2);
  return param_1;
}




undefined8 FUN_00104989(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104b7d(param_1);
  puVar1 = (undefined8 *)FUN_00104b9b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00104f1d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103d62(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00103726(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010328a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044c8(param_1,param_2,param_3);
  return;
}




void FUN_001037f6(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00104262(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103d16(local_80);
      local_60 = FUN_001040f0(&local_88,&local_78);
      local_70 = FUN_00104352(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001036e6(local_80);
                    /* try { // try from 00103b00 to 00103b8b has its CatchHandler @ 00103c43 */
      FUN_0010422d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001036e6(local_80);
      puVar2 = (undefined8 *)FUN_00103748(&local_88);
      local_70 = FUN_00104389(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001036e6(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00103748(&local_88);
      local_70 = FUN_00104389(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001036e6(local_80);
      FUN_001036f8(*local_80,local_80[1],uVar1);
      FUN_001036ac(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010403e(local_38,param_1,param_4);
                    /* try { // try from 00103880 to 00103a53 has its CatchHandler @ 00103c25 */
      local_50 = FUN_001040d2(local_38);
      local_78 = FUN_001033e6(local_80);
      local_48 = FUN_001040f0(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001036e6(local_80);
        FUN_00104134(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00103748(&local_88);
        FUN_0010418c(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00103748(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00103748(&local_88);
        FUN_001041dc(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001036e6(local_80);
        lVar4 = FUN_0010422d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001036e6(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00103748(&local_88);
        FUN_00104134(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00103748(&local_88);
        FUN_001041dc(*puVar2,local_40,local_50);
      }
      FUN_0010409e(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001054ff(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001054c8,local_18);
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




void FUN_00104134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045c7(param_2);
  uVar2 = FUN_001045c7(param_1);
  FUN_00104613(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010409e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104538(param_1);
  FUN_0010459d(*param_1,uVar1);
  return;
}




void FUN_0010366a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00104831(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a38(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001036e6(undefined8 param_1)

{
  return param_1;
}




void FUN_00104a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c62(param_1,param_2,param_3);
  return;
}




void FUN_00104e5f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104e94(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103d16(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103726(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104958(param_1,param_2,param_3);
  return;
}




void FUN_00105701(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001044fe(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010339e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036e6(param_1);
  FUN_001036f8(*param_1,param_1[1],uVar1);
  FUN_0010334c(param_1);
  return;
}




undefined8 FUN_0010454e(undefined8 param_1)

{
  return param_1;
}




void FUN_001026b5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102700(param_1,2);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




int FUN_001053e8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103e52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104438(param_1,param_3);
                    /* try { // try from 00103e8c to 00103e90 has its CatchHandler @ 00103e93 */
  FUN_0010446e(param_1,param_2);
  return;
}




undefined8 FUN_00104352(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001047a3(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_00103225(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104ef7("Calling good()...");
  FUN_00103210();
  FUN_00104ef7("Finished good()");
  FUN_00104ef7("Calling bad()...");
  FUN_00102724();
  FUN_00104ef7("Finished bad()");
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102570();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_0010403e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_0010454e(param_3);
  uVar2 = FUN_00104538(param_1);
  FUN_00104560(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010465a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001046c8(param_3);
  uVar2 = FUN_001046c8(local_28);
  uVar3 = FUN_001046c8(local_20);
  uVar1 = FUN_0010490d(uVar3,uVar2,uVar1);
  FUN_00104942(&local_30,uVar1);
  return;
}




void FUN_0010446e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104352(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001054bd(void)

{
  return;
}




void FUN_0010332c(undefined8 param_1)

{
  FUN_0010369c(param_1);
  return;
}




void FUN_001046da(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010544f(void)

{
  return;
}




bool FUN_001055cc(pthread_t *param_1)

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




undefined8 FUN_001033e6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103726(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




void FUN_001032a0(undefined8 param_1)

{
  FUN_0010332c(param_1);
  return;
}




undefined8 FUN_00104942(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00105402(void)

{
  return;
}




void FUN_0010418c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104648(param_2);
  uVar2 = FUN_00104648(param_1);
  FUN_0010465a(uVar2,uVar1,param_3);
  return;
}




void FUN_00105465(void)

{
  return;
}




undefined8 * FUN_00104cb2(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00104438(undefined8 param_1,undefined8 param_2)

{
  FUN_0010440e(param_1,param_2);
  FUN_0010366a(param_1);
  return;
}




void FUN_00104ef7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104525(void)

{
  return;
}




void FUN_0010474e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103e40(param_1);
  FUN_00104989(uVar1);
  return;
}




void FUN_00102dc9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032e0(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102f53 to 00103188 has its CatchHandler @ 001031e0 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  FUN_0010352a(local_b8,local_d8);
                    /* try { // try from 00103193 to 00103197 has its CatchHandler @ 001031c8 */
  FUN_001026b5(local_b8);
  FUN_0010339e(local_b8);
  FUN_0010339e(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001053d9(void)

{
  return 0;
}




void FUN_00104d79(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001046c8(param_3);
  uVar2 = FUN_001046c8(local_28);
  uVar3 = FUN_001046c8(local_20);
  uVar1 = FUN_00104e5f(uVar3,uVar2,uVar1);
  FUN_00104942(&local_30,uVar1);
  return;
}




void FUN_001041dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001046c8(param_2);
  uVar2 = FUN_001046c8(param_1);
  FUN_001046da(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f9e(void)

{
  return;
}




undefined8 FUN_00103def(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001043e1(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00105444(void)

{
  return;
}




void FUN_00104862(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010454e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010328a(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102724(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001032e0(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 001028ae to 00102ae3 has its CatchHandler @ 00102b3b */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001033e6(local_d8);
  FUN_00103436(local_b8,&local_f0);
  FUN_00103464(local_d8,local_b8[0],1,&local_f8);
  FUN_0010352a(local_b8,local_d8);
                    /* try { // try from 00102aee to 00102af2 has its CatchHandler @ 00102b23 */
  FUN_00102629(local_b8);
  FUN_0010339e(local_b8);
  FUN_0010339e(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103f10(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010400a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103300(undefined8 param_1)

{
  FUN_0010364a(param_1);
  FUN_0010366a(param_1);
  return;
}




void FUN_001057a0(void)

{
  return;
}




ulong FUN_001052eb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010266f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102700(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void * FUN_00104e94(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010504e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103726(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104389(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001047d1(param_2);
  uVar2 = FUN_001047d1(param_1);
  FUN_00104613(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103eb8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010400a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010402c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010545a(void)

{
  return;
}




void FUN_00104d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104de7(param_1,param_2,param_3);
  return;
}




void FUN_001044c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104831(param_1,param_2,param_3);
  return;
}




void FUN_0010400a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102629(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102700(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_0010369c(void)

{
  return;
}




undefined8 FUN_00104cfd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010402c(&local_10);
  return *puVar1;
}



