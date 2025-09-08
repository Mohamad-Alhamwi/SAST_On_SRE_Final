
void FUN_001019d2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101b69(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d04(void)

{
  return;
}




void FUN_00101f60(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ca1(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001015b5) */

void FUN_00101504(void)

{
  void *pvVar1;
  undefined4 local_20;
  
  pvVar1 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_20 * 4) = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    FUN_001017cd(*(undefined4 *)((long)pvVar1 + (long)local_20 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101cd8(void)

{
  return;
}




undefined8 FUN_00101ea5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001017f5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_0010184b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ccd(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




undefined8 FUN_00101c48(void)

{
  return 1;
}




void FUN_00101775(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_00101c66(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d0f(void)

{
  return;
}




void FUN_00101d3b(void)

{
  return;
}




void FUN_00101ce3(void)

{
  return;
}




void FUN_00101cb7(void)

{
  return;
}




void FUN_00101cf9(void)

{
  return;
}




void FUN_00101876(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015d7(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_30;
  
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
  pvVar4 = operator_new__(0x28);
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_30 * 4) = 0;
  }
  if (((int)uVar1 < 0) || (9 < (int)uVar1)) {
    FUN_00101775("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar4 + (long)(int)uVar1 * 4) = 1;
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      FUN_001017cd(*(undefined4 *)((long)pvVar4 + (long)local_30 * 4));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101d7d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d46,local_18);
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




undefined8 FUN_00101c57(void)

{
  return 0;
}




void FUN_001018cc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102020(void)

{
  return;
}




void FUN_00101979(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_001018f7(undefined4 param_1)

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




void FUN_00101a05(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101ec8(undefined8 *param_1)

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




void FUN_001016fb(void)

{
  FUN_00101504();
  FUN_001015d7();
  return;
}




void FUN_0010179b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f7f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_00101d46(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d30(void)

{
  return;
}




void FUN_001013e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_30;
  
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
  pvVar4 = operator_new__(0x28);
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_30 * 4) = 0;
  }
  if ((int)uVar1 < 0) {
    FUN_00101775("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar4 + (long)(int)uVar1 * 4) = 1;
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      FUN_001017cd(*(undefined4 *)((long)pvVar4 + (long)local_30 * 4));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return;
}




void FUN_00101f41(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00101a65(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018a1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017cd(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019a4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101cee(void)

{
  return;
}




void FUN_00101d25(void)

{
  return;
}




void FUN_00101d1a(void)

{
  return;
}




bool FUN_00101e4a(pthread_t *param_1)

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




void FUN_00101cc2(void)

{
  return;
}




void FUN_00101c96(void)

{
  return;
}




undefined8 FUN_00101710(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101775("Calling good()...");
  FUN_001016fb();
  FUN_00101775("Finished good()");
  FUN_00101775("Calling bad()...");
  FUN_001013e9();
  FUN_00101775("Finished bad()");
  return 0;
}




void FUN_00101821(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101951(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}



