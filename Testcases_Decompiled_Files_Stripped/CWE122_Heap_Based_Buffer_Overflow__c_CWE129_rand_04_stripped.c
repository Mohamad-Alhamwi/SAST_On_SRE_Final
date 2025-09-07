
void FUN_00101bd3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_001022a0(void)

{
  return;
}




void FUN_00102201(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101ed9(void)

{
  return 0;
}




void FUN_00101f9c(void)

{
  return;
}




void FUN_00101acd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_001020cc(pthread_t *param_1)

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




undefined8 FUN_00101fff(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fc8,local_18);
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




void FUN_00101b79(undefined4 param_1)

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




void FUN_00101fb2(void)

{
  return;
}




void FUN_00101f02(void)

{
  return;
}




int FUN_00101ee8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101988(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019f7("Calling good()...");
  FUN_00101955();
  FUN_001019f7("Finished good()");
  FUN_001019f7("Calling bad()...");
  FUN_001013c9();
  FUN_001019f7("Finished bad()");
  return 0;
}




void FUN_00101a77(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bfb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f2e(void)

{
  return;
}




void FUN_00101f70(void)

{
  return;
}




undefined8 FUN_0010214a(undefined8 *param_1)

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




void FUN_00101f86(void)

{
  return;
}




void FUN_00101f4f(void)

{
  return;
}




void FUN_0010163e(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  int local_24;
  
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
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
  }
  if (((int)uVar1 < 0) || (9 < (int)uVar1)) {
    FUN_001019f7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)(int)uVar1 * 4) = 1;
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      FUN_00101a4f(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101fbd(void)

{
  return;
}




void FUN_00101f44(void)

{
  return;
}




undefined8 FUN_00102127(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001021c3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101791) */
/* WARNING: Removing unreachable block (ram,0x00101851) */

void FUN_00101775(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101a4f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




void FUN_00101f0d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101569) */

void FUN_001014fa(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  int local_24;
  
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
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
  }
  if (((int)uVar1 < 0) || (9 < (int)uVar1)) {
    FUN_001019f7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)(int)uVar1 * 4) = 1;
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      FUN_00101a4f(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_00101eca(void)

{
  return 1;
}




void FUN_00101f5a(void)

{
  return;
}




void FUN_001019f7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00101ce7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c87(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101f7b(void)

{
  return;
}




void FUN_00101a1d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f18(void)

{
  return;
}




void FUN_00101955(void)

{
  FUN_001014fa();
  FUN_0010163e();
  FUN_00101775();
  FUN_0010186c();
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101a4f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101aa3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c54(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fa7(void)

{
  return;
}




void FUN_00101f39(void)

{
  return;
}




void FUN_001013c9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  int local_24;
  
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
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_24 * 4) = 0;
  }
  if ((int)uVar1 < 0) {
    FUN_001019f7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)(int)uVar1 * 4) = 1;
    for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
      FUN_00101a4f(*(undefined4 *)((long)__ptr + (long)local_24 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102230(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101fc8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001021e2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0010193a) */

void FUN_0010186c(void)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  *(undefined4 *)((long)__ptr + 0x1c) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_00101a4f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
  }
  free(__ptr);
  return;
}




void FUN_00101b23(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f91(void)

{
  return;
}




void FUN_00101f23(void)

{
  return;
}




void FUN_00101c26(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101deb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101af8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b4e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f65(void)

{
  return;
}



