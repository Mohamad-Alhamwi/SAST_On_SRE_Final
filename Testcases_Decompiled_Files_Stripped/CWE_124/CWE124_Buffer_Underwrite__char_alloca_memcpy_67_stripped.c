
void FUN_00101d5c(void)

{
  return;
}




void FUN_0010184b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101db4(void)

{
  return;
}




int FUN_00101d16(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001015b5(void)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_28;
  void *local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (plVar2 = &local_28; plVar2 != &local_28; plVar2 = (long *)((long)plVar2 + -0x1000)) {
    *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
  }
  *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
  local_20 = (void *)((ulong)((long)plVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)plVar2 + -0x78) = 0x10166b;
  memset((void *)((ulong)((long)plVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_20 + 99) = 0;
  lVar1 = (long)local_20 + -8;
  local_28 = lVar1;
  local_18 = lVar1;
  *(undefined8 *)((long)plVar2 + -0x78) = 0x101696;
  FUN_001013c9(lVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar2 + -0x78) = 0x1016ab;
  __stack_chk_fail();
}




void FUN_00101d51(void)

{
  return;
}




void FUN_00101dca(void)

{
  return;
}




void FUN_00101dbf(void)

{
  return;
}




void FUN_00101a82(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101cf8(void)

{
  return 1;
}




void FUN_00101d67(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101df6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102010(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102060(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101f55(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019a7(undefined4 param_1)

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




bool FUN_00101efa(pthread_t *param_1)

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




void FUN_00101a01(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101dd5(void)

{
  return;
}




void FUN_0010197c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101da9(void)

{
  return;
}




undefined8 FUN_00101f78(undefined8 *param_1)

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




void FUN_00101ab5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d93(void)

{
  return;
}




void FUN_001014bf(undefined8 *param_1)

{
  long in_FS_OFFSET;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *param_1 = local_88;
  param_1[1] = local_80;
  param_1[2] = local_78;
  param_1[3] = local_70;
  param_1[4] = local_68;
  param_1[5] = local_60;
  param_1[6] = local_58;
  param_1[7] = local_50;
  param_1[8] = local_48;
  param_1[9] = local_40;
  param_1[10] = local_38;
  param_1[0xb] = local_30;
  *(uint *)(param_1 + 0xc) = local_28;
  *(undefined *)((long)param_1 + 99) = 0;
  FUN_00101825(param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d88(void)

{
  return;
}




void FUN_001018fb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010202f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101b15(long param_1,ulong param_2,long param_3)

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




void FUN_001017a1(void)

{
  FUN_001016ad();
  return;
}




void FUN_00101de0(void)

{
  return;
}




undefined8 FUN_001017b6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101825("Calling good()...");
  FUN_001017a1();
  FUN_00101825("Finished good()");
  FUN_00101825("Calling bad()...");
  FUN_001015b5();
  FUN_00101825("Finished bad()");
  return 0;
}




void FUN_00101825(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010187d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001018d1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101c19(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101d07(void)

{
  return 0;
}




void FUN_001018a5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d7d(void)

{
  return;
}




undefined8 FUN_00101e2d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101df6,local_18);
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




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101951(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101926(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a29(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001013c9(undefined8 *param_1)

{
  long in_FS_OFFSET;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *param_1 = local_88;
  param_1[1] = local_80;
  param_1[2] = local_78;
  param_1[3] = local_70;
  param_1[4] = local_68;
  param_1[5] = local_60;
  param_1[6] = local_58;
  param_1[7] = local_50;
  param_1[8] = local_48;
  param_1[9] = local_40;
  param_1[10] = local_38;
  param_1[0xb] = local_30;
  *(uint *)(param_1 + 0xc) = local_28;
  *(undefined *)((long)param_1 + 99) = 0;
  FUN_00101825(param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016ad(void)

{
  void *pvVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_28;
  void *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_28; ppvVar2 != &local_28; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_20 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101763;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  pvVar1 = local_20;
  *(undefined *)((long)local_20 + 99) = 0;
  local_18 = local_20;
  local_28 = local_20;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10178a;
  FUN_001014bf(pvVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10179f;
  __stack_chk_fail();
}




void FUN_00101d3b(void)

{
  return;
}




void FUN_001020d0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101deb(void)

{
  return;
}




void FUN_00101d72(void)

{
  return;
}




void FUN_00101d9e(void)

{
  return;
}




void FUN_00101d30(void)

{
  return;
}




void FUN_00101d46(void)

{
  return;
}




void FUN_00101ff1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



