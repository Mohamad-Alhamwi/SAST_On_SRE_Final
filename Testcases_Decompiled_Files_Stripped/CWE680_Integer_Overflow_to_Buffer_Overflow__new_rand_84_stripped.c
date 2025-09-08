
void FUN_00101768(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019c5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101a58(long param_1,ulong param_2,long param_3)

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




ulong FUN_00101b5c(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




void FUN_00101caa(void)

{
  return;
}




void FUN_00101d23(void)

{
  return;
}




void FUN_00101c94(void)

{
  return;
}




void FUN_00101894(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101390();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_0010178e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001018ea(undefined4 param_1)

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




void FUN_00101c9f(void)

{
  return;
}




bool FUN_00101e3d(pthread_t *param_1)

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




void FUN_00101814(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101c4a(void)

{
  return 0;
}




undefined8 FUN_00101ebb(undefined8 *param_1)

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




void FUN_00101570(int *param_1)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)*param_1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)*param_1; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001017c0(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_00101d18(void)

{
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_00101944(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ccb(void)

{
  return;
}




void FUN_0010144a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 0x14;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




undefined8 FUN_00101c3b(void)

{
  return 1;
}




void FUN_00101cc0(void)

{
  return;
}




void FUN_001014fa(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *param_1 = uVar1;
  return;
}




void FUN_0010196c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001019f8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001016f3(void)

{
  FUN_00101676();
  return;
}




void FUN_001017e8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f72(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d0d(void)

{
  return;
}




void FUN_00101997(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c89(void)

{
  return;
}




void FUN_00101d02(void)

{
  return;
}




void FUN_00101d2e(void)

{
  return;
}




int FUN_00101c59(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d39(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001015f9(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101624 to 00101628 has its CatchHandler @ 0010164d */
  FUN_001014fa(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101570(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




undefined8 FUN_00101703(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101768("Calling good()...");
  FUN_001016f3();
  FUN_00101768("Finished good()");
  FUN_00101768("Calling bad()...");
  FUN_001015f9();
  FUN_00101768("Finished bad()");
  return 0;
}




void FUN_00101869(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c73(void)

{
  return;
}




void FUN_00101c7e(void)

{
  return;
}




void FUN_00101cb5(void)

{
  return;
}




void FUN_0010183e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cd6(void)

{
  return;
}




void FUN_00101ce1(void)

{
  return;
}




undefined8 FUN_00101d70(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d39,local_18);
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




void FUN_001017c0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f53(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101470(int *param_1)

{
  undefined4 *puVar1;
  ulong local_20;
  
  puVar1 = (undefined4 *)operator_new__((long)*param_1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)*param_1; local_20 = local_20 + 1) {
    puVar1[local_20] = 0;
  }
  FUN_001017c0(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  return;
}




void FUN_00101676(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001016a1 to 001016a5 has its CatchHandler @ 001016ca */
  FUN_0010144a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101470(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101cec(void)

{
  return;
}




undefined8 FUN_00101e98(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f34(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101cf7(void)

{
  return;
}




void FUN_001018bf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



