
void FUN_00101ac7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f8b(void)

{
  return;
}




undefined8 FUN_00101ec4(void)

{
  return 1;
}




void FUN_00101f28(void)

{
  return;
}




void FUN_00101efc(void)

{
  return;
}




void FUN_00101bf5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001022a0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101f6a(void)

{
  return;
}




void FUN_00101c4e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f12(void)

{
  return;
}




undefined8 FUN_00101ed3(void)

{
  return 0;
}




void FUN_0010191e(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if ((param_2 < 0) || (9 < param_2)) {
    FUN_001019f1("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101a49(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101f54(void)

{
  return;
}




undefined8 FUN_00102121(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f5f(void)

{
  return;
}




void FUN_001015ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  FUN_001017f8(puVar1);
  (**(code **)*puVar1)(puVar1,7);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_00101a71(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ff9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fc2,local_18);
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




void FUN_001021fb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101c20(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017f8(undefined8 *param_1)

{
  FUN_001017ac(param_1);
  *param_1 = &PTR_FUN_00105c40;
  return;
}




void FUN_0010144a(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_001019f1("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101a49(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




int FUN_00101ee2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001019f1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101f49(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106028 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101b1d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b73(undefined4 param_1)

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




void FUN_00101826(undefined8 *param_1)

{
  FUN_001017ac(param_1);
  *param_1 = &PTR_FUN_00105c70;
  return;
}




undefined8 FUN_00102144(undefined8 *param_1)

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




undefined8 FUN_00101747(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019f1("Calling good()...");
  FUN_00101732();
  FUN_001019f1("Finished good()");
  FUN_001019f1("Calling bad()...");
  FUN_00101514();
  FUN_001019f1("Finished bad()");
  return 0;
}




void FUN_00101732(void)

{
  FUN_001015ee();
  FUN_00101658();
  return;
}




void FUN_00101f33(void)

{
  return;
}




void FUN_00101bcd(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




void FUN_00101a17(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b48(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f96(void)

{
  return;
}




void FUN_001017ca(undefined8 *param_1)

{
  FUN_001017ac(param_1);
  *param_1 = &PTR_FUN_00105c58;
  return;
}




void FUN_001017ac(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cb0;
  return;
}




void FUN_00101f1d(void)

{
  return;
}




void FUN_00101f75(void)

{
  return;
}




void FUN_001021dc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fa1(void)

{
  return;
}




void FUN_00101c81(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101fac(void)

{
  return;
}




void FUN_00101fb7(void)

{
  return;
}




void FUN_001021bd(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101a9d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_00101af2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101514(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  int local_3c;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001019f1("fgets() failed.");
  }
  else {
    local_3c = atoi(local_2e);
  }
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001017ca(puVar2);
  (**(code **)*puVar2)(puVar2,local_3c);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f3e(void)

{
  return;
}




bool FUN_001020c6(pthread_t *param_1)

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




void FUN_00101854(undefined8 param_1,int param_2)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (param_2 < 0) {
    FUN_001019f1("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101a49(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101f80(void)

{
  return;
}




void FUN_00101fc2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a49(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101de5(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103328,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101658(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  int local_3c;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001019f1("fgets() failed.");
  }
  else {
    local_3c = atoi(local_2e);
  }
  puVar2 = (undefined8 *)operator_new(8);
  FUN_00101826(puVar2);
  (**(code **)*puVar2)(puVar2,local_3c);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f07(void)

{
  return;
}




ulong FUN_00101ce1(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103320,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



