
void FUN_00101449(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101474 to 00101478 has its CatchHandler @ 0010149d */
  FUN_00101724(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_0010179a(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_001019fe(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a52(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a7c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c36(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001021e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ee8(void)

{
  return;
}




void FUN_00101bd5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101724(uint *param_1,uint param_2)

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




void FUN_00101f77(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001014c6(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001014f1 to 001014f5 has its CatchHandler @ 0010151a */
  FUN_0010163a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101660(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101f56(void)

{
  return;
}




void FUN_001021b0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010185e(uint *param_1,uint param_2)

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




void FUN_00101c03(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f14(void)

{
  return;
}




undefined8 FUN_001015d5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019a6("Calling good()...");
  FUN_001015c0();
  FUN_001019a6("Finished good()");
  FUN_001019a6("Calling bad()...");
  FUN_00101449();
  FUN_001019a6("Finished bad()");
  return 0;
}




void FUN_00101ad2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f2a(void)

{
  return;
}




void FUN_00102172(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_0010207b(pthread_t *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




void FUN_00101edd(void)

{
  return;
}




void FUN_00101f61(void)

{
  return;
}




void FUN_001018d4(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_001019a6("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019fe(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




undefined8 FUN_00101e79(void)

{
  return 1;
}




undefined8 FUN_001020f9(undefined8 *param_1)

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




void FUN_00101aa7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101d9a(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102250(void)

{
  return;
}




void FUN_001019a6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a26(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_001015c0(void)

{
  FUN_001014c6();
  FUN_00101543();
  return;
}




void FUN_00101f6c(void)

{
  return;
}




void FUN_00101f4b(void)

{
  return;
}




void FUN_00101ed2(void)

{
  return;
}




void FUN_001019cc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101baa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ec7(void)

{
  return;
}




void FUN_00101ef3(void)

{
  return;
}




undefined8 FUN_001020d6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101afd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101efe(void)

{
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




void FUN_00101660(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_001019a6("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019fe(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101b28(undefined4 param_1)

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




void FUN_00101b82(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101c96(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010163a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




undefined8 FUN_00101e88(void)

{
  return 0;
}




int FUN_00101e97(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f09(void)

{
  return;
}




void FUN_00102191(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101543(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010156e to 00101572 has its CatchHandler @ 00101597 */
  FUN_0010185e(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_001018d4(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00101f40(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101f1f(void)

{
  return;
}




void FUN_00101eb1(void)

{
  return;
}




void FUN_00101f35(void)

{
  return;
}




undefined8 FUN_00101fae(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f77,local_18);
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




void FUN_00101ebc(void)

{
  return;
}




void FUN_0010179a(int *param_1)

{
  void *pvVar1;
  int local_14;
  
  pvVar1 = operator_new__(0x28);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_001019a6("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar1 + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_001019fe(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}



