
void FUN_00101a95(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101dc8(void)

{
  return;
}




void FUN_00101dde(void)

{
  return;
}




void FUN_00101de9(void)

{
  return;
}




undefined8 FUN_001015ce(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101891("Calling good()...");
  FUN_001015b9();
  FUN_00101891("Finished good()");
  FUN_00101891("Calling bad()...");
  FUN_00101429();
  FUN_00101891("Finished bad()");
  return 0;
}




void FUN_001016fa(long param_1)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 8);
  pvVar2 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00101891("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001018e9(*(undefined4 *)((long)pvVar2 + (long)local_18 * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return;
}




void FUN_00101e4c(void)

{
  return;
}




void FUN_00102140(void)

{
  return;
}




void FUN_00101e36(void)

{
  return;
}




undefined8 FUN_00101d73(void)

{
  return 0;
}




void FUN_001014c8(void)

{
  long in_FS_OFFSET;
  undefined local_28 [8];
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 7;
  FUN_001016fa(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018e9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ac0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d9c(void)

{
  return;
}




void FUN_00101e41(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




ulong FUN_00101b81(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dff(void)

{
  return;
}




void FUN_00101992(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001020d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101da7(void)

{
  return;
}




void FUN_00101911(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018b7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101e99(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e62,local_18);
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




void FUN_001017c1(long param_1)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 8);
  pvVar2 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00101891("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001018e9(*(undefined4 *)((long)pvVar2 + (long)local_18 * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return;
}




void FUN_00101df4(void)

{
  return;
}




void FUN_00101e62(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010151a(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_3c;
  undefined local_38 [8];
  int local_30;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
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
    FUN_00101891("fgets() failed.");
  }
  else {
    local_3c = atoi(local_1e);
  }
  local_30 = local_3c;
  FUN_001017c1(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101967(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101db2(void)

{
  return;
}




void FUN_00101dd3(void)

{
  return;
}




void FUN_00101633(long param_1)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 8);
  pvVar2 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00101891("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar2 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001018e9(*(undefined4 *)((long)pvVar2 + (long)local_18 * 4));
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  return;
}




void FUN_00101a13(undefined4 param_1)

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




void FUN_00101b21(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_001015b9(void)

{
  FUN_001014c8();
  FUN_0010151a();
  return;
}




void FUN_0010209b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101dbd(void)

{
  return;
}




void FUN_00101e2b(void)

{
  return;
}




void FUN_0010207c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101e0a(void)

{
  return;
}




void FUN_001019bd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a6d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101d64(void)

{
  return 1;
}




void FUN_00101e15(void)

{
  return;
}




void FUN_00101e20(void)

{
  return;
}




void FUN_00101e57(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




ulong FUN_00101c85(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00101f66(pthread_t *param_1)

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




undefined8 FUN_00101fc1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101aee(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101429(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_3c;
  undefined local_38 [8];
  int local_30;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
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
    FUN_00101891("fgets() failed.");
  }
  else {
    local_3c = atoi(local_1e);
  }
  local_30 = local_3c;
  FUN_00101633(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010193d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001019e8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101fe4(undefined8 *param_1)

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




void FUN_00101891(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010205d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




int FUN_00101d82(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



