
undefined8 FUN_0010198d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019f2("Calling good()...");
  FUN_0010196e();
  FUN_001019f2("Finished good()");
  FUN_001019f2("Calling bad()...");
  FUN_00101429();
  FUN_001019f2("Finished bad()");
  return 0;
}




void FUN_00101c21(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c82(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101ce2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f29(void)

{
  return;
}




void FUN_00101fa2(void)

{
  return;
}




void FUN_00101f13(void)

{
  return;
}




void FUN_00101af3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_001019f2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001021fc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b49(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f1e(void)

{
  return;
}




undefined8 FUN_00101ffa(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fc3,local_18);
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




void FUN_00101a72(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ec5(void)

{
  return 1;
}




undefined8 FUN_00102122(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101560(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001019f2("fgets() failed.");
  }
  else {
    local_30 = atoi(local_1e);
  }
  pvVar2 = operator_new__(0x28);
  for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
  }
  if ((local_30 < 0) || (9 < local_30)) {
    FUN_001019f2("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      FUN_00101a4a(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f97(void)

{
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




void FUN_00101b74(undefined4 param_1)

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




void FUN_00101f4a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




ulong FUN_00101de6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f3f(void)

{
  return;
}




void FUN_00101429(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001019f2("fgets() failed.");
  }
  else {
    local_30 = atoi(local_1e);
  }
  pvVar2 = operator_new__(0x28);
  for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
  }
  if (local_30 < 0) {
    FUN_001019f2("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      FUN_00101a4a(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bce(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c4f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0010194c) */

void FUN_001018a7(void)

{
  void *pvVar1;
  undefined4 local_18;
  
  pvVar1 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    FUN_00101a4a(*(undefined4 *)((long)pvVar1 + (long)local_18 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101a4a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001022a0(void)

{
  return;
}




void FUN_001021dd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f8c(void)

{
  return;
}




void FUN_00101bf6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101f08(void)

{
  return;
}




void FUN_00101f81(void)

{
  return;
}




void FUN_00101fad(void)

{
  return;
}




undefined8 FUN_00101ed4(void)

{
  return 0;
}




void FUN_00101fb8(void)

{
  return;
}




void FUN_001016a0(void)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001019f2("fgets() failed.");
  }
  else {
    local_30 = atoi(local_1e);
  }
  pvVar2 = operator_new__(0x28);
  for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_2c * 4) = 0;
  }
  if ((local_30 < 0) || (9 < local_30)) {
    FUN_001019f2("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)local_30 * 4) = 1;
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      FUN_00101a4a(*(undefined4 *)((long)pvVar2 + (long)local_2c * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010196e(void)

{
  FUN_00101560();
  FUN_001016a0();
  FUN_001017e0();
  FUN_001018a7();
  return;
}




void FUN_00101ac8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101ee3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101efd(void)

{
  return;
}




void FUN_00101f34(void)

{
  return;
}




void FUN_00101a9e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f55(void)

{
  return;
}




void FUN_00101f60(void)

{
  return;
}




void FUN_00101fc3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a18(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001021be(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105028 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101885) */

void FUN_001017e0(void)

{
  void *pvVar1;
  undefined4 local_18;
  
  pvVar1 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    FUN_00101a4a(*(undefined4 *)((long)pvVar1 + (long)local_18 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101f6b(void)

{
  return;
}




bool FUN_001020c7(pthread_t *param_1)

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




undefined8 FUN_00102145(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101f76(void)

{
  return;
}




void FUN_00101b1e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}



