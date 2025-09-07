
void FUN_00101a06(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ab3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e07(void)

{
  return;
}




undefined8 FUN_00101eb7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e80,local_18);
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




undefined8 FUN_00101fdf(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101d91(void)

{
  return 0;
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




void FUN_0010207b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ddb(void)

{
  return;
}




void FUN_00101e6a(void)

{
  return;
}




void FUN_00101835(void)

{
  FUN_001015a9();
  FUN_00101730();
  return;
}




ulong FUN_00101b9f(long param_1,ulong param_2,long param_3)

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




void FUN_001018af(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_001020b9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ade(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001015a9(void)

{
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  FUN_00101590(&local_20);
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
  }
  if (local_20 < 0) {
    FUN_001018af("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101907(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b3f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101e12(void)

{
  return;
}




void FUN_00101e3e(void)

{
  return;
}




void FUN_00101de6(void)

{
  return;
}




void FUN_00101dba(void)

{
  return;
}




void FUN_00101dfc(void)

{
  return;
}




void FUN_001018d5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101409(int *param_1)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  pcVar2 = fgets(local_1e,0xe,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_001018af("fgets() failed.");
  }
  else {
    iVar1 = atoi(local_1e);
    *param_1 = iVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101e54(void)

{
  return;
}




void FUN_001020f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010209a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b0c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010192f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102002(undefined8 *param_1)

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




void FUN_001019b0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101ca3(long param_1,ulong param_2,long param_3)

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




void FUN_0010195b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a31(undefined4 param_1)

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




void FUN_00101e75(void)

{
  return;
}




void FUN_00101496(void)

{
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  FUN_00101409(&local_20);
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
  }
  if (local_20 < 0) {
    FUN_001018af("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101907(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016a3(int *param_1)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  pcVar2 = fgets(local_1e,0xe,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_001018af("fgets() failed.");
  }
  else {
    iVar1 = atoi(local_1e);
    *param_1 = iVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00101f84(pthread_t *param_1)

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




int FUN_00101da0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e49(void)

{
  return;
}




void FUN_00101e33(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101e80(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a8b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101907(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101730(void)

{
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = -1;
  FUN_001016a3(&local_20);
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 0;
  }
  if ((local_20 < 0) || (9 < local_20)) {
    FUN_001018af("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101907(*(undefined4 *)((long)local_18 + (long)local_1c * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019db(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101df1(void)

{
  return;
}




void FUN_00101e28(void)

{
  return;
}




void FUN_00101e1d(void)

{
  return;
}




void FUN_00101e5f(void)

{
  return;
}




void FUN_00102160(void)

{
  return;
}




void FUN_00101dc5(void)

{
  return;
}




undefined8 FUN_00101d82(void)

{
  return 1;
}




void FUN_00101590(undefined4 *param_1)

{
  *param_1 = 7;
  return;
}




undefined8 FUN_0010184a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001018af("Calling good()...");
  FUN_00101835();
  FUN_001018af("Finished good()");
  FUN_001018af("Calling bad()...");
  FUN_00101496();
  FUN_001018af("Finished bad()");
  return 0;
}




void FUN_00101985(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}



