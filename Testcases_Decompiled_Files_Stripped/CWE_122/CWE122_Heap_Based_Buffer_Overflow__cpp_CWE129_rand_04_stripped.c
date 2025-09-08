
void FUN_00101a3b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101abc(undefined4 param_1)

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




void FUN_00101e7c(void)

{
  return;
}




void FUN_00101f00(void)

{
  return;
}




undefined8 FUN_00101f42(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f0b,local_18);
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




ulong FUN_00101d2e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010206a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e50(void)

{
  return;
}




void FUN_00101edf(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001017cd) */

void FUN_00101728(void)

{
  void *pvVar1;
  undefined4 local_18;
  
  pvVar1 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    FUN_00101992(*(undefined4 *)((long)pvVar1 + (long)local_18 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101b97(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001018b6(void)

{
  FUN_001014f8();
  FUN_00101610();
  FUN_00101728();
  FUN_001017ef();
  return;
}




void FUN_00101e45(void)

{
  return;
}




void FUN_00102106(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b16(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001013e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_28;
  
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
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_28 * 4) = 0;
  }
  if ((int)uVar1 < 0) {
    FUN_0010193a("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar4 + (long)(int)uVar1 * 4) = 1;
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      FUN_00101992(*(undefined4 *)((long)pvVar4 + (long)local_28 * 4));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return;
}




void FUN_00101b69(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e87(void)

{
  return;
}




void FUN_00101eb3(void)

{
  return;
}




void FUN_00101e5b(void)

{
  return;
}




undefined8 FUN_00101e1c(void)

{
  return 0;
}




void FUN_00101e71(void)

{
  return;
}




undefined8 FUN_001018d5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010193a("Calling good()...");
  FUN_001018b6();
  FUN_0010193a("Finished good()");
  FUN_0010193a("Calling bad()...");
  FUN_001013e9();
  FUN_0010193a("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_001021e0(void)

{
  return;
}




void FUN_00101ec9(void)

{
  return;
}




void FUN_00102125(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010208d(undefined8 *param_1)

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




void FUN_00101b3e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101960(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_0010200f(pthread_t *param_1)

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




void FUN_001019e6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101bca(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101992(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101eea(void)

{
  return;
}




void FUN_00102170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001014f8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_28;
  
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
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_28 * 4) = 0;
  }
  if (((int)uVar1 < 0) || (9 < (int)uVar1)) {
    FUN_0010193a("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar4 + (long)(int)uVar1 * 4) = 1;
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      FUN_00101992(*(undefined4 *)((long)pvVar4 + (long)local_28 * 4));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return;
}




void FUN_00101f0b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101e0d(void)

{
  return 1;
}




void FUN_00101ebe(void)

{
  return;
}




void FUN_00101ea8(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101ef5(void)

{
  return;
}




void FUN_00101a91(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001019ba(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010193a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101610(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_28;
  
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
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    *(undefined4 *)((long)pvVar4 + (long)local_28 * 4) = 0;
  }
  if (((int)uVar1 < 0) || (9 < (int)uVar1)) {
    FUN_0010193a("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar4 + (long)(int)uVar1 * 4) = 1;
    for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
      FUN_00101992(*(undefined4 *)((long)pvVar4 + (long)local_28 * 4));
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  return;
}




void FUN_00101a10(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e66(void)

{
  return;
}




void FUN_00101e9d(void)

{
  return;
}




void FUN_00101e92(void)

{
  return;
}




void FUN_00101ed4(void)

{
  return;
}




void FUN_00102144(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




int FUN_00101e2b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00101c2a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




/* WARNING: Removing unreachable block (ram,0x00101894) */

void FUN_001017ef(void)

{
  void *pvVar1;
  undefined4 local_18;
  
  pvVar1 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    FUN_00101992(*(undefined4 *)((long)pvVar1 + (long)local_18 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101a66(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}



