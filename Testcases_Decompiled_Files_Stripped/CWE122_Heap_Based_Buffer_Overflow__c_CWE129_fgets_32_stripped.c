
void FUN_00101890(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e14(void)

{
  return;
}




void FUN_00101802(void)

{
  FUN_00101572();
  FUN_00101693();
  return;
}




void FUN_001018e8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e35(void)

{
  return;
}




undefined8 FUN_00101fe3(undefined8 *param_1)

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




void FUN_00101b20(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102140(void)

{
  return;
}




void FUN_00101da6(void)

{
  return;
}




void FUN_00101e61(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101dbc(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101991(undefined8 param_1)

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




void FUN_001019bc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010193c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e40(void)

{
  return;
}




undefined8 FUN_00101d72(void)

{
  return 0;
}




void FUN_00101e56(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101409(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_30;
  void *local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = -1;
  local_44 = -1;
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
    FUN_00101890("fgets() failed.");
  }
  else {
    local_44 = atoi(local_1e);
  }
  *local_38 = local_44;
  local_3c = *local_30;
  local_28 = malloc(0x28);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_40 * 4) = 0;
  }
  if (local_3c < 0) {
    FUN_00101890("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001018e8(*(undefined4 *)((long)local_28 + (long)local_40 * 4));
    }
  }
  free(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001018b6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010207b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101dc7(void)

{
  return;
}




ulong FUN_00101b80(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
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
  (*(code *)PTR_00104f18)();
  return;
}




void FUN_00101a12(undefined4 param_1)

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




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105028 = 1;
    return;
  }
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x001015c1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101572(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &local_38;
  local_20 = &local_38;
  local_30 = 7;
  local_38 = 7;
  local_2c = 7;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_34 * 4) = 0;
  }
  if (local_2c < 0) {
    FUN_00101890("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_2c * 4) = 1;
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      FUN_001018e8(*(undefined4 *)((long)local_18 + (long)local_34 * 4));
    }
  }
  free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e4b(void)

{
  return;
}




void FUN_00101ddd(void)

{
  return;
}




void FUN_00101966(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dfe(void)

{
  return;
}




undefined8 FUN_00101e98(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e61,local_18);
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




void FUN_00101910(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101de8(void)

{
  return;
}




void FUN_00101a6c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e1f(void)

{
  return;
}




bool FUN_00101f65(pthread_t *param_1)

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




ulong FUN_00101c84(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00101d81(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010205c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101aed(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e2a(void)

{
  return;
}




undefined8 FUN_00101821(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101890("Calling good()...");
  FUN_00101802();
  FUN_00101890("Finished good()");
  FUN_00101890("Calling bad()...");
  FUN_00101409();
  FUN_00101890("Finished bad()");
  return 0;
}




void FUN_00101d9b(void)

{
  return;
}




void FUN_00101dd2(void)

{
  return;
}




void FUN_00101e09(void)

{
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101abf(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101693(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_30;
  void *local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = -1;
  local_44 = -1;
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
    FUN_00101890("fgets() failed.");
  }
  else {
    local_44 = atoi(local_1e);
  }
  *local_38 = local_44;
  local_3c = *local_30;
  local_28 = malloc(0x28);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    *(undefined4 *)((long)local_28 + (long)local_40 * 4) = 0;
  }
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00101890("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_28 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_001018e8(*(undefined4 *)((long)local_28 + (long)local_40 * 4));
    }
  }
  free(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010209a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101fc0(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101d63(void)

{
  return 1;
}




void FUN_00101db1(void)

{
  return;
}




void FUN_00101df3(void)

{
  return;
}




void FUN_00101a94(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001019e7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}



